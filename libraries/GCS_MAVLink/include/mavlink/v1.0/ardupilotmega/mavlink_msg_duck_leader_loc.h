// MESSAGE DUCK_LEADER_LOC PACKING

#define MAVLINK_MSG_ID_DUCK_LEADER_LOC 228

typedef struct __mavlink_duck_leader_loc_t
{
 float duck_leader_LR; /*< Location of duck leader from left to right*/
 float duck_leader_dist; /*< approximate distance of duck leader*/
} mavlink_duck_leader_loc_t;

#define MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN 8
#define MAVLINK_MSG_ID_228_LEN 8

#define MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC 59
#define MAVLINK_MSG_ID_228_CRC 59



#define MAVLINK_MESSAGE_INFO_DUCK_LEADER_LOC { \
	"DUCK_LEADER_LOC", \
	2, \
	{  { "duck_leader_LR", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_duck_leader_loc_t, duck_leader_LR) }, \
         { "duck_leader_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_duck_leader_loc_t, duck_leader_dist) }, \
         } \
}


/**
 * @brief Pack a duck_leader_loc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param duck_leader_LR Location of duck leader from left to right
 * @param duck_leader_dist approximate distance of duck leader
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_duck_leader_loc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float duck_leader_LR, float duck_leader_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN];
	_mav_put_float(buf, 0, duck_leader_LR);
	_mav_put_float(buf, 4, duck_leader_dist);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#else
	mavlink_duck_leader_loc_t packet;
	packet.duck_leader_LR = duck_leader_LR;
	packet.duck_leader_dist = duck_leader_dist;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DUCK_LEADER_LOC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN, MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
}

/**
 * @brief Pack a duck_leader_loc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param duck_leader_LR Location of duck leader from left to right
 * @param duck_leader_dist approximate distance of duck leader
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_duck_leader_loc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float duck_leader_LR,float duck_leader_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN];
	_mav_put_float(buf, 0, duck_leader_LR);
	_mav_put_float(buf, 4, duck_leader_dist);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#else
	mavlink_duck_leader_loc_t packet;
	packet.duck_leader_LR = duck_leader_LR;
	packet.duck_leader_dist = duck_leader_dist;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DUCK_LEADER_LOC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN, MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
}

/**
 * @brief Encode a duck_leader_loc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param duck_leader_loc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_duck_leader_loc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_duck_leader_loc_t* duck_leader_loc)
{
	return mavlink_msg_duck_leader_loc_pack(system_id, component_id, msg, duck_leader_loc->duck_leader_LR, duck_leader_loc->duck_leader_dist);
}

/**
 * @brief Encode a duck_leader_loc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param duck_leader_loc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_duck_leader_loc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_duck_leader_loc_t* duck_leader_loc)
{
	return mavlink_msg_duck_leader_loc_pack_chan(system_id, component_id, chan, msg, duck_leader_loc->duck_leader_LR, duck_leader_loc->duck_leader_dist);
}

/**
 * @brief Send a duck_leader_loc message
 * @param chan MAVLink channel to send the message
 *
 * @param duck_leader_LR Location of duck leader from left to right
 * @param duck_leader_dist approximate distance of duck leader
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_duck_leader_loc_send(mavlink_channel_t chan, float duck_leader_LR, float duck_leader_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN];
	_mav_put_float(buf, 0, duck_leader_LR);
	_mav_put_float(buf, 4, duck_leader_dist);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, buf, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN, MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, buf, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
#else
	mavlink_duck_leader_loc_t packet;
	packet.duck_leader_LR = duck_leader_LR;
	packet.duck_leader_dist = duck_leader_dist;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, (const char *)&packet, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN, MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, (const char *)&packet, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_duck_leader_loc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float duck_leader_LR, float duck_leader_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, duck_leader_LR);
	_mav_put_float(buf, 4, duck_leader_dist);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, buf, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN, MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, buf, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
#else
	mavlink_duck_leader_loc_t *packet = (mavlink_duck_leader_loc_t *)msgbuf;
	packet->duck_leader_LR = duck_leader_LR;
	packet->duck_leader_dist = duck_leader_dist;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, (const char *)packet, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN, MAVLINK_MSG_ID_DUCK_LEADER_LOC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_LOC, (const char *)packet, MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE DUCK_LEADER_LOC UNPACKING


/**
 * @brief Get field duck_leader_LR from duck_leader_loc message
 *
 * @return Location of duck leader from left to right
 */
static inline float mavlink_msg_duck_leader_loc_get_duck_leader_LR(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field duck_leader_dist from duck_leader_loc message
 *
 * @return approximate distance of duck leader
 */
static inline float mavlink_msg_duck_leader_loc_get_duck_leader_dist(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a duck_leader_loc message into a struct
 *
 * @param msg The message to decode
 * @param duck_leader_loc C-struct to decode the message contents into
 */
static inline void mavlink_msg_duck_leader_loc_decode(const mavlink_message_t* msg, mavlink_duck_leader_loc_t* duck_leader_loc)
{
#if MAVLINK_NEED_BYTE_SWAP
	duck_leader_loc->duck_leader_LR = mavlink_msg_duck_leader_loc_get_duck_leader_LR(msg);
	duck_leader_loc->duck_leader_dist = mavlink_msg_duck_leader_loc_get_duck_leader_dist(msg);
#else
	memcpy(duck_leader_loc, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_DUCK_LEADER_LOC_LEN);
#endif
}

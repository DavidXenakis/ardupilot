// MESSAGE DUCK_LEADER_FOUND PACKING

#define MAVLINK_MSG_ID_DUCK_LEADER_FOUND 227

typedef struct __mavlink_duck_leader_found_t
{
 uint8_t duck_leader_found; /*< bool value of whether leader is found*/
} mavlink_duck_leader_found_t;

#define MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN 1
#define MAVLINK_MSG_ID_227_LEN 1

#define MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC 103
#define MAVLINK_MSG_ID_227_CRC 103



#define MAVLINK_MESSAGE_INFO_DUCK_LEADER_FOUND { \
	"DUCK_LEADER_FOUND", \
	1, \
	{  { "duck_leader_found", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_duck_leader_found_t, duck_leader_found) }, \
         } \
}


/**
 * @brief Pack a duck_leader_found message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param duck_leader_found bool value of whether leader is found
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_duck_leader_found_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t duck_leader_found)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN];
	_mav_put_uint8_t(buf, 0, duck_leader_found);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#else
	mavlink_duck_leader_found_t packet;
	packet.duck_leader_found = duck_leader_found;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DUCK_LEADER_FOUND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
}

/**
 * @brief Pack a duck_leader_found message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param duck_leader_found bool value of whether leader is found
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_duck_leader_found_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t duck_leader_found)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN];
	_mav_put_uint8_t(buf, 0, duck_leader_found);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#else
	mavlink_duck_leader_found_t packet;
	packet.duck_leader_found = duck_leader_found;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DUCK_LEADER_FOUND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
}

/**
 * @brief Encode a duck_leader_found struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param duck_leader_found C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_duck_leader_found_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_duck_leader_found_t* duck_leader_found)
{
	return mavlink_msg_duck_leader_found_pack(system_id, component_id, msg, duck_leader_found->duck_leader_found);
}

/**
 * @brief Encode a duck_leader_found struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param duck_leader_found C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_duck_leader_found_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_duck_leader_found_t* duck_leader_found)
{
	return mavlink_msg_duck_leader_found_pack_chan(system_id, component_id, chan, msg, duck_leader_found->duck_leader_found);
}

/**
 * @brief Send a duck_leader_found message
 * @param chan MAVLink channel to send the message
 *
 * @param duck_leader_found bool value of whether leader is found
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_duck_leader_found_send(mavlink_channel_t chan, uint8_t duck_leader_found)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN];
	_mav_put_uint8_t(buf, 0, duck_leader_found);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, buf, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, buf, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
#else
	mavlink_duck_leader_found_t packet;
	packet.duck_leader_found = duck_leader_found;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, (const char *)&packet, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, (const char *)&packet, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_duck_leader_found_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t duck_leader_found)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, duck_leader_found);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, buf, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, buf, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
#else
	mavlink_duck_leader_found_t *packet = (mavlink_duck_leader_found_t *)msgbuf;
	packet->duck_leader_found = duck_leader_found;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, (const char *)packet, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DUCK_LEADER_FOUND, (const char *)packet, MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE DUCK_LEADER_FOUND UNPACKING


/**
 * @brief Get field duck_leader_found from duck_leader_found message
 *
 * @return bool value of whether leader is found
 */
static inline uint8_t mavlink_msg_duck_leader_found_get_duck_leader_found(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a duck_leader_found message into a struct
 *
 * @param msg The message to decode
 * @param duck_leader_found C-struct to decode the message contents into
 */
static inline void mavlink_msg_duck_leader_found_decode(const mavlink_message_t* msg, mavlink_duck_leader_found_t* duck_leader_found)
{
#if MAVLINK_NEED_BYTE_SWAP
	duck_leader_found->duck_leader_found = mavlink_msg_duck_leader_found_get_duck_leader_found(msg);
#else
	memcpy(duck_leader_found, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_DUCK_LEADER_FOUND_LEN);
#endif
}

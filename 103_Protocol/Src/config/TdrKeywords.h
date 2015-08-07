/* This file is generated by tdr. */
/* No manual modification is permitted. */

/* metalib version: 1 */
/* metalib md5sum: 85142d631feb0dc44632b6ddd906dd97 */

/* creation time: Tue Feb 10 17:59:35 2015 */
/* tdr version: 2.4.21914, build at 20110728 */

#ifndef _TdrKeywords_h_
#define _TdrKeywords_h_

#include "TdrBuf.h"
#include "TdrError.h"
#include "TdrBufUtil.h"
#include "TdrTypeUtil.h"


using tsf4g_tdr::TdrError;
using tsf4g_tdr::TdrReadBuf;
using tsf4g_tdr::TdrWriteBuf;

namespace GameConfig
{


enum
{
    MAX_WORLD_PER_CLUSTER = 40, // һ����Ⱥ��ӵ�е����������������
    MAX_SERVER_BUS_ADDR_LEN = 64, // ��������ZMQ BUS�ĵ�ַ����󳤶ȣ���ʽΪ ip:port
    MAX_SERVER_BUS_NUMBER = 100, // ���������֧�ֵ�ZMQͨ��ͨ��������
    MAX_HANDLER_NUMBER = 16384, // ������֧�ֵ�������Ϣ����Handler������
    MAX_ZONE_PER_WORLD = 8, // ��ǰ����������֧�ֵ�������
    MAX_SESSIONKEY_LENGTH = 64, // ���session key����󳤶�
    ROLE_TABLE_SPLIT_FACTOR = 8, // ROLEDB���ݿ���ʵķֱ�����
    ACCOUNT_TABLE_SPLIT_FACTOR = 8, // AccountDB���ݿ���ʵķֱ�����
    NAME_TABLE_SPLIT_FACTOR = 8, // NameDB���ݿ���ʵķֱ�����
    MAX_NICK_NAME_LENGTH = 64, // ������ֵ���󳤶�
    GAME_START_YEAR = 2014, // ��Ϸ��ʽ��ʼ��Ӫ�����
    UNACTIVE_ROLE_TIMEOUT = 7200, // �ж���Ҳ���Ծ�ĳ�ʱʱ��,120*60s
    TICK_TIMEVAL_UPDATEDB = 300, // ����������ݿ��ʱ������5*60s
    ONE_MIN_TIMEOUT = 60, // һ���Ӷ�ʱ
    TEN_SECOND_TIMER = 10, // 10���Ӷ�ʱ
    GAME_ROLEUNIT_CONFIG_ID = 1, // ��Ϸ���ǵ�ID
    MAX_REP_BLOCK_NUM = 280, // �����󱳰�������
    MAX_UNIT_ITEM_SLOT = 5, // ս����λ������Ʒ�������Ŀ
    MAX_FIGHT_CD_NUM = 6, // ս��ʱ���֧�ֵļ���CD����Ŀ
    MAX_ROLE_BIRTH_NUM = 2, // ��Ϸ֧�ֵ���������������
    MAX_GAME_ITEM_CONFIG_NUM = 1000, // ��Ϸ֧�ֵ���Ʒ���������Ŀ
    MAX_FIGHT_UNIT_NUM = 500, // ��Ϸ֧�ֵ�ս����λ�������Ŀ
    MAX_FIGHTUNIT_ON_FORM = 5, // �����������λ����������
    MAX_FIGHT_AI_POS_NUM = 150, // ս����λAI�����֧�ֵ��ж��������Ŀ
    MAX_ROLE_FIGHTUNIT_NUM = 30, // �����ӵ�е�ս����λ����������
    MAX_CAMP_FIGHT_UNIT_NUM = 10, // ��Ϸս��������Ӫ������������ս����λ��
    MAX_COMBAT_TRAP_NUM = 99, // ��Ϸս��ս���������õĻ�����Ŀ
    MAX_BATTLE_CROSS_NUM = 500, // ��Ϸ֧�ֵ����ս���ؿ�������Ŀ
    MAX_CROSS_MONSTER_CONFIG_NUM = 500, // ��Ϸ֧�ֵ����ؿ�������������Ŀ
    MAX_FIGHT_JUDGE_CONFIG_NUM = 50, // ��Ϸ֧�ֵ����ս��ʤ��������Ŀ
    MAX_FIGHTUNIT_AI_CONFIG_NUM = 50, // ��Ϸ֧�ֵ����ս����λAI��Ŀ
    MAX_MONSTER_CONFIG_NUM = 1000, // ��Ϸ֧�ֵ����ս��������Ŀ
    MAX_FIGHT_SKILL_CONFIG_NUM = 1000, // ս�����ܵ������Ŀ
    MAX_SKILL_RANGE_CONFIG_NUM = 100, // ��Ϸ֧�ֵ�������ͷž���������Ŀ
    MAX_SKILL_AREA_CONFIG_NUM = 500, // ��Ϸ֧�ֵ�������ͷŷ�Χ������Ŀ
    MAX_SKILL_SCORE_CONFIG_NUM = 500, // ��Ϸ֧�ֵ����������������Ŀ
    MAX_SKILL_DAMAGE_CONFIG_NUM = 500, // ��Ϸ֧�ֵ�������˺�������Ŀ
    MAX_FIGHT_BUFF_CONFIG_NUM = 3000, // ��Ϸ֧�ֵ����BUFF������Ŀ
    MAX_DROP_REWARD_CONFIG_NUM = 1000, // ��Ϸ֧�ֵ����ս������������Ŀ
    MAX_FIGHT_UNIT_BUFF_NUM = 32, // ����ս����λ�ܸ��ӵ�Buff��������
    MAX_JOINT_ATTACK_CONFIG_NUM = 1000, // ֧�ֵļ��ܻ��ϻ����õ�����
    MAX_COMBAT_TRAP_CONFIG_NUM = 1000, // ֧�ֵ�ս���������õ�����
};


enum ServerState
{
    SERVER_STATE_IDLE = 1,
    SERVER_STATE_BUSY = 2,
    SERVER_STATE_FULL = 3,
};
enum GameUnitType
{
    EUT_ROLE = 1, // ��ɫ
};
enum EUnitStatus
{
    EGUS_ONLINE = 1,
    EGUS_LOGOUT = 2,
    EGUS_ISGM = 4,
    EGUS_DELETE = 8,
};
enum LogoutReasonType
{
    LOGOUT_REASON_REQUEST = 140,
    LOGOUT_REASON_KICKOFF = 141,
};
enum ResourceType
{
    RESOURCE_TYPE_INVALID = 0, // �Ƿ�����Դ����
    RESOURCE_TYPE_COIN = 1, // ��Ϸ���
    RESOURCE_TYPE_CASH = 2, // ��Ϸ��ֵ����
    RESOURCE_TYPE_ENERGY = 3, // �������ֵ
    RESOURCE_TYPE_MAX = 4, // ��Ϸ��Դ���
};
enum FightProfType
{
    FIGHT_PROF_MYRMIDON = 101, // ��ʿ����ս�̿�
    FIGHT_PROF_FIGHTER = 102, // սʿ����ս��
    FIGHT_PROF_MERCENARY = 103, // Ӷ��
    FIGHT_PROF_ARMOR = 104, // ����ʿ
    FIGHT_PROF_ARCHE = 105, // ������
    FIGHT_PROF_THIEF = 106, // ����
    FIGHT_PROF_PRIESTS = 107, // ��ʦ
    FIGHT_PROF_MAGES = 108, // ħ��ʿ
    FIGHT_PROF_DARKMAGE = 109, // ����ʦ
};
enum FightAttributeType
{
    FIGHT_ATTR_HP = 0, // ����ֵ����
    FIGHT_ATTR_SPEED = 1, // �ٶ�ֵ����,�����ж�����
    FIGHT_ATTR_ATK = 2, // ����ֵ����
    FIGHT_ATTR_AP = 3, // ��ǿֵ����
    FIGHT_ATTR_DEF = 4, // ����ֵ����
    FIGHT_ATTR_SR = 5, // ħ��ֵ����
    FIGHT_ATTR_HIT = 6, // ����ֵ����
    FIGHT_ATTR_AVO = 7, // ����ֵ����
    FIGHT_ATTR_CRI = 8, // ����ֵ����
    FIGHT_ATTR_TOU = 9, // ����ֵ����
    FIGHT_ATTR_ACC = 10, // ��׼ֵ����
    FIGHT_ATTR_PAR = 11, // �м�ֵ����
    FIGHT_ATTR_HUDUN = 12, // ��������
    FIGHT_ATTR_FANJI = 13, // ��������
    FIGHT_ATTR_LIANJI = 14, // ��������
    FIGHT_ATTR_HPMAX = 15, // �����������
    FIGHT_ATTR_XIANGONG = 16, // �ȹ�ֵ����,��������˳��
    FIGHT_ATTR_MAX = 17, // �������ģ�����ʹ��
};
enum UnitDirectionType
{
    DIRECTION_SOUTH_EAST = 1, // ����
    DIRECTION_EAST = 2, // ��
    DIRECTION_NORTH_EAST = 3, // ����
    DIRECTION_NORTH = 4, // ��
    DIRECTION_NORTH_WEST = 5, // ����
    DIRECTION_WEST = 6, // ��
    DIRECTION_SOUTH_WEST = 7, // ����
    DIRECTION_SOUTH = 8, // ��
};
enum GameItemType
{
    REP_ITEM_TYPE_INVALID = 100, // �Ƿ�����Ʒ����
    REP_ITEM_TYPE_PROP = 101, // ��������
    REP_ITEM_TYPE_EQUIP = 102, // װ������
};
enum SuperPositionType
{
    ITEM_SUPERPOSITION_TYPE_INVALID = 100, // �Ƿ�����Ʒ��������
    ITEM_SUPERPOSITION_TYPE_YES = 101, // �ɵ��ӵ���Ʒ����
    ITEM_SUPERPOSITION_TYPE_NO = 102, // ���ɵ��ӵ���Ʒ����
};
enum EquipSlotType
{
    EQUIP_SLOT_TYPE_INVALID = 0, // �Ƿ���װ��������
    EQUIP_SLOT_TYPE_WUQI = 1, // ����
    EQUIP_SLOT_TYPE_SHANGZHUANG = 2, // ��װ
    EQUIP_SLOT_TYPE_XIAZHUANG = 3, // ��װ
    EQUIP_SLOT_TYPE_SHIZHUANG = 4, // ʱװ
    EQUIP_SLOT_TYPE_JIEZHI = 5, // ��ָ
    EQUIP_SLOT_TYPE_XIANGLIAN = 6, // ����
    EQUIP_SLOT_TYPE_YAODAI = 7, // ����
    EQUIP_SLOT_TYPE_MAX = 8, // ������ͣ��������ʹ��
};
enum UnitAIType
{
    UNIT_AI_TYPE_GONGJI = 0, // ����
    UNIT_AI_TYPE_ZHUIJI = 1, // ׷��
    UNIT_AI_TYPE_POJIN = 2, // �Ƚ�
    UNIT_AI_TYPE_JIAOSHOU = 3, // ����
    UNIT_AI_TYPE_HEJI = 4, // �ϻ�
    UNIT_AI_TYPE_BEIJI = 5, // ����
    UNIT_AI_TYPE_BEIZU = 6, // ����
    UNIT_AI_TYPE_BEIAI = 7, // ����
    UNIT_AI_TYPE_ZHILIAO = 8, // ����
    UNIT_AI_TYPE_ZUDANG = 9, // �赲
    UNIT_AI_TYPE_FANGAI = 10, // ����
    UNIT_AI_TYPE_MUBIAO = 11, // Ŀ��
    UNIT_AI_TYPE_JISHA = 12, // ��ɱ
    UNIT_AI_TYPE_ZHENJIU = 13, // ����
    UNIT_AI_TYPE_MAX = 14, // �������
};
enum SkillUseType
{
    SKILL_USE_ACTIVE = 1, // ����ʹ�õļ�������
    SKILL_USE_ON_STAGE = 2, // �ǳ�ʹ�õļ�������
    SKILL_USE_ROUNDACTION = 3, // ��λ�غ�ǰʹ�õļ�������
    SKILL_USE_JIAJI = 4, // �л��ļ���ʹ������
    SKILL_USE_LIANJI = 5, // �����ļ���ʹ������
    SKILL_USE_HEJI = 6, // �ϻ��ļ���ʹ������
    SKILL_USE_FANJI = 7, // �����ļ���ʹ������
    SKILL_USE_AI = 8, // AIʹ�õļ�������
};
enum SkillTargetType
{
    SKILL_TARGET_INVALID = 0, // ��
    SKILL_TARGET_SELF = 1, // ����
    SKILL_TARGET_CAMP = 2, // �ѷ�
    SKILL_TARGET_NOT_ENEMY = 3, // �ǵ�
    SKILL_TARGET_ENEMY = 4, // ����
    SKILL_TARGET_ALL = 7, // ������
    SKILL_TARGET_GROUND = 8, // �Եصļ���
};
enum FightCampType
{
    FIGHT_CAMP_INVALID = 0, // �Ƿ���ս����Ӫ
    FIGHT_CAMP_ACTIVE = 1, // ��������ս����
    FIGHT_CAMP_PASSIVE = 2, // ��������ս����
    FIGHT_CAMP_NEUTRAL = 3, // ����ս����Ӫ
};
enum CombatDirectionType
{
    COMBAT_DIRECTION_INVALID = 0, // �Ƿ��ķ�����Ϣ
    COMBAT_DIRECTION_EAST = 1, // ��������
    COMBAT_DIRECTION_NORTH = 2, // ��������
    COMBAT_DIRECTION_WEST = 3, // ��������
    COMBAT_DIRECTION_SOUTH = 4, // ��������
};
enum CombatUnitAIType
{
    COMBAT_UNIT_AI_JIAOSHOU = 0, // ����
    COMBAT_UNIT_AI_HEJI = 1, // �ϻ�
    COMBAT_UNIT_AI_JISHA = 2, // ��ɱ
    COMBAT_UNIT_AI_BEIJI = 3, // ����
    COMBAT_UNIT_AI_ZHUIJI = 4, // ׷��
    COMBAT_UNIT_AI_RESERVE2 = 5, // ����2
    COMBAT_UNIT_AI_RESERVE3 = 6, // ����3
    COMBAT_UNIT_AI_RESERVE4 = 7, // ����4
    COMBAT_UNIT_AI_RESERVE5 = 8, // ����5
    COMBAT_UNIT_AI_RESERVE6 = 9, // ����6
    COMBAT_UNIT_AI_RESERVE7 = 10, // ����7
    COMBAT_UNIT_AI_RESERVE8 = 11, // ����8
    COMBAT_UNIT_AI_RESERVE9 = 12, // ����9
    COMBAT_UNIT_AI_RESERVE10 = 13, // ����10
    COMBAT_UNIT_AI_SKILL1 = 14, // ����1
    COMBAT_UNIT_AI_SKILL2 = 15, // ����2
    COMBAT_UNIT_AI_SKILL3 = 16, // ����3
    COMBAT_UNIT_AI_SKILL4 = 17, // ����4
    COMBAT_UNIT_AI_SKILL5 = 18, // ����5
    COMBAT_UNIT_AI_SKILL6 = 19, // ����6
};
enum BuffTriggerType
{
    BUFF_TRIGGER_IMMEDIATELY = 0, // ��ʱ��Ч
    BUFF_TRIGGER_ROUNDBEGIN = 1, // �غϿ�ʼ
    BUFF_TRIGGER_ROUNDEND = 2, // �غϽ���
    BUFF_TRIGGER_ACTIONROUNDBEGIN = 3, // �ж��غϿ�ʼ
    BUFF_TRIGGER_ACTIONROUNDEND = 4, // �ж��غϽ���
    BUFF_TRIGGER_MOVE = 5, // �ƶ�����BUFF
    BUFF_TRIGGER_UNDERATTACK = 10, // ������
    BUFF_TRIGGER_PROCESSDAMAGE = 15, // �˺���������
    BUFF_TRIGGER_UNDERDAMAGE = 20, // ���˺�
    BUFF_TRIGGER_DODGE = 30, // ���ܳɹ�
};
enum BuffOverlyingType
{
    BUFF_OVERLYING_ALL = 0, // �޵�������
    BUFF_OVERLYING_ZHONGDU = 1, // �ж�����
    BUFF_OVERLYING_KANGDU = 2, // ��������
    BUFF_OVERLYING_GONGJI = 10, // ��������
    BUFF_OVERLYING_BEIKE = 20, // ��������
    BUFF_OVERLYING_FANZHI = 30, // ��������
    BUFF_OVERLYING_JINGZHIACTION = 100, // ��ֹ�ж�
    BUFF_OVERLYING_JINgZHIMOVE = 101, // ��ֹ�ƶ�
    BUFF_OERLYING_JINGZHINORMALATK = 102, // ��ֹ�չ�
    BUFF_OVERLYING_JINGZHISKILLATK = 103, // ��ֹ����
    BUFF_OVERLYING_JINGZHIITEM = 104, // ��ֹ����
    BUFF_OVERLYING_YINGGONG = 1001, // Ӳ������
    BUFF_OVERLYING_RUANGONG = 1002, // ��������
    BUFF_OVERLYING_NEIGONG = 1003, // �ڹ�����
    BUFF_OVERLYING_QINGGONG = 1004, // �Ṧ����
    BUFF_OVERLYING_YANGONG = 1005, // �۹�����
    BUFF_OVERLYING_ERGONG = 1006, // ��������
    BUFF_OVERLYING_MINGZHONG = 1007, // ��������
    BUFF_OVERLYING_SHANBI = 1008, // ��������
    BUFF_OVERLYING_JINGZHUN = 1009, // ��׼����
    BUFF_OVERLYING_ZHAOJIA = 1010, // �м�����
    BUFF_OVERLYING_BAOJI = 1011, // ��������
    BUFF_OVERLYING_JIANREN = 1012, // ��������
};
enum BuffOperaType
{
    BUFF_OPERA_INVALID = 0, // û�в�������
    BUFF_OPERA_ADDATTR = 1, // ���Լ�
    BUFF_OPERA_ADDRATEATTR = 2, // ���԰ٷֱ�
    BUFF_OPERA_REPLACEATTR = 3, // �����滻
    BUFF_OPERA_LOCKATTR = 4, // ��������
    BUFF_OPERA_ADDBUFF = 10, // ������BUFF
    BUFF_OPERA_UNARM = 11, // ��е��Ŀ������ʧЧ
    BUFF_OPERA_IGNOREJOINTATK = 12, // ����Χ������BUFFʹΧ����Ч
    BUFF_OPERA_UNBENDING = 13, // ����
    BUFF_OPERA_GUARD = 14, // �ػ�
    BUFF_OPERA_FORBIDROUND = 100, // ��ֹ��ʼս���غ�
    BUFF_OPERA_FORBIDMOVE = 101, // ��ֹ�غ��ƶ�
    BUFF_OPERA_FORBIDACTION = 103, // ��ֹ�غ��ж�
};
enum BuffTargetType
{
    BUFF_TARGET_INVALID = 0, // û��Ŀ��
    BUFF_TARGET_SELF = 1, // Я����
    BUFF_TARGET_CAST = 2, // ������
    BUFF_TARGET_TRIGGER = 3, // ������
};
enum BuffParamType
{
    BUFF_PARAM_TARGET = 0, // Ŀ�����
    BUFF_PARAM_ATTRBUFF = 1, // �������ͻ�״̬ID
    BUFF_PARAM_VALUE = 2, // Ч��ֵ����
};
enum BuffEffectType
{
    BUFF_EFFECT_INVALID = 0, // �Ƿ��ĳ־�����
    BUFF_EFFECT_FOREVER = 1, // ������Ч
    BUFF_EFFECT_ROUNDS = 2, // Buff��ʧʱ���
};
enum RewardType
{
    REWARD_TYPE_INVALID = 0, // �Ƿ���ս����������
    REWARD_TYPE_ITEM = 2, // ������Ʒ����
    REWARD_TYPE_FORMEXP = 5, // ���������е�λ����
};
enum CombatResultType
{
    COMBAT_RESULT_INVALID = 0, // �Ƿ���ս���������
    COMBAT_RESULT_ACTIVE_WIN = 1, // ����ս������ʤ
    COMBAT_RESULT_PASSIVE_WIN = 2, // ����ս������ʤ
};
enum FaceModifierType
{
    FACE_MODIFIER_DODGE = 0, // ���ܵ�����
    FACE_MODIFIER_BLOCK = 1, // �񵲵�����
    FACE_MODIFIER_JIANREN = 2, // ���͵�����
    FACE_MODIFIER_DEFENCE = 3, // ����ǿ�ȵ�����
    FACE_MODIFIER_DAMAGE = 4, // �˺�������
};
enum CombatTrapType
{
    COMBAT_TRAP_INVALID = 0, // �Ƿ��Ļ�������
    COMBAT_TRAP_TRAP = 1, // ��������
    COMBAT_TRAP_ORGAN = 2, // ��������
};
enum TrapTriggerType
{
    TRAP_TRIGGER_INVALID = 0, // �Ƿ��Ĵ�������
    TRAP_TRIGGER_MOVEON = 1, // ֹͣ����
    TRAP_TRIGGER_LEAVE = 2, // �뿪����
    TRAP_TRIGGER_SKILL = 3, // ���ܴ���
    TRAP_TRIGGER_PASSIVE = 4, // ��������
    TRAP_TRIGGER_DESTROY = 5, // �ƻ�����
};
enum TrapInterruptType
{
    TRAP_INTERRUPT_INVALID = 0, // �Ƿ���Ŀ��������
    TRAP_INTERRUPT_NONE = 1, // �����Ŀ����ж�
    TRAP_INTERRUPT_MOVE = 2, // ���Ŀ����ƶ�
    TRAP_INTERRUPT_ACTION = 3, // ���Ŀ����ж�
    TRAP_INTERRUPT_ALL = 4, // ȫ����ϣ�����Ŀ����ж����ƶ�
};
enum TrapVisiableType
{
    TRAP_VISIBALE_INVALID = 0, // �Ƿ��Ŀɼ�����
    TRAP_VISIBALE_NONE = 1, // ȫ�����ɼ�
    TRAP_VISIBALE_SELF = 2, // �����ɼ�
    TRAP_VISIBALE_ALL = 3, // ȫ�����ɼ��������͵ط�
};
enum SkillScriptCallType
{
    SKILL_SCRIPT_CALL_INVALID = 0, // �Ƿ��ĵ�������
    SKILL_SCRIPT_CALL_DAMAGE = 1, // �˺�����ʱ�ĵ�������
    SKILL_SCRIPT_CALL_SKILLDONE = 2, // ���ܽ�����ĵ�������
    SKILL_SCRIPT_CALL_CHIEFDODGE = 3, // ��ҪĿ�����ܺ�ĵ�������
};
enum SkillSpecialFuncType
{
    SKILL_SPECIAL_FUNC_INVALID = 0, // �Ƿ������⹦������
    SKILL_SPECIAL_FUNC_EXCHANGEPOS = 1, // ���λ�λ���ͶԷ�����λ��
};
enum SSkillHitType
{
    SKILL_HIT_INVALID = 0, // �Ƿ��ļ�����������
    SKILL_HIT_NOHIT = 1, // ���������
    SKILL_HIT_CHIEFDODGE = 2, // ������ҪĿ��
    SKILL_HIT_CHIEFNODODGE = 3, // û��������ҪĿ��
};


#pragma pack(1)


#pragma pack()

}
#endif
#pragma once

#include <types.h>
#include <so/so_value_accesser.h>
#include <ft/ft_common_data_accesser.h>
#include <ft/ft_info.h>

class ftValueAccesser : public soValueAccesser {
public:
    enum ParamFloat {
        Customize_Param_Float_Walk_Accel_Mul = 3001,
        Customize_Param_Float_Walk_Accel_Add = 3002,
        Customize_Param_Float_Walk_Speed_Max = 3003,
        Customize_Param_Float_Ground_Brake = 3004,
        Customize_Param_Float_Dash_Speed = 3005,
        Customize_Param_Float_Run_Accel_Mul = 3006,
        Customize_Param_Float_Run_Accel_Add = 3007,
        Customize_Param_Float_Run_Speed_Max = 3008,

        Customize_Param_Float_Ground_Speed_X_Limit = 3010,
        Customize_Param_Float_Guard_Speed_Limit = 3011,
        Customize_Param_Float_Jump_Speed_X = 3012,
        Customize_Param_Float_Jump_Speed_Y = 3013,
        Customize_Param_Float_Jump_Speed_X_Mul = 3014,
        Customize_Param_Float_Jump_Speed_X_Max = 3015,
        Customize_Param_Float_Mini_Jump_Speed_Y = 3016,
        Customize_Param_Float_Jump_Aerial_Speed_Y = 3017,
        Customize_Param_Float_Jump_Aerial_Speed_X_Mul = 3018,
        Customize_Param_Float_Tread_Jump_Speed_Y_Mul = 3019,
        Customize_Param_Float_Tread_Mini_Jump_Speed_Y_Mul = 3020,
        Customize_Param_Float_Tread_Fall_Recovery_Frame = 3021,
        Customize_Param_Float_Meteor_Recovery_Frame = 3022,
        Customize_Param_Float_Air_Accel_Y = 3023,
        Customize_Param_Float_Air_Speed_Y_Stable = 3024,
        Customize_Param_Float_Air_Brake_Y = 3025,

        Customize_Param_Float_Air_Accel_X_Mul = 3027,
        Customize_Param_Float_Air_Accel_X_Add = 3028,
        Customize_Param_Float_Air_Speed_X_Stable = 3029,
        Customize_Param_Float_Air_Brake_X = 3030,
        Customize_Param_Float_Dive_Speed_Y = 3031,

        Customize_Param_Float_Combo_Attack_12_End = 3034,
        Customize_Param_Float_Combo_Attack_13_End = 3035,
        Customize_Param_Float_Combo_Attack_32_End = 3036,
        Customize_Param_Float_Combo_Attack_33_End = 3037,
        Customize_Param_Float_Combo_Attack_42_End = 3038,
        Customize_Param_Float_Flip_Dir_Frame = 3039,

        Customize_Param_Float_Weight = 3041,
        Customize_Param_Float_Scale = 3042,
        Customize_Param_Float_Result_Scale_Mul = 3043,
        Customize_Param_Float_Height = 3044,
        Customize_Param_Float_Expand_Height = 3045,
        Customize_Param_Float_Shield_Radius = 3046,
        Customize_Param_Float_Shield_Break_Y = 3047,
        Customize_Param_Float_Jostle_Weight = 3048,
        Customize_Param_Float_Effect_Scale = 3049,
        Customize_Param_Float_Entry_Stand_Scale = 3050,

        Customize_Param_Float_Cliff_Jump_Speed_X = 3057,
        Customize_Param_Float_Cliff_Jump_Speed_Y = 3058,
        Customize_Param_Float_Item_Lift_Accel_Mul = 3059,
        Customize_Param_Float_Item_Lift_Accel_Add = 3060,
        Customize_Param_Float_Item_Lift_Speed_Max = 3061,
        Customize_Param_Float_Item_Grip_Offset_X = 3062,
        Customize_Param_Float_Item_Grip_Offset_Y = 3063,
        Customize_Param_Float_Item_Grip_Offset_Z = 3064,
        Customize_Param_Float_Throw_Item_Speed_Mul = 3065,
        Customize_Param_Float_Throw_Item_Power_Mul = 3066,
        Customize_Param_Float_Shoot_Walk_Accel_Mul = 3067,
        Customize_Param_Float_Shoot_Walk_Accel_Add = 3068,
        Customize_Param_Float_Shoot_Walk_Speed_Max = 3069,
        Customize_Param_Float_Shoot_Dash_Speed_F = 3070,
        Customize_Param_Float_Shoot_Dash_Speed_B = 3071,

        Customize_Param_Float_Landing_Frame_Light = 3073,
        Customize_Param_Float_Landing_Frame = 3074,
        Customize_Param_Float_Landing_Attack_Air_Frame_N = 3075,
        Customize_Param_Float_Landing_Attack_Air_Frame_F = 3076,
        Customize_Param_Float_Landing_Attack_Air_Frame_B = 3077,
        Customize_Param_Float_Landing_Attack_Air_Frame_Hi = 3078,
        Customize_Param_Float_Landing_Attack_Air_Frame_Lw = 3079,
        Customize_Param_Float_Cursor_Offset_Y = 3080,
        Customize_Param_Float_Passive_Wall_Speed_X = 3081,
        Customize_Param_Float_Passive_Wall_Jump_Speed_X = 3082,
        Customize_Param_Float_Passive_Wall_Jump_Speed_Y = 3083,
        Customize_Param_Float_Passive_Ceil_Speed_X = 3084,
        Customize_Param_Float_Wall_Jump_Enable_Speed_X = 3085,
        Customize_Param_Float_Ladder_Speed_U_Max = 3086,
        Customize_Param_Float_Ladder_Speed_D_Max = 3087,
        Customize_Param_Float_Swim_Dive_Speed_Mul = 3088,
        Customize_Param_Float_Swim_Rise_Accel_Y = 3089,
        Customize_Param_Float_Swim_Rise_Stable_Speed_Y = 3090,
        Customize_Param_Float_Swim_Accel_Mul = 3091,
        Customize_Param_Float_Swim_Speed_Mul = 3092,
        Customize_Param_Float_Swim_Brake = 3093,
        Customize_Param_Float_Swim_Drown_Out_Accel_Y_Frame = 3094,
        Customize_Param_Float_Star_Scale = 3095,
        Customize_Param_Float_Egg_Scale = 3096,
        Customize_Param_Float_Egg_Collision_Offset_1_X = 3097,
        Customize_Param_Float_Egg_Collision_Offset_1_Y = 3098,
        Customize_Param_Float_Egg_Collision_Offset_1_Z = 3099,
        Customize_Param_Float_Egg_Collision_Offset_2_X = 3100,
        Customize_Param_Float_Egg_Collision_Offset_2_Y = 3101,
        Customize_Param_Float_Egg_Collision_Offset_2_Z = 3102,
        Customize_Param_Float_Egg_Collision_Size = 3103,

        Customize_Param_Float_Ice_Offset_Y = 3108,
        Customize_Param_Float_Ice_Offset_Z = 3109,
        Customize_Param_Float_Ice_Radius = 3110,
        Customize_Param_Float_Ice_Jump_Speed_Y_Mul = 3111,
        Customize_Param_Float_Ice_Jump_Speed_X = 3112,

        Customize_Param_Float_Slope_Top_Angle_Max = 3114,


        Common_Param_Float_Walk_Stick_X = 3117,

        Common_Param_Float_Walk_Motion_Rate_Max = 49952,
        Common_Param_Float_Turn_Stick_X = 3121,
        Common_Param_Float_Dash_Stick_X = 3122,
        Common_Param_Float_Dash_Escape_Frame = 3123, // TODO: Verify
        Common_Param_Float_Turn_Dash_Frame = 3124, // TODO: Verify
        Common_Param_Float_Dash_End_Speed_Mul = 3125,
        Common_Param_Float_Run_Stick_X = 3126,

        Common_Param_Float_Run_Brake_Brake_Mul = 3128,

        Common_Param_Float_Turn_Run_Stick_X = 3130,

        Common_Param_Float_Squat_Stick_Y = 3133,
        Common_Param_Float_Squat_F_Stick_X_Min = 3134,
        Common_Param_Float_Squat_F_Stick_X_Max = 3135,
        Common_Param_Float_Squat_B_Stick_X_Min = 3136,
        Common_Param_Float_Squat_B_Stick_X_Max = 3137,
        Common_Param_Float_Jump_Stick_Y = 3138,
        Common_Param_Float_Jump_Neutral_X = 3139,
        Common_Param_Float_Jump_Neutral_Y = 3140, // TODO: Verify
        Common_Param_Float_Jump_Run_Stick_Y = 3141,
        Common_Param_Float_Jump_Speed_Y_Mul = 3142,

        Common_Param_Float_Escape_Stick_Y = 3148,
        Common_Param_Float_Escape_Fb_Stick_X = 3149,

        Common_Param_Float_Attack_S3_Stick_X = 3151,
        Common_Param_Float_Attack_S3_Stick_Dir_Hi = 3152,
        Common_Param_Float_Attack_S3_Stick_Dir_Lw = 3153,
        Common_Param_Float_Attack_Hi3_Stick_Y = 3154,
        Common_Param_Float_Attack_Lw3_Stick_Y = 3155,
        Common_Param_Float_Attack_S4_Stick_Dir_Hi = 3156,
        Common_Param_Float_Attack_S4_Stick_Dir_Lw = 3157,
        Common_Param_Float_Attack_Hi4_Stick_Y = 3158,
        Common_Param_Float_Attack_Hi4_Flick_Y = 3159,
        Common_Param_Float_Attack_Lw4_Stick_Y = 3160,
        Common_Param_Float_Attack_Lw4_Flick_Y = 3161,

        Common_Param_Float_Attack_Air_Neutral_X = 3164,
        Common_Param_Float_Attack_Air_Neutral_Y = 3165,

        Common_Param_Float_Dive_Cont_Value = 3167,

        Common_Param_Float_Hit_Stop_Squat_Mul = 3171,
        Common_Param_Float_Hit_Stop_Guard_Mul = 3172, // TODO: Verify

        Common_Param_Float_Down_Frame = 3179,
        Common_Param_Float_Stand_Stick_Y = 3180,
        Common_Param_Float_Stand_Fb_Stick_X = 3181,

        Common_Param_Float_Special_Stick_X = 3185,
        Common_Param_Float_Special_Stick_Y = 3186,
        Common_Param_Float_Pass_Stick_Y = 3187,
        Common_Param_Float_Pass_Speed_Y = 3188,

        Common_Param_Float_Cliff_Catch_Cancel_Stick_Y = 3192,

        Common_Param_Float_Spring_Jump_Mul = 3197,
        Common_Param_Float_Passive_Fb_Cont_Value = 3198,
        Common_Param_Float_Passive_Ground_Damage_Speed_Mul = 3199,
        Common_Param_Float_FuraFura_Frame = 3200,

        Common_Param_Float_FuraFura_Recovery = 3202,
        Common_Param_Float_FuraFura_Recovery_Clatter = 3203,

        Common_Param_Float_Slip_Damage_Rate_Max = 3206,
        Common_Param_Float_Slip_Damage_Rate_Min = 3207,
        Common_Param_Float_Slip_Mul = 3208,
        Common_Param_Float_Slip_Dash_Rate_Max = 3209,
        Common_Param_Float_Slip_Dash_Rate_Min = 3210,
        Common_Param_Float_Slip_Turn_Rate_Max = 3211,
        Common_Param_Float_Slip_Turn_Rate_Min = 3212,
        Common_Param_Float_Loupe_Damage_Limit = 3213,
        Common_Param_Float_Loupe_Damage = 3214,
        Common_Param_Float_Cursor_Fly_Speed = 3215,
        Common_Param_Float_Cursor_Disp_Camera_Distance = 3216,

        Common_Param_Float_Stop_Ceil_Speed_X_Mul = 3220,
        Common_Param_Float_Stop_Ceil_Speed_Y_Mul = 3221,
        Common_Param_Float_Stop_Ceil_Speed_X_Stable_Mul = 3222,
        Common_Param_Float_Wall_Jump_Stick_X = 3223,
        Common_Param_Float_Wall_Jump_Speed_Dec = 3224,
        Common_Param_Float_Wall_Jump_Speed_X_Dec = 3225,
        Common_Param_Float_Tread_Jump_Speed_Dec = 3226,
        Common_Param_Float_Tread_Jump_Speed_Limit = 3227,
        Common_Param_Float_Attach_Wall_Slant_Max = 3228,
        Common_Param_Float_Attack_Wall_Slant_Min = 3229,
        Common_Param_Float_Attach_Wall_Frame_Mul = 3230,
        Common_Param_Float_Detach_Wall_Jump_X_Mul = 3231,

        Common_Param_Float_Shield_Max = 3233,
        Common_Param_Float_Shield_Scale_Min = 3234,

        Common_Param_Float_Shield_Dec = 3237,
        Common_Param_Float_Shield_Recovery = 3238,
        Common_Param_Float_Shield_Reset = 3239,
        Common_Param_Float_Shield_Damage_Mul = 3240,
        Common_Param_Float_Shield_Damage_Add = 3241,
        Common_Param_Float_Shield_SetOff_Mul = 3242,
        Common_Param_Float_Shield_SetOff_Add = 3243,
        Common_Param_Float_Shield_SetOff_Speed_Mul = 3244,
        Common_Param_Float_Shield_SetOff_Speed_Max = 3245,

        Common_Param_Float_Shield_Stiff_Mul_Attack_Air = 3248,
        Common_Param_Float_Shield_Stiff_Mul_Attack_4 = 3249,
        Common_Param_Float_Shield_Comp_Mul = 3250,
        Common_Param_Float_Just_Shield_Rebound_Speed_Mul = 3251,
        Common_Param_Float_Shield_Rebound_Speed_Mul = 3252,
        Common_Param_Float_Shield_Rebound_Speed_Add = 3253,
        Common_Param_Float_Shield_Rebound_Air_Brake = 3254,
        Common_Param_Float_Shield_Rebound_Ground_Brake = 3255,

        Common_Param_Float_Capture_Recovery = 3259,
        Common_Param_Float_Capture_Recovery_Clatter = 3260,

        Common_Param_Float_Capture_Cut_Dist_X = 3264, // TODO: Verify
        Common_Param_Float_Capture_Cut_Dist_Y = 3265, // TODO: Verify
        Common_Param_Float_Capture_Cut_Frame_Damage_Mul = 3266,

        Common_Param_Float_Capture_Cut_Brake_Mul = 3268, // TODO: Verify
        Common_Param_Float_Capture_Cut_Ground_Speed = 3269,
        Common_Param_Float_Capture_Cut_Speed_X = 3270,
        Common_Param_Float_Capture_Cut_Speed_Y = 3271,

        Common_Param_Float_Damage_Fly_Reflect_Speed = 3284,
        Common_Param_Float_Damage_Fly_Reflect_Speed_Mul = 3285,

        Common_Param_Float_Damage_Fly_Speed_Y_Mul_Base_Accel = 3288,
        Common_Param_Float_Damage_Fly_Speed_Y_Mul = 3289,

        Common_Param_Float_Damage_Fly_Cloud_Through_Speed = 3291,
        Common_Param_Float_Damage_Fly_Cloud_Through_Out_Speed_Mul = 3292,
        Common_Param_Float_Damage_Ground_Mul = 3293,
        Common_Param_Float_Damage_Air_Brake = 3294,
        Common_Param_Float_Damage_Speed_Composition_Speed = 3295,

        Common_Param_Float_Dead_Up_Damage_Speed = 3302,

        Common_Param_Float_Damage_Fly_Ind_Speed_Max = 3308,
        Common_Param_Float_Damage_Fly_Ind_Speed_Min = 3309,
        Common_Param_Float_Damage_Fly_Ind_Speed_Succeed_Mul = 3310,
        Common_Param_Float_Damage_Fly_Ind_Weight_Mul = 3311,
        Common_Param_Float_Damage_Song_Frame = 3312,
        Common_Param_Float_Damage_Song_Frame_Bonus_Rank = 3313,
        Common_Param_Float_Damage_Song_Frame_Bonus_Handi = 3314,
        Common_Param_Float_Damage_Song_Frame_Bonus_Reaction = 3315,
        Common_Param_Float_Damage_Song_Frame_Bonus_Damage = 3316,
        Common_Param_Float_Damage_Song_Recovery = 3317,
        Common_Param_Float_Damage_Song_Recovery_Clatter = 3318,
        Common_Param_Float_Damage_Song_Fall_Speed_Limit = 3319,
        Common_Param_Float_Damage_Bind_Frame = 3320,
        Common_Param_Float_Damage_Bind_Frame_Bonus_Rank = 3321,
        Common_Param_Float_Damage_Bind_Frame_Bonus_Handi = 3322,
        Common_Param_Float_Damage_Bind_Frame_Bonus_Reaction = 3323,
        Common_Param_Float_Damage_Bind_Frame_Bonus_Damage = 3324,
        Common_Param_Float_Damage_Bind_Recovery = 3325,
        Common_Param_Float_Damage_Bind_Recovery_Clatter = 3326,
        Common_Param_Float_Damage_Bury_Frame = 3327,
        Common_Param_Float_Damage_Bury_Frame_Bonus_Rank = 3328,
        Common_Param_Float_Damage_Bury_Frame_Bonus_Handi = 3329,
        Common_Param_Float_Damage_Bury_Frame_Bonus_Reaction = 3330,
        Common_Param_Float_Damage_Bury_Frame_Bonus_Damage = 3331,
        Common_Param_Float_Damage_Bury_Recovery = 3332,
        Common_Param_Float_Damage_Bury_Recovery_Clatter = 3333,
        Common_Param_Float_Damage_Bury_Jump_Speed_Y_Mul = 3334,
        Common_Param_Float_Damage_Bury_Jump_No_Attack_Frame_Value = 3335,
        Common_Param_Float_Damage_Bury_Damage_Reaction_Sub = 3336,
        Common_Param_Float_Damage_Ice_Fall_Y_Mul = 3337,
        Common_Param_Float_Damage_Ice_Reflect_Break_Speed = 3338,
        Common_Param_Float_Damage_Ice_Reflect_Speed_Mul = 3339,
        Common_Param_Float_Damage_Ice_Damage_Dec_Mul = 3340,
        Common_Param_Float_Damage_Ice_Damage_Reaction_Dec_Mul = 3341,
        Common_Param_Float_Damage_Ice_Damage_Air_Brake = 3342,
        Common_Param_Float_Damage_Ice_Rot_Speed_Min = 3343,
        Common_Param_Float_Damage_Ice_Rot_Speed_Max = 3344,
        Common_Param_Float_Damage_Ice_Frame_Damage_Mul = 3347,
        Common_Param_Float_Damage_Ice_Recovery = 3346,
        Common_Param_Float_Damage_Ice_Recovery_Clatter = 3347,
        Common_Param_Float_Damage_Ice_Recovery_Damage = 3348,
        Common_Param_Float_Damage_Ice_Effect_Radius = 3349,
        Common_Param_Float_Ladder_Stick_Y = 3350,
        Common_Param_Float_Ladder_Cancel_Frame = 3351,
        Common_Param_Float_Ladder_Jump_Y_Mul = 3352,

        Common_Param_Float_Swim_Dive_Speed_X_Mul = 3355,
        Common_Param_Float_Swim_Jump_Charge_Accel_Y = 3356,
        Common_Param_Float_Swim_Jump_Speed_Y_Mul = 3357,
        Common_Param_Float_Swim_Drown_Frame_Dec_Damage_Rate = 3358,
        Common_Param_Float_Swim_Drown_Speed_X_Mul = 3359,

        Common_Param_Float_Bitten_Frame_Add = 3375,
        Common_Param_Float_Bitten_Frame_Damage_Mul = 3376,
        Common_Param_Float_Bitten_Recovery_Clatter = 3377,
        Common_Param_Float_Bitten_Motion_Rate = 3378,
        Common_Param_Float_Bitten_Motion_Rate_Frame = 3379,
        Common_Param_Float_Bitten_Flick_Frame = 3380, // TODO: Verify
        Common_Param_Float_Kirby_Swallowed_Offset_X = 3381,
        Common_Param_Float_Kirby_Swallowed_Offset_Y = 3382,
        Common_Param_Float_Kirby_Swallowed_Speed_X = 3383,
        Common_Param_Float_Kirby_Swallowed_Speed_Y = 3384,
        Common_Param_Float_Kirby_Swallowed_Comp_Dist = 3385,
        Common_Param_Float_Kirby_SwallowedCatch_Recovery_Clatter = 3386,
        Common_Param_Float_Kirby_SwallowedCatch_Recovery = 3387,
        Common_Param_Float_Kirby_SwallowedCatch_Frame = 3388,
        Common_Param_Float_Kirby_SwallowedThrown_Recovery_Clatter = 3389,
        Common_Param_Float_Kirby_SwallowedThrown_Recovery = 3390,
        Common_Param_Float_Kirby_SwallowedThrown_Frame = 3391,

        Common_Param_FLoat_Kirby_SwallowedThrown_Exit_Frame = 3393,
        Common_Param_Float_Kirby_SwallowedThrown_Exit_Speed_X = 3394,
        Common_Param_Float_Kirby_SwallowedThrown_Exit_Speed_Y = 3395,

        Common_Param_Float_Shouldered_Frame_Add = 3400,
        Common_Param_Float_Shouldered_Frame_Damage_Mul = 3401,
        Common_Param_Float_Shouldered_Recovery_Clatter = 3402,
        Common_Param_Float_Shouldered_Recovery_Clatter_Air = 3403,
        Common_Param_Float_Dedede_Swallowed_Offset_X = 3404,
        Common_Param_Float_Dedede_Swallowed_Offset_Y = 3405,
        Common_Param_Float_Dedede_Swallowed_Speed_X = 3406,
        Common_Param_Float_Dedede_Swallowed_Speed_Y = 3407,
        Common_Param_Float_Dedede_Swallowed_Comp_Dist = 3408,
        Common_Param_Float_Dedede_SwallowedCatch_Recovery_Clatter = 3409,
        Common_Param_Float_Dedede_SwallowedCatch_Recovery = 3410,
        Common_Param_Float_Dedede_SwallowedCatch_Frame = 3411,
        Common_Param_Float_Dedede_SwallowedThrown_Recovery_Clatter = 3412,
        Common_Param_Float_Dedede_SwallowedThrown_Recovery = 3413,
        Common_Param_Float_Dedede_SwallowedThrown_Frame = 3414,
        Common_Param_Float_Dedede_SwallowedThrown_Exit_Frame = 3415,
        Common_Param_Float_Dedede_SwallowedThrown_Exit_Speed_X = 3416,
        Common_Param_Float_Dedede_SwallowedThrown_Exit_Speed_Y = 3417,
        Common_Param_Float_Dedede_SwallowedEscape_Offset_X = 3418,
        Common_Param_Float_Dedede_SwallowedEscape_Offset_Y = 3419,
//        Common_Param_Float_Dedede_SwallowedEscape_1 = 3420, // TODO: Check what these are
//        Common_Param_Float_Dedede_SwallowedEscape_2 = 3421,
//        Common_Param_Float_Dedede_SwallowedEscape_3 = 3422,
        Common_Param_Float_Diddy_Clung_Frame_Add = 3423,
        Common_Param_Float_Diddy_Clung_Frame_Damage_Mul = 3424,
        Common_Param_Float_Diddy_Clung_Frame_Handicap_Mul = 3425,
        Common_Param_Float_Diddy_Clung_Frame_Air_Mul = 3426,
        Common_Param_Float_Diddy_Clung_Recovery_Clatter = 3427,
        Common_Param_Float_Diddy_Clung_Stop_Speed_X = 3428,

        Common_Param_Float_Item_Lift_Walk_Stick_X = 3447,
        Common_Param_Float_Item_Turn_Stick_X = 3448,

        Common_Param_Float_Shoot_Jump_Speed_Y_Mul = 3454,
        Common_Param_Float_Item_Pickup_Light_Walk_Mul = 3455,
        Common_Param_Float_Damage_Drop_Dragoon_Angle = 3456,
        Common_Param_Float_Damage_Drop_Dragoon_Speed = 3457,
        Common_Param_Float_Flower_Recovery = 3458,
        Common_Param_Float_Flower_Recovery_Clatter = 3459,
        Common_Param_Float_Flower_Frame_Max = 3460,
        Common_Param_Float_Flower_Damage_Add_Frame_Rate = 3461,
        Common_Param_Float_Flower_Scale_Min = 3462,
        Common_Param_Float_Flower_Scale_Max = 3463,
        Common_Param_Float_Flower_Damage_Add_Scale_Rate = 3464,
        Common_Param_Float_Flower_Static_Scale = 3465,
        Common_Param_Float_Gekikara_Motion_Rate = 3466,
        Common_Param_Float_Gekikara_Fire_Shoot_Angle = 3467,
        Common_Param_Float_Gekikara_Fire_Shoot_Angle_Speed = 3468,
        Common_Param_Float_Gekikara_Fire_Shoot_Angle_Min = 3469,
        Common_Param_Float_Gekikara_Fire_Shoot_Angle_Max = 3470,
        Common_Param_Float_Screw_Jump_Speed_Y_Mul = 3471,

        Common_Param_Float_Kinoko_Giant_Scale = 3473,

        Common_Param_Float_Kinoko_Small_Scale = 3475,
        Common_Param_Float_Kinoko_Pitch_Big = 3476,
        Common_Param_Float_Kinoko_Pitch_Small = 3477,
        Common_Param_Float_Kinoko_Bonus_Damage = 3478,

        Common_Param_Float_Thunder_Giant_Scale = 3480,

        Common_Param_Float_Thunder_Small_Scale = 3482,
        Common_Param_Float_Thunder_Pitch_Big = 3483,
        Common_Param_Float_Thunder_Pitch_Small = 3484,
        Common_Param_Float_Metal_Cancel_Damage = 3485,
        Common_Param_Float_Metal_Damage_Reaction_Sub = 3486,
        Common_Param_Float_Team_Healing_Heal_Team_Mul = 3487,
        Common_Param_Float_Team_Healing_Heal_Opponent_Rate = 3488,
        Common_Param_Float_Team_Healing_Heal_Opponent_Mul = 3489,
        Common_Param_Float_Pit_Fall_Speed = 3490,
        Common_Param_Float_Pit_Fall_Accel = 3491,
        Common_Param_Float_Pit_Fall_Speed_Max = 3492,


        Owner_Param_Float_Damage_Ratio = 3502,
        Owner_Param_Float_Attack_Reaction_Mul = 3503,
        Owner_Param_Float_Damage_Reaction_Mul = 3504,
        Owner_Param_Float_Special_Glow_Attack = 3505,
        Owner_Param_Float_Auto_Handi = 3506,
        Owner_Param_Float_Slip_Mul = 3507,
        Owner_Param_Float_Result_Win_Rot_Y = 3508,
    };

    enum ParamInt {
        Customize_Param_Int_Run_Brake_Attack_Dash_Frame = 23001,
        Customize_Param_Int_Jump_Squat_Frame = 23002,
        Customize_Param_Int_Jump_Count_Max = 23003,
        Customize_Param_Int_Jump_Glide_Frame = 23004,

        // 23006 Something to do with team healer damage opponent rate? used in Fighter::touchItem
        Customize_Param_Int_Landing_Heavy_Frame = 23007,

        Customize_Param_Int_No_Ladder_Frame = 23009,
        Customize_Param_Int_Ladder_Hand_Node_Index_1 = 23010,
        Customize_Param_Int_Ladder_Hand_Node_Index_2 = 23011,
        Customize_Param_Int_Star_Attack_Power = 23012,

        Customize_Param_Int_Ice_Node_Index = 23014,

        Customize_Param_Int_Dead_Rare_SE_Rate = 23017,

        // 23027


        Common_Param_Int_Dash_Flick_X = 23031,
        Common_Param_Int_Dash_Speed_Keep_Frame = 23032,
        Common_Param_Int_Re_Dash_Frame = 23033,
        Common_Param_Int_Turn_Dash_Frame = 23034, // TODO: verify
        Common_Param_Int_Jump_Initial_Frame = 23035,
        Common_Param_Int_Jump_Flick_Y = 23036,
        Common_Param_Int_Escape_Flick_Y = 23037,
        Common_Param_Int_Escape_Fb_Flick_X = 23038,
        Common_Param_Int_Dive_Flick_Frame = 23039,

        Common_Param_Int_Hit_Stop_Delay_Flick_Frame = 23041,
        Common_Param_Int_Damage_Turn_Reverse_Cont_Frame = 23042,
        Common_Param_Int_Status_Start_Turn_Frame = 23043,
        Common_Param_Int_Special_Smash_Flick_X = 23044,  // TODO: Verify
        Common_Param_Int_Special_Air_N_Turn_Frame = 23045,
        Common_Param_Int_Pass_Flick_Y = 23046,
        Common_Param_Int_Cliff_Catch_Move_Frame = 23047,
        Common_Param_Int_Cliff_Catch_Time_Quick = 23048,
        Common_Param_Int_Cliff_Wait_Air_Xlu_Max_Air_Frame = 23049,
        Common_Param_Int_Cliff_No_Catch_Frame = 23050,
        Common_Param_Int_Cliff_Wait_Xlu_Frame = 23051,
        Common_Param_Int_Passive_Trigger_Frame = 23052,
        Common_Param_Int_No_Rapid_Frame_Value = 23053,
        Common_Param_Int_Passive_Wall_Stop_Frame = 23054,

        Common_Param_Int_Air_Escape_Passive_Trigger_Frame = 23056,

        Common_Param_Int_Slip_Damage_Disable_Frame = 23057,
        Common_Param_Int_Slip_Wait_Frame = 23058,
        Common_Param_Int_Slip_Disable_Frame = 23059,

        Common_Param_Int_Damage_Drop_Smash_Ball = 23063,
        Common_Param_Int_Damage_Drop_Smash_Ball_Handicap = 23064,

        Common_Param_Int_Discretion_Final_Point_Diff = 23067,
        Common_Param_Int_No_Discretion_Final_Beat_Count = 23068,
        Common_Param_Int_Wall_Jump_Interval_Frame = 23069,
        Common_Param_Int_Wall_Jump_Flick_X = 23070,
        Common_Param_Int_Wall_Jump_Stop_Frame = 23071,
        Common_Param_Int_Wall_Jump_Disable_Cont_Frame = 23072,
        Common_Param_Int_Tread_Attack_Frame = 23073, // TODO: Verify
        Common_Param_Int_Attach_Wall_Frame = 23074,
        Common_Param_Int_Attach_Wall_Disable_Frame = 23075,
        Common_Param_Int_Shield_Min_Frame = 23076,

        Common_Param_Int_Shield_Just_Frame = 23078,
        Common_Param_Int_Continue_Just_Shield_Count = 23079,
        Common_Param_Int_Guard_Off_Cancel_Frame = 23080,
        Common_Param_Int_Catch_Dash_Frame = 23081,
        Common_Param_Int_Catch_Turn_Frame = 23082,

        Common_Param_Int_Capture_Cut_Jump_Button_Count = 23084,
        Common_Param_Int_Capture_Cut_Frame = 23085,
        Common_Param_Int_Throw_Invincible_Frame = 23086,

        Common_Param_Int_Damage_Fly_Attack_Frame = 23088,
        Common_Param_Int_Damage_Fly_Escape_Frame = 23089,

        Common_Param_Int_Rebirth_Wait_Frame = 23101,
        Common_Param_Int_Rebirth_Invincible_Frame = 23102,

        Common_Param_Int_Bury_Down_Frame = 23104,
        Common_Param_Int_Bury_Physics_Invalid_Frame = 23105,
        Common_Param_Int_Ice_Jump_Stiff_Frame = 23106,

        Common_Param_Int_Swim_Jump_Charge_Frame = 23109,
        Common_Param_Int_Swim_Jump_Speed_Y_Dec_Count = 23110,
        Common_Param_Int_Swim_Effect_Interval_Frame = 23111,
        Common_Param_Int_Swim_Drown_Frame = 23112,
        Common_Param_Int_Swim_Drown_Out_Frame = 23113,
        Common_Param_Int_Swim_Drown_Effect_Interval_Frame = 23114,

        Common_Param_Int_Item_Throw_4_Flick = 23124,
        Common_Param_Int_Item_Air_Throw_4_Flick = 23125,
        Common_Param_Int_Item_Catch_Frame_Attack_Dash = 23126,
        Common_Param_Int_Item_Air_Catch_Frame = 23127,
        Common_Param_Int_Item_Air_Catch_Frame_Escape = 23128,
        Common_Param_Int_Item_No_Air_Catch_Frame = 23129,
        Common_Param_Int_Damage_Drop_Item = 23130,
        Common_Param_Int_Damage_Drop_Item_Empty = 23131,

        Common_Param_Int_Damage_Drop_Dragoon = 23142,
        Common_Param_Int_Damage_Drop_Dragoon_Handicap = 23143,
        Common_Param_Int_Dragoon_Invincible_Frame = 23144,

        Common_Param_Int_Gekikara_Frame = 23148,
        Common_Param_Int_Gekikara_Fire_Shoot_Interval = 23149,
        Common_Param_Int_Hammer_Frame = 23150,
        Common_Param_Int_Hammer_Landing_Frame = 23151,
        Common_Param_Int_Hammer_Throw_Frame = 23152,
        Common_Param_Int_Golden_Hammer_Frame = 23153,
        Common_Param_Int_Golden_Hammer_Hande_Frame = 23154,
        Common_Param_Int_Golden_Hammer_Beat_Dec_Frame = 23155,
        Common_Param_Int_Golden_Hammer_End_Flash_Frame = 23156,
        Common_Param_Int_Golden_Hammer_Drift_Frame = 23157,
        //Common_Param_Int_Golden_Hammer_ = 23158,
        Common_Param_Int_Super_Star_Frame = 23159,
        Common_Param_Int_Super_Star_SE_Frame = 23160,
        Common_Param_Int_Kinoko_Frame = 23161,
        Common_Param_Int_Kinoko_Bonus_Max = 23162,
        Common_Param_Int_Thunder_Frame = 23163,

        Common_Param_Int_Metal_Frame = 23165,
        Common_Param_Int_Timer_Slow_Mag = 23166,
        Common_Param_Int_Timer_Frame = 23167,

        Common_Param_Int_Timer_Beat_Dec_Frame = 23169,


        Owner_Param_Int_Shield_Break_Frame_Add = 23174,
        Owner_Param_Int_Swim_Drown_Frame_Add = 23175,
        Entry_Param_Int_Rank = 23176,
        Owner_Param_Int_Stock_Count = 23177,


        Info_Param_Int_Attack_Combo_Type = 23180,
        Info_Param_Int_Attack_Combo_Max = 23181,
        Info_Param_Int_Attack_100_Type = 23182,
        Info_Param_Int_S3_Combo_Max = 23183,
        Info_Param_Int_S4_Combo_Max = 23184,
        Info_Param_Int_Jump_Aerial_Type = 23185,
        Info_Param_Int_Glide_Type = 23186,
        Info_Param_Int_Squat_Walk_Type = 23187,
        Info_Param_Int_Attack_Dash_Type = 23188,
        Info_Param_Int_Wall_Jump_Type = 23189,
        Info_Param_Int_Attach_Wall_Type = 23190,
        Info_Param_Int_Air_Lasso_Type = 23191,
        Info_Param_Int_Motion_Share_Type = 23192,
        Info_Param_Int_Capture_Motion_Height = 23193,
    };

    enum ParamIndefinite {

    };

    enum VariableFloat {
        Variable_Float_Kinetic_Sum_Speed = 1000,
        Variable_Float_Kinetic_Sum_Speed_X = 1001,
        Variable_Float_Kinetic_Sum_Speed_Y = 1002,
        Variable_Float_Motion_Trans_Move_Speed_X = 1003,
        Variable_Float_Motion_Trans_Move_Speed_Y = 1004,
        Variable_Float_Kinetic_Energy_Damage_Speed = 1005,
        Variable_Float_Kinetic_Energy_Damage_Speed_X = 1006,
        Variable_Float_Kinetic_Energy_Damage_Speed_X_Rv = 1007,
        Variable_Float_Kinetic_Energy_Damage_Speed_Y = 1008,
        Variable_Float_Kinetic_Energy_Damage_Speed_Y_Rv = 1009,
        Variable_Float_Controller_Stick_X = 1010,
        Variable_Float_Controller_Stick_X_Lr = 1011,
        Variable_Float_Controller_Stick_X_Lr_Rv = 1012,
        Variable_Float_Controller_Stick_X_Abs = 1013,
        Variable_Float_Controller_Stick_X_Rv = 1014,

        Variable_Float_Controller_Stick_X_Kinetic_Sum_Speed_Lr = 1017,
        Variable_Float_Controller_Stick_Y = 1018,
        Variable_Float_Controller_Stick_Y_Abs = 1019,
        Variable_Float_Controller_Stick_Y_Rv = 1020,
        Variable_Float_Controller_Stick_Dir = 1021,
        Variable_Float_Controller_Stick_Prev_X = 1022,
        Variable_Float_Controller_Stick_Prev_X_Lr = 1023,
        Variable_Float_Controller_Stick_Prev_X_Lr_Rv = 1024,
        Variable_Float_Controller_Stick_Prev_X_Abs = 1025,
        Variable_Float_Controller_Stick_Prev_Y = 1026,
        Variable_Float_Controller_Stick_Prev_Y_Abs = 1027,
        Variable_Float_Controller_Stick_Prev_Y_Rv = 1028,
        Variable_Float_Throw_Item_Speed = 1029,
        Variable_Float_Throw_Item_Angle = 1030,
        Variable_Float_Throw_Item_Power = 1031,
        Variable_Float_Item_Pickup_Light_Range = 1032,
        Variable_Float_Item_Swing_Motion_Rate = 1033,
        Variable_Float_Tread_Jump_Speed_Y = 1034,
        Variable_Float_Motion_Frame = 1035,
        Variable_Float_Motion_Rate = 1036,
    };

    enum VariableInt {
        Variable_Int_Combo_Count = 21000,
        Variable_Int_Controller_Flick_X = 21001,
        Variable_Int_Controller_Flick_Y = 21002,
        Variable_Int_Controller_Flick_No_Reset_X = 21003,
        Variable_Int_Controller_Flick_No_Reset_Y = 21004,
        Variable_Int_Controller_Flick_After_X = 21005,
        Variable_Int_Controller_Flick_After_Y = 21006,
        Variable_Int_Controller_Flick_X_Dir = 21007,
        Variable_Int_Controller_Flick_Y_Dir = 21008,
        Variable_Int_Controller_Trigger_1_Count = 21009,
        Variable_Int_Controller_Trigger_1_Count_Prev = 21010,
        Variable_Int_Controller_Trigger_2_Count = 21011,
        Variable_Int_Controller_Trigger_2_Count_Prev = 21012,
        Variable_Int_Controller_Trigger_3_Count = 21013,
        Variable_Int_Controller_Trigger_3_Count_Prev = 21014,
        Variable_Int_Controller_Trigger_4_Count = 21015,
        Variable_Int_Controller_Trigger_4_Count_Prev = 21016,
        Variable_Int_Controller_Trigger_5_Count = 21017,
        Variable_Int_Controller_Trigger_5_Count_Prev = 21018,
        Variable_Int_Controller_Flick_X_Lr = 21019,
        Variable_Int_Controller_Flick_X_Lr_Rv = 21020,
        Variable_Int_Controller_Flick_After_X_Lr_Rv = 21021,
        Variable_Int_Item_Swing_1_Motion_Kind = 21022,
        Variable_Int_Item_Swing_3_Motion_Kind = 21023,
        Variable_Int_Item_Swing_4_Motion_Kind = 21024,
        Variable_Int_Item_Swing_Dash_Motion_Kind = 21025,
        Variable_Int_Item_Wait_Motion_Kind = 21026,
        Variable_Int_Item_Squat_Wait_Motion_Kind = 21027,
        Variable_Int_Win_Pose_Kind = 21028,
        Variable_Int_Player_Color_Kind = 21029,
    };

    virtual soParamAccesser* getExtendParamAccesser();
    virtual ~ftValueAccesser();
    virtual float getConstantFloatCore(soModuleAccesser* moduleAccesser, u32, u32);
    virtual int getConstantIntCore(soModuleAccesser* moduleAccesser, u32, u32);
    virtual void* getConstantIndefiniteCore(soModuleAccesser* moduleAccesser, u32, u32);

    virtual float getVariableFloatCore(soModuleAccesser* moduleAccesser, u32, u32);
    virtual int getVariableIntCore(soModuleAccesser* moduleAccesser, u32, u32);

    virtual bool isControllerValueCore(soModuleAccesser* moduleAccesser, u32, u32);
    virtual bool isEnableSpeedOperationCore(soModuleAccesser* moduleAccesser);


};


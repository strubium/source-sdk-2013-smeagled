//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include "c_weapon__stubs.h"
#include "basehlcombatweapon_shared.h"
#include "c_basehlcombatweapon.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

STUB_WEAPON_CLASS( cycler_weapon, WeaponCycler, C_BaseCombatWeapon );

STUB_WEAPON_CLASS( weapon_binoculars, WeaponBinoculars, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_bugbait, WeaponBugBait, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_flaregun, Flaregun, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_annabelle, WeaponAnnabelle, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_gauss, WeaponGaussGun, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_cubemap, WeaponCubemap, C_BaseCombatWeapon );
STUB_WEAPON_CLASS( weapon_alyxgun, WeaponAlyxGun, C_HLSelectFireMachineGun );
STUB_WEAPON_CLASS( weapon_citizenpackage, WeaponCitizenPackage, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_citizensuitcase, WeaponCitizenSuitcase, C_WeaponCitizenPackage );

#ifndef HL2MP
STUB_WEAPON_CLASS( weapon_ar2, WeaponAR2, C_HLMachineGun );
STUB_WEAPON_CLASS( weapon_frag, WeaponFrag, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_rpg, WeaponRPG, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_pistol, WeaponPistol, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_shotgun, WeaponShotgun, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_smg1, WeaponSMG1, C_HLSelectFireMachineGun );
STUB_WEAPON_CLASS( weapon_357, Weapon357, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_crossbow, WeaponCrossbow, C_BaseHLCombatWeapon );
//STUB_WEAPON_CLASS( weapon_slam, Weapon_SLAM, C_BaseHLCombatWeapon ); //
STUB_WEAPON_CLASS( weapon_crowbar, WeaponCrowbar, C_BaseHLBludgeonWeapon );
#ifdef HL2_EPISODIC
STUB_WEAPON_CLASS( weapon_hopwire, WeaponHopwire, C_BaseHLCombatWeapon );
//STUB_WEAPON_CLASS( weapon_proto1, WeaponProto1, C_BaseHLCombatWeapon );
#endif
#ifdef HL2_LOSTCOAST
STUB_WEAPON_CLASS( weapon_oldmanharpoon, WeaponOldManHarpoon, C_WeaponCitizenPackage );
#endif
#endif

#ifdef CSS_WEAPONS_IN_HL2 
STUB_WEAPON_CLASS( weapon_css_glock, Weapon_CSS_HL2_Glock18, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_usp, Weapon_CSS_HL2_USP, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_p228, Weapon_CSS_HL2_P228, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_deagle, Weapon_CSS_HL2_Deagle, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_fiveseven, Weapon_CSS_HL2_FiveSeveN, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_elite, Weapon_CSS_HL2_DualBerettas, C_BaseHLCombatWeapon );

STUB_WEAPON_CLASS( weapon_css_tmp, Weapon_CSS_HL2_TMP, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_mp5navy, Weapon_CSS_HL2_MP5Navy, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_ump45, Weapon_CSS_HL2_UMP45, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_p90, Weapon_CSS_HL2_P90, C_BaseHLCombatWeapon );
STUB_WEAPON_CLASS( weapon_css_mac10, Weapon_CSS_HL2_MAC10, C_BaseHLCombatWeapon );
#endif



// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// CanEverCrouch @ 1478104d0

bool __thiscall INavMovementInterface::CanEverCrouch(INavMovementInterface *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(code **)((longlong)*this + 0x30))();
  return (bool)(*pbVar1 & 1);
}

// CanEverFly @ 1478104f0

bool __thiscall INavMovementInterface::CanEverFly(INavMovementInterface *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(code **)((longlong)*this + 0x30))();
  return (bool)(*pbVar1 >> 4 & 1);
}

// CanEverJump @ 147810510

bool __thiscall INavMovementInterface::CanEverJump(INavMovementInterface *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(code **)((longlong)*this + 0x30))();
  return (bool)(*pbVar1 >> 1 & 1);
}

// CanEverMoveOnGround @ 147810530

bool __thiscall INavMovementInterface::CanEverMoveOnGround(INavMovementInterface *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(code **)((longlong)*this + 0x30))();
  return (bool)(*pbVar1 >> 2 & 1);
}

// CanEverSwim @ 147810550

bool __thiscall INavMovementInterface::CanEverSwim(INavMovementInterface *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(code **)((longlong)*this + 0x30))();
  return (bool)(*pbVar1 >> 3 & 1);
}

// ~INavMovementInterface @ 1478ab9f0

void __thiscall INavMovementInterface::~INavMovementInterface(INavMovementInterface *this)

{
  *this = (INavMovementInterface)&___7INavMovementInterface__6B_;
  return;
}

// _getUObject @ 1478fff10

UObject * __thiscall INavMovementInterface::_getUObject(INavMovementInterface *this)

{
  return (UObject *)0x0;
}

// GetNavLocation @ 147fd3ae0

TVector<double> * __thiscall
INavMovementInterface::GetNavLocation
          (INavMovementInterface *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  UObjectBaseUtility *this_00;
  UClass *pUVar3;
  longlong *plVar4;
  double *pdVar5;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = (UObjectBaseUtility *)(**(code **)((longlong)*this + 0x90))();
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    if (plVar4 != (longlong *)0x0) {
      pdVar5 = (double *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_28);
      goto LAB_147fd3b46;
    }
  }
  pdVar5 = &local_28;
  local_28 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  dStack_20 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  local_18 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
LAB_147fd3b46:
  dVar2 = pdVar5[1];
  dVar1 = pdVar5[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPathFollowingBrakingDistance @ 147fd5eb0

float __thiscall
INavMovementInterface::GetPathFollowingBrakingDistance(INavMovementInterface *this,float param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x20))();
  if ((char)((ulonglong)*puVar1 >> 0x30) != '\0') {
    local_res8 = (float)*puVar1;
    return local_res8;
  }
  return param_1;
}

// SetFixedBrakingDistance @ 147ff5a60

void __thiscall
INavMovementInterface::SetFixedBrakingDistance(INavMovementInterface *this,float param_1)

{
  float *pfVar1;
  
  if (__real_38d1b717 < param_1) {
    pfVar1 = (float *)(**(code **)((longlong)*this + 0x28))();
    *pfVar1 = param_1;
    *(undefined1 *)((longlong)pfVar1 + 6) = 1;
  }
  return;
}

// StopActiveMovement @ 147ff88c0

void __thiscall INavMovementInterface::StopActiveMovement(INavMovementInterface *this)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)((longlong)*this + 0x28))();
  if ((*(char *)(lVar2 + 7) != '\0') &&
     (plVar3 = (longlong *)(**(code **)((longlong)*this + 0x50))(this), plVar3 != (longlong *)0x0))
  {
    pcVar1 = *(code **)(*plVar3 + 0x10);
    uVar4 = (**(code **)((longlong)*this + 8))(this);
    (*pcVar1)(plVar3,uVar4);
  }
  return;
}

// StopMovementKeepPathing @ 147ff8930

void __thiscall INavMovementInterface::StopMovementKeepPathing(INavMovementInterface *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*this + 0x28))();
  *(undefined1 *)(lVar1 + 7) = 0;
  (**(code **)((longlong)*this + 0x68))(this);
  *(undefined1 *)(lVar1 + 7) = 1;
  return;
}

// UseAccelerationForPathFollowing @ 1480005a0

bool __thiscall INavMovementInterface::UseAccelerationForPathFollowing(INavMovementInterface *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*this + 0x20))();
  return (bool)*(undefined1 *)(lVar1 + 5);
}

// execGetMaxSpeedForNavMovement @ 148002700

void __cdecl
INavMovementInterface::execGetMaxSpeedForNavMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 200))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetVelocityForNavMovement @ 148002740

void __cdecl
INavMovementInterface::execGetVelocityForNavMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0xc0))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execIsCrouching @ 148002790

void __cdecl INavMovementInterface::execIsCrouching(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xd0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsFalling @ 1480027d0

void __cdecl INavMovementInterface::execIsFalling(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xd8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsFlying @ 148002810

void __cdecl INavMovementInterface::execIsFlying(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xf0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsMovingOnGround @ 148002850

void __cdecl
INavMovementInterface::execIsMovingOnGround(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xe0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSwimming @ 148002890

void __cdecl INavMovementInterface::execIsSwimming(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xe8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRequestDirectMove @ 148003500

void __cdecl
INavMovementInterface::execRequestDirectMove(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  int local_res8 [2];
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res8[0] = 0;
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x58))(param_1,puVar2,local_res8[0] != 0);
  return;
}

// execRequestPathMove @ 1480035f0

void __cdecl
INavMovementInterface::execRequestPathMove(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x60))(param_1,puVar2);
  return;
}

// execStopActiveMovement @ 148003690

void __cdecl
INavMovementInterface::execStopActiveMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001480036a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xf8))();
  return;
}

// execStopMovementKeepPathing @ 1480036c0

void __cdecl
INavMovementInterface::execStopMovementKeepPathing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001480036d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x100))();
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149f1eee0

UClass * __cdecl UPCGSchedulingPolicyDistanceAndDirection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSchedulingPolicyDistanceAndDirection",
               &Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton,
               StaticRegisterNativesUPCGSchedulingPolicyDistanceAndDirection,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSchedulingPolicyDistanceAndDirection>,
               InternalVTableHelperCtorCaller<UPCGSchedulingPolicyDistanceAndDirection>,local_res8,
               UPCGSchedulingPolicyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton;
}

// UPCGSchedulingPolicyDistanceAndDirection @ 149f33150

UPCGSchedulingPolicyDistanceAndDirection * __thiscall
UPCGSchedulingPolicyDistanceAndDirection::UPCGSchedulingPolicyDistanceAndDirection
          (UPCGSchedulingPolicyDistanceAndDirection *this,FVTableHelper *param_1)

{
  UPCGSchedulingPolicyBase::UPCGSchedulingPolicyBase((UPCGSchedulingPolicyBase *)this,param_1);
  this->bUseDistance = true;
  this->bUseDirection = true;
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyDistanceAndDirection__6B_;
  this->DirectionWeight = 1.0;
  this->bUseFrustumCulling = false;
  this->GenerateBoundsModifier = 1.0;
  this->CleanupBoundsModifier = 1.2;
  this->NetworkMode = All;
  this->DistanceWeight = 1.0;
  return this;
}

// UPCGSchedulingPolicyDistanceAndDirection @ 149f331b0

UPCGSchedulingPolicyDistanceAndDirection * __thiscall
UPCGSchedulingPolicyDistanceAndDirection::UPCGSchedulingPolicyDistanceAndDirection
          (UPCGSchedulingPolicyDistanceAndDirection *this,FObjectInitializer *param_1)

{
  UPCGSchedulingPolicyBase::UPCGSchedulingPolicyBase((UPCGSchedulingPolicyBase *)this,param_1);
  this->bUseDistance = true;
  this->bUseDirection = true;
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyDistanceAndDirection__6B_;
  this->DirectionWeight = 1.0;
  this->bUseFrustumCulling = false;
  this->GenerateBoundsModifier = 1.0;
  this->CleanupBoundsModifier = 1.2;
  this->NetworkMode = All;
  this->DistanceWeight = 1.0;
  return this;
}

// ~UPCGSchedulingPolicyDistanceAndDirection @ 149f34c20

void __thiscall
UPCGSchedulingPolicyDistanceAndDirection::~UPCGSchedulingPolicyDistanceAndDirection
          (UPCGSchedulingPolicyDistanceAndDirection *this)

{
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyDistanceAndDirection__6B_;
  UPCGSchedulingPolicyBase::~UPCGSchedulingPolicyBase((UPCGSchedulingPolicyBase *)this);
  return;
}

// CalculatePriority @ 149f3d630

double __thiscall
UPCGSchedulingPolicyDistanceAndDirection::CalculatePriority
          (UPCGSchedulingPolicyDistanceAndDirection *this,IPCGGenSourceBase *param_1,
          TBox<double> *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar18;
  double dVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double local_f8;
  double local_f0;
  double local_e8;
  char local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  char local_c0;
  
  if ((param_1 == (IPCGGenSourceBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InGenSource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\SchedulingPolicies\\PCGSchedulingPolicyDistanceAndDirection.cpp"
                          ,0xe,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    dVar14 = (double)(*pcVar3)();
    return dVar14;
  }
  dVar14 = 0.0;
  if ((this->bUseDistance != false) || (this->bUseDirection != false)) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
    dVar10 = __real_3ff0000000000000;
    if (local_c0 != '\0') {
      local_e8 = local_c8;
      if (param_3) {
        uVar12 = 0;
        uVar13 = 0;
        local_e8 = 0.0;
      }
      else {
        uVar12 = SUB84(local_c8,0);
        uVar13 = (undefined4)((ulonglong)local_c8 >> 0x20);
      }
      dVar17 = (param_2->Min).field0_0x0._s_0.X;
      if (dVar17 <= local_d8) {
        dVar1 = *(double *)&(param_2->Max).field0_0x0;
        uVar19 = SUB84(dVar1,0);
        uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (local_d8 <= dVar1) {
          uVar19 = SUB84(local_d8,0);
          uVar20 = (undefined4)((ulonglong)local_d8 >> 0x20);
        }
      }
      else {
        uVar19 = SUB84(dVar17,0);
        uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
      }
      dVar1 = (param_2->Min).field0_0x0._s_0.Y;
      auVar15._8_8_ = dStack_d0;
      auVar15._0_8_ = dStack_d0;
      if (dVar1 <= dStack_d0) {
        dVar2 = *(double *)((longlong)&(param_2->Max).field0_0x0 + 8);
        uVar16 = SUB84(dVar2,0);
        uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if (dStack_d0 <= dVar2) {
          uVar16 = SUB84(dStack_d0,0);
          uVar18 = (undefined4)((ulonglong)dStack_d0 >> 0x20);
        }
      }
      else {
        uVar16 = SUB84(dVar1,0);
        uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      dVar2 = *(double *)((longlong)&(param_2->Min).field0_0x0 + 0x10);
      uVar21 = SUB84(dVar2,0);
      uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= (double)CONCAT44(uVar13,uVar12)) {
        dVar2 = (param_2->Max).field0_0x0._s_0.Z;
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if ((double)CONCAT44(uVar13,uVar12) < dVar2 || (double)CONCAT44(uVar13,uVar12) == dVar2) {
          uVar21 = SUB84(local_e8,0);
          uVar22 = (undefined4)((ulonglong)local_e8 >> 0x20);
        }
      }
      dVar5 = (double)CONCAT44(uVar20,uVar19) - local_d8;
      dVar2 = (double)CONCAT44(uVar18,uVar16) - dStack_d0;
      dVar6 = (double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(uVar13,uVar12);
      uVar12 = 0;
      uVar13 = 0;
      if (this->bUseDistance != false) {
        dVar17 = (param_2->Max).field0_0x0._s_0.X - dVar17;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar5 * dVar5 + dVar2 * dVar2 + dVar6 * dVar6;
        auVar15 = sqrtpd(auVar15,auVar4);
        dVar1 = (param_2->Max).field0_0x0._s_0.Y - dVar1;
        if (dVar17 <= dVar1) {
          dVar17 = dVar1;
        }
        dVar14 = auVar15._0_8_ * (__real_3ff0000000000000 / dVar17);
        if (dVar14 <= __real_3ff0000000000000) {
          dVar14 = __real_3ff0000000000000;
        }
        dVar14 = __real_3ff0000000000000 / dVar14;
        uVar12 = SUB84(__real_3ff0000000000000,0);
        uVar13 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      dVar17 = (double)CONCAT44(uVar13,uVar12);
      if ((this->bUseDirection != false) &&
         ((**(code **)((longlong)*param_1 + 0x20))(param_1),
         dVar17 = (double)CONCAT44(uVar13,uVar12), local_e0 != '\0')) {
        dVar17 = dVar5 * dVar5 + dVar2 * dVar2 + dVar6 * dVar6;
        uVar7 = dVar2;
        uVar8 = dVar5;
        uVar9 = dVar6;
        if ((dVar17 != dVar10) &&
           (uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           __real_3e45798ee0000000 <= dVar17)) {
          dVar17 = dVar10 / SQRT(dVar17);
          uVar7 = dVar2 * dVar17;
          uVar8 = dVar5 * dVar17;
          uVar9 = dVar6 * dVar17;
        }
        dVar17 = (double)CONCAT44(uVar13,uVar12) + (double)this->DirectionWeight;
        dVar14 = dVar14 + ((local_f8 * (double)uVar8 + local_f0 * (double)uVar7 +
                           local_e8 * (double)uVar9) * __real_3fe0000000000000 +
                          __real_3fe0000000000000) * (double)this->DirectionWeight;
      }
      if (0.0 < dVar17) {
        dVar14 = dVar14 / dVar17;
      }
      if ((0.0 <= dVar14) && (dVar14 <= dVar10)) {
        return dVar14;
      }
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1360193920482410430>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\SchedulingPolicies\\PCGSchedulingPolicyDistanceAndDirection.cpp"
                          ,0x42,"Priority >= 0.0 && Priority <= 1.0");
      if (!bVar11) {
        return dVar14;
      }
      pcVar3 = (code *)swi(3);
      dVar14 = (double)(*pcVar3)();
      return dVar14;
    }
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1360193920482410473>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\SchedulingPolicies\\PCGSchedulingPolicyDistanceAndDirection.cpp"
                        ,0x17,"GenSourcePositionOptional.IsSet()");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      dVar14 = (double)(*pcVar3)();
      return dVar14;
    }
  }
  return 0.0;
}

// CullsBasedOnDirection @ 149f41520

bool __thiscall
UPCGSchedulingPolicyDistanceAndDirection::CullsBasedOnDirection
          (UPCGSchedulingPolicyDistanceAndDirection *this)

{
  return this->bUseFrustumCulling;
}

// GetPrivateStaticClass @ 149f4ddd0

UClass * __cdecl UPCGSchedulingPolicyDistanceAndDirection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSchedulingPolicyDistanceAndDirection",
               &Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton,
               StaticRegisterNativesUPCGSchedulingPolicyDistanceAndDirection,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSchedulingPolicyDistanceAndDirection>,
               InternalVTableHelperCtorCaller<UPCGSchedulingPolicyDistanceAndDirection>,local_res8,
               UPCGSchedulingPolicyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton;
}

// IsEquivalent @ 149f52320

bool __thiscall
UPCGSchedulingPolicyDistanceAndDirection::IsEquivalent
          (UPCGSchedulingPolicyDistanceAndDirection *this,UPCGSchedulingPolicyBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 == (UPCGSchedulingPolicyBase *)0x0) {
    return false;
  }
  if (this != (UPCGSchedulingPolicyDistanceAndDirection *)param_1) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_) {
      return false;
    }
    if (this->bUseDistance != (bool)(char)param_1[1]._padding_) {
      return false;
    }
    if (this->bUseDirection != (bool)*(char *)((longlong)&param_1[1]._padding_ + 1)) {
      return false;
    }
    if (*(float *)((longlong)&param_1[1]._padding_ + 4) != this->DirectionWeight) {
      return false;
    }
    if (this->bUseFrustumCulling != (bool)(char)param_1[1]._padding_) {
      return false;
    }
    if (*(float *)((longlong)&param_1[1]._padding_ + 4) != this->GenerateBoundsModifier) {
      return false;
    }
    if (*(float *)&param_1[1]._padding_ != this->CleanupBoundsModifier) {
      return false;
    }
    if (this->NetworkMode !=
        *(EPCGSchedulingPolicyNetworkMode *)((longlong)&param_1[1]._padding_ + 4)) {
      return false;
    }
  }
  return true;
}

// ShouldCull @ 149f63050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGSchedulingPolicyDistanceAndDirection::ShouldCull
          (UPCGSchedulingPolicyDistanceAndDirection *this,IPCGGenSourceBase *param_1,
          TBox<double> *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStack_4b8 [32];
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_480;
  FConvexVolume local_468;
  char local_268;
  FConvexVolume local_258;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  cVar4 = (**(code **)((longlong)*param_1 + 0x30))(param_1);
  if (this->NetworkMode == Client) {
    if (cVar4 == '\0') {
      return true;
    }
  }
  else if ((this->NetworkMode == Server) && (cVar4 != '\0')) {
    return true;
  }
  if (this->bUseFrustumCulling == false) {
    bVar5 = false;
  }
  else {
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_468,param_3);
    if (local_268 == '\0') {
      bVar5 = false;
    }
    else {
      dVar1 = ((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
              __real_3fe0000000000000;
      dVar2 = ((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
              __real_3fe0000000000000;
      dVar3 = ((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
              __real_3fe0000000000000;
      local_480._s_0.Y = dVar2 + (param_2->Min).field0_0x0._s_0.Y;
      local_480._s_0.X = dVar3 + (param_2->Min).field0_0x0._s_0.X;
      local_480._s_0.Z = dVar1 + (param_2->Min).field0_0x0._s_0.Z;
      FConvexVolume::FConvexVolume(&local_258,&local_468);
      dVar6 = (double)this->GenerateBoundsModifier + __real_3fb999999999999a;
      if (dVar6 <= (double)this->CleanupBoundsModifier) {
        dVar6 = (double)this->CleanupBoundsModifier;
      }
      dVar6 = (double)(float)dVar6;
      local_498._s_0.X = dVar3 * dVar6;
      local_498._s_0.Y = dVar2 * dVar6;
      local_498._s_0.Z = dVar1 * dVar6;
      bVar5 = FConvexVolume::IntersectBox
                        (&local_258,(TVector<double> *)&local_480._s_0,
                         (TVector<double> *)&local_498._s_0);
      bVar5 = !bVar5;
      if (local_258.PermutedPlanes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_258.PermutedPlanes.AllocatorInstance.SecondaryData);
      }
      if (local_258.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_258.Planes.AllocatorInstance.SecondaryData);
      }
      if (local_268 != '\0') {
        if (local_468.PermutedPlanes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_468.PermutedPlanes.AllocatorInstance.SecondaryData);
        }
        if (local_468.Planes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_468.Planes.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return bVar5;
}

// ShouldGenerate @ 149f63260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGSchedulingPolicyDistanceAndDirection::ShouldGenerate
          (UPCGSchedulingPolicyDistanceAndDirection *this,IPCGGenSourceBase *param_1,
          TBox<double> *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStack_4b8 [32];
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_480;
  FConvexVolume local_468;
  char local_268;
  FConvexVolume local_258;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  cVar4 = (**(code **)((longlong)*param_1 + 0x30))(param_1);
  if (this->NetworkMode == Client) {
    if (cVar4 == '\0') {
      return false;
    }
  }
  else if ((this->NetworkMode == Server) && (cVar4 != '\0')) {
    return false;
  }
  if (this->bUseFrustumCulling == false) {
    bVar5 = true;
  }
  else {
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_468,param_3);
    if (local_268 == '\0') {
      bVar5 = true;
    }
    else {
      dVar1 = ((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
              __real_3fe0000000000000;
      dVar2 = ((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
              __real_3fe0000000000000;
      dVar3 = ((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
              __real_3fe0000000000000;
      local_480._s_0.Y = dVar2 + (param_2->Min).field0_0x0._s_0.Y;
      local_480._s_0.X = dVar3 + (param_2->Min).field0_0x0._s_0.X;
      local_480._s_0.Z = dVar1 + (param_2->Min).field0_0x0._s_0.Z;
      FConvexVolume::FConvexVolume(&local_258,&local_468);
      dVar6 = (double)this->GenerateBoundsModifier;
      local_498._s_0.X = dVar3 * dVar6;
      local_498._s_0.Y = dVar2 * dVar6;
      local_498._s_0.Z = dVar1 * dVar6;
      bVar5 = FConvexVolume::IntersectBox
                        (&local_258,(TVector<double> *)&local_480._s_0,
                         (TVector<double> *)&local_498._s_0);
      if (local_258.PermutedPlanes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_258.PermutedPlanes.AllocatorInstance.SecondaryData);
      }
      if (local_258.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_258.Planes.AllocatorInstance.SecondaryData);
      }
      if (local_268 != '\0') {
        if (local_468.PermutedPlanes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_468.PermutedPlanes.AllocatorInstance.SecondaryData);
        }
        if (local_468.Planes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_468.Planes.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return bVar5;
}

// StaticRegisterNativesUPCGSchedulingPolicyDistanceAndDirection @ 149f63bb0

void __cdecl
UPCGSchedulingPolicyDistanceAndDirection::
StaticRegisterNativesUPCGSchedulingPolicyDistanceAndDirection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDistanceWeight_DEPRECATED @ 149f70860

void __cdecl
UPCGSchedulingPolicyDistanceAndDirection::execGetDistanceWeight_DEPRECATED
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execSetDistanceWeight_DEPRECATED @ 149f72570

void __cdecl
UPCGSchedulingPolicyDistanceAndDirection::execSetDistanceWeight_DEPRECATED
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}


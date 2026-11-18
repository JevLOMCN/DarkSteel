// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 9

// StaticStruct @ 14df04e00

UScriptStruct * __cdecl FIKRetargetStrideWarpingOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar1,L"IKRetargetStrideWarpingOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
}

// FIKRetargetStrideWarpingOpSettings @ 14df17830

FIKRetargetStrideWarpingOpSettings * __thiscall
FIKRetargetStrideWarpingOpSettings::FIKRetargetStrideWarpingOpSettings
          (FIKRetargetStrideWarpingOpSettings *this,FIKRetargetStrideWarpingOpSettings *param_1)

{
  TArray<FRetargetStrideWarpChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObjectBase *this_00;
  FScriptContainerElement *_Src;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this_00 = (UObjectBase *)param_1->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    this->_padding_ = (longlong)this_00;
  }
  pTVar1 = &this->ChainSettings;
  this->_padding_ = (longlong)&___7FIKRetargetStrideWarpingOpSettings__6B_;
  piVar2 = &(this->ChainSettings).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ChainSettings).ArrayNum;
  _Src = (param_1->ChainSettings).AllocatorInstance.Data;
  (this->ChainSettings).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
  }
  this->DirectionSource = param_1->DirectionSource;
  this->ForwardDirection = param_1->ForwardDirection;
  this->DirectionChain = param_1->DirectionChain;
  this->WarpForwards = param_1->WarpForwards;
  this->SidewaysOffset = param_1->SidewaysOffset;
  this->WarpSplay = param_1->WarpSplay;
  this->DebugDrawSize = param_1->DebugDrawSize;
  this->DebugDrawThickness = param_1->DebugDrawThickness;
  this->bEnableDebugDraw_DEPRECATED = param_1->bEnableDebugDraw_DEPRECATED;
  return this;
}

// operator= @ 14df1e3c0

FIKRetargetStrideWarpingOpSettings * __thiscall
FIKRetargetStrideWarpingOpSettings::operator=
          (FIKRetargetStrideWarpingOpSettings *this,FIKRetargetStrideWarpingOpSettings *param_1)

{
  TArray<FRetargetStrideWarpChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  pTVar1 = &this->ChainSettings;
  if (pTVar1 != &param_1->ChainSettings) {
    iVar3 = (this->ChainSettings).ArrayMax;
    piVar2 = &(this->ChainSettings).ArrayMax;
    _Src = (param_1->ChainSettings).AllocatorInstance.Data;
    iVar4 = (param_1->ChainSettings).ArrayNum;
    (this->ChainSettings).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
      }
    }
  }
  this->DirectionSource = param_1->DirectionSource;
  this->ForwardDirection = param_1->ForwardDirection;
  this->DirectionChain = param_1->DirectionChain;
  this->WarpForwards = param_1->WarpForwards;
  this->SidewaysOffset = param_1->SidewaysOffset;
  this->WarpSplay = param_1->WarpSplay;
  this->DebugDrawSize = param_1->DebugDrawSize;
  this->DebugDrawThickness = param_1->DebugDrawThickness;
  this->bEnableDebugDraw_DEPRECATED = param_1->bEnableDebugDraw_DEPRECATED;
  return this;
}

// operator== @ 14df1eeb0

bool __thiscall
FIKRetargetStrideWarpingOpSettings::operator==
          (FIKRetargetStrideWarpingOpSettings *this,FIKRetargetStrideWarpingOpSettings *param_1)

{
  bool bVar1;
  
  if (((this->DirectionSource == param_1->DirectionSource) &&
      (this->ForwardDirection == param_1->ForwardDirection)) &&
     (this->DirectionChain == param_1->DirectionChain)) {
    bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (this->WarpForwards,param_1->WarpForwards,4);
    if (bVar1) {
      bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                        (this->SidewaysOffset,param_1->SidewaysOffset,4);
      if (bVar1) {
        bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                          (this->WarpSplay,param_1->WarpSplay,4);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// CopySettingsAtRuntime @ 14df2e410

void __thiscall
FIKRetargetStrideWarpingOpSettings::CopySettingsAtRuntime
          (FIKRetargetStrideWarpingOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  FName local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(local_res18,"ChainsToStrideWarp");
      PropertiesToIgnore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      PropertiesToIgnore.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&PropertiesToIgnore.AllocatorInstance,1,&PropertiesToIgnore.ArrayMax);
      *(FName *)PropertiesToIgnore.AllocatorInstance.Data = local_res18[0];
      atexit(`FIKRetargetStrideWarpingOpSettings::CopySettingsAtRuntime'::__l2::
             _dynamic_atexit_destructor_for__PropertiesToIgnore__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar1,L"IKRetargetStrideWarpingOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton,
             param_1,this,&PropertiesToIgnore);
  return;
}

// GetAxisVector @ 14df34e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
FIKRetargetStrideWarpingOpSettings::GetAxisVector
          (TVector<double> *__return_storage_ptr__,EBasicAxis *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  switch(*param_1) {
  case X:
    dVar2 = (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case Y:
    dVar2 = (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case Z:
    dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case NegX:
    uVar6 = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_ ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar7 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
    uVar8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
    uVar9 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0) ^
            (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_ ^
         (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar6;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
    return __return_storage_ptr__;
  case NegY:
    uVar6 = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_ ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar7 = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
    uVar8 = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
    uVar9 = SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0) ^
            (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_ ^
         (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar6;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
    return __return_storage_ptr__;
  case NegZ:
    uVar6 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar7 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
    uVar8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
    uVar9 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^
            (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^
         (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar6;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
    return __return_storage_ptr__;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\StrideWarpingOp.cpp"
                     ,0x3a,L"");
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (!bVar4) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TVector<double> *)(*pcVar1)();
  return pTVar5;
}

// GetControllerType @ 14df37e40

UClass * __thiscall
FIKRetargetStrideWarpingOpSettings::GetControllerType(FIKRetargetStrideWarpingOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetStrideWarpingController",
               &Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton,
               UIKRetargetStrideWarpingController::
               StaticRegisterNativesUIKRetargetStrideWarpingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetStrideWarpingController>,
               InternalVTableHelperCtorCaller<UIKRetargetStrideWarpingController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton;
}

// PostLoad @ 14df4c5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetStrideWarpingOpSettings::PostLoad(FIKRetargetStrideWarpingOpSettings *this,Type param_1)

{
  if ((int)param_1 < 10) {
    *(bool *)((longlong)&this->_padding_ + 4) = this->bEnableDebugDraw_DEPRECATED;
  }
  return;
}

// Serialize @ 14df53a50

bool __thiscall
FIKRetargetStrideWarpingOpSettings::Serialize
          (FIKRetargetStrideWarpingOpSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar2,L"IKRetargetStrideWarpingOpSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar2,L"IKRetargetStrideWarpingOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(this->_padding_ + 0x10))(this,iVar1);
  }
  return true;
}


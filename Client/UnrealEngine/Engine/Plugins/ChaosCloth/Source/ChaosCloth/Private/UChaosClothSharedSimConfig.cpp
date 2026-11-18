// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 10

// StaticClass @ 14db77140

UClass * __cdecl UChaosClothSharedSimConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothSharedSimConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothSharedSimConfig",
               &Z_Registration_Info_UClass_UChaosClothSharedSimConfig.InnerSingleton,
               StaticRegisterNativesUChaosClothSharedSimConfig,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UChaosClothSharedSimConfig>,
               InternalVTableHelperCtorCaller<UChaosClothSharedSimConfig>,local_res8,
               UClothSharedConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothSharedSimConfig.InnerSingleton;
}

// UChaosClothSharedSimConfig @ 14db9d840

UChaosClothSharedSimConfig * __thiscall
UChaosClothSharedSimConfig::UChaosClothSharedSimConfig
          (UChaosClothSharedSimConfig *this,FVTableHelper *param_1)

{
  UClothSharedConfigCommon::UClothSharedConfigCommon((UClothSharedConfigCommon *)this,param_1);
  this->IterationCount = 1;
  this->_padding_ = (longlong)&___7UChaosClothSharedSimConfig__6B_;
  this->MaxIterationCount = 10;
  this->SubdivisionCount = 1;
  this->bUseLocalSpaceSimulation = true;
  this->bUseXPBDConstraints = false;
  return this;
}

// UChaosClothSharedSimConfig @ 14db9d890

UChaosClothSharedSimConfig * __thiscall
UChaosClothSharedSimConfig::UChaosClothSharedSimConfig(UChaosClothSharedSimConfig *this)

{
  UClothSharedConfigCommon::UClothSharedConfigCommon((UClothSharedConfigCommon *)this);
  this->IterationCount = 1;
  this->_padding_ = (longlong)&___7UChaosClothSharedSimConfig__6B_;
  this->MaxIterationCount = 10;
  this->SubdivisionCount = 1;
  this->bUseLocalSpaceSimulation = true;
  this->bUseXPBDConstraints = false;
  return this;
}

// ~UChaosClothSharedSimConfig @ 14dba07a0

void __thiscall
UChaosClothSharedSimConfig::~UChaosClothSharedSimConfig(UChaosClothSharedSimConfig *this)

{
  this->_padding_ = (longlong)&___7UChaosClothSharedSimConfig__6B_;
  UClothSharedConfigCommon::~UClothSharedConfigCommon((UClothSharedConfigCommon *)this);
  return;
}

// GetPrivateStaticClass @ 14dbfed80

UClass * __cdecl UChaosClothSharedSimConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothSharedSimConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothSharedSimConfig",
               &Z_Registration_Info_UClass_UChaosClothSharedSimConfig.InnerSingleton,
               StaticRegisterNativesUChaosClothSharedSimConfig,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UChaosClothSharedSimConfig>,
               InternalVTableHelperCtorCaller<UChaosClothSharedSimConfig>,local_res8,
               UClothSharedConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothSharedSimConfig.InnerSingleton;
}

// MigrateFrom @ 14dc07430

void __thiscall
UChaosClothSharedSimConfig::MigrateFrom
          (UChaosClothSharedSimConfig *this,FClothConfig_Legacy *param_1)

{
  return;
}

// PostLoad @ 14dc094b0

void __thiscall UChaosClothSharedSimConfig::PostLoad(UChaosClothSharedSimConfig *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UChaosClothSharedSimConfig **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 14dc10890

void __thiscall
UChaosClothSharedSimConfig::Serialize(UChaosClothSharedSimConfig *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dc108b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FChaosClothSharedConfigCustomVersion::GUID);
  return;
}

// Serialize @ 14dc108c0

void __thiscall
UChaosClothSharedSimConfig::Serialize
          (UChaosClothSharedSimConfig *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FChaosClothSharedConfigCustomVersion::GUID);
  return;
}

// StaticRegisterNativesUChaosClothSharedSimConfig @ 14dc1ba10

void __cdecl UChaosClothSharedSimConfig::StaticRegisterNativesUChaosClothSharedSimConfig(void)

{
  return;
}


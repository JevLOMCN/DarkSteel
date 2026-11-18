// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149f1dd30

UClass * __cdecl UPCGSettingsInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsInstance",
               &Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton,
               StaticRegisterNativesUPCGSettingsInstance,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSettingsInstance>,
               InternalVTableHelperCtorCaller<UPCGSettingsInstance>,local_res8,
               UPCGSettingsInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton;
}

// UPCGSettingsInstance @ 149f33330

UPCGSettingsInstance * __thiscall
UPCGSettingsInstance::UPCGSettingsInstance(UPCGSettingsInstance *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPCGSettingsInstance__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// UPCGSettingsInstance @ 149f33370

UPCGSettingsInstance * __thiscall
UPCGSettingsInstance::UPCGSettingsInstance(UPCGSettingsInstance *this,FObjectInitializer *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPCGSettingsInstance__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// ~UPCGSettingsInstance @ 149f34cb0

void __thiscall UPCGSettingsInstance::~UPCGSettingsInstance(UPCGSettingsInstance *this)

{
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// BeginDestroy @ 149f3c8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGSettingsInstance::BeginDestroy(UPCGSettingsInstance *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGSettingsInstance **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 149f4df50

UClass * __cdecl UPCGSettingsInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsInstance",
               &Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton,
               StaticRegisterNativesUPCGSettingsInstance,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSettingsInstance>,
               InternalVTableHelperCtorCaller<UPCGSettingsInstance>,local_res8,
               UPCGSettingsInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton;
}

// GetSettings @ 149f4ed20

UPCGSettings * __thiscall UPCGSettingsInstance::GetSettings(UPCGSettingsInstance *this)

{
  return (this->Settings).field0_0x0.DebugPtr;
}

// GetSettings @ 149f4ed30

UPCGSettings * __thiscall UPCGSettingsInstance::GetSettings(UPCGSettingsInstance *this)

{
  return (this->Settings).field0_0x0.DebugPtr;
}

// PostEditImport @ 149f57b60

void __thiscall UPCGSettingsInstance::PostEditImport(UPCGSettingsInstance *this)

{
  longlong lVar1;
  
  LOCK();
  UNLOCK();
  lVar1 = (longlong)UPCGData::UIDCounter + 1;
  UPCGData::UIDCounter = (atomic<unsigned___int64>)((longlong)UPCGData::UIDCounter + 1);
  this->_padding_ = lVar1;
  return;
}

// PostLoad @ 149f580a0

void __thiscall UPCGSettingsInstance::PostLoad(UPCGSettingsInstance *this)

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
    if (*(UPCGSettingsInstance **)FVar5 == this) {
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

// SetSettings @ 149f62c20

void __thiscall UPCGSettingsInstance::SetSettings(UPCGSettingsInstance *this,UPCGSettings *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Settings).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Settings).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUPCGSettingsInstance @ 149f63c30

void __cdecl UPCGSettingsInstance::StaticRegisterNativesUPCGSettingsInstance(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 8

// StaticClass @ 1471b4ef0

UClass * __cdecl UMassObserverProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassObserverProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassObserverProcessor",
               &Z_Registration_Info_UClass_UMassObserverProcessor.InnerSingleton,
               StaticRegisterNativesUMassObserverProcessor,0xf8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Mass",InternalConstructor<UMassObserverProcessor>,
               InternalVTableHelperCtorCaller<UMassObserverProcessor>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassObserverProcessor.InnerSingleton;
}

// UMassObserverProcessor @ 1471dd310

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassObserverProcessor * __thiscall
UMassObserverProcessor::UMassObserverProcessor(UMassObserverProcessor *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->bAutoRegisterWithObserverRegistry = true;
  this->_padding_ = (longlong)&___7UMassObserverProcessor__6B_;
  (this->ObservedType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->Operation = MAX;
  this->ObservedOperations = None;
  return this;
}

// UMassObserverProcessor @ 1471dd360

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassObserverProcessor * __thiscall
UMassObserverProcessor::UMassObserverProcessor(UMassObserverProcessor *this)

{
  byte *pbVar1;
  
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&___7UMassObserverProcessor__6B_;
  (this->ObservedType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->bAutoRegisterWithObserverRegistry = true;
  this->Operation = MAX;
  this->ObservedOperations = None;
  return this;
}

// ~UMassObserverProcessor @ 1471e0e50

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassObserverProcessor::~UMassObserverProcessor(UMassObserverProcessor *this)

{
  this->_padding_ = (longlong)&___7UMassObserverProcessor__6B_;
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// GetPrivateStaticClass @ 1472249c0

UClass * __cdecl UMassObserverProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassObserverProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassObserverProcessor",
               &Z_Registration_Info_UClass_UMassObserverProcessor.InnerSingleton,
               StaticRegisterNativesUMassObserverProcessor,0xf8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Mass",InternalConstructor<UMassObserverProcessor>,
               InternalVTableHelperCtorCaller<UMassObserverProcessor>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassObserverProcessor.InnerSingleton;
}

// PostInitProperties @ 14723cd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMassObserverProcessor::PostInitProperties(UMassObserverProcessor *this)

{
  longlong *plVar1;
  EMassObservedOperation EVar2;
  longlong lVar3;
  UScriptStruct *pUVar4;
  EMassObservedOperationFlags EVar5;
  longlong *plVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  UObject::PostInitProperties((UObject *)this);
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
  plVar1 = &this->_padding_;
  if (plVar1 != plVar6) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)&this->_padding_ = (int)plVar6[1];
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  lVar3 = this->_padding_;
  if (((this->_padding_ & 0x10) != 0) && ((*(byte *)(lVar3 + 0xd4) & 1) == 0)) {
    EVar2 = this->Operation;
    if (EVar2 != MAX) {
      this->Operation = MAX;
      EVar5 = Remove;
      if (EVar2 == Add) {
        EVar5 = Add;
      }
      this->ObservedOperations = this->ObservedOperations | EVar5;
    }
    pUVar4 = (this->ObservedType).field0_0x0.DebugPtr;
    if ((pUVar4 != (UScriptStruct *)0x0) && (this->ObservedOperations != None)) {
                    /* WARNING: Could not recover jumptable at 0x00014723ce5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x310))(this);
      return;
    }
    if ((this->bAutoRegisterWithObserverRegistry != false) && (1 < (byte)LogMass._0_1_)) {
      if (pUVar4 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      local_res8 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Register @ 14723e700

void __thiscall UMassObserverProcessor::Register(UMassObserverProcessor *this)

{
  UMassObserverRegistry *this_00;
  TNotNull<UScriptStruct_const_*> TVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_01;
  UObject *local_res8;
  
  if (this->bAutoRegisterWithObserverRegistry != false) {
    if ((this->ObservedType).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObservedType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverProcessor.cpp"
                         ,0x36,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_01 = UMassObserverRegistry::StaticClass();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    local_res8 = (UObject *)this->_padding_;
    this_00 = (UMassObserverRegistry *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    TVar1.Val = (UScriptStruct *)(this->ObservedType).field0_0x0.ObjectPtr.field0_0x0.Handle;
    if (TVar1.Val == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    UMassObserverRegistry::RegisterObserver
              (this_00,TVar1,this->ObservedOperations,(TSubclassOf<UMassProcessor>)&local_res8);
  }
  return;
}

// StaticRegisterNativesUMassObserverProcessor @ 147250730

void __cdecl UMassObserverProcessor::StaticRegisterNativesUMassObserverProcessor(void)

{
  return;
}


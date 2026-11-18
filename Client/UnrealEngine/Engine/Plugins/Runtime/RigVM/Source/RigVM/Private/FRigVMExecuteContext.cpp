// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 13

// StaticStruct @ 14a0717f0

UScriptStruct * __cdecl FRigVMExecuteContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// FRigVMExecuteContext @ 14a079970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExecuteContext * __thiscall
FRigVMExecuteContext::FRigVMExecuteContext(FRigVMExecuteContext *this)

{
  this->_padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  (this->EventName).ComparisonIndex = 0;
  (this->EventName).Number = 0;
  (this->FunctionName).ComparisonIndex = 0;
  (this->FunctionName).Number = 0;
  this->FramesPerSecond = 0.016666666666666666;
  this->InstructionIndex = 0;
  this->NumExecutions = 0;
  this->DeltaTime = 0.0;
  this->AbsoluteTime = 0.0;
  *(undefined8 *)&this->RuntimeSettings = 0x800;
  (this->RuntimeSettings).LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  (this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NameCache = (FRigVMNameCache *)0x0;
  this->DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  this->DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  *&(this->ToWorldSpaceTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ToWorldSpaceTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Traits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Traits).ArrayNum = 0;
  (this->Traits).ArrayMax = 0;
  (this->AdditionalTraitMemoryHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalTraitMemoryHandles).ArrayNum = 0;
  (this->AdditionalTraitMemoryHandles).ArrayMax = 0;
  this->OwningObject = (UObject *)0x0;
  this->OwningActor = (AActor *)0x0;
  this->World = (UWorld *)0x0;
  this->ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  return this;
}

// ~FRigVMExecuteContext @ 14a07ba00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::~FRigVMExecuteContext(FRigVMExecuteContext *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->AdditionalTraitMemoryHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Traits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14a07d350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExecuteContext * __thiscall
FRigVMExecuteContext::operator=(FRigVMExecuteContext *this,FRigVMExecuteContext *param_1)

{
  int *piVar1;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar6;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar7;
  double dVar8;
  
  this->EventName = param_1->EventName;
  this->FunctionName = param_1->FunctionName;
  this->InstructionIndex = param_1->InstructionIndex;
  this->NumExecutions = param_1->NumExecutions;
  this->DeltaTime = param_1->DeltaTime;
  this->AbsoluteTime = param_1->AbsoluteTime;
  this->FramesPerSecond = param_1->FramesPerSecond;
  (this->RuntimeSettings).MaximumArraySize = (param_1->RuntimeSettings).MaximumArraySize;
  pTVar5 = (param_1->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  pTVar6 = (param_1->RuntimeSettings).LogFunction.Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  (this->RuntimeSettings).LogFunction.Object = pTVar6;
  (this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this->NameCache = param_1->NameCache;
  pTVar2 = &this->Traits;
  this->DrawInterfacePtr = param_1->DrawInterfacePtr;
  this->DrawContainerPtr = param_1->DrawContainerPtr;
  dVar8 = (param_1->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
  (this->ToWorldSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
  (this->ToWorldSpaceTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
  this->OwningObject = param_1->OwningObject;
  this->OwningActor = param_1->OwningActor;
  this->World = param_1->World;
  if (pTVar2 != &param_1->Traits) {
    iVar3 = (this->Traits).ArrayMax;
    piVar1 = &(this->Traits).ArrayMax;
    _Src = (param_1->Traits).AllocatorInstance.Data;
    iVar4 = (param_1->Traits).ArrayNum;
    (this->Traits).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
      }
    }
  }
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_>::operator=
            (&this->AdditionalTraitMemoryHandles,&param_1->AdditionalTraitMemoryHandles);
  this->ExtendedExecuteContext = param_1->ExtendedExecuteContext;
  return this;
}

// Copy @ 14a082690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::Copy(FRigVMExecuteContext *this,FRigVMExecuteContext *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->EventName = param_1->EventName;
  this->FunctionName = param_1->FunctionName;
  this->InstructionIndex = param_1->InstructionIndex;
  this->NumExecutions = param_1->NumExecutions;
  (this->RuntimeSettings).MaximumArraySize = (param_1->RuntimeSettings).MaximumArraySize;
  pTVar1 = (param_1->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->RuntimeSettings).LogFunction.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  (this->RuntimeSettings).LogFunction.Object = pTVar2;
  (this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->NameCache = param_1->NameCache;
  return;
}

// Initialize @ 14a09d6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::Initialize(FRigVMExecuteContext *this)

{
  if (this->NameCache == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    this->NameCache =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  return;
}

// Reset @ 14a0a2df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::Reset(FRigVMExecuteContext *this)

{
  this->InstructionIndex = 0;
  return;
}

// SerializeFromMismatchedTag @ 14a0a6e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRigVMExecuteContext::SerializeFromMismatchedTag
          (FRigVMExecuteContext *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  UClass *pUVar5;
  UScriptStruct *this_00;
  FStructOnScope *this_01;
  FStructOnScope *pFVar6;
  void *pvVar7;
  FPropertyTypeName local_res10 [2];
  FName local_res20;
  TRawPtrProxy<FStructOnScope> local_48 [2];
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TSharedPtr<FStructOnScope,1> local_28;
  TStringView<wchar_t> local_18;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FLazyName::Resolve(&ControlRigExecuteContextName);
  bVar2 = UE::FPropertyTypeName::IsStruct(local_res10,local_res20);
  if (!bVar2) {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&CRExecuteContextPath,L"/Script/ControlRig.ControlRigExecuteContext");
    atexit(`FRigVMExecuteContext::SerializeFromMismatchedTag'::__l5::
           _dynamic_atexit_destructor_for__CRExecuteContextPath__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar6 = (FStructOnScope *)0x0;
  iStack_30 = 0;
  if (CRExecuteContextPath.Data.ArrayNum == 0) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_38 = CRExecuteContextPath.Data.AllocatorInstance.Data;
    if (CRExecuteContextPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_14a0a6f36;
  }
  sVar4 = wcslen((wchar_t *)local_38);
  iStack_30 = (int)sVar4;
LAB_14a0a6f36:
  pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_18._12_4_ = uStack_2c;
  local_18.Size = iStack_30;
  local_18.DataPtr = (wchar_t *)local_38;
  this_00 = (UScriptStruct *)
            StaticFindFirstObject
                      (pUVar5,&local_18,EnsureIfAmbiguous|NativeFirst,NoLogging,(wchar_t *)0x0);
  if ((this_00 == (UScriptStruct *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMExecuteContext.cpp"
                         ,0x45,L"FControlRigExecuteContext was not found."), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_01 = ::operator_new(0x28);
  if (this_01 != (FStructOnScope *)0x0) {
    pFVar6 = FStructOnScope::FStructOnScope(this_01,(UStruct *)this_00);
  }
  local_48[0].Object = pFVar6;
  TSharedPtr<FStructOnScope,1>::TSharedPtr<FStructOnScope,1><FStructOnScope>(&local_28,local_48);
  if ((local_28.Object == (FStructOnScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pvVar7 = (void *)(**(code **)((local_28.Object)->_padding_ + 0x18))(local_28.Object);
  UScriptStruct::SerializeItem(this_00,param_2,pvVar7,(void *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return true;
}

// SetOwningActor @ 14a0a71c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::SetOwningActor(FRigVMExecuteContext *this,AActor *param_1)

{
  UWorld *pUVar1;
  
  this->OwningActor = param_1;
  this->World = (UWorld *)0x0;
  if (param_1 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(param_1);
    this->World = pUVar1;
  }
  return;
}

// SetOwningComponent @ 14a0a7200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMExecuteContext::SetOwningComponent(FRigVMExecuteContext *this,USceneComponent *param_1)

{
  AActor *this_00;
  double dVar1;
  UWorld *pUVar2;
  
  this->OwningObject = (UObject *)param_1;
  this->OwningActor = (AActor *)0x0;
  this->World = (UWorld *)0x0;
  *&(this->ToWorldSpaceTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ToWorldSpaceTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (param_1 != (USceneComponent *)0x0) {
    dVar1 = (param_1->ComponentToWorld).Rotation.XY.m128d_f64[1];
    (this->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Rotation.XY.m128d_f64[0];
    (this->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    (this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    (this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
    (this->ToWorldSpaceTransform).Translation.XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
    (this->ToWorldSpaceTransform).Translation.XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[1];
    (this->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
    (this->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
    (this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
    (this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    (this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
    (this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
    this_00 = (AActor *)param_1->_padding_;
    this->OwningActor = this_00;
    if (this_00 != (AActor *)0x0) {
      pUVar2 = AActor::GetWorld(this_00);
      this->World = pUVar2;
    }
  }
  return;
}

// SetOwningObject @ 14a0a7300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::SetOwningObject(FRigVMExecuteContext *this,UObject *param_1)

{
  int iVar1;
  AActor *this_00;
  UClass *pUVar2;
  UWorld *pUVar3;
  
  this->OwningObject = param_1;
  this->OwningActor = (AActor *)0x0;
  this->World = (UWorld *)0x0;
  *&(this->ToWorldSpaceTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ToWorldSpaceTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pUVar3 = (UWorld *)(**(code **)(*(longlong *)this->OwningObject + 0x180))();
      this->World = pUVar3;
    }
    else {
      this_00 = *(AActor **)&param_1[4].field_0x8;
      this->OwningActor = this_00;
      this->World = (UWorld *)0x0;
      if (this_00 != (AActor *)0x0) {
        pUVar3 = AActor::GetWorld(this_00);
        this->World = pUVar3;
        return;
      }
    }
  }
  return;
}

// SetWorld @ 14a0a7480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExecuteContext::SetWorld(FRigVMExecuteContext *this,UWorld *param_1)

{
  this->World = param_1;
  return;
}

// Log @ 14a1b0850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMExecuteContext::Log(FRigVMExecuteContext *this,FRigVMLogSettings *param_1,FString *param_2)

{
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FRigVMExecuteContext *local_res8;
  
  pTVar1 = (this->RuntimeSettings).LogFunction.Object;
  if (pTVar1 != (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
                 *)0x0) {
    local_res8 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
    pcVar2 = *(code **)pTVar1;
    plVar4 = (longlong *)&pTVar1->field_0x10;
    if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&pTVar1->field_0x28;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_1,&local_res8,param_2);
    return;
  }
  if (param_1->Severity == Error) {
    if (1 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      return;
    }
  }
  else if (param_1->Severity == Warning) {
    if (2 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                  ::__l33::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      return;
    }
  }
  else if (3 < (byte)LogRigVM._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                ::__l53::LOG_Static,(FLogCategoryBase *)&LogRigVM);
  }
  return;
}


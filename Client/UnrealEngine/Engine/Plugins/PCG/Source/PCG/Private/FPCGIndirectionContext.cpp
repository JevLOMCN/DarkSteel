// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ~FPCGIndirectionContext @ 149be9550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGIndirectionContext::~FPCGIndirectionContext(FPCGIndirectionContext *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FPCGIndirectionContext__6B_;
  FPCGContext::Release(this->InnerContext);
  pTVar1 = (this->InnerElement).SharedReferenceCount.ReferenceController;
  this->InnerContext = (FPCGContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  return;
}

// AddExtraStructReferencedObjects @ 149bfef60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGIndirectionContext::AddExtraStructReferencedObjects
          (FPCGIndirectionContext *this,FReferenceCollector *param_1)

{
  FPCGContext *pFVar1;
  
  if ((this->InnerSettings).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->InnerSettings,0,0);
  }
  pFVar1 = this->InnerContext;
  if (pFVar1 != (FPCGContext *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_1);
  }
  return;
}

// SetupInnerContext @ 149c33c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGIndirectionContext::SetupInnerContext(FPCGIndirectionContext *this)

{
  UPCGSettings *pUVar1;
  IPCGElement *pIVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  bool bVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  FPCGContext *pFVar9;
  FPCGDataPtrWrapper *this_00;
  longlong *plVar10;
  UObject *local_res8;
  FWeakObjectPtr local_88;
  undefined8 uStack_80;
  FPCGDataCollection *local_78;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  FPCGDataCollection local_58;
  
  FPCGDataCollection::FPCGDataCollection(&local_58,(FPCGDataCollection *)&this->_padding_);
  pUVar1 = (this->InnerSettings).field0_0x0.DebugPtr;
  if (local_58.TaggedData.ArrayNum == local_58.TaggedData.ArrayMax) {
    local_58.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_58,&local_58.TaggedData.ArrayMax);
  }
  pUVar8 = (UObject *)0x0;
  this_00 = (FPCGDataPtrWrapper *)
            (local_58.TaggedData.AllocatorInstance.Data +
            (longlong)local_58.TaggedData.ArrayNum * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_58.TaggedData.ArrayNum = local_58.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar1);
  if (((this->InnerElement).Object == (IPCGElement *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->InnerElement).Object;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0x10);
  if ((this->_padding_ == 0) ||
     (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar6)) {
    plVar10 = (longlong *)0x0;
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    uStack_80 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)this->_padding_;
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    uStack_80 = (longlong *)0x0;
    if ((plVar10 != (longlong *)0x0) &&
       (pUVar7 = (UObject *)(**(code **)(*plVar10 + 8))(plVar10), pUVar7 != (UObject *)0x0)) {
      pUVar8 = pUVar7;
    }
  }
  local_res8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_res8);
  bVar6 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_88,(void *)0x0);
  if (!bVar6) {
    uStack_80 = plVar10;
  }
  local_78 = &local_58;
  local_60 = 0;
  local_70 = local_88.ObjectIndex;
  iStack_6c = local_88.ObjectSerialNumber;
  uStack_68 = (undefined4)uStack_80;
  uStack_64 = uStack_80._4_4_;
  pFVar9 = (FPCGContext *)(*pcVar3)(pIVar2,&local_78);
  this->InnerContext = pFVar9;
  if ((pFVar9 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                         ,0xdb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FPCGContext::InitializeGraphExecutor((FPCGContext *)this,this->InnerContext);
  FPCGContext::InitializeSettings(this->InnerContext,false);
  this->InnerContext->TaskId = this->_padding_;
  this->InnerContext->CompiledTaskId = this->_padding_;
  pFVar9 = this->InnerContext;
  uVar4 = *(undefined1 *)((longlong)&this->_padding_ + 4);
  uVar5 = *(undefined3 *)((longlong)&this->_padding_ + 5);
  (pFVar9->DependenciesCrc).Value = *(undefined4 *)&this->_padding_;
  (pFVar9->DependenciesCrc).bValid = (bool)uVar4;
  *(undefined3 *)&(pFVar9->DependenciesCrc).field_0x5 = uVar5;
  FPCGAsyncState::operator=(&this->InnerContext->AsyncState,(FPCGAsyncState *)&this->_padding_);
  if (local_58.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_58.TaggedData.AllocatorInstance.Data,
             local_58.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_58.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_58.TaggedData.AllocatorInstance.Data);
  }
  return;
}


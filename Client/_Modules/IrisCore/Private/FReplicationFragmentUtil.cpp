// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// CreateAndRegisterFragmentsForObject @ 1442b9030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl
UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
          (FCreateFragmentParams *param_1,FFragmentRegistrationContext *param_2,
          TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *param_3)

{
  UObject *pUVar1;
  UObject *pUVar2;
  UClass *this;
  UObjectBaseUtility *this_00;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar3;
  code *pcVar4;
  FCreateFragmentParams *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPropertyReplicationFragment *pFVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  FCreateFragmentParams *local_res8;
  undefined1 local_res10;
  FPropertyReplicationFragment *local_90;
  FScriptContainerElement *local_88;
  TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
  local_80;
  FString local_70;
  FParameters local_60;
  
  bVar15 = -1 < CpuChannel->Enabled;
  local_res8 = param_1;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId30,
               "FReplicationFragmentUtil_CreateAndRegisterFragmentsForObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationFragmentUtil.cpp"
               ,0x1e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId30);
  }
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_60);
  local_60.DescriptorRegistry = param_2->ReplicationStateRegistry;
  pUVar1 = param_1->ObjectInstance;
  pUVar2 = param_2->MainObjectInstance;
  local_60.ReplicationSystem = param_2->ReplicationSystem;
  this = *(UClass **)&pUVar1->field_0x10;
  if ((param_1->RegistrationFlags & InitializeDefaultStateFromClassDefaults) == None) {
    if (pUVar2 == pUVar1) {
      local_60.DefaultStateSource = param_2->Template;
      goto LAB_1442b9101;
    }
LAB_1442b9106:
    local_60.DefaultStateSource = UObject::GetArchetype(param_1->ObjectInstance);
    if (local_60.DefaultStateSource != (UObject *)0x0) goto LAB_1442b9114;
  }
  else {
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    local_60.DefaultStateSource = (this->ClassDefaultObject).field0_0x0.DebugPtr;
LAB_1442b9101:
    if (local_60.DefaultStateSource == (UObject *)0x0) goto LAB_1442b9106;
LAB_1442b9114:
    if ((*(uint *)&(local_60.DefaultStateSource)->field_0x8 >> 0x1e & 1) == 0) goto LAB_1442b91a5;
  }
  if (1 < (byte)LogIris._0_1_) {
    this_00 = (UObjectBaseUtility *)param_1->ObjectInstance;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_70,(UObject *)0x0,None);
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  local_60.DefaultStateSource = *(UObject **)&(this->ClassDefaultObject).field0_0x0;
LAB_1442b91a5:
  if (pUVar2 == pUVar1) {
    param_2->MainObjectDefaultStateSource = local_60.DefaultStateSource;
  }
  if ((param_1->RegistrationFlags & AllowFastArraysWithAdditionalProperties) != None) {
    local_60._24_1_ = local_60._24_1_ | 8;
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  FReplicationStateDescriptorBuilder::CreateDescriptorsForClass(&local_80,this,&local_60);
  uVar6 = local_80._8_8_;
  pFVar5 = local_res8;
  uVar12 = (ulonglong)local_80.ArrayNum;
  uVar11 = (char)param_1->RegistrationFlags & RegisterRPCsOnly;
  uVar8 = 0;
  pFVar13 = local_80.AllocatorInstance.Data + uVar12 * 8;
  FVar14.Data = local_80.AllocatorInstance.Data;
  local_res10 = uVar11;
  local_88 = pFVar13;
  while( true ) {
    if (local_80.ArrayNum != (int)uVar12) {
      local_res8 = (FCreateFragmentParams *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
      uVar11 = local_res10;
    }
    if (FVar14.Data == pFVar13) break;
    if ((uVar11 == None) || ((*(FReplicationStateDescriptor **)FVar14.Data)->FunctionCount != 0)) {
      TVar3.Reference = *(FReplicationStateDescriptor **)FVar14.Data;
      pUVar1 = pFVar5->ObjectInstance;
      local_90 = (FPropertyReplicationFragment *)0x0;
      if ((TVar3.Reference)->CreateAndRegisterReplicationFragmentFunction ==
          (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
           *)0x0) {
        if ((TVar3.Reference == (FReplicationStateDescriptor *)0x0) ||
           (((TVar3.Reference)->Traits & IsFastArrayReplicationState) != None)) {
          pFVar10 = (FPropertyReplicationFragment *)0x0;
        }
        else {
          pFVar10 = ::operator_new(0x30);
          if (pFVar10 == (FPropertyReplicationFragment *)0x0) {
            pFVar10 = (FPropertyReplicationFragment *)0x0;
            _DAT_00000008 = _DAT_00000008 | 8;
            FPropertyReplicationFragment::Register((FPropertyReplicationFragment *)0x0,param_2);
          }
          else {
            pFVar10 = FPropertyReplicationFragment::FPropertyReplicationFragment
                                (pFVar10,param_2->FragmentTraits,pUVar1,TVar3.Reference);
            *(uint *)&pFVar10->_padding_ = (uint)pFVar10->_padding_ | 8;
            FPropertyReplicationFragment::Register(pFVar10,param_2);
          }
        }
      }
      else {
        pFVar10 = (FPropertyReplicationFragment *)
                  (*(TVar3.Reference)->CreateAndRegisterReplicationFragmentFunction)
                            (pUVar1,TVar3.Reference,param_2);
      }
      pFVar13 = local_88;
      uVar11 = local_res10;
      local_90 = pFVar10;
      if ((pFVar10 != (FPropertyReplicationFragment *)0x0) &&
         (param_3 != (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)0x0)) {
        pFVar13 = (param_3->AllocatorInstance).Data;
        if ((pFVar13 <= (FScriptContainerElement *)&local_90) &&
           (((FScriptContainerElement *)&local_90 < pFVar13 + (longlong)param_3->ArrayMax * 8 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        uVar8 = uVar8 + 1;
        param_3->ArrayNum = iVar9 + 1;
        *(FPropertyReplicationFragment **)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8)
             = local_90;
        pFVar13 = local_88;
        uVar11 = local_res10;
      }
    }
    uVar12 = uVar6 & 0xffffffff;
    FVar14.Data = FVar14.Data + 8;
  }
  if ((param_2->Fragments).ArrayNum < 1) {
    param_2->bIsAFragmentlessNetObject = true;
  }
  DestructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
            ((TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)
             local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar8;
}

// CreateAndRegisterFragmentsForObject @ 1442b93e0

uint __cdecl
UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
          (UObject *param_1,FFragmentRegistrationContext *param_2,EFragmentRegistrationFlags param_3
          ,TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  FCreateFragmentParams local_18;
  
  local_18.ObjectInstance = param_1;
  local_18.RegistrationFlags = param_3;
  uVar1 = CreateAndRegisterFragmentsForObject(&local_18,param_2,param_4);
  return uVar1;
}


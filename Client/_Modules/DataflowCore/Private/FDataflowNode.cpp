// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 150

// StaticStruct @ 1443f39a0

UScriptStruct * __cdecl FDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowNode,(UObject *)pUVar1,L"DataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowNode.OuterSingleton;
}

// GetType @ 1443fd3b0

FName __thiscall FDataflowNode::GetType(FDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowNode");
  return in_RDX;
}

// GetDisplayName @ 1443fd3e0

FName __thiscall FDataflowNode::GetDisplayName(FDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"");
  return in_RDX;
}

// GetCategory @ 1443fd410

FName __thiscall FDataflowNode::GetCategory(FDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"");
  return in_RDX;
}

// GetTags @ 1443fd440

FString * __thiscall FDataflowNode::GetTags(FDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// GetToolTip @ 1443fd470

FString * __thiscall FDataflowNode::GetToolTip(FDataflowNode *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  FNodeFactory *this_00;
  FName *pFVar2;
  FFactoryParameters *pFVar3;
  undefined1 local_res8 [8];
  FString local_50;
  FString local_40;
  undefined1 local_30;
  undefined1 local_2f;
  FName local_2c;
  FDataflowNode *local_20;
  TReferenceControllerBase<1> *local_18;
  
  this_00 = UE::Dataflow::FNodeFactory::GetInstance();
  pFVar2 = (FName *)(**(code **)(this->_padding_ + 8))(this,local_res8);
  pFVar3 = UE::Dataflow::FNodeFactory::GetParameters(this_00,*pFVar2);
  ::FString::FString(&local_50,&pFVar3->Tags);
  ::FString::FString(&local_40,&pFVar3->ToolTip);
  _Src.Data = local_40.Data.AllocatorInstance.Data;
  local_30 = pFVar3->bIsDeprecated;
  local_2f = pFVar3->bIsExperimental;
  local_2c = pFVar3->NodeVersion;
  local_20 = (pFVar3->DefaultNodeObject).Object;
  local_18 = (pFVar3->DefaultNodeObject).SharedReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = local_40.Data.ArrayNum;
  if (local_40.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_40.Data.ArrayNum,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,
           (longlong)local_40.Data.ArrayNum * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRenderParameters @ 1443fd640

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetRenderParameters
          (FDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x148))();
  return __return_storage_ptr__;
}

// IsDeprecated @ 1443fd6d0

bool __thiscall FDataflowNode::IsDeprecated(FDataflowNode *this)

{
  return false;
}

// IsExperimental @ 1443fd6e0

bool __thiscall FDataflowNode::IsExperimental(FDataflowNode *this)

{
  return false;
}

// HasRenderCollectionPrimitives @ 1443fd6f0

bool __thiscall FDataflowNode::HasRenderCollectionPrimitives(FDataflowNode *this)

{
  return false;
}

// AddPins @ 1443fd880

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::AddPins
          (FDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// CanAddPin @ 1443fd930

bool __thiscall FDataflowNode::CanAddPin(FDataflowNode *this)

{
  return false;
}

// GetPinsToRemove @ 1443fd9b0

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetPinsToRemove
          (FDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnPinRemoved @ 1443fda40

void __thiscall FDataflowNode::OnPinRemoved(FDataflowNode *this,FPin *param_1)

{
  return;
}

// CanRemovePin @ 1443fda50

bool __thiscall FDataflowNode::CanRemovePin(FDataflowNode *this)

{
  return false;
}

// AddInput @ 1443fdab0

void __thiscall FDataflowNode::AddInput(FDataflowNode *this,FDataflowInput *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  FDataflowInput *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_c8;
  int local_c4;
  int local_c0;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined1 local_84 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  uint *local_48;
  FDataflowInput **local_40;
  
  if (param_1 != (FDataflowInput *)0x0) {
    iStack_b0 = 0;
    uStack_ac = 1;
    local_98 = 0;
    this_00 = &this->ExpandedInputs;
    iVar6 = *(int *)&(this->ExpandedInputs).field_0x28;
    local_a8 = &(this->ExpandedInputs).field_0x10;
    iStack_9c = 0;
    if (iVar6 != 0) {
      puVar14 = *(uint **)&(this->ExpandedInputs).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_a8;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_1443fdb6e;
        uVar12 = puVar14[lVar8 + 1];
      }
      uStack_ac = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_ac * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res20 = (int)lVar8;
      iStack_9c = local_98 + -1 + local_res20;
      if (iVar6 < iStack_9c) {
        iStack_9c = iVar6;
      }
    }
LAB_1443fdb6e:
    uVar12 = *(uint *)&(this->ExpandedInputs).field_0x28;
    puVar9 = &(this->ExpandedInputs).field_0x10;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_90 = *(int *)&(this->ExpandedInputs).field_0x8 -
                *(int *)&(this->ExpandedInputs).field_0x34;
    uStack_a0 = 0xffffffff;
    TStack_70.CurrentBitIndex = iStack_9c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
    iVar10 = (int)uVar12 >> 5;
    TStack_70._28_4_ = iStack_9c;
    TStack_70.BaseBitIndex = local_98;
    uStack_50 = CONCAT44(uStack_8c,iStack_90);
    local_res10 = param_1;
    local_b8 = this_00;
    iStack_94 = iStack_9c;
    local_84._12_8_ = this_00;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
    if ((((int)uVar12 < 0) || (iVar6 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(uint *)&(this->ExpandedInputs).field_0x28;
    if (uVar12 != uVar2) {
      puVar13 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar9;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar10;
        uVar11 = uVar11 + 0x20;
        iVar10 = iVar10 + 1;
        uVar12 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1443fdc80;
        uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_88 = (int)lVar8;
      uVar12 = local_88 + -1 + uVar11;
      if ((int)uVar2 < (int)uVar12) {
        uVar12 = uVar2;
      }
    }
LAB_1443fdc80:
    while( true ) {
      uVar3 = local_84._12_8_;
      if (*(int *)((undefined1 *)local_84._12_8_ + 8) -
          *(int *)((undefined1 *)local_84._12_8_ + 0x34) != (int)uStack_50) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_70.CurrentBitIndex == uVar12) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) &&
         ((TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
           *)uVar3 == this_00)) break;
      uVar3 = *(undefined8 *)
               (*(longlong *)
                 ((longlong)TStack_70.CurrentBitIndex * 0x20 + 0x10 +
                 *(longlong *)(undefined1 *)uVar3) + 0x48);
      if (((int)uVar3 == (int)local_res10->_padding_) &&
         ((int)((ulonglong)uVar3 >> 0x20) == (int)((ulonglong)local_res10->_padding_ >> 0x20))) {
        local_84._4_8_ = &local_res10;
        `FDataflowNode::AddInput'::__l9::<lambda_1>::operator()(local_84 + 4);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (((FDataflowNode *)local_res10->_padding_ != this) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->GetOwningNode() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0xc2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (**(code **)(local_res10->_padding_ + 0x18))(local_res10);
    local_c4 = (**(code **)(local_res10->_padding_ + 0x10))();
    local_c8 = (uint)local_res10->_padding_;
    uVar12 = local_c8 * 0x40 + local_c4 + (local_c8 >> 2) + 0x9e3779b9 ^ local_c8;
    local_c0 = iVar6;
    if (*(int *)&(this->ExpandedInputs).field_0x8 != *(int *)&(this->ExpandedInputs).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ExpandedInputs).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ExpandedInputs).field_0x38;
      }
      iVar10 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->ExpandedInputs).field_0x48 - 1U &
                                 (uVar12 * 0x40 + -0x61c88647 + iVar6 + (uVar12 >> 2) ^ uVar12)) * 4
                       );
      if (iVar10 != -1) {
        lVar8 = *(longlong *)&this_00->field_0x0;
        do {
          lVar7 = (longlong)iVar10 * 0x20;
          if (((*(uint *)(lVar7 + lVar8) == local_c8) && (*(int *)(lVar7 + 4 + lVar8) == local_c4))
             && (*(int *)(lVar7 + 8 + lVar8) == iVar6)) {
            if (iVar10 != -1) {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4249434131491979067>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                 ,0xc5,"!ExpandedInputs.Contains(Key)");
              if (!bVar5) {
                return;
              }
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            break;
          }
          iVar10 = *(int *)(lVar7 + 0x18 + lVar8);
        } while (iVar10 != -1);
      }
    }
    local_48 = &local_c8;
    local_40 = &local_res10;
    TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Dataflow::FConnectionKey_const_&,FDataflowInput_*_const_&>_>
              ((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<UE::Dataflow::FConnectionKey_const_&,FDataflowInput_*_const_&> *)
               local_84,(bool *)&local_48);
  }
  return;
}

// AddOutput @ 1443fdf70

void __thiscall FDataflowNode::AddOutput(FDataflowNode *this,FDataflowOutput *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  FDataflowOutput *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_c8;
  int local_c4;
  int local_c0;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined1 local_84 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  uint *local_48;
  FDataflowOutput **local_40;
  
  if (param_1 != (FDataflowOutput *)0x0) {
    iStack_b0 = 0;
    uStack_ac = 1;
    local_98 = 0;
    this_00 = &this->ExpandedOutputs;
    iVar6 = *(int *)&(this->ExpandedOutputs).field_0x28;
    local_a8 = &(this->ExpandedOutputs).field_0x10;
    iStack_9c = 0;
    if (iVar6 != 0) {
      puVar14 = *(uint **)&(this->ExpandedOutputs).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_a8;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_1443fe02e;
        uVar12 = puVar14[lVar8 + 1];
      }
      uStack_ac = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_ac * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res20 = (int)lVar8;
      iStack_9c = local_98 + -1 + local_res20;
      if (iVar6 < iStack_9c) {
        iStack_9c = iVar6;
      }
    }
LAB_1443fe02e:
    uVar12 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    puVar9 = &(this->ExpandedOutputs).field_0x10;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_90 = *(int *)&(this->ExpandedOutputs).field_0x8 -
                *(int *)&(this->ExpandedOutputs).field_0x34;
    uStack_a0 = 0xffffffff;
    TStack_70.CurrentBitIndex = iStack_9c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
    iVar10 = (int)uVar12 >> 5;
    TStack_70._28_4_ = iStack_9c;
    TStack_70.BaseBitIndex = local_98;
    uStack_50 = CONCAT44(uStack_8c,iStack_90);
    local_res10 = param_1;
    local_b8 = this_00;
    iStack_94 = iStack_9c;
    local_84._12_8_ = this_00;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
    if ((((int)uVar12 < 0) || (iVar6 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    if (uVar12 != uVar2) {
      puVar13 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar9;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar10;
        uVar11 = uVar11 + 0x20;
        iVar10 = iVar10 + 1;
        uVar12 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1443fe140;
        uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_88 = (int)lVar8;
      uVar12 = local_88 + -1 + uVar11;
      if ((int)uVar2 < (int)uVar12) {
        uVar12 = uVar2;
      }
    }
LAB_1443fe140:
    while( true ) {
      uVar3 = local_84._12_8_;
      if (*(int *)((undefined1 *)local_84._12_8_ + 8) -
          *(int *)((undefined1 *)local_84._12_8_ + 0x34) != (int)uStack_50) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_70.CurrentBitIndex == uVar12) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) &&
         ((TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
           *)uVar3 == this_00)) break;
      uVar3 = *(undefined8 *)
               (*(longlong *)
                 ((longlong)TStack_70.CurrentBitIndex * 0x20 + 0x10 +
                 *(longlong *)(undefined1 *)uVar3) + 0x48);
      if (((int)uVar3 == (int)local_res10->_padding_) &&
         ((int)((ulonglong)uVar3 >> 0x20) == (int)((ulonglong)local_res10->_padding_ >> 0x20))) {
        local_84._4_8_ = &local_res10;
        `FDataflowNode::AddOutput'::__l9::<lambda_1>::operator()(local_84 + 4);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (((FDataflowNode *)local_res10->_padding_ != this) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->GetOwningNode() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x175,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((FDataflowNode *)local_res10->_padding_ != this) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->GetOwningNode() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x178,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (**(code **)(local_res10->_padding_ + 0x18))(local_res10);
    local_c4 = (**(code **)(local_res10->_padding_ + 0x10))();
    local_c8 = (uint)local_res10->_padding_;
    uVar12 = local_c8 * 0x40 + local_c4 + (local_c8 >> 2) + 0x9e3779b9 ^ local_c8;
    local_c0 = iVar6;
    if (*(int *)&(this->ExpandedOutputs).field_0x8 != *(int *)&(this->ExpandedOutputs).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ExpandedOutputs).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ExpandedOutputs).field_0x38;
      }
      iVar10 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->ExpandedOutputs).field_0x48 - 1U &
                                 (uVar12 * 0x40 + -0x61c88647 + iVar6 + (uVar12 >> 2) ^ uVar12)) * 4
                       );
      if (iVar10 != -1) {
        lVar8 = *(longlong *)&this_00->field_0x0;
        do {
          lVar7 = (longlong)iVar10 * 0x20;
          if (((*(uint *)(lVar7 + lVar8) == local_c8) && (*(int *)(lVar7 + 4 + lVar8) == local_c4))
             && (*(int *)(lVar7 + 8 + lVar8) == iVar6)) {
            if (iVar10 != -1) {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4249434131491978885>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                 ,0x17b,"!ExpandedOutputs.Contains(Key)");
              if (!bVar5) {
                return;
              }
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            break;
          }
          iVar10 = *(int *)(lVar7 + 0x18 + lVar8);
        } while (iVar10 != -1);
      }
    }
    local_48 = &local_c8;
    local_40 = &local_res10;
    TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Dataflow::FConnectionKey_const_&,FDataflowOutput_*_const_&>_>
              ((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<UE::Dataflow::FConnectionKey_const_&,FDataflowOutput_*_const_&> *)
               local_84,(bool *)&local_48);
  }
  return;
}

// Serialize @ 1443fe7a0

void __thiscall FDataflowNode::Serialize(FDataflowNode *this,FArchive *param_1)

{
  return;
}

// PostSerialize @ 1443fe7f0

void __thiscall FDataflowNode::PostSerialize(FDataflowNode *this,FArchive *param_1)

{
  return;
}

// RedirectSerializedInput @ 1443fe800

FDataflowInput * __thiscall
FDataflowNode::RedirectSerializedInput(FDataflowNode *this,FName *param_1)

{
  return (FDataflowInput *)0x0;
}

// RedirectSerializedOutput @ 1443fe810

FDataflowOutput * __thiscall
FDataflowNode::RedirectSerializedOutput(FDataflowNode *this,FName *param_1)

{
  return (FDataflowOutput *)0x0;
}

// SerializeInternal @ 1443fe910

void __thiscall FDataflowNode::SerializeInternal(FDataflowNode *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                     ,0xf7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// NewStructOnScope @ 1443fe950

FStructOnScope * __thiscall FDataflowNode::NewStructOnScope(FDataflowNode *this)

{
  return (FStructOnScope *)0x0;
}

// TypedScriptStruct @ 1443fe960

UScriptStruct * __thiscall FDataflowNode::TypedScriptStruct(FDataflowNode *this)

{
  return (UScriptStruct *)0x0;
}

// EvaluateOnGameThreadOnly @ 1443febe0

bool __thiscall FDataflowNode::EvaluateOnGameThreadOnly(FDataflowNode *this)

{
  return false;
}

// OnInvalidate @ 1443ff130

void __thiscall FDataflowNode::OnInvalidate(FDataflowNode *this)

{
  return;
}

// ValidateConnections @ 1443ff140

bool __thiscall FDataflowNode::ValidateConnections(FDataflowNode *this)

{
  this->bHasValidConnections = true;
  return true;
}

// ValidateProperties @ 1443ff150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDataflowNode::ValidateProperties(FDataflowNode *this)

{
  void *pvVar1;
  bool bVar2;
  longlong *plVar3;
  UStruct *pUVar4;
  FFieldClass *pFVar5;
  TTuple<FProperty_const_*,void_const_*> *pTVar6;
  ICppStructOps *pIVar7;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar8;
  undefined1 auStackY_798 [32];
  FString local_768;
  FName local_758;
  FString local_750;
  FPropertyValueIterator local_740;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_798;
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  if (plVar3 != (longlong *)0x0) {
    pUVar4 = (UStruct *)(**(code **)(*plVar3 + 0x20))(plVar3);
    if (pUVar4 != (UStruct *)0x0) {
      pFVar5 = FProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_740,pFVar5,pUVar4,this,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_740.PropertyIteratorStack.ArrayNum < 1) break;
        pTVar6 = FPropertyValueIterator::operator->(&local_740);
        pvVar1 = *(void **)pTVar6;
        if (((pvVar1 != (void *)0x0) &&
            ((*(uint *)(*(longlong *)((longlong)pvVar1 + 8) + 0x18) >> 0x14 & 1) != 0)) &&
           ((*(UScriptStruct **)((longlong)pvVar1 + 0x70) == (UScriptStruct *)0x0 ||
            (pIVar7 = UScriptStruct::GetCppStructOps(*(UScriptStruct **)((longlong)pvVar1 + 0x70)),
            pIVar7 == (ICppStructOps *)0x0)))) {
          local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_768.Data.ArrayNum = 0;
          local_768.Data.ArrayMax = 0;
          bVar2 = IsThisNotNull(pvVar1,"FField::GetName");
          if (bVar2) {
            ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_768);
          }
          else {
            ::FString::operator=(&local_768,L"None");
          }
          if (2 < (byte)LogChaos._0_1_) {
            local_758 = this->Name;
            ::FName::ToString(&local_758,&local_750);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
            if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_750.Data.AllocatorInstance.Data);
            }
          }
          if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_768.Data.AllocatorInstance.Data);
          }
        }
        FPropertyValueIterator::IterateToNext(&local_740);
      }
      FVar8 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_740;
      if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar8 = local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar8,local_740.PropertyIteratorStack.ArrayNum);
      if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,1);
  }
  return;
}

// SupportsAssetProperty @ 1443ff370

bool __thiscall FDataflowNode::SupportsAssetProperty(FDataflowNode *this,UObject *param_1)

{
  return false;
}

// SetAssetProperty @ 1443ff380

void __thiscall FDataflowNode::SetAssetProperty(FDataflowNode *this,UObject *param_1)

{
  return;
}

// OnPropertyChanged @ 1443ff390

void __thiscall
FDataflowNode::OnPropertyChanged
          (FDataflowNode *this,FContext *param_1,FPropertyChangedEvent *param_2)

{
  return;
}

// SupportsDropConnectionOnNode @ 1443ff3e0

bool __thiscall
FDataflowNode::SupportsDropConnectionOnNode(FDataflowNode *this,FName param_1,EDirection param_2)

{
  return false;
}

// OnDropConnectionOnNode @ 1443ff3f0

FDataflowConnection * __thiscall
FDataflowNode::OnDropConnectionOnNode(FDataflowNode *this,FDataflowConnection *param_1)

{
  return (FDataflowConnection *)0x0;
}

// ShouldInvalidateOnPropertyChanged @ 1443ff400

bool __thiscall
FDataflowNode::ShouldInvalidateOnPropertyChanged(FDataflowNode *this,FPropertyChangedEvent *param_1)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  FName FVar5;
  FName FVar6;
  FName local_res10;
  
  pFVar4 = ::FName::FName(&local_res10,0xe,L"bOverrideColor",FNAME_Add);
  pFVar1 = param_1->Property;
  FVar2 = *pFVar4;
  if ((pFVar1 == (FProperty *)0x0) || (bVar3 = IsThisNotNull(pFVar1,"FField::GetFName"), !bVar3)) {
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
  }
  else {
    FVar5 = (FName)pFVar1->_padding_;
  }
  if (FVar5 != FVar2) {
    pFVar4 = ::FName::FName(&local_res10,0xd,L"OverrideColor",FNAME_Add);
    pFVar1 = param_1->Property;
    FVar2 = *pFVar4;
    if ((pFVar1 == (FProperty *)0x0) || (bVar3 = IsThisNotNull(pFVar1,"FField::GetFName"), !bVar3))
    {
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
    }
    else {
      FVar6 = (FName)pFVar1->_padding_;
    }
    if (FVar6 != FVar2) {
      return true;
    }
  }
  return false;
}

// MakeConnectedPropertiesReadOnly @ 1443ff510

bool __thiscall FDataflowNode::MakeConnectedPropertiesReadOnly(FDataflowNode *this)

{
  return true;
}

// OnRenderOutput @ 1443ff720

void __thiscall
FDataflowNode::OnRenderOutput
          (FDataflowNode *this,FContext *param_1,FName param_2,FName param_3,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// IsA @ 1443ff7d0

bool __thiscall FDataflowNode::IsA(FDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      bVar5 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetDependentConnectionType @ 1443ff930

FName __thiscall
FDataflowNode::GetDependentConnectionType
          (FDataflowNode *this,FDataflowConnection *param_1,FDataflowConnection *param_2)

{
  param_1->_padding_ = (longlong)param_2->Type;
  return (FName)param_1;
}

// OnInputTypeChanged @ 1443ff950

bool __thiscall FDataflowNode::OnInputTypeChanged(FDataflowNode *this,FDataflowInput *param_1)

{
  return false;
}

// OnOutputTypeChanged @ 1443ff960

bool __thiscall FDataflowNode::OnOutputTypeChanged(FDataflowNode *this,FDataflowOutput *param_1)

{
  return false;
}

// GetRenderParametersImpl @ 144400100

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetRenderParametersImpl
          (FDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetValue<FDataflowNumericTypes> @ 144418bb0

double __thiscall
FDataflowNode::GetValue<FDataflowNumericTypes>
          (FDataflowNode *this,FContext *param_1,
          TConnectionReference<FDataflowNumericTypes> *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  ulong64 uVar6;
  double *pdVar7;
  double local_res18;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res20;
  <lambda_1> local_38;
  
  pFVar4 = FindInput(this,(FConnectionReference *)param_2);
  pdVar7 = *(double **)param_2;
  this_00 = pFVar4->Connection;
  local_res18 = *pdVar7;
  if (this_00 != (FDataflowOutput *)0x0) {
    lVar1 = this_00->_padding_;
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
      if (((pFVar5 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
         ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        pdVar7 = (double *)
                 ((longlong)pFVar5->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8));
      }
      return *pdVar7;
    }
    bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar3) {
      pcVar2 = *(code **)(param_1->_padding_ + 0x30);
      uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                     *)(*pcVar2)(param_1,uVar6);
      if ((local_res20 !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (local_res20->Ptr != (FContextCacheElementBase *)0x0)) {
        local_38.CacheEntry = &local_res20;
        local_38.ReturnValue = (TRotator<double> *)&local_res18;
        local_38.__this = pFVar4;
        local_38.Context = param_1;
        TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
        ::
        VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                  ((FName)pFVar4->_padding_,&local_38);
      }
    }
  }
  return local_res18;
}

// GetValue<FDataflowStringConvertibleTypes> @ 144418cd0

FString * __thiscall
FDataflowNode::GetValue<FDataflowStringConvertibleTypes>
          (FDataflowNode *this,FString *__return_storage_ptr__,FContext *param_1,
          FDataflowStringConvertibleTypes *param_2)

{
  FScriptContainerElement *_Src;
  FDataflowOutput *this_00;
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FString *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res10;
  undefined1 local_58 [32];
  <lambda_1> local_38;
  
  local_58._8_4_ = -1;
  local_58._16_8_ = (void *)0x0;
  local_58._0_8_ = param_2;
  pFVar3 = FindInput(this,(FConnectionReference *)local_58);
  local_58._8_4_ = (param_2->Value).Data.ArrayNum;
  lVar6 = (longlong)(int)local_58._8_4_;
  _Src = (param_2->Value).Data.AllocatorInstance.Data;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  if (local_58._8_4_ == 0) {
    local_58._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58._8_4_,0,(ForAnyElementType *)local_58,local_58._8_4_,
               (int *)(local_58 + 0xc));
    memcpy((void *)local_58._0_8_,_Src,lVar6 * 2);
  }
  this_00 = pFVar3->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    if (((this_00->_padding_ != 0) && (*(char *)(this_00->_padding_ + 0x200) != '\0')) &&
       (UE::Dataflow::Private::bDisableFreezingState == false)) {
      pFVar4 = FDataflowOutput::GetFrozenValue<FString>(this_00,&param_2->Value);
      ::FString::FString(__return_storage_ptr__,pFVar4);
      if ((FName)local_58._0_8_ == (FName)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_58._0_8_);
      return __return_storage_ptr__;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar2) {
      pcVar1 = *(code **)(param_1->_padding_ + 0x30);
      uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res10 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                     *)(*pcVar1)(param_1,uVar5);
      if ((local_res10 !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (local_res10->Ptr != (FContextCacheElementBase *)0x0)) {
        local_38.CacheEntry = &local_res10;
        local_38.ReturnValue = (FDataflowSelection *)local_58;
        local_38.__this = pFVar3;
        local_38.Context = param_1;
        FDataflowStringConvertibleTypePolicy::
        VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                  ((FName)pFVar3->_padding_,&local_38);
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_58._0_8_;
  (__return_storage_ptr__->Data).ArrayNum = local_58._8_4_;
  (__return_storage_ptr__->Data).ArrayMax = local_58._12_4_;
  return __return_storage_ptr__;
}

// SafeForwardInput<FManagedArrayCollection> @ 14441c1a0

void __thiscall
FDataflowNode::SafeForwardInput<FManagedArrayCollection>
          (FDataflowNode *this,FContext *param_1,FConnectionReference *param_2,
          FManagedArrayCollection *param_3)

{
  FManagedArrayCollection *pFVar1;
  FDataflowNode *this_00;
  longlong lVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *pFVar5;
  ulong64 uVar6;
  FProperty *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_38 [8];
  FTimestamp local_30;
  FConnectionReference local_28;
  
  pFVar4 = FindInput(this,param_2);
  uVar3 = 0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_3;
  if (pFVar4->Connection == (FDataflowOutput *)0x0) {
    pFVar1 = param_2->Reference;
    pFVar5 = FindOutput(this,&local_28);
    if (pFVar5 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>'::__l7::
      <lambda_1>::operator()(local_38);
    }
    else {
      pFVar7 = (FProperty *)pFVar5->_padding_;
      if (pFVar7 != (FProperty *)0x0) {
        this_00 = (FDataflowNode *)pFVar5->_padding_;
        if (this_00 == (FDataflowNode *)0x0) {
          local_30.Value = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          local_30.Value = (this_00->LastModifiedTimestamp).Value;
          uVar3 = GetValueHash(this_00);
          pFVar7 = (FProperty *)pFVar5->_padding_;
        }
        lVar2 = pFVar5->_padding_;
        if (lVar2 == 0) {
          uVar8 = 0;
          uVar9 = 0;
          local_28.Index = 0;
          local_28._12_4_ = 0;
        }
        else {
          uVar8 = *(undefined4 *)(lVar2 + 0x7c);
          uVar9 = *(undefined4 *)(lVar2 + 0x80);
          local_28.Index = *(int *)(lVar2 + 0x84);
          local_28._12_4_ = *(undefined4 *)(lVar2 + 0x88);
        }
        local_28.Reference = (void *)CONCAT44(uVar9,uVar8);
        uVar6 = CityHash64((char *)&pFVar5->_padding_,0x10);
        UE::Dataflow::FContext::SetData<FManagedArrayCollection_const_&>
                  (param_1,(uint)uVar6,pFVar7,pFVar1,(FGuid *)&local_28,uVar3,&local_30);
      }
    }
  }
  else {
    pFVar5 = FindOutput(this,&local_28);
    if ((pFVar5 != (FDataflowOutput *)0x0) &&
       (pFVar4 = FindInput(this,param_2), pFVar4 != (FDataflowInput *)0x0)) {
      FDataflowOutput::ForwardInput(pFVar5,pFVar4,param_1);
    }
  }
  return;
}

// SetValue<FDataflowNumericArrayTypes> @ 14441ec60

void __thiscall
FDataflowNode::SetValue<FDataflowNumericArrayTypes>
          (FDataflowNode *this,FContext *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2
          ,FDataflowNumericArrayTypes *param_3)

{
  FName FVar1;
  FDataflowOutput *pFVar2;
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  
  local_28._8_4_ = -1;
  local_18 = (void *)0x0;
  local_28._0_8_ = param_3;
  pFVar2 = FindOutput(this,(FConnectionReference *)local_28);
  if (pFVar2 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowNumericArrayTypes>'::__l7::<lambda_1>::operator()(local_res20)
    ;
  }
  else {
    FVar1 = (FName)pFVar2->_padding_;
    local_28._0_8_ = pFVar2;
    local_28._8_8_ = param_1;
    local_18 = param_2;
    if (FVar1 == TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>)
                          local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>)
                          local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName)
    {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>)
                          local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                 TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                           )local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>)
                          local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                 TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                           )local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>)
                          local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                 TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                           )local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                 TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
                           )local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                 TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
                (local_28,(TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                           )local_res20);
      return;
    }
  }
  return;
}

// SetValue<FDataflowNumericTypes> @ 14441eec0

void __thiscall
FDataflowNode::SetValue<FDataflowNumericTypes>
          (FDataflowNode *this,FContext *param_1,double *param_2,FDataflowNumericTypes *param_3)

{
  FDataflowNode *this_00;
  longlong lVar1;
  FProperty *pFVar2;
  uint uVar3;
  FDataflowOutput *pFVar4;
  ulong64 uVar5;
  FTimestamp local_res20;
  double local_48 [2];
  undefined1 local_38 [12];
  uint uStack_2c;
  double *local_28;
  
  stack0xffffffffffffffd0 = (FContext *)CONCAT44(uStack_2c,-1);
  local_28 = (double *)0x0;
  local_38._0_8_ = param_3;
  pFVar4 = FindOutput(this,(FConnectionReference *)local_38);
  if (pFVar4 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowNumericTypes>'::__l7::<lambda_1>::operator()(&local_res20);
    return;
  }
  if ((FName)pFVar4->_padding_ == TDataflowSingleTypePolicy<double>::TypeName) {
    this_00 = (FDataflowNode *)pFVar4->_padding_;
    local_48[0] = *param_2;
    if (this_00 == (FDataflowNode *)0x0) {
      uVar3 = 0;
      local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res20.Value = (this_00->LastModifiedTimestamp).Value;
      uVar3 = GetValueHash(this_00);
    }
    lVar1 = pFVar4->_padding_;
    if (lVar1 == 0) {
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
      local_38._8_4_ = 0;
      uStack_2c = 0;
    }
    else {
      local_38._0_4_ = *(uint *)(lVar1 + 0x7c);
      local_38._4_4_ = *(uint *)(lVar1 + 0x80);
      local_38._8_4_ = *(uint *)(lVar1 + 0x84);
      uStack_2c = *(uint *)(lVar1 + 0x88);
    }
    pFVar2 = (FProperty *)pFVar4->_padding_;
    uVar5 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<double>
              (param_1,(uint)uVar5,pFVar2,local_48,(FGuid *)local_38,uVar3,&local_res20);
    return;
  }
  local_38._0_8_ = pFVar4;
  unique0x100001fa = param_1;
  local_28 = param_2;
  TDataflowMultiTypePolicy<float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
  ::
  VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
            ((FName)pFVar4->_padding_,(<lambda_1> *)local_38);
  return;
}

// SetValue<FDataflowSelectionTypes> @ 14441f020

void __thiscall
FDataflowNode::SetValue<FDataflowSelectionTypes>
          (FDataflowNode *this,FContext *param_1,FDataflowSelection *param_2,
          FDataflowSelectionTypes *param_3)

{
  FName FVar1;
  FDataflowOutput *pFVar2;
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  FDataflowSelection *local_18;
  
  local_28._8_4_ = -1;
  local_18 = (void *)0x0;
  local_28._0_8_ = param_3;
  pFVar2 = FindOutput(this,(FConnectionReference *)local_28);
  if (pFVar2 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowSelectionTypes>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else {
    FVar1 = (FName)pFVar2->_padding_;
    local_28._0_8_ = pFVar2;
    local_28._8_8_ = param_1;
    local_18 = param_2;
    if (FVar1 == TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<FDataflowTransformSelection>_>
                (local_28,(TDataflowSingleTypePolicy<FDataflowTransformSelection>)local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<FDataflowVertexSelection>_>
                (local_28,(TDataflowSingleTypePolicy<FDataflowVertexSelection>)local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<FDataflowFaceSelection>_>
                (local_28,(TDataflowSingleTypePolicy<FDataflowFaceSelection>)local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<FDataflowGeometrySelection>_>
                (local_28,(TDataflowSingleTypePolicy<FDataflowGeometrySelection>)local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<FDataflowMaterialSelection>_>
                (local_28,(TDataflowSingleTypePolicy<FDataflowMaterialSelection>)local_res20);
      return;
    }
    if (FVar1 == TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName) {
      `FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<FDataflowCurveSelection>_>
                (local_28,(TDataflowSingleTypePolicy<FDataflowCurveSelection>)local_res20);
      return;
    }
  }
  return;
}

// SetValue<FDataflowVectorTypes> @ 14441f1b0

void __thiscall
FDataflowNode::SetValue<FDataflowVectorTypes>
          (FDataflowNode *this,FContext *param_1,TVector4<double> *param_2,
          FDataflowVectorTypes *param_3)

{
  FDataflowNode *this_00;
  longlong lVar1;
  FProperty *pFVar2;
  uint uVar3;
  FDataflowOutput *pFVar4;
  ulong64 uVar5;
  FTimestamp local_res20;
  FGuid local_48;
  TVector2<double>_u_0 local_38;
  TVector4<double> *local_28;
  
  local_38._8_4_ = 0xffffffff;
  local_28 = (TVector4<double> *)0x0;
  local_38._s_0.X = (double)param_3;
  pFVar4 = FindOutput(this,(FConnectionReference *)&local_38._s_0);
  if (pFVar4 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowVectorTypes>'::__l7::<lambda_1>::operator()(&local_res20);
    return;
  }
  if ((FName)pFVar4->_padding_ == TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName)
  {
    local_38._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_38._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    this_00 = (FDataflowNode *)pFVar4->_padding_;
    if (this_00 == (FDataflowNode *)0x0) {
      uVar3 = 0;
      local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res20.Value = (this_00->LastModifiedTimestamp).Value;
      uVar3 = GetValueHash(this_00);
    }
    lVar1 = pFVar4->_padding_;
    if (lVar1 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar1 + 0x7c);
      local_48.B = *(uint *)(lVar1 + 0x80);
      local_48.C = *(uint *)(lVar1 + 0x84);
      local_48.D = *(uint *)(lVar1 + 0x88);
    }
    pFVar2 = (FProperty *)pFVar4->_padding_;
    uVar5 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector2<double>_>
              (param_1,(uint)uVar5,pFVar2,(TVector2<double> *)&local_38._s_0,&local_48,uVar3,
               &local_res20);
    return;
  }
  local_38._0_8_ = pFVar4;
  local_38._s_0.Y = (double)param_1;
  local_28 = param_2;
  TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
  ::
  VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
            ((FName)pFVar4->_padding_,(<lambda_1> *)&local_38._s_0);
  return;
}

// FDataflowNode @ 14442e440

FDataflowNode * __thiscall
FDataflowNode::FDataflowNode(FDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  atomic<int> *paVar1;
  TWeakPtr<UE::Dataflow::FGraph,1> *pTVar2;
  atomic<int> aVar3;
  UObjectBaseUtility *this_00;
  FGraph *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined8 local_18 [2];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Outputs = 0;
  *(undefined8 *)&(this->Outputs).field_0x8 = 0;
  *(undefined8 *)&(this->Outputs).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FDataflowNode__6B_;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  *(undefined8 *)&(this->Outputs).field_0x40 = 0;
  *(undefined4 *)&(this->Outputs).field_0x48 = 0;
  this->bOverrideColor = false;
  (this->OverrideColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  uVar6 = param_2->B;
  uVar7 = param_2->C;
  uVar8 = param_2->D;
  (this->Guid).A = param_2->A;
  (this->Guid).B = uVar6;
  (this->Guid).C = uVar7;
  (this->Guid).D = uVar8;
  this->Name = param_1->Name;
  (this->LastModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
  *(undefined8 *)&this->ExpandedInputs = 0;
  *(undefined8 *)&(this->ExpandedInputs).field_0x8 = 0;
  *(undefined8 *)&(this->ExpandedInputs).field_0x20 = 0;
  this->bHasValidConnections = true;
  *(undefined4 *)&(this->ExpandedInputs).field_0x28 = 0;
  *(undefined4 *)&(this->ExpandedInputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpandedInputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpandedInputs).field_0x34 = 0;
  *(undefined8 *)&(this->ExpandedInputs).field_0x40 = 0;
  *(undefined4 *)&(this->ExpandedInputs).field_0x48 = 0;
  *(undefined8 *)&this->InputArrayProperties = 0;
  *(undefined8 *)&(this->InputArrayProperties).field_0x8 = 0;
  *(undefined8 *)&(this->InputArrayProperties).field_0x20 = 0;
  *(undefined4 *)&(this->InputArrayProperties).field_0x28 = 0;
  *(undefined4 *)&(this->InputArrayProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputArrayProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputArrayProperties).field_0x34 = 0;
  *(undefined8 *)&(this->InputArrayProperties).field_0x40 = 0;
  *(undefined4 *)&(this->InputArrayProperties).field_0x48 = 0;
  *(undefined8 *)&this->ExpandedOutputs = 0;
  *(undefined8 *)&(this->ExpandedOutputs).field_0x8 = 0;
  *(undefined8 *)&(this->ExpandedOutputs).field_0x20 = 0;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x28 = 0;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x34 = 0;
  *(undefined8 *)&(this->ExpandedOutputs).field_0x40 = 0;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x48 = 0;
  *(undefined8 *)&this->OutputArrayProperties = 0;
  *(undefined8 *)&(this->OutputArrayProperties).field_0x8 = 0;
  *(undefined8 *)&(this->OutputArrayProperties).field_0x20 = 0;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x28 = 0;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x34 = 0;
  *(undefined8 *)&(this->OutputArrayProperties).field_0x40 = 0;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x48 = 0;
  this->bActive = true;
  FInstancedStruct::FInstancedStruct(&(this->FrozenProperties).Value);
  pTVar2 = &this->WeakDataflowGraph;
  this->bIsFrozen = false;
  pTVar2->Object = (FGraph *)0x0;
  (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsAsyncEvaluating = (TAtomic<bool>)0x0;
  this->bPauseInvalidations = false;
  (this->PausedModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
  *(undefined8 *)&this->OnNodeInvalidatedDelegate = 0;
  *(undefined8 *)&(this->OnNodeInvalidatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNodeInvalidatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNodeInvalidatedDelegate).field_0x18 = 2;
  this_00 = (UObjectBaseUtility *)param_1->OwningObject;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return this;
  }
  pUVar9 = UDataflowGraphInterface::StaticClass();
  plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar9);
  if (plVar10 == (longlong *)0x0) {
    return this;
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,local_28);
  pTVar13 = (TReferenceControllerBase<1> *)puVar11[1];
  pFVar4 = (FGraph *)*puVar11;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 == (TWeakPtr<UE::Dataflow::FGraph,1> *)local_18) {
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) goto LAB_14442e6b2;
    LOCK();
    paVar1 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<int>)0x1) goto LAB_14442e6b2;
    lVar12 = pTVar13->_padding_;
  }
  else {
    pTVar5 = (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController;
    pTVar2->Object = pFVar4;
    (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController = pTVar13;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_14442e6b2;
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<int>)0x1) goto LAB_14442e6b2;
    lVar12 = pTVar5->_padding_;
    pTVar13 = pTVar5;
  }
  (**(code **)(lVar12 + 8))(pTVar13,1);
LAB_14442e6b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return this;
}

// FDataflowNode @ 14442e6e0

FDataflowNode * __thiscall FDataflowNode::FDataflowNode(FDataflowNode *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Outputs = 0;
  *(undefined8 *)&(this->Outputs).field_0x8 = 0;
  *(undefined8 *)&(this->Outputs).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FDataflowNode__6B_;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  *(undefined8 *)&(this->Outputs).field_0x40 = 0;
  *(undefined4 *)&(this->Outputs).field_0x48 = 0;
  this->bOverrideColor = false;
  (this->OverrideColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  ::FName::FName(&this->Name,"Invalid");
  (this->LastModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
  *(undefined8 *)&this->ExpandedInputs = 0;
  *(undefined8 *)&(this->ExpandedInputs).field_0x8 = 0;
  *(undefined8 *)&(this->ExpandedInputs).field_0x20 = 0;
  this->bHasValidConnections = true;
  *(undefined4 *)&(this->ExpandedInputs).field_0x28 = 0;
  *(undefined4 *)&(this->ExpandedInputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpandedInputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpandedInputs).field_0x34 = 0;
  *(undefined8 *)&(this->ExpandedInputs).field_0x40 = 0;
  *(undefined4 *)&(this->ExpandedInputs).field_0x48 = 0;
  *(undefined8 *)&this->InputArrayProperties = 0;
  *(undefined8 *)&(this->InputArrayProperties).field_0x8 = 0;
  *(undefined8 *)&(this->InputArrayProperties).field_0x20 = 0;
  *(undefined4 *)&(this->InputArrayProperties).field_0x28 = 0;
  *(undefined4 *)&(this->InputArrayProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputArrayProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputArrayProperties).field_0x34 = 0;
  *(undefined8 *)&(this->InputArrayProperties).field_0x40 = 0;
  *(undefined4 *)&(this->InputArrayProperties).field_0x48 = 0;
  *(undefined8 *)&this->ExpandedOutputs = 0;
  *(undefined8 *)&(this->ExpandedOutputs).field_0x8 = 0;
  *(undefined8 *)&(this->ExpandedOutputs).field_0x20 = 0;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x28 = 0;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x34 = 0;
  *(undefined8 *)&(this->ExpandedOutputs).field_0x40 = 0;
  *(undefined4 *)&(this->ExpandedOutputs).field_0x48 = 0;
  *(undefined8 *)&this->OutputArrayProperties = 0;
  *(undefined8 *)&(this->OutputArrayProperties).field_0x8 = 0;
  *(undefined8 *)&(this->OutputArrayProperties).field_0x20 = 0;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x28 = 0;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x34 = 0;
  *(undefined8 *)&(this->OutputArrayProperties).field_0x40 = 0;
  *(undefined4 *)&(this->OutputArrayProperties).field_0x48 = 0;
  this->bActive = true;
  FInstancedStruct::FInstancedStruct(&(this->FrozenProperties).Value);
  this->bIsFrozen = false;
  (this->WeakDataflowGraph).Object = (FGraph *)0x0;
  (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsAsyncEvaluating = (TAtomic<bool>)0x0;
  this->bPauseInvalidations = false;
  (this->PausedModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
  *(undefined8 *)&this->OnNodeInvalidatedDelegate = 0;
  *(undefined8 *)&(this->OnNodeInvalidatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNodeInvalidatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNodeInvalidatedDelegate).field_0x18 = 2;
  return this;
}

// ~FDataflowNode @ 1444338e0

void __thiscall FDataflowNode::~FDataflowNode(FDataflowNode *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FDataflowNode__6B_;
  ClearInputs(this);
  ClearOutputs(this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNodeInvalidatedDelegate).field_0x8,
             *(int *)&(this->OnNodeInvalidatedDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnNodeInvalidatedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNodeInvalidatedDelegate);
  pTVar6 = (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  FInstancedStruct::Reset(&(this->FrozenProperties).Value);
  *(undefined4 *)&(this->OutputArrayProperties).field_0x48 = 0;
  pvVar5 = *(void **)&(this->OutputArrayProperties).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputArrayProperties);
  *(undefined4 *)&(this->ExpandedOutputs).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ExpandedOutputs).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExpandedOutputs);
  *(undefined4 *)&(this->InputArrayProperties).field_0x48 = 0;
  pvVar5 = *(void **)&(this->InputArrayProperties).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputArrayProperties);
  *(undefined4 *)&(this->ExpandedInputs).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ExpandedInputs).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExpandedInputs);
  *(undefined4 *)&(this->Outputs).field_0x48 = 0;
  pvVar5 = *(void **)&(this->Outputs).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Outputs);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// ClearInputs @ 144438b70

void __thiscall FDataflowNode::ClearInputs(FDataflowNode *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  iVar3 = *(int *)&(this->ExpandedInputs).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ExpandedInputs).field_0x10;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144438c0f;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_144438c0f:
  uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
  puVar2 = &(this->ExpandedInputs).field_0x10;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144438d20;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_144438d20:
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&(this->ExpandedInputs).field_0x0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
           *)&this->ExpandedInputs);
  TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
           *)&this->InputArrayProperties);
  return;
}

// ClearOutputs @ 144439070

void __thiscall FDataflowNode::ClearOutputs(FDataflowNode *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  iVar3 = *(int *)&(this->ExpandedOutputs).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ExpandedOutputs).field_0x10;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14443910f;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14443910f:
  uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  puVar2 = &(this->ExpandedOutputs).field_0x10;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144439220;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_144439220:
  while( true ) {
    if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&(this->ExpandedOutputs).field_0x0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
           *)&this->ExpandedOutputs);
  TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
           *)&this->OutputArrayProperties);
  return;
}

// CopyNodeProperties @ 14443d160

void __thiscall
FDataflowNode::CopyNodeProperties(FDataflowNode *this,TSharedPtr<FDataflowNode,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *local_178;
  undefined8 local_170;
  FArchiveState local_168;
  undefined8 local_d8;
  void **local_d0;
  undefined8 local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  void **local_20;
  
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168._padding_ = 0;
  local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_168._40_8_ = 0;
  local_168.ArSerializingDefaults = 0;
  local_168.ArPortFlags = 0;
  local_168.ArMaxSerializeSize = 0;
  local_168.ArUEVer.FileVersionUE4 = 0;
  local_168.ArUEVer.FileVersionUE5 = 0;
  local_168.ArLicenseeUEVer = 0;
  local_168.ArEngineVer.Major = 0;
  local_168.ArEngineVer.Minor = 0;
  local_168.ArEngineVer.Patch = 0;
  local_168.ArEngineVer._6_2_ = 0;
  local_168.ArEngineVer.Changelist = 0;
  local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_168.SerializedProperty = (FProperty *)0x0;
  local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_168.bCustomVersionsAreReset = false;
  local_168._129_7_ = 0;
  local_168.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_168);
  local_d8 = 0;
  local_168._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d0 = &local_178;
  local_c8 = 0;
  FArchiveState::SetIsSaving(&local_168,true);
  (**(code **)(local_168._padding_ + 0x108))(&local_168,0);
  local_168.ArIgnoreClassRef = '\0';
  local_168.ArIgnoreArchetypeRef = '\0';
  local_168._padding_ = (longlong)&___7FObjectWriter__6B_;
  if (param_1->Object == (FDataflowNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(param_1->Object->_padding_ + 0xa8))(param_1->Object,&local_168);
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7FObjectReader__6B_;
  local_20 = &local_178;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8.ArIgnoreClassRef = '\0';
  local_b8.ArIgnoreArchetypeRef = '\0';
  (**(code **)(this->_padding_ + 0xa8))(this,&local_b8);
  FArchive::~FArchive((FArchive *)&local_b8);
  FArchive::~FArchive((FArchive *)&local_168);
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Evaluate @ 144445ac0

void __thiscall
FDataflowNode::Evaluate(FDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3734611412631158408>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                     ,0x178,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FindConnection @ 144446710

FDataflowConnection * __thiscall
FDataflowNode::FindConnection(FDataflowNode *this,FConnectionReference *param_1)

{
  FDataflowOutput *pFVar1;
  
  pFVar1 = (FDataflowOutput *)FindInput(this,param_1);
  if (pFVar1 == (FDataflowOutput *)0x0) {
    pFVar1 = FindOutput(this,param_1);
  }
  return (FDataflowConnection *)pFVar1;
}

// FindConnection @ 144446750

FDataflowConnection * __thiscall
FDataflowNode::FindConnection(FDataflowNode *this,FConnectionKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput **ppFVar3;
  FDataflowConnection *pFVar4;
  FDataflowOutput **ppFVar5;
  
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)&this->ExpandedInputs,param_1);
  if (ppFVar3 != (FDataflowInput **)0x0) {
    if ((*ppFVar3 == (FDataflowInput *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("*Con",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x110,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowConnection *)(*pcVar1)();
      return pFVar4;
    }
    if (*ppFVar3 != (FDataflowInput *)0x0) {
      return (FDataflowConnection *)*ppFVar3;
    }
  }
  ppFVar5 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                    *)&this->ExpandedOutputs,param_1);
  if (ppFVar5 == (FDataflowOutput **)0x0) {
    return (FDataflowConnection *)0x0;
  }
  if ((*ppFVar5 == (FDataflowOutput *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Con",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x1dc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDataflowConnection *)(*pcVar1)();
    return pFVar4;
  }
  return (FDataflowConnection *)*ppFVar5;
}

// FindConnection @ 144446820

FDataflowConnection * __thiscall
FDataflowNode::FindConnection(FDataflowNode *this,FConnectionKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput **ppFVar3;
  FDataflowConnection *pFVar4;
  FDataflowOutput **ppFVar5;
  
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)&this->ExpandedInputs,param_1);
  if (ppFVar3 != (FDataflowInput **)0x0) {
    if ((*ppFVar3 == (FDataflowInput *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("*Con",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0xef,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowConnection *)(*pcVar1)();
      return pFVar4;
    }
    if (*ppFVar3 != (FDataflowInput *)0x0) {
      return (FDataflowConnection *)*ppFVar3;
    }
  }
  ppFVar5 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                    *)&this->ExpandedOutputs,param_1);
  if (ppFVar5 == (FDataflowOutput **)0x0) {
    return (FDataflowConnection *)0x0;
  }
  if ((*ppFVar5 == (FDataflowOutput *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Con",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x1bb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDataflowConnection *)(*pcVar1)();
    return pFVar4;
  }
  return (FDataflowConnection *)*ppFVar5;
}

// FindInput @ 1444468f0

FDataflowInput * __thiscall
FDataflowNode::FindInput(FDataflowNode *this,FConnectionReference *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar5;
  bool bVar6;
  FDataflowInput *pFVar7;
  void *pvVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  FConnectionKey local_c8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  GetKeyFromReference(this,&local_c8,param_1);
  pTVar1 = &this->ExpandedInputs;
  puVar14 = (uint *)0x0;
  uStack_b0 = 0;
  uVar11 = local_c8.Offset * 0x40 + local_c8.ContainerIndex + (local_c8.Offset >> 2) + 0x9e3779b9 ^
           local_c8.Offset;
  if (*(int *)&(this->ExpandedInputs).field_0x8 != *(int *)&(this->ExpandedInputs).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ExpandedInputs).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ExpandedInputs).field_0x38;
    }
    uVar11 = *(uint *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ExpandedInputs).field_0x48 - 1U &
                      (uVar11 * 0x40 + -0x61c88647 + local_c8.ContainerElementOffset + (uVar11 >> 2)
                      ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar11 * 0x20 + *(longlong *)pTVar1);
        if (((*puVar9 == local_c8.Offset) && (puVar9[1] == local_c8.ContainerIndex)) &&
           (puVar9[2] == local_c8.ContainerElementOffset)) {
          if (uVar11 != 0xffffffff) {
            puVar17 = puVar9 + 4;
            if (puVar9 == (uint *)0x0) {
              puVar17 = puVar14;
            }
            if (puVar17 != (uint *)0x0) {
              if ((*(longlong *)puVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("*Con",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                     ,0x110,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pFVar7 = (FDataflowInput *)(*pcVar4)();
                return pFVar7;
              }
              pFVar7 = *(FDataflowInput **)puVar17;
              if (pFVar7 != (FDataflowInput *)0x0) {
                pvVar3 = param_1->Reference;
                pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
                if ((pvVar8 != pvVar3) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Con->RealAddress() == Reference.Reference",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                       ,0x11b,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pFVar7 = (FDataflowInput *)(*pcVar4)();
                  return pFVar7;
                }
                return pFVar7;
              }
            }
          }
          break;
        }
        uVar11 = puVar9[6];
      } while (uVar11 != 0xffffffff);
    }
  }
  if ((param_1->ContainerReference == (void *)0x0) &&
     (*(int *)&(this->InputArrayProperties).field_0x8 !=
      *(int *)&(this->InputArrayProperties).field_0x34)) {
    puVar12 = &(this->ExpandedInputs).field_0x10;
    uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
    uStack_ac = 1;
    local_98 = 0;
    uStack_9c = uStack_b0;
    if (uVar11 != 0) {
      puVar9 = *(uint **)&(this->ExpandedInputs).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)puVar12;
      }
      uVar16 = *puVar9;
      puVar17 = puVar14;
      local_98 = 0;
      uStack_b0 = 0;
      while (uVar16 == 0) {
        iVar13 = (int)puVar14;
        local_98 = (int)puVar17 + 0x20;
        puVar17 = (uint *)(ulonglong)local_98;
        uStack_b0 = iVar13 + 1;
        puVar14 = (uint *)(ulonglong)uStack_b0;
        uStack_9c = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
        goto LAB_144446a7d;
        uVar16 = puVar9[(longlong)iVar13 + 1];
      }
      uStack_ac = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uStack_9c = (local_98 - 1) + (int)lVar10;
      if ((int)uVar11 < (int)uStack_9c) {
        uStack_9c = uVar11;
      }
    }
LAB_144446a7d:
    uStack_94 = local_3c;
    iStack_90 = *(int *)&(this->ExpandedInputs).field_0x8 -
                *(int *)&(this->ExpandedInputs).field_0x34;
    uVar16 = *(uint *)&(this->ExpandedInputs).field_0x28;
    TStack_80._padding_ = CONCAT44(uStack_ac,uStack_b0);
    uStack_a0 = 0xffffffff;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_80.CurrentBitIndex = uStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = pTVar1;
    local_a8 = puVar12;
    local_88 = pTVar1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
    if ((((int)uVar16 < 0) || ((int)uVar11 < (int)uVar16)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDataflowInput *)(*pcVar4)();
      return pFVar7;
    }
    uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
    if (uVar16 != uVar11) {
      puVar18 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar12;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_144446b81;
        uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar11 < (int)uVar16) {
        uVar16 = uVar11;
      }
    }
LAB_144446b81:
    while( true ) {
      pTVar5 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar16) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
         (pTVar5 == pTVar1)) break;
      pvVar3 = param_1->Reference;
      pFVar7 = *(FDataflowInput **)
                ((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar5);
      pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      if (pvVar8 == pvVar3) {
        return pFVar7;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return (FDataflowInput *)0x0;
}

// FindInput @ 144446cb0

FDataflowInput * __thiscall FDataflowNode::FindInput(FDataflowNode *this,FConnectionKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput **ppFVar3;
  FDataflowInput *pFVar4;
  
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)&this->ExpandedInputs,param_1);
  if (ppFVar3 == (FDataflowInput **)0x0) {
    return (FDataflowInput *)0x0;
  }
  if (*ppFVar3 == (FDataflowInput *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*Con",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x110,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowInput *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *ppFVar3;
}

// FindInput @ 144446d10

FDataflowInput * __thiscall FDataflowNode::FindInput(FDataflowNode *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDataflowInput *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedInputs).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144446dbe;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_144446dbe:
  uVar10 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDataflowInput *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144446ebc;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_144446ebc:
  uVar6 = local_res10.Number;
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar8 = *(FDataflowInput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedInputs);
    lVar9 = pFVar8->_padding_;
    if (((uint)lVar9 == param_1.ComparisonIndex.Value.Value) &&
       ((uint)((ulonglong)lVar9 >> 0x20) == uVar6)) {
      return pFVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowInput *)0x0;
}

// FindInput @ 144446f50

FDataflowInput * __thiscall
FDataflowNode::FindInput(FDataflowNode *this,FConnectionReference *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar5;
  bool bVar6;
  FDataflowInput *pFVar7;
  void *pvVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  FConnectionKey local_c8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  GetKeyFromReference(this,&local_c8,param_1);
  pTVar1 = &this->ExpandedInputs;
  puVar14 = (uint *)0x0;
  uStack_b0 = 0;
  uVar11 = local_c8.Offset * 0x40 + local_c8.ContainerIndex + (local_c8.Offset >> 2) + 0x9e3779b9 ^
           local_c8.Offset;
  if (*(int *)&(this->ExpandedInputs).field_0x8 != *(int *)&(this->ExpandedInputs).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ExpandedInputs).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ExpandedInputs).field_0x38;
    }
    uVar11 = *(uint *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ExpandedInputs).field_0x48 - 1U &
                      (uVar11 * 0x40 + -0x61c88647 + local_c8.ContainerElementOffset + (uVar11 >> 2)
                      ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar11 * 0x20 + *(longlong *)pTVar1);
        if (((*puVar9 == local_c8.Offset) && (puVar9[1] == local_c8.ContainerIndex)) &&
           (puVar9[2] == local_c8.ContainerElementOffset)) {
          if (uVar11 != 0xffffffff) {
            puVar17 = puVar9 + 4;
            if (puVar9 == (uint *)0x0) {
              puVar17 = puVar14;
            }
            if (puVar17 != (uint *)0x0) {
              if ((*(longlong *)puVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("*Con",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                     ,0xef,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pFVar7 = (FDataflowInput *)(*pcVar4)();
                return pFVar7;
              }
              pFVar7 = *(FDataflowInput **)puVar17;
              if (pFVar7 != (FDataflowInput *)0x0) {
                pvVar3 = param_1->Reference;
                pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
                if ((pvVar8 != pvVar3) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Con->RealAddress() == Reference.Reference",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                       ,0xfa,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pFVar7 = (FDataflowInput *)(*pcVar4)();
                  return pFVar7;
                }
                return pFVar7;
              }
            }
          }
          break;
        }
        uVar11 = puVar9[6];
      } while (uVar11 != 0xffffffff);
    }
  }
  if ((param_1->ContainerReference == (void *)0x0) &&
     (*(int *)&(this->InputArrayProperties).field_0x8 !=
      *(int *)&(this->InputArrayProperties).field_0x34)) {
    puVar12 = &(this->ExpandedInputs).field_0x10;
    uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
    uStack_ac = 1;
    local_98 = 0;
    uStack_9c = uStack_b0;
    if (uVar11 != 0) {
      puVar9 = *(uint **)&(this->ExpandedInputs).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)puVar12;
      }
      uVar16 = *puVar9;
      puVar17 = puVar14;
      local_98 = 0;
      uStack_b0 = 0;
      while (uVar16 == 0) {
        iVar13 = (int)puVar14;
        local_98 = (int)puVar17 + 0x20;
        puVar17 = (uint *)(ulonglong)local_98;
        uStack_b0 = iVar13 + 1;
        puVar14 = (uint *)(ulonglong)uStack_b0;
        uStack_9c = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
        goto LAB_1444470dd;
        uVar16 = puVar9[(longlong)iVar13 + 1];
      }
      uStack_ac = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uStack_9c = (local_98 - 1) + (int)lVar10;
      if ((int)uVar11 < (int)uStack_9c) {
        uStack_9c = uVar11;
      }
    }
LAB_1444470dd:
    uStack_94 = local_3c;
    iStack_90 = *(int *)&(this->ExpandedInputs).field_0x8 -
                *(int *)&(this->ExpandedInputs).field_0x34;
    uVar16 = *(uint *)&(this->ExpandedInputs).field_0x28;
    TStack_80._padding_ = CONCAT44(uStack_ac,uStack_b0);
    uStack_a0 = 0xffffffff;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_80.CurrentBitIndex = uStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = pTVar1;
    local_a8 = puVar12;
    local_88 = pTVar1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
    if ((((int)uVar16 < 0) || ((int)uVar11 < (int)uVar16)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDataflowInput *)(*pcVar4)();
      return pFVar7;
    }
    uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
    if (uVar16 != uVar11) {
      puVar18 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar12;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1444471e1;
        uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar11 < (int)uVar16) {
        uVar16 = uVar11;
      }
    }
LAB_1444471e1:
    while( true ) {
      pTVar5 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar16) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
         (pTVar5 == pTVar1)) break;
      pvVar3 = param_1->Reference;
      pFVar7 = *(FDataflowInput **)
                ((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar5);
      pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      if (pvVar8 == pvVar3) {
        return pFVar7;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return (FDataflowInput *)0x0;
}

// FindInput @ 144447310

FDataflowInput * __thiscall FDataflowNode::FindInput(FDataflowNode *this,FGuid *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDataflowInput *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedInputs).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1444473bd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1444473bd:
  uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDataflowInput *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1444474c0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1444474c0:
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar8 = *(FDataflowInput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedInputs);
    if ((((uint)((ulonglong)pFVar8->_padding_ >> 0x20) == param_1->D &&
         (uint)((ulonglong)pFVar8->_padding_ >> 0x20) == param_1->B) &&
        (uint)pFVar8->_padding_ == param_1->C) && (uint)pFVar8->_padding_ == param_1->A) {
      return pFVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowInput *)0x0;
}

// FindInput @ 144447570

FDataflowInput * __thiscall FDataflowNode::FindInput(FDataflowNode *this,FConnectionKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput **ppFVar3;
  FDataflowInput *pFVar4;
  
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)&this->ExpandedInputs,param_1);
  if (ppFVar3 == (FDataflowInput **)0x0) {
    return (FDataflowInput *)0x0;
  }
  if (*ppFVar3 == (FDataflowInput *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*Con",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0xef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowInput *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *ppFVar3;
}

// FindInput @ 1444475d0

FDataflowInput * __thiscall FDataflowNode::FindInput(FDataflowNode *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDataflowInput *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedInputs).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14444767e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14444767e:
  uVar10 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDataflowInput *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14444777c;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14444777c:
  uVar6 = local_res10.Number;
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar8 = *(FDataflowInput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedInputs);
    lVar9 = pFVar8->_padding_;
    if (((uint)lVar9 == param_1.ComparisonIndex.Value.Value) &&
       ((uint)((ulonglong)lVar9 >> 0x20) == uVar6)) {
      return pFVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowInput *)0x0;
}

// FindOutput @ 144447a30

FDataflowOutput * __thiscall
FDataflowNode::FindOutput(FDataflowNode *this,FConnectionReference *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar5;
  bool bVar6;
  FDataflowOutput *pFVar7;
  void *pvVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  FConnectionKey local_c8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  GetKeyFromReference(this,&local_c8,param_1);
  pTVar1 = &this->ExpandedOutputs;
  puVar14 = (uint *)0x0;
  uStack_b0 = 0;
  uVar11 = local_c8.Offset * 0x40 + local_c8.ContainerIndex + (local_c8.Offset >> 2) + 0x9e3779b9 ^
           local_c8.Offset;
  if (*(int *)&(this->ExpandedOutputs).field_0x8 != *(int *)&(this->ExpandedOutputs).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ExpandedOutputs).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ExpandedOutputs).field_0x38;
    }
    uVar11 = *(uint *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ExpandedOutputs).field_0x48 - 1U &
                      (uVar11 * 0x40 + -0x61c88647 + local_c8.ContainerElementOffset + (uVar11 >> 2)
                      ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar11 * 0x20 + *(longlong *)pTVar1);
        if (((*puVar9 == local_c8.Offset) && (puVar9[1] == local_c8.ContainerIndex)) &&
           (puVar9[2] == local_c8.ContainerElementOffset)) {
          if (uVar11 != 0xffffffff) {
            puVar17 = puVar9 + 4;
            if (puVar9 == (uint *)0x0) {
              puVar17 = puVar14;
            }
            if (puVar17 != (uint *)0x0) {
              if ((*(longlong *)puVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("*Con",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                     ,0x1dc,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pFVar7 = (FDataflowOutput *)(*pcVar4)();
                return pFVar7;
              }
              pFVar7 = *(FDataflowOutput **)puVar17;
              if (pFVar7 != (FDataflowOutput *)0x0) {
                pvVar3 = param_1->Reference;
                pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
                if ((pvVar8 != pvVar3) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Con->RealAddress() == Reference.Reference",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                       ,0x1e7,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pFVar7 = (FDataflowOutput *)(*pcVar4)();
                  return pFVar7;
                }
                return pFVar7;
              }
            }
          }
          break;
        }
        uVar11 = puVar9[6];
      } while (uVar11 != 0xffffffff);
    }
  }
  if ((param_1->ContainerReference == (void *)0x0) &&
     (*(int *)&(this->OutputArrayProperties).field_0x8 !=
      *(int *)&(this->OutputArrayProperties).field_0x34)) {
    puVar12 = &(this->ExpandedOutputs).field_0x10;
    uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    uStack_ac = 1;
    local_98 = 0;
    uStack_9c = uStack_b0;
    if (uVar11 != 0) {
      puVar9 = *(uint **)&(this->ExpandedOutputs).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)puVar12;
      }
      uVar16 = *puVar9;
      puVar17 = puVar14;
      local_98 = 0;
      uStack_b0 = 0;
      while (uVar16 == 0) {
        iVar13 = (int)puVar14;
        local_98 = (int)puVar17 + 0x20;
        puVar17 = (uint *)(ulonglong)local_98;
        uStack_b0 = iVar13 + 1;
        puVar14 = (uint *)(ulonglong)uStack_b0;
        uStack_9c = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
        goto LAB_144447bbd;
        uVar16 = puVar9[(longlong)iVar13 + 1];
      }
      uStack_ac = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uStack_9c = (local_98 - 1) + (int)lVar10;
      if ((int)uVar11 < (int)uStack_9c) {
        uStack_9c = uVar11;
      }
    }
LAB_144447bbd:
    uStack_94 = local_3c;
    iStack_90 = *(int *)&(this->ExpandedOutputs).field_0x8 -
                *(int *)&(this->ExpandedOutputs).field_0x34;
    uVar16 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    TStack_80._padding_ = CONCAT44(uStack_ac,uStack_b0);
    uStack_a0 = 0xffffffff;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_80.CurrentBitIndex = uStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = pTVar1;
    local_a8 = puVar12;
    local_88 = pTVar1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
    if ((((int)uVar16 < 0) || ((int)uVar11 < (int)uVar16)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDataflowOutput *)(*pcVar4)();
      return pFVar7;
    }
    uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    if (uVar16 != uVar11) {
      puVar18 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar12;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_144447cc1;
        uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar11 < (int)uVar16) {
        uVar16 = uVar11;
      }
    }
LAB_144447cc1:
    while( true ) {
      pTVar5 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar16) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
         (pTVar5 == pTVar1)) break;
      pvVar3 = param_1->Reference;
      pFVar7 = *(FDataflowOutput **)
                ((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar5);
      pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      if (pvVar8 == pvVar3) {
        return pFVar7;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return (FDataflowOutput *)0x0;
}

// FindOutput @ 144447df0

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,FConnectionKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowOutput **ppFVar3;
  FDataflowOutput *pFVar4;
  
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                    *)&this->ExpandedOutputs,param_1);
  if (ppFVar3 == (FDataflowOutput **)0x0) {
    return (FDataflowOutput *)0x0;
  }
  if (*ppFVar3 == (FDataflowOutput *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*Con",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x1dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowOutput *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *ppFVar3;
}

// FindOutput @ 144447e50

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,uint param_1)

{
  undefined1 *puVar1;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar7;
  bool bVar8;
  FDataflowOutput *pFVar9;
  ulong64 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong lStack_a0;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar4 = *(int *)&(this->ExpandedOutputs).field_0x28;
  pTVar2 = &this->ExpandedOutputs;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_144447efd;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_7c = (int)lVar11 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_144447efd:
  iStack_70 = *(int *)&(this->ExpandedOutputs).field_0x8 -
              *(int *)&(this->ExpandedOutputs).field_0x34;
  uVar14 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uStack_80 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar6)();
    return pFVar9;
  }
  uVar5 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144448000;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_144448000:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pFVar9 = *(FDataflowOutput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar7);
    local_a8 = pFVar9->_padding_;
    lStack_a0 = pFVar9->_padding_;
    uVar10 = CityHash64((char *)&local_a8,0x10);
    if ((uint)uVar10 == param_1) {
      return pFVar9;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowOutput *)0x0;
}

// FindOutput @ 1444480a0

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDataflowOutput *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedOutputs).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14444814e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14444814e:
  uVar10 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14444824c;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14444824c:
  uVar6 = local_res10.Number;
  while( true ) {
    if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar8 = *(FDataflowOutput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedOutputs);
    lVar9 = pFVar8->_padding_;
    if (((uint)lVar9 == param_1.ComparisonIndex.Value.Value) &&
       ((uint)((ulonglong)lVar9 >> 0x20) == uVar6)) {
      return pFVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowOutput *)0x0;
}

// FindOutput @ 1444482e0

FDataflowOutput * __thiscall
FDataflowNode::FindOutput(FDataflowNode *this,FConnectionReference *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar5;
  bool bVar6;
  FDataflowOutput *pFVar7;
  void *pvVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  FConnectionKey local_c8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  GetKeyFromReference(this,&local_c8,param_1);
  pTVar1 = &this->ExpandedOutputs;
  puVar14 = (uint *)0x0;
  uStack_b0 = 0;
  uVar11 = local_c8.Offset * 0x40 + local_c8.ContainerIndex + (local_c8.Offset >> 2) + 0x9e3779b9 ^
           local_c8.Offset;
  if (*(int *)&(this->ExpandedOutputs).field_0x8 != *(int *)&(this->ExpandedOutputs).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ExpandedOutputs).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ExpandedOutputs).field_0x38;
    }
    uVar11 = *(uint *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ExpandedOutputs).field_0x48 - 1U &
                      (uVar11 * 0x40 + -0x61c88647 + local_c8.ContainerElementOffset + (uVar11 >> 2)
                      ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar11 * 0x20 + *(longlong *)pTVar1);
        if (((*puVar9 == local_c8.Offset) && (puVar9[1] == local_c8.ContainerIndex)) &&
           (puVar9[2] == local_c8.ContainerElementOffset)) {
          if (uVar11 != 0xffffffff) {
            puVar17 = puVar9 + 4;
            if (puVar9 == (uint *)0x0) {
              puVar17 = puVar14;
            }
            if (puVar17 != (uint *)0x0) {
              if ((*(longlong *)puVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("*Con",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                     ,0x1bb,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pFVar7 = (FDataflowOutput *)(*pcVar4)();
                return pFVar7;
              }
              pFVar7 = *(FDataflowOutput **)puVar17;
              if (pFVar7 != (FDataflowOutput *)0x0) {
                pvVar3 = param_1->Reference;
                pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
                if ((pvVar8 != pvVar3) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Con->RealAddress() == Reference.Reference",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                       ,0x1c6,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pFVar7 = (FDataflowOutput *)(*pcVar4)();
                  return pFVar7;
                }
                return pFVar7;
              }
            }
          }
          break;
        }
        uVar11 = puVar9[6];
      } while (uVar11 != 0xffffffff);
    }
  }
  if ((param_1->ContainerReference == (void *)0x0) &&
     (*(int *)&(this->OutputArrayProperties).field_0x8 !=
      *(int *)&(this->OutputArrayProperties).field_0x34)) {
    puVar12 = &(this->ExpandedOutputs).field_0x10;
    uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    uStack_ac = 1;
    local_98 = 0;
    uStack_9c = uStack_b0;
    if (uVar11 != 0) {
      puVar9 = *(uint **)&(this->ExpandedOutputs).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)puVar12;
      }
      uVar16 = *puVar9;
      puVar17 = puVar14;
      local_98 = 0;
      uStack_b0 = 0;
      while (uVar16 == 0) {
        iVar13 = (int)puVar14;
        local_98 = (int)puVar17 + 0x20;
        puVar17 = (uint *)(ulonglong)local_98;
        uStack_b0 = iVar13 + 1;
        puVar14 = (uint *)(ulonglong)uStack_b0;
        uStack_9c = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
        goto LAB_14444846d;
        uVar16 = puVar9[(longlong)iVar13 + 1];
      }
      uStack_ac = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uStack_9c = (local_98 - 1) + (int)lVar10;
      if ((int)uVar11 < (int)uStack_9c) {
        uStack_9c = uVar11;
      }
    }
LAB_14444846d:
    uStack_94 = local_3c;
    iStack_90 = *(int *)&(this->ExpandedOutputs).field_0x8 -
                *(int *)&(this->ExpandedOutputs).field_0x34;
    uVar16 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    TStack_80._padding_ = CONCAT44(uStack_ac,uStack_b0);
    uStack_a0 = 0xffffffff;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_80.CurrentBitIndex = uStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = pTVar1;
    local_a8 = puVar12;
    local_88 = pTVar1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
    if ((((int)uVar16 < 0) || ((int)uVar11 < (int)uVar16)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDataflowOutput *)(*pcVar4)();
      return pFVar7;
    }
    uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
    if (uVar16 != uVar11) {
      puVar18 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar12;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_144448571;
        uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar11 < (int)uVar16) {
        uVar16 = uVar11;
      }
    }
LAB_144448571:
    while( true ) {
      pTVar5 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar16) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
         (pTVar5 == pTVar1)) break;
      pvVar3 = param_1->Reference;
      pFVar7 = *(FDataflowOutput **)
                ((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar5);
      pvVar8 = (void *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      if (pvVar8 == pvVar3) {
        return pFVar7;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return (FDataflowOutput *)0x0;
}

// FindOutput @ 1444486a0

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,FGuid *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDataflowOutput *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedOutputs).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444874d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14444874d:
  uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144448850;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_144448850:
  while( true ) {
    if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar8 = *(FDataflowOutput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedOutputs);
    if ((((uint)((ulonglong)pFVar8->_padding_ >> 0x20) == param_1->D &&
         (uint)((ulonglong)pFVar8->_padding_ >> 0x20) == param_1->B) &&
        (uint)pFVar8->_padding_ == param_1->C) && (uint)pFVar8->_padding_ == param_1->A) {
      return pFVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowOutput *)0x0;
}

// FindOutput @ 144448900

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,FConnectionKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowOutput **ppFVar3;
  FDataflowOutput *pFVar4;
  
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                    *)&this->ExpandedOutputs,param_1);
  if (ppFVar3 == (FDataflowOutput **)0x0) {
    return (FDataflowOutput *)0x0;
  }
  if (*ppFVar3 == (FDataflowOutput *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*Con",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x1bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowOutput *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *ppFVar3;
}

// FindOutput @ 144448960

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,uint param_1)

{
  undefined1 *puVar1;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar7;
  bool bVar8;
  FDataflowOutput *pFVar9;
  ulong64 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong lStack_a0;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar4 = *(int *)&(this->ExpandedOutputs).field_0x28;
  pTVar2 = &this->ExpandedOutputs;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_144448a0d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_7c = (int)lVar11 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_144448a0d:
  iStack_70 = *(int *)&(this->ExpandedOutputs).field_0x8 -
              *(int *)&(this->ExpandedOutputs).field_0x34;
  uVar14 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uStack_80 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar6)();
    return pFVar9;
  }
  uVar5 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144448b10;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_144448b10:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pFVar9 = *(FDataflowOutput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar7);
    local_a8 = pFVar9->_padding_;
    lStack_a0 = pFVar9->_padding_;
    uVar10 = CityHash64((char *)&local_a8,0x10);
    if ((uint)uVar10 == param_1) {
      return pFVar9;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowOutput *)0x0;
}

// FindOutput @ 144448bb0

FDataflowOutput * __thiscall FDataflowNode::FindOutput(FDataflowNode *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDataflowOutput *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedOutputs).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144448c5e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_144448c5e:
  uVar10 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144448d5c;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_144448d5c:
  uVar6 = local_res10.Number;
  while( true ) {
    if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar8 = *(FDataflowOutput **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedOutputs);
    lVar9 = pFVar8->_padding_;
    if (((uint)lVar9 == param_1.ComparisonIndex.Value.Value) &&
       ((uint)((ulonglong)lVar9 >> 0x20) == uVar6)) {
      return pFVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FDataflowOutput *)0x0;
}

// FindProperty @ 144448df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FProperty * __thiscall
FDataflowNode::FindProperty
          (FDataflowNode *this,UStruct *param_1,FName *param_2,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FFieldClass *pFVar6;
  FProperty *pFVar7;
  TTuple<FProperty_const_*,void_const_*> *pTVar8;
  int iVar9;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar10;
  ForAnyElementType FVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_7f8 [32];
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_7c8;
  FString local_7b8;
  FString local_7a8;
  TArrayView<FProperty_const_*_const,int> local_798;
  FString local_788;
  FString local_778;
  FPropertyValueIterator local_768;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  pFVar5 = ::FName::ToString(param_2,&local_778);
  StripContainerIndexFromPropertyFullName(&local_7b8,pFVar5);
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FProperty *)0x0;
  iVar13 = 0;
  pFVar6 = FProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_768,pFVar6,param_1,this,FullRecursion,IncludeDeprecated);
  do {
    if (local_768.PropertyIteratorStack.ArrayNum < 1) {
LAB_144449045:
      FVar10 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_768;
      if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar10 = local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar10,local_768.PropertyIteratorStack.ArrayNum);
      if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
      }
      return pFVar7;
    }
    local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7c8.ArrayNum = 0;
    local_7c8.ArrayMax = 0;
    FPropertyValueIterator::GetPropertyChain(&local_768,&local_7c8);
    iVar9 = local_7c8.ArrayNum;
    local_798.DataPtr = (FProperty **)local_7c8.AllocatorInstance.Data;
    if ((local_7c8.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FProperty *)(*pcVar2)();
      return pFVar7;
    }
    local_798.ArrayNum = iVar9;
    GetPropertyFullNameString(&local_788,&local_798,-1);
    iVar12 = local_788.Data.ArrayNum;
    iVar9 = local_7b8.Data.ArrayNum;
    iVar15 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar15 = iVar13;
    }
    iVar4 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar4 = iVar13;
    }
    if (iVar15 < iVar4) {
      iVar4 = iVar15;
    }
    iVar14 = iVar13;
    if (0 < iVar4) {
      iVar14 = iVar4;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (iVar9 != 0) {
      FVar11.Data = local_7b8.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_7a8,(wchar_t *)FVar11.Data,iVar14);
    FVar11.Data = local_788.Data.AllocatorInstance.Data;
    iVar9 = local_7a8.Data.ArrayNum;
    if (iVar9 == iVar12) {
      if (iVar9 < 2) {
        bVar3 = false;
      }
      else {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_7a8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_788.Data.AllocatorInstance.Data);
        bVar3 = iVar9 != 0;
      }
    }
    else {
      bVar3 = iVar9 + iVar12 != 1;
    }
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      local_768.bSkipRecursionOnce = true;
    }
    else {
      iVar9 = local_7b8.Data.ArrayNum + -1;
      if (local_7b8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      if (iVar9 == iVar15) {
        pTVar8 = FPropertyValueIterator::operator->(&local_768);
        pFVar7 = *(FProperty **)pTVar8;
        if ((param_3 != (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
           (param_3 != &local_7c8)) {
          pFVar1 = (param_3->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->AllocatorInstance).Data = local_7c8.AllocatorInstance.Data;
          param_3->ArrayNum = local_7c8.ArrayNum;
          param_3->ArrayMax = local_7c8.ArrayMax;
          local_7c8.ArrayNum = 0;
          local_7c8.ArrayMax = 0;
          local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
        if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c8.AllocatorInstance.Data);
        }
        goto LAB_144449045;
      }
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.AllocatorInstance.Data);
    }
    FPropertyValueIterator::IterateToNext(&local_768);
  } while( true );
}

// FindProperty @ 1444490d0

FProperty * __thiscall
FDataflowNode::FindProperty
          (FDataflowNode *this,UStruct *param_1,void *param_2,FName *param_3,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  FProperty *pFVar1;
  
  pFVar1 = UE::Dataflow::Private::FindProperty(param_1,this,param_2,param_3,param_4);
  return pFVar1;
}

// FindPropertyChecked @ 1444492e0

FProperty * __thiscall
FDataflowNode::FindPropertyChecked
          (FDataflowNode *this,UStruct *param_1,void *param_2,FName *param_3,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  
  pFVar3 = UE::Dataflow::Private::FindProperty(param_1,this,param_2,param_3,param_4);
  if ((pFVar3 == (FProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProperty *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// ForwardInput @ 144449900

void __thiscall
FDataflowNode::ForwardInput
          (FDataflowNode *this,FContext *param_1,FConnectionReference *param_2,
          FConnectionReference *param_3)

{
  FDataflowOutput *this_00;
  FDataflowInput *pFVar1;
  
  this_00 = FindOutput(this,param_3);
  if (this_00 != (FDataflowOutput *)0x0) {
    pFVar1 = FindInput(this,param_2);
    if (pFVar1 != (FDataflowInput *)0x0) {
      FDataflowOutput::ForwardInput(this_00,pFVar1,param_1);
    }
  }
  return;
}

// Freeze @ 144449c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall FDataflowNode::Freeze(FDataflowNode *this,FContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  int iVar3;
  bool bVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  FName local_res8;
  FName local_res18 [2];
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  this->bIsFrozen = true;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
              *)&this->ExpandedOutputs,&local_68);
  iVar3 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar8.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    this_00 = *(FDataflowOutput **)FVar8.Data;
    if ((((this_00 != (FDataflowOutput *)0x0) && ((this_00->_padding_ & 0x20000000000) != 0)) &&
        (this_00->_padding_ != 0)) && (this_00->_padding_ != 0)) {
      if (5 < (byte)LogChaosDataflow._0_1_) {
        local_res8 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res8,&local_48);
        local_res18[0] = *(FName *)(this_00->_padding_ + 0x8c);
        ::FName::ToString(local_res18,&local_58);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
      if (bVar4) {
        lVar7 = this_00->_padding_;
        uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar6 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar5 & 0xffffffff);
        if (puVar6 == (undefined8 *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,param_1,lVar7);
        }
        iVar2 = ((FProperty *)this_00->_padding_)->Offset_Internal;
        FInstancedPropertyBag::AddProperty
                  (&this->FrozenProperties,(FName)this_00->_padding_,(FProperty *)this_00->_padding_
                   ,true);
        FInstancedPropertyBag::SetValue
                  (&this->FrozenProperties,(FName)this_00->_padding_,(FProperty *)this_00->_padding_
                   ,(void *)(lVar7 - iVar2));
      }
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// GetConnectionOffsetFromReference @ 14444af20

uint __thiscall FDataflowNode::GetConnectionOffsetFromReference(FDataflowNode *this,void *param_1)

{
  return (int)param_1 - (int)this;
}

// GetDataflowGraph @ 14444b460

TSharedPtr<UE::Dataflow::FGraph,1> * __thiscall
FDataflowNode::GetDataflowGraph
          (FDataflowNode *this,TSharedPtr<UE::Dataflow::FGraph,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FGraph *)0x0;
  pTVar1 = (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->WeakDataflowGraph).Object;
  }
  return __return_storage_ptr__;
}

// GetInputs @ 14444b700

TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetInputs
          (FDataflowNode *this,
          TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
              *)&this->ExpandedInputs,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetKeyFromReference @ 14444b950

FConnectionKey * __thiscall
FDataflowNode::GetKeyFromReference
          (FDataflowNode *this,FConnectionKey *__return_storage_ptr__,FConnectionReference *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  void *pvVar6;
  
  pvVar6 = param_1->ContainerReference;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)(ulonglong)*(uint *)&param_1->Reference;
  }
  uVar5 = (int)pvVar6 - (int)this;
  __return_storage_ptr__->ContainerIndex = param_1->Index;
  iVar2 = *(int *)&(this->InputArrayProperties).field_0x8;
  __return_storage_ptr__->Offset = uVar5;
  __return_storage_ptr__->ContainerElementOffset = 0xffffffff;
  if (iVar2 != *(int *)&(this->InputArrayProperties).field_0x34) {
    puVar4 = *(undefined1 **)&(this->InputArrayProperties).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->InputArrayProperties).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->InputArrayProperties).field_0x48 - 1U & uVar5) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->InputArrayProperties + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->InputArrayProperties + (longlong)iVar2 * 0x18) == uVar5) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 != (undefined8 *)0x0) {
            uVar5 = UE::Dataflow::Private::GetArrayElementOffsetFromReference
                              ((FArrayProperty *)*puVar3,param_1);
            __return_storage_ptr__->ContainerElementOffset = uVar5;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  if (*(int *)&(this->OutputArrayProperties).field_0x8 !=
      *(int *)&(this->OutputArrayProperties).field_0x34) {
    puVar4 = *(undefined1 **)&(this->OutputArrayProperties).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->OutputArrayProperties).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->OutputArrayProperties).field_0x48 - 1U &
                              __return_storage_ptr__->Offset) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->OutputArrayProperties + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->OutputArrayProperties + (longlong)iVar2 * 0x18) ==
            __return_storage_ptr__->Offset) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return __return_storage_ptr__;
          }
          uVar5 = UE::Dataflow::Private::GetArrayElementOffsetFromReference
                            ((FArrayProperty *)*puVar3,param_1);
          __return_storage_ptr__->ContainerElementOffset = uVar5;
          return __return_storage_ptr__;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return __return_storage_ptr__;
}

// GetNumInputs @ 14444c770

int __thiscall FDataflowNode::GetNumInputs(FDataflowNode *this)

{
  return *(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34;
}

// GetOutputs @ 14444c840

TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetOutputs
          (FDataflowNode *this,
          TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
              *)&this->ExpandedOutputs,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPinDisplayName @ 14444ccb0

FText * __thiscall
FDataflowNode::GetPinDisplayName
          (FDataflowNode *this,FText *__return_storage_ptr__,FName *param_1,EDirection param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FDataflowInput *pFVar6;
  FDataflowOutput *pFVar7;
  longlong *plVar8;
  UStruct *pUVar9;
  FProperty *pFVar10;
  FText *pFVar11;
  ForAnyElementType FVar12;
  FName local_res8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<FProperty_const_*_const,int> local_38;
  FString local_28;
  
  iVar5 = -1;
  if (param_2 == INPUT) {
    pFVar6 = FindInput(this,*param_1);
    if (pFVar6 != (FDataflowInput *)0x0) {
      iVar5 = (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
    }
  }
  else if ((param_2 == OUTPUT) &&
          (pFVar7 = FindOutput(this,*param_1), pFVar7 != (FDataflowOutput *)0x0)) {
    iVar5 = (**(code **)(pFVar7->_padding_ + 0x10))(pFVar7);
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0xb0))(this);
  if (plVar8 != (longlong *)0x0) {
    pUVar9 = (UStruct *)(**(code **)(*plVar8 + 0x20))();
    if (pUVar9 != (UStruct *)0x0) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      pFVar10 = FindProperty(this,pUVar9,param_1,&local_48);
      FVar2.Data = local_48.AllocatorInstance.Data;
      if (pFVar10 != (FProperty *)0x0) {
        iVar3 = local_48.ArrayNum;
        local_38.DataPtr = (FProperty **)local_48.AllocatorInstance.Data;
        if ((local_48.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FText *)(*pcVar1)();
          return pFVar11;
        }
        local_38.ArrayNum = iVar3;
        GetPropertyFullNameString(&local_28,&local_38,iVar5);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar12.Data = local_28.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res8,(wchar_t *)FVar12.Data);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        FText::FromName(__return_storage_ptr__,&local_res8);
        if (FVar2.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar2.Data);
        }
        (**(code **)(*plVar8 + 0x50))(plVar8,1);
        return __return_storage_ptr__;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
    (**(code **)(*plVar8 + 0x50))(plVar8,1);
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPinMetaData @ 14444ce60

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetPinMetaData
          (FDataflowNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName *param_1,EDirection param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPinToolTip @ 14444ce80

FString * __thiscall
FDataflowNode::GetPinToolTip
          (FDataflowNode *this,FString *__return_storage_ptr__,FName *param_1,EDirection param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPins @ 14444cf90

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetPins
          (FDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar2;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar9;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  puVar1 = &(this->ExpandedInputs).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->ExpandedInputs;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar12 = *(int *)&(this->ExpandedInputs).field_0x28;
  iStack_138 = 0;
  local_178 = 1;
  uStack_134 = 1;
  local_120 = 0;
  iStack_124 = iStack_138;
  if (iVar12 != 0) {
    puVar17 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar18 = *puVar17;
    local_120 = 0;
    iStack_138 = 0;
    while (uVar18 == 0) {
      lVar14 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14444d069;
      uVar18 = puVar17[lVar14 + 1];
    }
    uStack_134 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uStack_134 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iStack_124 = local_res20 + -1 + local_120;
    if (iVar12 < iStack_124) {
      iStack_124 = iVar12;
    }
  }
LAB_14444d069:
  iStack_118 = *(int *)&(this->ExpandedInputs).field_0x8 -
               *(int *)&(this->ExpandedInputs).field_0x34;
  uVar18 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uStack_128 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_124;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_134,iStack_138);
  uVar19 = uVar18 & 0xffffffe0;
  iVar15 = (int)uVar18 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_120;
  uStack_a8 = CONCAT44(uStack_114,iStack_118);
  local_140 = pTVar2;
  local_130 = puVar1;
  local_d0 = pTVar2;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar13 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar13;
  }
  uVar5 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar18 != uVar5) {
    puVar16 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14444d190;
      uVar18 = *(uint *)(puVar16 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_110 = (int)lVar14;
    uVar18 = local_110 + -1 + uVar19;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14444d190:
  while( true ) {
    pTVar9 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c8.CurrentBitIndex == uVar18) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_170 = CONCAT31(local_170._1_3_,1);
    lVar14 = *(longlong *)((longlong)TStack_c8.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar9);
    uStack_16c = (undefined4)*(undefined8 *)(lVar14 + 0x40);
    uStack_168 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x40) >> 0x20);
    uStack_164 = (undefined4)*(undefined8 *)(lVar14 + 0x48);
    uStack_160 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x48) >> 0x20);
    uStack_15c = CONCAT31(uStack_15c._1_3_,(*(byte *)(lVar14 + 0x35) & 0xc) == 0xc);
    if (((pFVar6 <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 <
         pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar12 = __return_storage_ptr__->ArrayNum;
    if (iVar12 == __return_storage_ptr__->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar12 + 1;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
    *(ulonglong *)pFVar6 = CONCAT44(uStack_16c,local_170);
    *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_164,uStack_168);
    *(ulonglong *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = CONCAT44(uStack_15c,uStack_160);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iStack_f8 = 0;
  local_e0 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar12 = *(int *)&(this->ExpandedOutputs).field_0x28;
  pTVar3 = &this->ExpandedOutputs;
  iStack_e4 = 0;
  if (iVar12 != 0) {
    puVar17 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar14 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14444d351;
      uVar18 = puVar17[lVar14 + 1];
    }
    local_178 = -uVar18 & uVar18;
    uVar4 = (ulonglong)local_178 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_10c = (int)lVar14;
    iStack_e4 = local_e0 + -1 + local_10c;
    if (iVar12 < iStack_e4) {
      iStack_e4 = iVar12;
    }
  }
LAB_14444d351:
  uStack_f4 = local_178;
  iStack_dc = iStack_124;
  iStack_d8 = *(int *)&(this->ExpandedOutputs).field_0x8 -
              *(int *)&(this->ExpandedOutputs).field_0x34;
  uVar18 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uStack_e8 = 0xffffffff;
  uVar19 = uVar18 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(local_178,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_98._28_4_ = iStack_124;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = pTVar3;
  local_f0 = puVar1;
  local_a0 = pTVar3;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar13 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar13;
  }
  uVar5 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar18 != uVar5) {
    puVar16 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14444d480;
      uVar18 = *(uint *)(puVar16 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_108 = (int)lVar14;
    uVar18 = local_108 + -1 + uVar19;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14444d480:
  while( true ) {
    pTVar10 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar18) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar3))
    break;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_158 = CONCAT31(local_158._1_3_,2);
    lVar14 = *(longlong *)((longlong)TStack_98.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar10)
    ;
    uStack_154 = (undefined4)*(undefined8 *)(lVar14 + 0x40);
    uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x40) >> 0x20);
    uStack_14c = (undefined4)*(undefined8 *)(lVar14 + 0x48);
    uStack_148 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x48) >> 0x20);
    uStack_144 = CONCAT31(uStack_144._1_3_,(*(byte *)(lVar14 + 0x35) & 0xc) == 0xc);
    if (((pFVar6 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 <
         pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar12 = __return_storage_ptr__->ArrayNum;
    if (iVar12 == __return_storage_ptr__->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar12 + 1;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
    *(ulonglong *)pFVar6 = CONCAT44(uStack_154,local_158);
    *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_14c,uStack_150);
    *(ulonglong *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = CONCAT44(uStack_144,uStack_148);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return __return_storage_ptr__;
}

// GetPropertyDisplayNameText @ 14444d750

FText * __cdecl
FDataflowNode::GetPropertyDisplayNameText
          (FText *__return_storage_ptr__,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  TArrayView<FProperty_const_*_const,int> local_28;
  FString local_18;
  
  local_28.DataPtr = (FProperty **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_28.ArrayNum = iVar1;
  GetPropertyFullNameString(&local_18,&local_28,param_2);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FText::FromName(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetPropertyFullName @ 14444d810

FName __cdecl
FDataflowNode::GetPropertyFullName
          (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  undefined4 in_register_00000014;
  ForAnyElementType FVar5;
  int in_R8D;
  TArrayView<FProperty_const_*_const,int> local_28;
  FString local_18;
  
  local_28.DataPtr = *(FProperty ***)CONCAT44(in_register_00000014,param_2);
  iVar1 = *(int *)((undefined8 *)CONCAT44(in_register_00000014,param_2) + 1);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  local_28.ArrayNum = iVar1;
  GetPropertyFullNameString(&local_18,&local_28,in_R8D);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar5.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetPropertyFullNameString @ 14444d8c0

FString * __cdecl
FDataflowNode::GetPropertyFullNameString
          (FString *__return_storage_ptr__,TArrayView<FProperty_const_*_const,int> *param_1,
          int param_2)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FString *pFVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  FString local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar11 = false;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar16 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar15 = (longlong)(int)uVar16 * 8;
    do {
      uVar12 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FString *)(*pcVar4)();
        return pFVar13;
      }
      pvVar2 = *(void **)(lVar15 + (longlong)param_1->DataPtr);
      bVar10 = IsThisNotNull(pvVar2,"FField::GetName");
      if (bVar10) {
        ::FName::ToString((FName *)((longlong)pvVar2 + 0x20),&local_148);
      }
      else {
        ::FString::FString(&local_148,L"None");
      }
      if ((pvVar2 != (void *)0x0) &&
         ((*(uint *)(*(longlong *)((longlong)pvVar2 + 8) + 0x18) >> 0x15 & 1) != 0)) {
        if (param_2 != -1) {
          if ((bVar11) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bFoundArrayProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                  ,0x330,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar4)();
            return pFVar13;
          }
          FVar9.Data = local_148.Data.AllocatorInstance.Data;
          lVar14 = (longlong)local_148.Data.ArrayNum;
          bVar11 = true;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = local_148.Data.ArrayNum;
          if (local_148.Data.ArrayNum == 0) {
            local_108.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                       local_148.Data.ArrayNum,&local_108.Data.ArrayMax);
            memcpy(local_108.Data.AllocatorInstance.Data,FVar9.Data,lVar14 * 2);
          }
          FStringFormatArg::FStringFormatArg(&local_b8,&local_108);
          FStringFormatArg::FStringFormatArg(&local_98,param_2);
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_138.AllocatorInstance.Data,&local_b8,2);
          ::FString::FormatImpl(&local_f8,L"{0}[{1}]",&local_138);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          local_148.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          local_148.Data.ArrayNum = local_f8.Data.ArrayNum;
          local_148.Data.ArrayMax = local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
          if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_138.AllocatorInstance.Data);
          }
          if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
          }
        }
        uVar16 = uVar16 - 1;
        lVar15 = lVar15 + -8;
      }
      FVar9.Data = local_148.Data.AllocatorInstance.Data;
      iVar1 = (__return_storage_ptr__->Data).ArrayNum;
      if (iVar1 < 2) {
        lVar14 = (longlong)local_148.Data.ArrayNum;
        bVar8 = true;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = local_148.Data.ArrayNum;
        if (local_148.Data.ArrayNum == 0) {
          pFVar13 = &local_118;
          local_118.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                     local_148.Data.ArrayNum,&local_118.Data.ArrayMax);
          memcpy(local_118.Data.AllocatorInstance.Data,FVar9.Data,lVar14 * 2);
          pFVar13 = &local_118;
        }
      }
      else {
        pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_d8,iVar1,&local_d8.Data.ArrayMax);
        memcpy(local_d8.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
        FStringFormatArg::FStringFormatArg(&local_78,&local_d8);
        FVar9.Data = local_148.Data.AllocatorInstance.Data;
        lVar14 = (longlong)local_148.Data.ArrayNum;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = local_148.Data.ArrayNum;
        if (local_148.Data.ArrayNum == 0) {
          local_e8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,
                     local_148.Data.ArrayNum,&local_e8.Data.ArrayMax);
          memcpy(local_e8.Data.AllocatorInstance.Data,FVar9.Data,lVar14 * 2);
        }
        FStringFormatArg::FStringFormatArg(&local_58,&local_e8);
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_128.AllocatorInstance,2,&local_128.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_128.AllocatorInstance.Data,&local_78,2);
        ::FString::FormatImpl(&local_c8,L"{0}.{1}",&local_128);
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        pFVar13 = &local_c8;
      }
      if (__return_storage_ptr__ != pFVar13) {
        pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar13->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if ((bVar5) &&
         (bVar5 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        bVar6 = false;
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
        if ((FStringFormatArg *)local_128.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
      }
      if (bVar7) {
        bVar7 = false;
        if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
        }
      }
      if ((bVar8) &&
         (bVar8 = false, local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      lVar15 = lVar15 + -8;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  return __return_storage_ptr__;
}

// GetPropertyOffset @ 14444de00

uint __cdecl
FDataflowNode::GetPropertyOffset(TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    uVar4 = uVar4 + *(int *)(*(longlong *)pFVar3 + 0x44);
    pFVar3 = pFVar3 + 8;
  }
  return uVar4;
}

// GetPropertyOffset @ 14444de60

uint __thiscall FDataflowNode::GetPropertyOffset(FDataflowNode *this,FName *param_1)

{
  longlong *plVar1;
  UStruct *pUVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  uVar4 = 0;
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  if (plVar1 != (longlong *)0x0) {
    pUVar2 = (UStruct *)(**(code **)(*plVar1 + 0x20))(plVar1);
    if (pUVar2 != (UStruct *)0x0) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      FindProperty(this,pUVar2,param_1,&local_18);
      for (FVar3.Data = local_18.AllocatorInstance.Data;
          FVar3.Data != local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
          FVar3.Data = FVar3.Data + 8) {
        uVar4 = uVar4 + *(int *)(*(longlong *)FVar3.Data + 0x44);
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
  }
  return uVar4;
}

// GetValueHash @ 14444ef70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FDataflowNode::GetValueHash(FDataflowNode *this)

{
  FProperty *this_00;
  uint uVar1;
  longlong *plVar2;
  UStruct *pUVar3;
  FFieldClass *pFVar4;
  TTuple<FProperty_const_*,void_const_*> *pTVar5;
  ICppStructOps *pIVar6;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
  uVar8 = 0;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = (UStruct *)(**(code **)(*plVar2 + 0x20))(plVar2);
    if (pUVar3 != (UStruct *)0x0) {
      pFVar4 = FProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar4,pUVar3,this,FullRecursion,IncludeDeprecated);
      while (0 < local_748.PropertyIteratorStack.ArrayNum) {
        pTVar5 = FPropertyValueIterator::operator->(&local_748);
        this_00 = *(FProperty **)pTVar5;
        if (this_00 != (FProperty *)0x0) {
          if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) != 0) &&
             (((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0 ||
              (pIVar6 = UScriptStruct::GetCppStructOps((UScriptStruct *)this_00[1]._padding_),
              pIVar6 == (ICppStructOps *)0x0)))) {
            FVar7 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
            if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
                (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
              FVar7 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
            }
            DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                      ((FPropertyValueStackEntry *)FVar7,local_748.PropertyIteratorStack.ArrayNum);
            if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
                (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
              FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData)
              ;
            }
            (**(code **)(*plVar2 + 0x50))(plVar2,1);
            return 0;
          }
          if ((this_00->PropertyFlags & (CPF_TObjectPtr|CPF_HasGetValueTypeHash)) ==
              CPF_HasGetValueTypeHash) {
            pTVar5 = FPropertyValueIterator::operator->(&local_748);
            uVar1 = FProperty::GetValueTypeHash(this_00,*(void **)&pTVar5->field_0x8);
            uVar8 = uVar8 - uVar1 ^ uVar1 >> 0xd;
            uVar9 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
            uVar1 = (uVar1 - uVar9) - uVar8 ^ uVar9 >> 0xd;
            uVar8 = (uVar8 - uVar1) - uVar9 ^ uVar1 >> 0xc;
            uVar9 = (uVar9 - uVar8) - uVar1 ^ uVar8 << 0x10;
            uVar1 = (uVar1 - uVar9) - uVar8 ^ uVar9 >> 5;
            uVar8 = (uVar8 - uVar1) - uVar9 ^ uVar1 >> 3;
            uVar9 = (uVar9 - uVar8) - uVar1 ^ uVar8 << 10;
            uVar8 = (uVar1 - uVar9) - uVar8 ^ uVar9 >> 0xf;
          }
        }
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar7 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar7 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar7,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
    }
    (**(code **)(*plVar2 + 0x50))(plVar2,1);
  }
  return uVar8;
}

// HasHiddenInputs @ 14444f680

bool __thiscall FDataflowNode::HasHiddenInputs(FDataflowNode *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedInputs).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444f72d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14444f72d:
  uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444f830;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14444f830:
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((*(byte *)(*(longlong *)
                    ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&this->ExpandedInputs) + 0x35) & 0xc) == 0xc) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// HasHiddenOutputs @ 14444f8b0

bool __thiscall FDataflowNode::HasHiddenOutputs(FDataflowNode *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedOutputs).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444f95d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14444f95d:
  uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444fa60;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14444fa60:
  while( true ) {
    if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((*(byte *)(*(longlong *)
                    ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&this->ExpandedOutputs) + 0x35) & 0xc) == 0xc) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// HasHideableInputs @ 14444fae0

bool __thiscall FDataflowNode::HasHideableInputs(FDataflowNode *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedInputs).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444fb8d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14444fb8d:
  uVar11 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444fc90;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14444fc90:
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((*(byte *)(*(longlong *)
                    ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&this->ExpandedInputs) + 0x35) & 4) != 0) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// HasHideableOutputs @ 14444fd10

bool __thiscall FDataflowNode::HasHideableOutputs(FDataflowNode *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar3 = *(int *)&(this->ExpandedOutputs).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444fdbd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14444fdbd:
  uVar11 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14444fec0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14444fec0:
  while( true ) {
    if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((*(byte *)(*(longlong *)
                    ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&this->ExpandedOutputs) + 0x35) & 4) != 0) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// InitConnectionParametersFromPropertyReference @ 1444500c0

void __thiscall
FDataflowNode::InitConnectionParametersFromPropertyReference
          (FDataflowNode *this,FStructOnScope *param_1,void *param_2,FName *param_3,
          FConnectionParameters *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UStruct *pUVar4;
  FProperty *pFVar5;
  FName *pFVar6;
  ulonglong uVar7;
  int iVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TArrayView<FProperty_const_*_const,int> local_58;
  FString local_48;
  
  pUVar4 = (UStruct *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (pUVar4 == (UStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x387,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar11 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pFVar5 = UE::Dataflow::Private::FindProperty(pUVar4,this,param_2,param_3,&local_98);
  if (pFVar5 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_98.ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyChain.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x38a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pFVar5 == (FProperty *)0x0) {
    FVar9.ComparisonIndex.Value = 0;
    FVar9.Number = 0;
  }
  else {
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    (**(code **)(pFVar5->_padding_ + 0x68))(pFVar5,&local_68,&local_88,0);
    ::FString::RemoveSpacesInline(&local_88);
    ::FString::ConcatFF(&local_78,&local_68,&local_88);
    iVar8 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    pFVar6 = ::FName::FName(local_res18,iVar8,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar9 = *pFVar6;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  local_58.DataPtr = (FProperty **)local_98.AllocatorInstance.Data;
  param_4->Type = FVar9;
  iVar8 = local_98.ArrayNum;
  if (local_98.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58.ArrayNum = iVar8;
  GetPropertyFullNameString(&local_48,&local_58,-1);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar10.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar8 = local_98.ArrayNum;
  uVar7 = (ulonglong)local_98.ArrayNum;
  param_4->Property = pFVar5;
  param_4->Offset = (int)param_2 - (int)this;
  pFVar1 = local_98.AllocatorInstance.Data + uVar7 * 8;
  param_4->Name = local_res10;
  param_4->Owner = this;
  FVar10.Data = local_98.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      uVar7 = local_98._8_8_ & 0xffffffff;
    }
    if (FVar10.Data == pFVar1) break;
    uVar11 = uVar11 + *(int *)(*(longlong *)FVar10.Data + 0x44);
    FVar10.Data = FVar10.Data + 8;
  }
  if (param_4->Offset != uVar11) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutParams.Offset == GetPropertyOffset(PropertyChain)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x391,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// InputSupportsType @ 144450730

bool __thiscall FDataflowNode::InputSupportsType(FDataflowNode *this,FName param_1,FName param_2)

{
  bool bVar1;
  FDataflowInput *this_00;
  
  this_00 = FindInput(this,param_1);
  if (this_00 != (FDataflowInput *)0x0) {
    bVar1 = FDataflowConnection::SupportsType((FDataflowConnection *)this_00,param_2);
    return bVar1;
  }
  return false;
}

// Invalidate @ 144450770

void __thiscall FDataflowNode::Invalidate(FDataflowNode *this,FTimestamp *param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(FDataflowNode_*),FDefaultDelegateUserPolicy> *this_00;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FTimestamp *pFVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  FTimestamp *local_res10;
  int local_res18;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FDestructionSentinel local_78 [2];
  undefined4 local_44;
  
  uVar3 = param_1->Value;
  if (this->bPauseInvalidations == false) {
    if ((this->LastModifiedTimestamp).Value < uVar3) {
      this_00 = &this->OnNodeInvalidatedDelegate;
      (this->LastModifiedTimestamp).Value = uVar3;
      local_res10 = param_1;
      bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      iVar14 = 0;
      if (bVar8) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)local_78);
        puVar1 = &(this->OnNodeInvalidatedDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar12 = *(int *)&(this->OnNodeInvalidatedDelegate).field_0x10 - 1;
        if (-1 < (int)uVar12) {
          lVar19 = (longlong)(int)uVar12 << 4;
          bVar8 = false;
          do {
            uVar15 = 0;
            if ((int)uVar12 < *(int *)&(this->OnNodeInvalidatedDelegate).field_0x10) {
              uVar15 = ~uVar12 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(this->OnNodeInvalidatedDelegate).field_0x8;
            if (((*(int *)(lVar19 + 8 + lVar4) == 0) ||
                (plVar5 = *(longlong **)(lVar19 + lVar4), plVar5 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
              bVar8 = true;
            }
            lVar19 = lVar19 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        puVar1 = &(this->OnNodeInvalidatedDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_78[0].bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78[0].Accessor,local_78);
        }
      }
      puVar1 = &(this->ExpandedOutputs).field_0x10;
      uVar12 = 1;
      iVar2 = *(int *)&(this->ExpandedOutputs).field_0x28;
      iVar16 = 0;
      iVar11 = 0;
      if (iVar2 != 0) {
        puVar18 = *(uint **)&(this->ExpandedOutputs).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar15 = *puVar18;
        while (uVar15 == 0) {
          lVar19 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar11 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14445095d;
          uVar15 = puVar18[lVar19 + 1];
        }
        uVar12 = -uVar15 & uVar15;
        uVar3 = (ulonglong)uVar12 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_res18 = (int)lVar19;
        iVar11 = iVar16 + -1 + local_res18;
        if (iVar2 < iVar11) {
          iVar11 = iVar2;
        }
      }
LAB_14445095d:
      uVar15 = *(uint *)&(this->ExpandedOutputs).field_0x28;
      uVar13 = uVar15 & 0xffffffe0;
      TStack_a0._padding_ = CONCAT44(uVar12,iVar14);
      TStack_a0.CurrentBitIndex = iVar11;
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar15 >> 5;
      TStack_a0._28_4_ = local_44;
      TStack_a0.BaseBitIndex = iVar16;
      uStack_80 = CONCAT44(uStack_ac,
                           *(int *)&(this->ExpandedOutputs).field_0x8 -
                           *(int *)&(this->ExpandedOutputs).field_0x34);
      TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_res10;
      uVar12 = *(uint *)&(this->ExpandedOutputs).field_0x28;
      if (uVar15 != uVar12) {
        puVar17 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar1;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar15 == 0) {
          lVar19 = (longlong)iVar14;
          uVar13 = uVar13 + 0x20;
          iVar14 = iVar14 + 1;
          uVar15 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_144450a70;
          uVar15 = *(uint *)(puVar17 + lVar19 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar15 = (int)lVar19 + -1 + uVar13;
        if ((int)uVar12 < (int)uVar15) {
          uVar15 = uVar12;
        }
      }
LAB_144450a70:
      while( true ) {
        if (*(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34
            != (int)uStack_80) {
          `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_a0.CurrentBitIndex == uVar15) &&
           (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        plVar5 = *(longlong **)
                  ((longlong)TStack_a0.CurrentBitIndex * 0x20 + 0x10 +
                  *(longlong *)&this->ExpandedOutputs);
        (**(code **)(*plVar5 + 0x48))(plVar5,pFVar7);
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      }
      (**(code **)(this->_padding_ + 0xd0))(this);
    }
  }
  else if ((this->PausedModifiedTimestamp).Value < uVar3) {
    (this->PausedModifiedTimestamp).Value = uVar3;
    return;
  }
  return;
}

// IsActive @ 144450b80

bool __thiscall FDataflowNode::IsActive(FDataflowNode *this,bool param_1)

{
  if ((this->bActive != false) && ((param_1 || (bDataflowEnableGraphEval)))) {
    return true;
  }
  return false;
}

// IsAnytypeDependencyConnected @ 144450dd0

bool __thiscall
FDataflowNode::IsAnytypeDependencyConnected
          (FDataflowNode *this,FName param_1,FDataflowConnection *param_2)

{
  FName local_res10;
  FDataflowConnection *local_res18;
  bool local_res20 [8];
  <lambda_1> local_28;
  
  if (param_1 == (FName)0x0) {
    return false;
  }
  local_28.bIsAnyDependencyConnected = local_res20;
  local_res20[0] = false;
  local_28.IgnoreConnection = &local_res18;
  local_28.DependencyGroup = &local_res10;
  local_res10 = param_1;
  local_res18 = param_2;
  ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
            (this,&local_28);
  return local_res20[0];
}

// NewStructOnScopeConst @ 144452480

TUniquePtr<FStructOnScope_const_,TDefaultDelete<FStructOnScope_const_>_> __thiscall
FDataflowNode::NewStructOnScopeConst(FDataflowNode *this)

{
  longlong lVar1;
  FStructOnScope *in_RDX;
  
  lVar1 = (**(code **)(this->_padding_ + 0xb0))();
  in_RDX->_padding_ = lVar1;
  return (TUniquePtr<FStructOnScope_const_,TDefaultDelete<FStructOnScope_const_>_>)in_RDX;
}

// NotifyConnectionTypeChanged @ 144452860

void __thiscall
FDataflowNode::NotifyConnectionTypeChanged(FDataflowNode *this,FDataflowConnection *param_1)

{
  char local_res10;
  FName local_res18;
  FDataflowConnection *local_res20;
  FName local_38;
  FName local_30;
  <lambda_1> local_28;
  
  if ((param_1 != (FDataflowConnection *)0x0) && (param_1->bIsAnyType)) {
    local_30 = param_1->TypeDependencyGroup;
    if (local_30 != (FName)0x0) {
      local_28.__this = (FDataflowNode *)&local_res10;
      local_28.Connection = (FDataflowConnection *)&local_res20;
      local_28.bTypeChanged = (bool *)&local_38;
      local_res10 = '\0';
      local_res20 = param_1;
      local_38 = local_30;
      ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
                (this,(<lambda_1> *)&local_28);
      if (local_res10 == '\0') {
        local_28.bTypeChanged = (bool *)&local_res18;
        local_res18.ComparisonIndex.Value._0_1_ = 0;
        local_28.DependencyGroup = &local_30;
        local_28.__this = this;
        local_28.Connection = param_1;
        ForEachConnection<_FDataflowNode::OnConnectionTypeChanged_::__l2::<lambda_1>_>
                  (this,&local_28);
      }
    }
    if (param_1->Direction == INPUT) {
      (**(code **)(this->_padding_ + 0x138))(this,param_1);
    }
    if (param_1->Direction == OUTPUT) {
      (**(code **)(this->_padding_ + 0x140))(this,param_1);
    }
  }
  return;
}

// NumOutputs @ 1444529a0

int __thiscall FDataflowNode::NumOutputs(FDataflowNode *this)

{
  return *(int *)&(this->ExpandedOutputs).field_0x8 - *(int *)&(this->ExpandedOutputs).field_0x34;
}

// OnConnectionTypeChanged @ 144452bf0

bool __thiscall
FDataflowNode::OnConnectionTypeChanged(FDataflowNode *this,FDataflowConnection *param_1)

{
  char local_res10;
  FName local_res18;
  FDataflowConnection *local_res20;
  FName local_38;
  FName local_30;
  <lambda_1> local_28;
  
  local_38 = param_1->TypeDependencyGroup;
  if (local_38 != (FName)0x0) {
    local_28.__this = (FDataflowNode *)&local_res10;
    local_28.Connection = (FDataflowConnection *)&local_res20;
    local_28.bTypeChanged = (bool *)&local_38;
    local_res10 = '\0';
    local_res20 = param_1;
    local_30 = local_38;
    ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
              (this,(<lambda_1> *)&local_28);
    if (local_res10 == '\0') {
      local_28.bTypeChanged = (bool *)&local_res18;
      local_res18.ComparisonIndex.Value._0_1_ = 0;
      local_28.DependencyGroup = &local_30;
      local_28.__this = this;
      local_28.Connection = param_1;
      ForEachConnection<_FDataflowNode::OnConnectionTypeChanged_::__l2::<lambda_1>_>(this,&local_28)
      ;
      return (bool)(undefined1)local_res18.ComparisonIndex.Value;
    }
  }
  return false;
}

// OutputSupportsType @ 144452ca0

bool __thiscall FDataflowNode::OutputSupportsType(FDataflowNode *this,FName param_1,FName param_2)

{
  bool bVar1;
  FDataflowOutput *this_00;
  
  this_00 = FindOutput(this,param_1);
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar1 = FDataflowConnection::SupportsType((FDataflowConnection *)this_00,param_2);
    return bVar1;
  }
  return false;
}

// RegisterInputArrayConnectionInternal @ 1444581f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDataflowInput * __thiscall
FDataflowNode::RegisterInputArrayConnectionInternal
          (FDataflowNode *this,FConnectionReference *param_1,FName *param_2,FName *param_3)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FDataflowInput *pFVar9;
  UStruct *pUVar10;
  FGuid *pFVar11;
  FFieldClass *pFVar12;
  TTuple<FProperty_const_*,void_const_*> *pTVar13;
  FString *pFVar14;
  void *pvVar15;
  FProperty *pFVar16;
  FName *pFVar17;
  FDataflowInput *pFVar18;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  longlong lVar22;
  FName FVar23;
  undefined1 auStackY_968 [32];
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_918;
  longlong local_908;
  undefined1 local_900 [16];
  undefined8 local_8f0;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_8e8;
  FConnectionParameters local_8d8;
  longlong *local_8a0;
  int local_898;
  undefined8 local_888;
  undefined8 local_880;
  FName *local_878;
  FName local_870;
  FString local_868;
  FString local_858;
  FString local_848;
  FScriptContainerElement *local_838;
  int iStack_830;
  undefined4 uStack_82c;
  FScriptContainerElement *local_828;
  int iStack_820;
  undefined4 uStack_81c;
  FString local_818;
  TArrayView<FProperty_const_*_const,int> local_808;
  FString local_7f8;
  uint *local_7e8;
  longlong **local_7e0;
  FName local_7d0;
  TStringView<wchar_t> local_7c8;
  TStringView<wchar_t> local_7b8;
  FGuid local_7a8;
  FString local_798;
  FString local_788;
  FPropertyValueIterator local_778;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_968;
  bVar6 = false;
  local_900._0_4_ = 0;
  local_878 = param_2;
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  if ((plVar8 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptOnStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3ad,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  pUVar10 = (UStruct *)(**(code **)(*plVar8 + 0x20))(plVar8);
  if ((pUVar10 == (UStruct *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  pFVar11 = FGuid::NewGuid(&local_7a8);
  local_880 = 0;
  local_888 = 0;
  local_8d8.Guid.A = pFVar11->A;
  local_8d8.Guid.B = pFVar11->B;
  local_8d8.Guid.C = pFVar11->C;
  local_8d8.Guid.D = pFVar11->D;
  local_8d8.Property = (FProperty *)0x0;
  local_8d8.Type.ComparisonIndex.Value = 0;
  local_8d8.Type.Number = 0;
  local_8d8.Name.ComparisonIndex.Value = 0;
  local_8d8.Name.Number = 0;
  local_8d8.Offset = 0xffffffff;
  local_898 = 0xffffffff;
  local_8a0 = (longlong *)0x0;
  local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e8.ArrayNum = 0;
  local_8e8.ArrayMax = 0;
  local_8d8.Owner = this;
  pFVar12 = FArrayProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_778,pFVar12,pUVar10,this,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_778.PropertyIteratorStack.ArrayNum < 1) break;
    pTVar13 = FPropertyValueIterator::operator->(&local_778);
    if (param_1->ContainerReference == *(void **)&pTVar13->field_0x8) {
      if (*param_3 != (FName)0x0) {
        pTVar13 = FPropertyValueIterator::operator->(&local_778);
        bVar6 = true;
        pvVar15 = *(void **)pTVar13;
        bVar5 = IsThisNotNull(pvVar15,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)((longlong)pvVar15 + 0x20),&local_868);
        }
        else {
          ::FString::FString(&local_868,L"None");
        }
        pFVar14 = ::FString::FString(&local_798,&local_868);
        local_838 = (pFVar14->Data).AllocatorInstance.Data;
        iVar7 = (pFVar14->Data).ArrayNum;
        iStack_830 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_830 = 0;
        }
        local_7c8._12_4_ = uStack_82c;
        local_7c8.Size = iStack_830;
        local_7c8.DataPtr = (wchar_t *)local_838;
        bVar5 = ::FName::Equals(*param_3,&local_7c8);
        pFVar1 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        if (!bVar5) goto LAB_1444583ed;
      }
      bVar5 = true;
    }
    else {
LAB_1444583ed:
      bVar5 = false;
    }
    if ((bVar6) &&
       (bVar6 = false, local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pTVar13 = FPropertyValueIterator::operator->(&local_778);
      plVar21 = *(longlong **)pTVar13;
      if ((plVar21 == (longlong *)0x0) || ((*(uint *)(plVar21[1] + 0x18) >> 0x15 & 1) == 0)) {
        plVar21 = (longlong *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FDataflowInput *)(*pcVar3)();
          return pFVar9;
        }
      }
      local_8d8.Offset = *(int *)&param_1->ContainerReference - (int)this;
      local_8a0 = plVar21;
      FPropertyValueIterator::GetPropertyChain(&local_778,&local_8e8);
      break;
    }
    FPropertyValueIterator::IterateToNext(&local_778);
  }
  bVar6 = false;
  FVar19 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_778;
  if (local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar19 = local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar19,local_778.PropertyIteratorStack.ArrayNum);
  if (local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  if ((local_8a0 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputParams.ArrayProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3c0,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  local_918.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_918.ArrayNum = 0;
  local_918.ArrayMax = 0;
  pvVar15 = (void *)(**(code **)(*local_8a0 + 0xd8))
                              (local_8a0,local_8a0[0xf],param_1->ContainerReference,param_1->Index);
  pFVar17 = local_878;
  if (pvVar15 == param_1->Reference) {
    if (*local_878 != (FName)0x0) {
      bVar6 = true;
      pvVar2 = (void *)local_8a0[0xf];
      bVar5 = IsThisNotNull(pvVar2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)((longlong)pvVar2 + 0x20),&local_858);
      }
      else {
        ::FString::FString(&local_858,L"None");
      }
      pFVar14 = ::FString::FString(&local_788,&local_858);
      local_828 = (pFVar14->Data).AllocatorInstance.Data;
      iVar7 = (pFVar14->Data).ArrayNum;
      iStack_820 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_820 = 0;
      }
      local_7b8._12_4_ = uStack_81c;
      local_7b8.Size = iStack_820;
      local_7b8.DataPtr = (wchar_t *)local_828;
      bVar5 = ::FName::Equals(*pFVar17,&local_7b8);
      pFVar1 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (!bVar5) goto LAB_1444585c8;
    }
    bVar5 = true;
  }
  else {
LAB_1444585c8:
    bVar5 = false;
  }
  if ((bVar6) && (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    local_8d8.Property = (FProperty *)local_8a0[0xf];
    lVar22 = local_8a0[0xf];
    local_918.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,local_918.ArrayMax,&local_918.AllocatorInstance,1,&local_918.ArrayMax);
    *(longlong *)local_918.AllocatorInstance.Data = lVar22;
  }
  else {
    lVar22 = local_8a0[0xf];
    if ((lVar22 != 0) && ((*(uint *)(*(longlong *)(lVar22 + 8) + 0x18) >> 0x14 & 1) != 0)) {
      pFVar16 = UE::Dataflow::Private::FindProperty
                          (*(UStruct **)(lVar22 + 0x70),pvVar15,param_1->Reference,local_878,
                           &local_918);
      if ((pFVar16 == (FProperty *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Property",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                             ,0x42,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FDataflowInput *)(*pcVar3)();
        return pFVar9;
      }
      local_908 = lVar22;
      local_8d8.Property = pFVar16;
      if (((local_918.AllocatorInstance.Data <= (FScriptContainerElement *)&local_908) &&
          ((FScriptContainerElement *)&local_908 <
           local_918.AllocatorInstance.Data + (longlong)local_918.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FDataflowInput *)(*pcVar3)();
        return pFVar9;
      }
      iVar7 = local_918.ArrayNum;
      if (local_918.ArrayNum == local_918.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_918.AllocatorInstance,&local_918.ArrayMax);
      }
      local_918.ArrayNum = iVar7 + 1;
      *(longlong *)(local_918.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_908;
    }
  }
  if ((local_8d8.Property == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputParams.Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3d0,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  lVar22 = (longlong)local_8e8.ArrayNum;
  if (local_8e8.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_8e8.ArrayNum,&local_918.AllocatorInstance,&local_918.ArrayNum,
                       &local_918.ArrayMax);
    memcpy(local_918.AllocatorInstance.Data + (longlong)iVar7 * 8,local_8e8.AllocatorInstance.Data,
           lVar22 << 3);
  }
  pFVar9 = (FDataflowInput *)0x0;
  if (local_8d8.Property == (FProperty *)0x0) {
    FVar23.ComparisonIndex.Value = 0;
    FVar23.Number = 0;
  }
  else {
    local_900._8_8_ = (FArrayProperty **)0x0;
    local_8f0 = 0;
    (**(code **)((local_8d8.Property)->_padding_ + 0x68))
              (local_8d8.Property,&local_818,local_900 + 8,0);
    ::FString::RemoveSpacesInline((FString *)(local_900 + 8));
    ::FString::ConcatFF(&local_848,&local_818,(FString *)(local_900 + 8));
    iVar7 = local_848.Data.ArrayNum + -1;
    if (local_848.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar17 = ::FName::FName(&local_7d0,iVar7,(wchar_t *)local_848.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar23 = *pFVar17;
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
    if ((FArrayProperty **)local_900._8_8_ != (FArrayProperty **)0x0) {
      FMemory::Free((void *)local_900._8_8_);
    }
  }
  iVar7 = param_1->Index;
  iVar4 = local_918.ArrayNum;
  local_808.DataPtr = (FProperty **)local_918.AllocatorInstance.Data;
  local_8d8.Type = FVar23;
  if ((local_918.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  local_808.ArrayNum = iVar4;
  GetPropertyFullNameString(&local_7f8,&local_808,iVar7);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_7f8.Data.ArrayNum != 0) {
    FVar20.Data = local_7f8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_870,(wchar_t *)FVar20.Data);
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  plVar21 = local_8a0;
  local_8d8.Name = local_870;
  if ((local_8a0 == (longlong *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x23,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  pvVar15 = (void *)(**(code **)(*plVar21 + 0xd8))
                              (plVar21,plVar21[0xf],param_1->ContainerReference,param_1->Index);
  if (pvVar15 == (void *)0x0) {
    local_898 = -1;
  }
  else {
    if ((param_1->Reference < pvVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(size_t)Reference.Reference >= (size_t)AddressAtIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x26,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FDataflowInput *)(*pcVar3)();
      return pFVar9;
    }
    if ((*(int *)(plVar21[0xf] + 0x34) <= *(int *)&param_1->Reference - (int)pvVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(int32)((size_t)Reference.Reference - (size_t)AddressAtIndex) < ArrayProperty->Inner->GetElementSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x27,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FDataflowInput *)(*pcVar3)();
      return pFVar9;
    }
    local_898 = *(int *)&param_1->Reference - (int)pvVar15;
  }
  local_7e8 = &local_8d8.Offset;
  local_7e0 = &local_8a0;
  TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FArrayProperty_const_*_&>_>
            ((TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
              *)&this->InputArrayProperties,
             (TPairInitializer<unsigned_int_&,FArrayProperty_const_*_&> *)local_900,
             (bool *)&local_7e8);
  pFVar18 = ::operator_new(0x80);
  if (pFVar18 != (FDataflowInput *)0x0) {
    iVar7 = param_1->Index;
    FDataflowConnection::FDataflowConnection((FDataflowConnection *)pFVar18,INPUT,&local_8d8);
    pFVar18->Connection = (FDataflowOutput *)0x0;
    pFVar18->_padding_ = (longlong)&___7FDataflowArrayInput__6B_;
    pFVar18->bIsRequired = false;
    *(int *)&pFVar18[1]._padding_ = iVar7;
    *(int *)((longlong)&pFVar18[1]._padding_ + 4) = local_898;
    *(longlong **)&pFVar18[1]._padding_ = local_8a0;
    pFVar9 = pFVar18;
  }
  (**(code **)(this->_padding_ + 0x78))(this,pFVar9);
  pFVar18 = FindInput(this,param_1);
  if ((pFVar18 != pFVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindInput(Reference) == Input",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3db,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowInput *)(*pcVar3)();
    return pFVar9;
  }
  if (local_918.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.AllocatorInstance.Data);
  }
  if (local_8e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.AllocatorInstance.Data);
  }
  (**(code **)(*plVar8 + 0x50))(plVar8,1);
  return pFVar9;
}

// RegisterInputConnectionInternal @ 144458ae0

FDataflowInput * __thiscall
FDataflowNode::RegisterInputConnectionInternal
          (FDataflowNode *this,FConnectionReference *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  FStructOnScope *pFVar3;
  FDataflowInput *pFVar4;
  FGuid *pFVar5;
  FDataflowInput *pFVar6;
  void *pvVar7;
  FGuid local_68;
  FConnectionParameters local_58;
  
  pFVar3 = (FStructOnScope *)(**(code **)(this->_padding_ + 0xb0))();
  if ((pFVar3 == (FStructOnScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptOnStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x397,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDataflowInput *)(*pcVar1)();
    return pFVar4;
  }
  pFVar5 = FGuid::NewGuid(&local_68);
  pFVar4 = (FDataflowInput *)0x0;
  local_58.Offset = 0xffffffff;
  local_58.Owner = (FDataflowNode *)0x0;
  local_58.Property = (FProperty *)0x0;
  local_58.Type.ComparisonIndex.Value = 0;
  local_58.Type.Number = 0;
  local_58.Guid.A = pFVar5->A;
  local_58.Guid.B = pFVar5->B;
  local_58.Guid.C = pFVar5->C;
  local_58.Guid.D = pFVar5->D;
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  InitConnectionParametersFromPropertyReference(this,pFVar3,param_1->Reference,param_2,&local_58);
  pFVar6 = ::operator_new(0x70);
  if (pFVar6 != (FDataflowInput *)0x0) {
    FDataflowConnection::FDataflowConnection((FDataflowConnection *)pFVar6,INPUT,&local_58);
    pFVar6->Connection = (FDataflowOutput *)0x0;
    pFVar6->_padding_ = (longlong)&___7FDataflowInput__6B_;
    pFVar6->bIsRequired = false;
    pFVar4 = pFVar6;
  }
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x20);
  if (pcVar1 == FDataflowConnection::RealAddress) {
    pvVar7 = FDataflowConnection::RealAddress((FDataflowConnection *)pFVar4);
  }
  else {
    pvVar7 = (void *)(*pcVar1)();
  }
  if ((pvVar7 != param_1->Reference) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Input->RealAddress() == Reference.Reference",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x39b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDataflowInput *)(*pcVar1)();
    return pFVar4;
  }
  (**(code **)(this->_padding_ + 0x78))(this,pFVar4);
  pFVar6 = FindInput(this,param_1);
  if ((pFVar6 != pFVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindInput(Reference) == Input",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x39d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDataflowInput *)(*pcVar1)();
    return pFVar4;
  }
  if (pFVar3 != (FStructOnScope *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,1);
  }
  return pFVar4;
}

// RegisterOutputArrayConnectionInternal @ 144459c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDataflowOutput * __thiscall
FDataflowNode::RegisterOutputArrayConnectionInternal
          (FDataflowNode *this,FConnectionReference *param_1,FName *param_2,FName *param_3)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FDataflowOutput *pFVar9;
  UStruct *pUVar10;
  FGuid *pFVar11;
  FFieldClass *pFVar12;
  TTuple<FProperty_const_*,void_const_*> *pTVar13;
  FString *pFVar14;
  void *pvVar15;
  FProperty *pFVar16;
  FName *pFVar17;
  FDataflowOutput *pFVar18;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  longlong lVar22;
  FName FVar23;
  undefined1 auStackY_968 [32];
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_918;
  longlong local_908;
  undefined1 local_900 [16];
  undefined8 local_8f0;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_8e8;
  FName local_8d8;
  FName local_8d0;
  FDataflowNode *local_8c8;
  FProperty *local_8c0;
  int local_8b8 [6];
  longlong *local_8a0;
  int local_898;
  undefined8 local_888;
  undefined8 local_880;
  FName *local_878;
  FName local_870;
  FString local_868;
  FString local_858;
  FString local_848;
  FScriptContainerElement *local_838;
  int iStack_830;
  undefined4 uStack_82c;
  FScriptContainerElement *local_828;
  int iStack_820;
  undefined4 uStack_81c;
  FString local_818;
  TArrayView<FProperty_const_*_const,int> local_808;
  FString local_7f8;
  int *local_7e8;
  longlong **local_7e0;
  FName local_7d0;
  TStringView<wchar_t> local_7c8;
  TStringView<wchar_t> local_7b8;
  FGuid local_7a8;
  FString local_798;
  FString local_788;
  FPropertyValueIterator local_778;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_968;
  bVar6 = false;
  local_900._0_4_ = 0;
  local_878 = param_2;
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  if ((plVar8 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptOnStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3e2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  pUVar10 = (UStruct *)(**(code **)(*plVar8 + 0x20))(plVar8);
  if ((pUVar10 == (UStruct *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3e4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  pFVar11 = FGuid::NewGuid(&local_7a8);
  local_880 = 0;
  local_888 = 0;
  local_8b8[1] = pFVar11->A;
  local_8b8[2] = pFVar11->B;
  local_8b8[3] = pFVar11->C;
  local_8b8[4] = pFVar11->D;
  local_8c0 = (FProperty *)0x0;
  local_8d8.ComparisonIndex.Value = 0;
  local_8d8.Number = 0;
  local_8d0.ComparisonIndex.Value = 0;
  local_8d0.Number = 0;
  local_8b8[0] = -1;
  local_898 = 0xffffffff;
  local_8a0 = (longlong *)0x0;
  local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e8.ArrayNum = 0;
  local_8e8.ArrayMax = 0;
  local_8c8 = this;
  pFVar12 = FArrayProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_778,pFVar12,pUVar10,this,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_778.PropertyIteratorStack.ArrayNum < 1) break;
    pTVar13 = FPropertyValueIterator::operator->(&local_778);
    if (param_1->ContainerReference == *(void **)&pTVar13->field_0x8) {
      if (*param_3 != (FName)0x0) {
        pTVar13 = FPropertyValueIterator::operator->(&local_778);
        bVar6 = true;
        pvVar15 = *(void **)pTVar13;
        bVar5 = IsThisNotNull(pvVar15,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)((longlong)pvVar15 + 0x20),&local_868);
        }
        else {
          ::FString::FString(&local_868,L"None");
        }
        pFVar14 = ::FString::FString(&local_798,&local_868);
        local_838 = (pFVar14->Data).AllocatorInstance.Data;
        iVar7 = (pFVar14->Data).ArrayNum;
        iStack_830 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_830 = 0;
        }
        local_7c8._12_4_ = uStack_82c;
        local_7c8.Size = iStack_830;
        local_7c8.DataPtr = (wchar_t *)local_838;
        bVar5 = ::FName::Equals(*param_3,&local_7c8);
        pFVar1 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        if (!bVar5) goto LAB_144459e3d;
      }
      bVar5 = true;
    }
    else {
LAB_144459e3d:
      bVar5 = false;
    }
    if ((bVar6) &&
       (bVar6 = false, local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pTVar13 = FPropertyValueIterator::operator->(&local_778);
      plVar21 = *(longlong **)pTVar13;
      if ((plVar21 == (longlong *)0x0) || ((*(uint *)(plVar21[1] + 0x18) >> 0x15 & 1) == 0)) {
        plVar21 = (longlong *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FDataflowOutput *)(*pcVar3)();
          return pFVar9;
        }
      }
      local_8b8[0] = *(int *)&param_1->ContainerReference - (int)this;
      local_8a0 = plVar21;
      FPropertyValueIterator::GetPropertyChain(&local_778,&local_8e8);
      break;
    }
    FPropertyValueIterator::IterateToNext(&local_778);
  }
  bVar6 = false;
  FVar19 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_778;
  if (local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar19 = local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar19,local_778.PropertyIteratorStack.ArrayNum);
  if (local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_778.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  if ((local_8a0 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputParams.ArrayProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x3f5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  local_918.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_918.ArrayNum = 0;
  local_918.ArrayMax = 0;
  pvVar15 = (void *)(**(code **)(*local_8a0 + 0xd8))
                              (local_8a0,local_8a0[0xf],param_1->ContainerReference,param_1->Index);
  pFVar17 = local_878;
  if (pvVar15 == param_1->Reference) {
    if (*local_878 != (FName)0x0) {
      bVar6 = true;
      pvVar2 = (void *)local_8a0[0xf];
      bVar5 = IsThisNotNull(pvVar2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)((longlong)pvVar2 + 0x20),&local_858);
      }
      else {
        ::FString::FString(&local_858,L"None");
      }
      pFVar14 = ::FString::FString(&local_788,&local_858);
      local_828 = (pFVar14->Data).AllocatorInstance.Data;
      iVar7 = (pFVar14->Data).ArrayNum;
      iStack_820 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_820 = 0;
      }
      local_7b8._12_4_ = uStack_81c;
      local_7b8.Size = iStack_820;
      local_7b8.DataPtr = (wchar_t *)local_828;
      bVar5 = ::FName::Equals(*pFVar17,&local_7b8);
      pFVar1 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (!bVar5) goto LAB_14445a018;
    }
    bVar5 = true;
  }
  else {
LAB_14445a018:
    bVar5 = false;
  }
  if ((bVar6) && (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    local_8c0 = (FProperty *)local_8a0[0xf];
    lVar22 = local_8a0[0xf];
    local_918.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,local_918.ArrayMax,&local_918.AllocatorInstance,1,&local_918.ArrayMax);
    *(longlong *)local_918.AllocatorInstance.Data = lVar22;
  }
  else {
    lVar22 = local_8a0[0xf];
    if ((lVar22 != 0) && ((*(uint *)(*(longlong *)(lVar22 + 8) + 0x18) >> 0x14 & 1) != 0)) {
      pFVar16 = UE::Dataflow::Private::FindProperty
                          (*(UStruct **)(lVar22 + 0x70),pvVar15,param_1->Reference,local_878,
                           &local_918);
      if ((pFVar16 == (FProperty *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Property",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                             ,0x42,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FDataflowOutput *)(*pcVar3)();
        return pFVar9;
      }
      local_908 = lVar22;
      local_8c0 = pFVar16;
      if (((local_918.AllocatorInstance.Data <= (FScriptContainerElement *)&local_908) &&
          ((FScriptContainerElement *)&local_908 <
           local_918.AllocatorInstance.Data + (longlong)local_918.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FDataflowOutput *)(*pcVar3)();
        return pFVar9;
      }
      iVar7 = local_918.ArrayNum;
      if (local_918.ArrayNum == local_918.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_918.AllocatorInstance,&local_918.ArrayMax);
      }
      local_918.ArrayNum = iVar7 + 1;
      *(longlong *)(local_918.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_908;
    }
  }
  if ((local_8c0 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputParams.Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x405,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  lVar22 = (longlong)local_8e8.ArrayNum;
  if (local_8e8.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_8e8.ArrayNum,&local_918.AllocatorInstance,&local_918.ArrayNum,
                       &local_918.ArrayMax);
    memcpy(local_918.AllocatorInstance.Data + (longlong)iVar7 * 8,local_8e8.AllocatorInstance.Data,
           lVar22 << 3);
  }
  pFVar9 = (FDataflowOutput *)0x0;
  if (local_8c0 == (FProperty *)0x0) {
    FVar23.ComparisonIndex.Value = 0;
    FVar23.Number = 0;
  }
  else {
    local_900._8_8_ = (FArrayProperty **)0x0;
    local_8f0 = 0;
    (**(code **)(local_8c0->_padding_ + 0x68))(local_8c0,&local_818,local_900 + 8,0);
    ::FString::RemoveSpacesInline((FString *)(local_900 + 8));
    ::FString::ConcatFF(&local_848,&local_818,(FString *)(local_900 + 8));
    iVar7 = local_848.Data.ArrayNum + -1;
    if (local_848.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar17 = ::FName::FName(&local_7d0,iVar7,(wchar_t *)local_848.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar23 = *pFVar17;
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
    if ((FArrayProperty **)local_900._8_8_ != (FArrayProperty **)0x0) {
      FMemory::Free((void *)local_900._8_8_);
    }
  }
  iVar7 = param_1->Index;
  iVar4 = local_918.ArrayNum;
  local_808.DataPtr = (FProperty **)local_918.AllocatorInstance.Data;
  local_8d8 = FVar23;
  if ((local_918.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  local_808.ArrayNum = iVar4;
  GetPropertyFullNameString(&local_7f8,&local_808,iVar7);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_7f8.Data.ArrayNum != 0) {
    FVar20.Data = local_7f8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_870,(wchar_t *)FVar20.Data);
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  plVar21 = local_8a0;
  local_8d0 = local_870;
  if ((local_8a0 == (longlong *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x23,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  pvVar15 = (void *)(**(code **)(*plVar21 + 0xd8))
                              (plVar21,plVar21[0xf],param_1->ContainerReference,param_1->Index);
  if (pvVar15 == (void *)0x0) {
    local_898 = -1;
  }
  else {
    if ((param_1->Reference < pvVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(size_t)Reference.Reference >= (size_t)AddressAtIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x26,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FDataflowOutput *)(*pcVar3)();
      return pFVar9;
    }
    if ((*(int *)(plVar21[0xf] + 0x34) <= *(int *)&param_1->Reference - (int)pvVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(int32)((size_t)Reference.Reference - (size_t)AddressAtIndex) < ArrayProperty->Inner->GetElementSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                           ,0x27,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FDataflowOutput *)(*pcVar3)();
      return pFVar9;
    }
    local_898 = *(int *)&param_1->Reference - (int)pvVar15;
  }
  local_7e8 = local_8b8;
  local_7e0 = &local_8a0;
  TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FArrayProperty_const_*_&>_>
            ((TSet<TTuple<unsigned_int,FArrayProperty_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FArrayProperty_const_*,0>,FDefaultSetAllocator>
              *)&this->OutputArrayProperties,
             (TPairInitializer<unsigned_int_&,FArrayProperty_const_*_&> *)local_900,
             (bool *)&local_7e8);
  pFVar18 = ::operator_new(0xa0);
  if (pFVar18 != (FDataflowOutput *)0x0) {
    iVar7 = param_1->Index;
    FDataflowOutput::FDataflowOutput(pFVar18,(FOutputParameters *)&local_8d8);
    *(int *)&pFVar18[1]._padding_ = iVar7;
    pFVar18->_padding_ = (longlong)&___7FDataflowArrayOutput__6B_;
    *(int *)((longlong)&pFVar18[1]._padding_ + 4) = local_898;
    pFVar18[1]._padding_ = (longlong)local_8a0;
    pFVar9 = pFVar18;
  }
  (**(code **)(this->_padding_ + 0x80))(this,pFVar9);
  pFVar18 = FindOutput(this,param_1);
  if ((pFVar18 != pFVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindOutput(Reference) == Output",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x410,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDataflowOutput *)(*pcVar3)();
    return pFVar9;
  }
  if (local_918.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.AllocatorInstance.Data);
  }
  if (local_8e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.AllocatorInstance.Data);
  }
  (**(code **)(*plVar8 + 0x50))(plVar8,1);
  return pFVar9;
}

// RegisterOutputConnectionInternal @ 14445a530

FDataflowOutput * __thiscall
FDataflowNode::RegisterOutputConnectionInternal
          (FDataflowNode *this,FConnectionReference *param_1,FName *param_2)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FStructOnScope *pFVar7;
  FDataflowOutput *pFVar8;
  FGuid *pFVar9;
  FDataflowOutput *pFVar10;
  void *pvVar11;
  uint *puVar12;
  undefined1 *puVar13;
  FDataflowOutput *pFVar14;
  FDataflowOutput *pFVar15;
  uint uVar16;
  FGuid local_78;
  FConnectionParameters local_68;
  
  pFVar7 = (FStructOnScope *)(**(code **)(this->_padding_ + 0xb0))();
  if ((pFVar7 == (FStructOnScope *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptOnStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x429,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar3)();
    return pFVar8;
  }
  pFVar9 = FGuid::NewGuid(&local_78);
  pFVar14 = (FDataflowOutput *)0x0;
  local_68.Offset = 0xffffffff;
  local_68.Owner = (FDataflowNode *)0x0;
  local_68.Property = (FProperty *)0x0;
  local_68.Type.ComparisonIndex.Value = 0;
  local_68.Type.Number = 0;
  local_68.Guid.A = pFVar9->A;
  local_68.Guid.B = pFVar9->B;
  local_68.Guid.C = pFVar9->C;
  local_68.Guid.D = pFVar9->D;
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  InitConnectionParametersFromPropertyReference(this,pFVar7,param_1->Reference,param_2,&local_68);
  pFVar10 = ::operator_new(0x90);
  pFVar8 = pFVar14;
  if (pFVar10 != (FDataflowOutput *)0x0) {
    pFVar8 = FDataflowOutput::FDataflowOutput(pFVar10,(FOutputParameters *)&local_68);
  }
  pvVar2 = param_1->Reference;
  pvVar11 = (void *)(**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
  if ((pvVar11 != pvVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputConnection->RealAddress() == Reference.Reference",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x42d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar3)();
    return pFVar8;
  }
  (**(code **)(this->_padding_ + 0x80))(this,pFVar8);
  pFVar10 = FindOutput(this,param_1);
  if ((pFVar10 != pFVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindOutput(Reference) == OutputConnection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x430,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar3)();
    return pFVar8;
  }
  uVar5 = (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8);
  uVar6 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
  uVar1 = (uint)pFVar8->_padding_;
  uVar16 = uVar1 * 0x40 + uVar6 + 0x9e3779b9 + (uVar1 >> 2) ^ uVar1;
  pFVar10 = pFVar14;
  if (*(int *)&(this->ExpandedOutputs).field_0x8 != *(int *)&(this->ExpandedOutputs).field_0x34) {
    puVar13 = *(undefined1 **)&(this->ExpandedOutputs).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->ExpandedOutputs).field_0x38;
    }
    uVar16 = *(uint *)(puVar13 +
                      (ulonglong)
                      (*(int *)&(this->ExpandedOutputs).field_0x48 - 1U &
                      (uVar16 * 0x40 + -0x61c88647 + uVar5 + (uVar16 >> 2) ^ uVar16)) * 4);
    if (uVar16 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar16 * 0x20 + *(longlong *)&this->ExpandedOutputs);
        if (((*puVar12 == uVar1) && (puVar12[1] == uVar6)) && (puVar12[2] == uVar5)) {
          pFVar10 = (FDataflowOutput *)0x0;
          if (uVar16 != 0xffffffff) {
            pFVar15 = (FDataflowOutput *)(puVar12 + 4);
            if (puVar12 == (uint *)0x0) {
              pFVar15 = pFVar14;
            }
            if (pFVar15 != (FDataflowOutput *)0x0) {
              if ((pFVar15->_padding_ == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("*Con",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                                     ,0x1dc,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar8 = (FDataflowOutput *)(*pcVar3)();
                return pFVar8;
              }
              pFVar10 = (FDataflowOutput *)pFVar15->_padding_;
            }
          }
          break;
        }
        uVar16 = puVar12[6];
      } while (uVar16 != 0xffffffff);
    }
  }
  if ((pFVar10 != pFVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindOutput(OutputConnection->GetConnectionKey()) == OutputConnection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x431,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDataflowOutput *)(*pcVar3)();
    return pFVar8;
  }
  if (pFVar7 != (FStructOnScope *)0x0) {
    (**(code **)(pFVar7->_padding_ + 0x50))(pFVar7,1);
  }
  return pFVar8;
}

// SetAllConnectionConcreteType @ 144462e60

bool __thiscall FDataflowNode::SetAllConnectionConcreteType(FDataflowNode *this,FName param_1)

{
  undefined1 *puVar1;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_140;
  undefined4 uStack_104;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  puVar1 = &(this->ExpandedInputs).field_0x10;
  local_140 = 1;
  iVar13 = *(int *)&(this->ExpandedInputs).field_0x28;
  bVar18 = false;
  iVar14 = 0;
  iVar16 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar13 != 0) {
    puVar17 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar8 = *puVar17;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iVar14) {
        iVar15 = *(int *)&(this->ExpandedInputs).field_0x28;
        uVar8 = 1;
        iVar9 = iVar13;
        goto LAB_144462f26;
      }
      uVar8 = puVar17[lVar10 + 1];
    }
    iVar15 = *(int *)&(this->ExpandedInputs).field_0x28;
    uVar8 = -uVar8 & uVar8;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar16;
    if (iVar15 < iVar9) {
      iVar9 = iVar13;
    }
  }
LAB_144462f26:
  uVar12 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar8,iVar14);
  TStack_b8.CurrentBitIndex = iVar9;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = iVar16;
  uStack_98 = CONCAT44(uStack_104,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar15 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar12 != uVar8) {
    puVar11 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar13) goto LAB_144463050;
      uVar12 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_144463050:
  while( true ) {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_b8.CurrentBitIndex == uVar12) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar6 = SetConnectionConcreteType
                      (this,*(FDataflowConnection **)
                             ((longlong)TStack_b8.CurrentBitIndex * 0x20 + 0x10 +
                             *(longlong *)&this->ExpandedInputs),param_1,(FName)0x0);
    bVar18 = (bool)(bVar18 | bVar6);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar15 = 0;
  iVar13 = *(int *)&(this->ExpandedOutputs).field_0x28;
  pTVar2 = &this->ExpandedOutputs;
  iVar14 = 0;
  iVar16 = 0;
  if (iVar13 != 0) {
    puVar17 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar8 = *puVar17;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar15;
      iVar14 = iVar14 + 0x20;
      iVar15 = iVar15 + 1;
      iVar16 = iVar13;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iVar15) goto LAB_144463162;
      uVar8 = puVar17[lVar10 + 1];
    }
    local_140 = -uVar8 & uVar8;
    uVar3 = (ulonglong)local_140 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = iVar14 + -1 + (int)lVar10;
    if (iVar13 < iVar16) {
      iVar16 = iVar13;
    }
  }
LAB_144463162:
  uVar8 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  TStack_88._padding_ = CONCAT44(local_140,iVar15);
  uVar12 = uVar8 & 0xffffffe0;
  TStack_88.CurrentBitIndex = iVar16;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar8 >> 5;
  TStack_88._28_4_ = iVar9;
  TStack_88.BaseBitIndex = iVar14;
  uStack_68 = CONCAT44(uStack_c4,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || (iVar13 < (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar19 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar8 != uVar19) {
    puVar11 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar15 * 4);
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar8 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar15)
      goto LAB_144463280;
      uVar8 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar19 < (int)uVar8) {
      uVar8 = uVar19;
    }
  }
LAB_144463280:
  while( true ) {
    pTVar5 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar8) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar2))
    break;
    bVar6 = SetConnectionConcreteType
                      (this,*(FDataflowConnection **)
                             ((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x10 +
                             *(longlong *)pTVar5),param_1,(FName)0x0);
    bVar18 = (bool)(bVar18 | bVar6);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return bVar18;
}

// SetArrayElementFromInput @ 1444633f0

void __thiscall
FDataflowNode::SetArrayElementFromInput
          (FDataflowNode *this,FContext *param_1,FConnectionReference *param_2,int param_3,
          void *param_4)

{
  FDataflowNode *this_00;
  longlong lVar1;
  FProperty *pFVar2;
  char cVar3;
  uint uVar4;
  FDataflowOutput *this_01;
  FDataflowInput *this_02;
  ulong64 uVar5;
  ulong64 uVar6;
  longlong *plVar7;
  FTimestamp local_48 [2];
  FConnectionReference local_38;
  
  local_38.Reference = param_4;
  local_38.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  this_01 = FindOutput(this,&local_38);
  if (this_01 != (FDataflowOutput *)0x0) {
    this_02 = FindInput(this,param_2);
    if ((this_02 != (FDataflowInput *)0x0) &&
       (cVar3 = (**(code **)(this_02->_padding_ + 0x28))(this_02), cVar3 != '\0')) {
      FDataflowInput::PullValue(this_02,param_1);
      uVar5 = CityHash64((char *)&this_02->Connection->_padding_,0x10);
      uVar6 = CityHash64((char *)&this_01->_padding_,0x10);
      this_00 = (FDataflowNode *)this_01->_padding_;
      if (this_00 == (FDataflowNode *)0x0) {
        uVar4 = 0;
        local_48[0].Value = UE::Dataflow::FTimestamp::Invalid;
      }
      else {
        local_48[0].Value = (this_00->LastModifiedTimestamp).Value;
        uVar4 = GetValueHash(this_00);
      }
      lVar1 = this_01->_padding_;
      if (lVar1 == 0) {
        local_38.Reference._0_4_ = 0;
        local_38.Reference._4_4_ = 0;
        local_38.Index = 0;
        local_38._12_4_ = 0;
      }
      else {
        local_38.Reference._0_4_ = *(undefined4 *)(lVar1 + 0x7c);
        local_38.Reference._4_4_ = *(undefined4 *)(lVar1 + 0x80);
        local_38.Index = *(int *)(lVar1 + 0x84);
        local_38._12_4_ = *(undefined4 *)(lVar1 + 0x88);
      }
      pFVar2 = (FProperty *)this_01->_padding_;
      plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar5 & 0xffffffff);
      if (((plVar7 != (longlong *)0x0) && (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0))
         && ((**(code **)(*plVar7 + 0x28))
                       (plVar7,&param_4,param_1,param_3,pFVar2,&local_38,uVar4,local_48),
            param_4 != (void *)0x0)) {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&param_4);
        if (param_4 == (void *)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)param_4)(param_4,1);
        return;
      }
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar2,(FGuid *)&local_38,uVar4,local_48);
      return;
    }
    FDataflowOutput::SetNullValue(this_01,param_1);
  }
  return;
}

// SetArraySizeFromInput @ 1444635e0

void __thiscall
FDataflowNode::SetArraySizeFromInput
          (FDataflowNode *this,FContext *param_1,FConnectionReference *param_2,int *param_3)

{
  char cVar1;
  FDataflowInput *this_00;
  ulong64 uVar2;
  longlong *plVar3;
  FDataflowOutput *this_01;
  int local_res20 [2];
  FConnectionReference local_28;
  
  local_res20[0] = 0;
  this_00 = FindInput(this,param_2);
  if ((this_00 != (FDataflowInput *)0x0) &&
     (cVar1 = (**(code **)(this_00->_padding_ + 0x28))(this_00), cVar1 != '\0')) {
    FDataflowInput::PullValue(this_00,param_1);
    uVar2 = CityHash64((char *)&this_00->Connection->_padding_,0x10);
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar2 & 0xffffffff);
    if ((plVar3 == (longlong *)0x0) || (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)) {
      local_res20[0] = 0;
    }
    else {
      local_res20[0] = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    }
  }
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_3;
  this_01 = FindOutput(this,&local_28);
  if (this_01 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<int_&,int>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else {
    FDataflowOutput::SetValue<int_&>(this_01,local_res20,param_1);
  }
  return;
}

// SetConnectionConcreteType @ 1444638e0

bool __thiscall
FDataflowNode::SetConnectionConcreteType(FDataflowNode *this,FConnectionKey *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDataflowInput **ppFVar4;
  FDataflowOutput **ppFVar5;
  FDataflowOutput *pFVar6;
  
  ppFVar4 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)&this->ExpandedInputs,param_1);
  if (ppFVar4 != (FDataflowInput **)0x0) {
    if (*ppFVar4 == (FDataflowInput *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Con",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x110,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar6 = (FDataflowOutput *)*ppFVar4;
    if (pFVar6 != (FDataflowOutput *)0x0) goto LAB_144463998;
  }
  ppFVar5 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                    *)&this->ExpandedOutputs,param_1);
  if (ppFVar5 == (FDataflowOutput **)0x0) {
    pFVar6 = (FDataflowOutput *)0x0;
  }
  else {
    if (*ppFVar5 == (FDataflowOutput *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Con",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x1dc,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar6 = *ppFVar5;
  }
LAB_144463998:
  bVar2 = SetConnectionConcreteType(this,(FDataflowConnection *)pFVar6,param_2,(FName)0x0);
  return bVar2;
}

// SetConnectionConcreteType @ 1444639d0

bool __thiscall
FDataflowNode::SetConnectionConcreteType
          (FDataflowNode *this,FDataflowConnection *param_1,FName param_2,FName param_3)

{
  undefined8 *puVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  FGraph *this_00;
  FDataflowOutput *pFVar4;
  bool bVar5;
  atomic<int> aVar6;
  int iVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38 [2];
  
  bVar5 = false;
  if (param_1 != (FDataflowConnection *)0x0) {
    if (param_1->Type != param_2) {
      pTVar9 = (this->WeakDataflowGraph).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar9->SharedReferenceCount;
        if (aVar6 != (atomic<int>)0x0) {
LAB_144463a20:
          LOCK();
          aVar2 = pTVar9->SharedReferenceCount;
          bVar10 = aVar6 == aVar2;
          if (bVar10) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar2 = aVar6;
          }
          aVar6 = aVar2;
          UNLOCK();
          if (!bVar10) goto code_r0x000144463a2b;
          this_00 = (this->WeakDataflowGraph).Object;
          if (this_00 == (FGraph *)0x0) goto LAB_144463a34;
          local_48 = (undefined8 *)0x0;
          local_40 = 0;
          (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
          if (param_1->Direction == INPUT) {
            (**(code **)(param_1->_padding_ + 0x58))(param_1,local_38);
            iVar7 = (int)local_38[1];
            puVar1 = local_38[0] + iVar7;
            puVar8 = local_38[0];
            while( true ) {
              if ((int)local_38[1] != iVar7) {
                `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res10);
              }
              if (puVar8 == puVar1) break;
              UE::Dataflow::FGraph::Disconnect
                        (this_00,(FDataflowOutput *)*puVar8,(FDataflowInput *)param_1);
              puVar8 = puVar8 + 1;
            }
          }
          else {
            if (param_1->Direction != OUTPUT) goto LAB_144463b5e;
            (**(code **)(param_1->_padding_ + 0x58))(param_1,local_38);
            iVar7 = (int)local_38[1];
            puVar1 = local_38[0] + iVar7;
            puVar8 = local_38[0];
            while( true ) {
              if ((int)local_38[1] != iVar7) {
                `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res10);
              }
              if (puVar8 == puVar1) break;
              UE::Dataflow::FGraph::Disconnect
                        (this_00,(FDataflowOutput *)param_1,(FDataflowInput *)*puVar8);
              puVar8 = puVar8 + 1;
            }
          }
          if (local_38[0] != (undefined8 *)0x0) {
            FMemory::Free(local_38[0]);
          }
LAB_144463b5e:
          param_1->bLockType = false;
          bVar5 = FDataflowConnection::SetConcreteType(param_1,param_2);
          if (param_1->bLockType) {
            param_1->bLockType = true;
          }
          iVar7 = (int)local_40;
          puVar1 = local_48 + (int)local_40;
          puVar8 = local_48;
          do {
            while( true ) {
              if ((int)local_40 != iVar7) {
                `TCheckedPointerIterator<FDataflowConnection_*,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_res10);
              }
              if (puVar8 == puVar1) {
                if (local_48 != (undefined8 *)0x0) {
                  FMemory::Free(local_48);
                }
                goto LAB_144463a34;
              }
              pFVar4 = (FDataflowOutput *)*puVar8;
              if (pFVar4 != (FDataflowOutput *)0x0) break;
LAB_144463bea:
              puVar8 = puVar8 + 1;
            }
            if (param_1->Direction != OUTPUT) {
              if ((param_1->Direction == INPUT) &&
                 (*(char *)((longlong)&pFVar4->_padding_ + 4) == '\x02')) {
                UE::Dataflow::FGraph::Connect(this_00,pFVar4,(FDataflowInput *)param_1);
              }
              goto LAB_144463bea;
            }
            if (*(char *)((longlong)&pFVar4->_padding_ + 4) != '\x01') goto LAB_144463bea;
            UE::Dataflow::FGraph::Connect
                      (this_00,(FDataflowOutput *)param_1,(FDataflowInput *)pFVar4);
            puVar8 = puVar8 + 1;
          } while( true );
        }
LAB_144463a2f:
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
LAB_144463a34:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    if (((param_3 != (FName)0x0) && (param_1->TypeDependencyGroup == (FName)0x0)) &&
       (param_1->bIsAnyType)) {
      param_1->TypeDependencyGroup = param_3;
      return bVar5;
    }
  }
  return bVar5;
code_r0x000144463a2b:
  if (aVar6 == (atomic<int>)0x0) goto LAB_144463a2f;
  goto LAB_144463a20;
}

// SetInputConcreteType @ 144464350

bool __thiscall
FDataflowNode::SetInputConcreteType(FDataflowNode *this,FConnectionReference *param_1,FName param_2)

{
  bool bVar1;
  FDataflowInput *pFVar2;
  
  pFVar2 = FindInput(this,param_1);
  bVar1 = SetConnectionConcreteType(this,(FDataflowConnection *)pFVar2,param_2,(FName)0x0);
  return bVar1;
}

// SetOutputConcreteType @ 1444649f0

bool __thiscall
FDataflowNode::SetOutputConcreteType
          (FDataflowNode *this,FConnectionReference *param_1,FName param_2)

{
  bool bVar1;
  FDataflowOutput *pFVar2;
  
  pFVar2 = FindOutput(this,param_1);
  bVar1 = SetConnectionConcreteType(this,(FDataflowConnection *)pFVar2,param_2,(FName)0x0);
  return bVar1;
}

// StripContainerIndexFromPropertyFullName @ 144465510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FDataflowNode::StripContainerIndexFromPropertyFullName
          (FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  FString *this;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_68.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_68.Data.ArrayNum;
  bVar9 = false;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
    iVar5 = local_68.Data.ArrayNum;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  while( true ) {
    iVar8 = 0;
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
    while( true ) {
      if (FVar4.Data == local_68.Data.AllocatorInstance.Data + (longlong)iVar5 * 2)
      goto LAB_1444655cf;
      if (*(wchar_t *)FVar4.Data == L'[') break;
      FVar4.Data = FVar4.Data + 2;
    }
    iVar3 = (int)((longlong)FVar4.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1);
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
    if (iVar3 == -1) break;
    while (*(wchar_t *)FVar4.Data != L']') {
      FVar4.Data = FVar4.Data + 2;
      if (FVar4.Data == local_68.Data.AllocatorInstance.Data + (longlong)iVar5 * 2)
      goto LAB_1444655cf;
    }
    iVar7 = (int)((longlong)FVar4.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1);
    if ((iVar7 == -1) || (iVar7 <= iVar3)) break;
    if (iVar3 + 1 < iVar7) {
      bVar9 = true;
      this = ::FString::Mid(&local_68,&local_38,iVar3 + 1,(iVar7 - iVar3) + -1);
      bVar1 = ::FString::IsNumeric(this);
      iVar5 = local_68.Data.ArrayNum;
      if (!bVar1) goto LAB_1444656a6;
      bVar1 = true;
    }
    else {
LAB_1444656a6:
      bVar1 = false;
    }
    if ((bVar9) &&
       (bVar9 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      iVar5 = local_68.Data.ArrayNum;
    }
    if (bVar1) {
      iVar2 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar2 = iVar8;
      }
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = iVar8;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      FVar4.Data = (FScriptContainerElement *)L"";
      if (iVar5 != 0) {
        FVar4.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)FVar4.Data,iVar3);
      iVar5 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar5 = iVar8;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar3 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      if (iVar7 + 1 < iVar3) {
        iVar3 = iVar7 + 1;
      }
      if (0 < iVar3) {
        iVar8 = iVar3;
      }
      FVar4.Data = (FScriptContainerElement *)L"";
      if (iVar5 != 0) {
        FVar4.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar4.Data,iVar8);
      iVar5 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    ::FString::RemoveAt(&local_68,0,iVar7 + 1,Default);
    iVar5 = local_68.Data.ArrayNum;
  }
LAB_1444655cf:
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = iVar8;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryRenameInput @ 144467440

bool __thiscall
FDataflowNode::TryRenameInput(FDataflowNode *this,FDataflowInput *param_1,FName param_2)

{
  FDataflowInput *pFVar1;
  
  pFVar1 = FindInput(this,param_2);
  if ((pFVar1 != (FDataflowInput *)0x0) && (pFVar1 != param_1)) {
    return false;
  }
  param_1->_padding_ = (longlong)param_2;
  return true;
}

// TryRenameInput @ 144467490

bool __thiscall
FDataflowNode::TryRenameInput(FDataflowNode *this,FConnectionReference *param_1,FName param_2)

{
  FDataflowInput *pFVar1;
  FDataflowInput *pFVar2;
  
  pFVar1 = FindInput(this,param_1);
  if (pFVar1 != (FDataflowInput *)0x0) {
    pFVar2 = FindInput(this,param_2);
    if ((pFVar2 == (FDataflowInput *)0x0) || (pFVar2 == pFVar1)) {
      pFVar1->_padding_ = (longlong)param_2;
      return true;
    }
  }
  return false;
}

// TryRenameOutput @ 144467500

bool __thiscall
FDataflowNode::TryRenameOutput(FDataflowNode *this,FDataflowOutput *param_1,FName param_2)

{
  FDataflowOutput *pFVar1;
  
  pFVar1 = FindOutput(this,param_2);
  if ((pFVar1 != (FDataflowOutput *)0x0) && (pFVar1 != param_1)) {
    return false;
  }
  param_1->_padding_ = (longlong)param_2;
  return true;
}

// TryRenameOutput @ 144467550

bool __thiscall
FDataflowNode::TryRenameOutput(FDataflowNode *this,FConnectionReference *param_1,FName param_2)

{
  FDataflowOutput *pFVar1;
  FDataflowOutput *pFVar2;
  
  pFVar1 = FindOutput(this,param_1);
  if (pFVar1 != (FDataflowOutput *)0x0) {
    pFVar2 = FindOutput(this,param_2);
    if ((pFVar2 == (FDataflowOutput *)0x0) || (pFVar2 == pFVar1)) {
      pFVar1->_padding_ = (longlong)param_2;
      return true;
    }
  }
  return false;
}

// TrySetConnectionType @ 144468340

bool __thiscall
FDataflowNode::TrySetConnectionType(FDataflowNode *this,FDataflowConnection *param_1,FName param_2)

{
  bool bVar1;
  FName local_res18;
  
  if (((param_1 != (FDataflowConnection *)0x0) && (param_1->bIsAnyType)) &&
     (param_1->Type != param_2)) {
    local_res18 = param_2;
    bVar1 = FDataflowConnection::IsAnyType(&local_res18);
    if (!bVar1) {
      bVar1 = SetConnectionConcreteType(this,param_1,param_2,(FName)0x0);
      if (bVar1) {
        NotifyConnectionTypeChanged(this,param_1);
        return true;
      }
    }
  }
  return false;
}

// Unfreeze @ 1444683d0

void __thiscall FDataflowNode::Unfreeze(FDataflowNode *this,FContext *param_1)

{
  LARGE_INTEGER local_res8 [2];
  LARGE_INTEGER local_res18 [2];
  
  FInstancedStruct::Reset(&(this->FrozenProperties).Value);
  this->bIsFrozen = false;
  QueryPerformanceCounter(local_res8);
  local_res18[0] = local_res8[0];
  Invalidate(this,(FTimestamp *)&local_res18[0].s);
  return;
}

// UnregisterInputConnection @ 1444698a0

void __thiscall
FDataflowNode::UnregisterInputConnection(FDataflowNode *this,FConnectionKey *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *this_00;
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  
  this_00 = &this->ExpandedInputs;
  if (*(int *)&(this->ExpandedInputs).field_0x8 != *(int *)&(this->ExpandedInputs).field_0x34) {
    uVar5 = param_1->Offset;
    puVar10 = *(undefined1 **)&(this->ExpandedInputs).field_0x40;
    uVar9 = uVar5 * 0x40 + param_1->ContainerIndex + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
    iVar8 = 1;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ExpandedInputs).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (((longlong)(int)(uVar9 * 0x40 + (uVar9 >> 2) + param_1->ContainerElementOffset)
                      - 0x61c88647U ^ (longlong)(int)uVar9) &
                    (longlong)*(int *)&(this->ExpandedInputs).field_0x48 - 1U) * 4);
    bVar3 = false;
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        lVar6 = (longlong)iVar7 * 0x20;
        if (((*(uint *)(lVar6 + lVar2) == uVar5) &&
            (*(int *)(lVar6 + 4 + lVar2) == param_1->ContainerIndex)) &&
           (*(uint *)(lVar6 + 8 + lVar2) == param_1->ContainerElementOffset)) {
          TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
                           *)this_00,iVar7);
          bVar3 = true;
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x18 + lVar2);
        bVar3 = false;
      } while (iVar7 != -1);
    }
    bVar4 = TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::CompactStable((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)this_00);
    if (bVar4) {
      uVar5 = *(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34
      ;
      if (3 < uVar5) {
        uVar1 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar2 & 0x1f);
      }
      *(int *)&(this->ExpandedInputs).field_0x48 = iVar8;
      TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
                *)this_00);
    }
    if (bVar3) {
      QueryPerformanceCounter(&local_res8);
      local_res18 = local_res8;
      Invalidate(this,(FTimestamp *)&local_res18.s);
    }
  }
  return;
}

// UnregisterOutputConnection @ 1444699f0

void __thiscall
FDataflowNode::UnregisterOutputConnection(FDataflowNode *this,FConnectionKey *param_1)

{
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *this_00;
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  
  this_00 = &this->ExpandedOutputs;
  if (*(int *)&(this->ExpandedOutputs).field_0x8 != *(int *)&(this->ExpandedOutputs).field_0x34) {
    uVar5 = param_1->Offset;
    puVar10 = *(undefined1 **)&(this->ExpandedOutputs).field_0x40;
    uVar9 = uVar5 * 0x40 + param_1->ContainerIndex + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
    iVar8 = 1;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ExpandedOutputs).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (((longlong)(int)(uVar9 * 0x40 + (uVar9 >> 2) + param_1->ContainerElementOffset)
                      - 0x61c88647U ^ (longlong)(int)uVar9) &
                    (longlong)*(int *)&(this->ExpandedOutputs).field_0x48 - 1U) * 4);
    bVar3 = false;
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        lVar6 = (longlong)iVar7 * 0x20;
        if (((*(uint *)(lVar6 + lVar2) == uVar5) &&
            (*(int *)(lVar6 + 4 + lVar2) == param_1->ContainerIndex)) &&
           (*(uint *)(lVar6 + 8 + lVar2) == param_1->ContainerElementOffset)) {
          TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
                           *)this_00,iVar7);
          bVar3 = true;
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x18 + lVar2);
        bVar3 = false;
      } while (iVar7 != -1);
    }
    bVar4 = TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::CompactStable((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)this_00);
    if (bVar4) {
      uVar5 = *(int *)&(this->ExpandedOutputs).field_0x8 -
              *(int *)&(this->ExpandedOutputs).field_0x34;
      if (3 < uVar5) {
        uVar1 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar2 & 0x1f);
      }
      *(int *)&(this->ExpandedOutputs).field_0x48 = iVar8;
      TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
                *)this_00);
    }
    if (bVar3) {
      QueryPerformanceCounter(&local_res8);
      local_res18 = local_res8;
      Invalidate(this,(FTimestamp *)&local_res18.s);
    }
  }
  return;
}

// UnregisterPinConnection @ 144469b40

void __thiscall FDataflowNode::UnregisterPinConnection(FDataflowNode *this,FPin *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  if (param_1->Direction == INPUT) {
    TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
                *)&this->ExpandedInputs);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar3 = local_88._24_8_ >> 0x20;
    uVar5 = local_88._28_4_;
    local_28 = (TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
                *)&this->ExpandedInputs;
    if ((int)uVar5 < *(int *)(local_88._16_8_ + 0x18)) {
      while( true ) {
        iVar4 = 1;
        plVar1 = *(longlong **)((longlong)(int)uVar3 * 0x20 + 0x10 + *local_58);
        if ((((uint)plVar1[9] == (param_1->Name).ComparisonIndex.Value) &&
            ((uint)((ulonglong)plVar1[9] >> 0x20) == (param_1->Name).Number)) &&
           (((uint)plVar1[8] == (param_1->Type).ComparisonIndex.Value &&
            ((uint)((ulonglong)plVar1[8] >> 0x20) == (param_1->Type).Number)))) {
          TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uVar5);
          (**(code **)(*plVar1 + 8))(plVar1,1);
          QueryPerformanceCounter(&local_res10);
          local_res18 = local_res10;
          Invalidate(this,(FTimestamp *)&local_res18.s);
          goto LAB_144469c71;
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        if (*(int *)(auStack_50._8_8_ + 0x18) <= (int)uStack_3c) break;
        uVar3 = (ulonglong)uStack_3c;
        uVar5 = uStack_3c;
      }
      if ((char)local_20 != '\0') {
LAB_144469c71:
        if (local_20._1_1_ != '\0') {
          uVar5 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34
          ;
          if (3 < uVar5) {
            uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar5) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
            local_28->HashSize = iVar4;
            TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
            ::Rehash(local_28);
          }
        }
      }
    }
  }
  else if (param_1->Direction == OUTPUT) {
    TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
                *)&this->ExpandedOutputs);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar3 = local_88._24_8_ >> 0x20;
    uVar5 = local_88._28_4_;
    local_28 = (TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
                *)&this->ExpandedOutputs;
    if ((int)uVar5 < *(int *)(local_88._16_8_ + 0x18)) {
      while( true ) {
        iVar4 = 1;
        plVar1 = *(longlong **)((longlong)(int)uVar3 * 0x20 + 0x10 + *local_58);
        if (((((uint)plVar1[9] == (param_1->Name).ComparisonIndex.Value) &&
             ((uint)((ulonglong)plVar1[9] >> 0x20) == (param_1->Name).Number)) &&
            ((uint)plVar1[8] == (param_1->Type).ComparisonIndex.Value)) &&
           ((uint)((ulonglong)plVar1[8] >> 0x20) == (param_1->Type).Number)) {
          TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
                           *)pTStack_30,uVar5);
          (**(code **)(*plVar1 + 8))(plVar1,1);
          QueryPerformanceCounter(&local_res10);
          local_res18 = local_res10;
          Invalidate(this,(FTimestamp *)&local_res18.s);
          goto LAB_144469dcd;
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        if (*(int *)(auStack_50._8_8_ + 0x18) <= (int)uStack_3c) break;
        uVar3 = (ulonglong)uStack_3c;
        uVar5 = uStack_3c;
      }
      if ((char)local_20 != '\0') {
LAB_144469dcd:
        if (local_20._1_1_ != '\0') {
          uVar5 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&local_28->Elements)->field_0x8 -
                  *(int *)&((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&local_28->Elements)->field_0x34;
          if (3 < uVar5) {
            uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar5) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
            local_28->HashSize = iVar4;
            TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
                      *)local_28);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 1504be580

bool __thiscall `FDataflowNode::SetValue<int_&,int>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<int&___ptr64,int>(UE::Dataflow::FContext&___ptr64,int&___ptr64,int_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be5c0

bool __thiscall
`FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FManagedArrayCollection_const&___ptr64,FManagedArrayCollection>(UE::Dataflow::FContext&___ptr64,FManagedArrayCollection_const&___ptr64,FManagedArrayCollection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be600

bool __thiscall
`FDataflowNode::SetValue<FDataflowBoolArrayTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowBoolArrayTypes>(UE::Dataflow::FContext&___ptr64,TArray<bool,TSizedDefaultAllocator<32>_>_const&___ptr64,FDataflowBoolArrayTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be640

bool __thiscall
`FDataflowNode::SetValue<FDataflowBoolTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowBoolTypes>(UE::Dataflow::FContext&___ptr64,bool_const&___ptr64,FDataflowBoolTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be680

bool __thiscall
`FDataflowNode::SetValue<FDataflowImage,FDataflowImage>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowImage,FDataflowImage>(UE::Dataflow::FContext&___ptr64,FDataflowImage&&___ptr64,FDataflowImage_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be6c0

bool __thiscall
`FDataflowNode::SetValue<FDataflowNumericArrayTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowNumericArrayTypes>(UE::Dataflow::FContext&___ptr64,TArray<double,TSizedDefaultAllocator<32>_>_const&___ptr64,FDataflowNumericArrayTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be700

bool __thiscall
`FDataflowNode::SetValue<FDataflowNumericTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowNumericTypes>(UE::Dataflow::FContext&___ptr64,double_const&___ptr64,FDataflowNumericTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be740

bool __thiscall
`FDataflowNode::SetValue<FDataflowRotationTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowRotationTypes>(UE::Dataflow::FContext&___ptr64,UE::Math::TRotator<double>_const&___ptr64,FDataflowRotationTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be780

bool __thiscall
`FDataflowNode::SetValue<FDataflowSelectionTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowSelectionTypes>(UE::Dataflow::FContext&___ptr64,FDataflowSelection_const&___ptr64,FDataflowSelectionTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be7c0

bool __thiscall
`FDataflowNode::SetValue<FDataflowStringArrayTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowStringArrayTypes>(UE::Dataflow::FContext&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,FDataflowStringArrayTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be800

bool __thiscall
`FDataflowNode::SetValue<FDataflowStringConvertibleTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowStringConvertibleTypes>(UE::Dataflow::FContext&___ptr64,FString_const&___ptr64,FDataflowStringConvertibleTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be840

bool __thiscall
`FDataflowNode::SetValue<FDataflowStringTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowStringTypes>(UE::Dataflow::FContext&___ptr64,FString_const&___ptr64,FDataflowStringTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be880

bool __thiscall
`FDataflowNode::SetValue<FDataflowTransformArrayTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowTransformArrayTypes>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,FDataflowTransformArrayTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be8c0

bool __thiscall
`FDataflowNode::SetValue<FDataflowTransformTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowTransformTypes>(UE::Dataflow::FContext&___ptr64,UE::Math::TTransform<double>_const&___ptr64,FDataflowTransformTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be900

bool __thiscall
`FDataflowNode::SetValue<FDataflowUObjectConvertibleTypes>'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowUObjectConvertibleTypes>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UObject>_const&___ptr64,FDataflowUObjectConvertibleTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be940

bool __thiscall
`FDataflowNode::SetValue<FDataflowVectorArrayTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowVectorArrayTypes>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,FDataflowVectorArrayTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be980

bool __thiscall
`FDataflowNode::SetValue<FDataflowVectorTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158229>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowVectorTypes>(UE::Dataflow::FContext&___ptr64,UE::Math::TVector4<double>_const&___ptr64,FDataflowVectorTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504be9c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<int,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bea00

bool __thiscall `FDataflowNode::AddInput'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4249434131491979073>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x48);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4249434131491979073>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bea78;
    }
  }
  bVar2 = false;
LAB_1504bea78:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504beab0

bool __thiscall `FDataflowNode::AddOutput'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4249434131491978894>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x48);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4249434131491978894>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504beb28;
    }
  }
  bVar2 = false;
LAB_1504beb28:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}


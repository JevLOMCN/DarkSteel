// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// StaticStruct @ 14d4dad60

UScriptStruct * __cdecl UE::StateTree::InstanceData::FInstanceContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstanceContainer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FInstanceContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstanceContainer,(UObject *)pUVar1,
                         L"InstanceContainer");
  }
  return Z_Registration_Info_UScriptStruct_FInstanceContainer.OuterSingleton;
}

// Append @ 14d4efeb0

int __thiscall
UE::StateTree::InstanceData::FInstanceContainer::Append
          (FInstanceContainer *this,TNotNull<UObject_*> param_1,FInstanceContainer *param_2,
          FAddArgs param_3)

{
  uchar **ppuVar1;
  uint uVar2;
  uchar *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ForElementType<FConstStructView> FVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ForElementType<FConstStructView> local_78;
  undefined8 local_70;
  FConstStructView local_68;
  FConstStructView *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TArrayView<FConstStructView_const_,int> local_48;
  
  uVar11 = 0;
  uVar2 = (param_2->InstanceStructs).NumItems;
  local_78.Data = (FConstStructView *)0x0;
  local_70 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  uVar13 = uVar11;
  if (0 < (int)uVar2) {
    Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_>
              (0x10,8,uVar2,&local_78,0,(int *)((longlong)&local_70 + 4));
    uVar13 = local_70 & 0xffffffff;
  }
  uVar12 = (uint)uVar13;
  uVar2 = (param_2->InstanceStructs).NumItems;
  FVar9.Data = local_78.Data;
  uVar15 = uVar11;
  if (uVar2 != 0) {
    do {
      iVar8 = (int)uVar13;
      iVar7 = (param_2->InstanceStructs).NumItems;
      if (((iVar7 < 1) || (iVar7 <= (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      puVar3 = (param_2->InstanceStructs).Memory;
      iVar7 = (param_2->InstanceStructs).AllocatedSize - (int)uVar11;
      local_68.StructMemory = puVar3 + *(int *)(puVar3 + (longlong)iVar7 + -8);
      local_68.ScriptStruct = *(UScriptStruct **)(puVar3 + (longlong)iVar7 + -0x10);
      if (((FVar9.Data <= &local_68) && (&local_68 < FVar9.Data + local_70._4_4_)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if (iVar8 == local_70._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_>
                          (0x810,&local_78,(int *)((longlong)&local_70 + 4));
        FVar9.Data = local_78.Data;
      }
      uVar14 = (int)uVar15 + 1;
      uVar11 = (ulonglong)((int)uVar11 + 0x10);
      uVar12 = iVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      local_70 = CONCAT44(local_70._4_4_,uVar12);
      FVar9.Data[iVar8].ScriptStruct = local_68.ScriptStruct;
      FVar9.Data[iVar8].StructMemory = local_68.StructMemory;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 != uVar2);
  }
  local_58 = FVar9.Data;
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = uVar12;
  iVar7 = (this->InstanceStructs).NumItems;
  local_48.DataPtr = local_58;
  uStack_50 = uVar12;
  FInstancedStructContainer::Append(&this->InstanceStructs,&local_48);
  InstanceData::Private::PostAppendToInstanceStructContainer
            (&this->InstanceStructs,param_1,param_3.bDuplicateWrappedObject,iVar7);
  if (FVar9.Data != (FConstStructView *)0x0) {
    ppuVar1 = &FVar9.Data[-1].StructMemory;
    MemoryTrace_Free((ulong64)ppuVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,ppuVar1,FMalloc,true);
    }
    piVar10 = (int *)((longlong)ppuVar1 - (ulonglong)*(uint *)ppuVar1);
    iVar8 = *piVar10;
    *piVar10 = iVar8 + -1;
    if (iVar8 == 1) {
      lVar4 = *(longlong *)(piVar10 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar10,0,0);
      if (lVar4 - (longlong)piVar10 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar10);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar10);
      }
    }
  }
  return iVar7;
}

// Append @ 14d4f01a0

int __thiscall
UE::StateTree::InstanceData::FInstanceContainer::Append
          (FInstanceContainer *this,TNotNull<UObject_*> param_1,
          TArrayView<FConstStructView_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  TArrayView<FConstStructView_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = (this->InstanceStructs).NumItems;
  FInstancedStructContainer::Append(&this->InstanceStructs,&local_18);
  InstanceData::Private::PostAppendToInstanceStructContainer
            (&this->InstanceStructs,param_1,param_3.bDuplicateWrappedObject,iVar1);
  return iVar1;
}

// Append @ 14d4f0210

int __thiscall
UE::StateTree::InstanceData::FInstanceContainer::Append
          (FInstanceContainer *this,TNotNull<UObject_*> param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = (this->InstanceStructs).NumItems;
  FInstancedStructContainer::Append(&this->InstanceStructs,&local_18);
  InstanceData::Private::PostAppendToInstanceStructContainer
            (&this->InstanceStructs,param_1,param_3.bDuplicateWrappedObject,iVar1);
  return iVar1;
}

// AreAllInstancesValid @ 14d4f0690

bool __thiscall
UE::StateTree::InstanceData::FInstanceContainer::AreAllInstancesValid(FInstanceContainer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong lVar9;
  UPackage *pUVar10;
  UScriptStruct *pUVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (this->InstanceStructs).NumItems;
  iVar13 = 0;
  if (iVar1 != 0) {
    iVar12 = 0;
    pUVar11 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton;
    do {
      iVar2 = (this->InstanceStructs).NumItems;
      if (((iVar2 < 1) || (iVar2 <= iVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""),
         pUVar11 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton,
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      puVar4 = (this->InstanceStructs).Memory;
      lVar9 = (longlong)((this->InstanceStructs).AllocatedSize - iVar12);
      iVar2 = *(int *)(puVar4 + lVar9 + -8);
      pUVar5 = *(UScriptStruct **)(puVar4 + lVar9 + -0x10);
      if ((longlong *)(puVar4 + iVar2) == (longlong *)0x0) {
        return false;
      }
      if (pUVar5 == (UScriptStruct *)0x0) {
        return false;
      }
      if (pUVar11 == (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
        pUVar11 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                  (UObject *)pUVar10,L"StateTreeInstanceObjectWrapper");
        Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton = pUVar11;
      }
      if (pUVar5 == pUVar11) {
LAB_14d4f0835:
        if (*(longlong *)(puVar4 + iVar2) == 0) {
          return false;
        }
      }
      else if (pUVar11 == (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
        pUVar11 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                  (UObject *)pUVar10,L"StateTreeInstanceObjectWrapper");
        Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton = pUVar11;
        if (pUVar11 != (UScriptStruct *)0x0) goto LAB_14d4f0811;
      }
      else {
LAB_14d4f0811:
        iVar3 = (int)pUVar11->_padding_;
        if (((int)pUVar5->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar11->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) goto LAB_14d4f0835;
      }
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar13 != iVar1);
  }
  return true;
}

// GetAllocatedMemory @ 14d4fbe60

int __thiscall
UE::StateTree::InstanceData::FInstanceContainer::GetAllocatedMemory(FInstanceContainer *this)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  UScriptStruct *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = (this->InstanceStructs).NumItems;
  iVar11 = 0;
  iVar13 = (this->InstanceStructs).AllocatedSize;
  if (iVar6 != 0) {
    iVar10 = 0;
    pUVar8 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton;
    do {
      iVar12 = (this->InstanceStructs).NumItems;
      if (((iVar12 < 1) || (iVar12 <= iVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""),
         pUVar8 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton,
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      puVar2 = (this->InstanceStructs).Memory;
      lVar9 = (longlong)((this->InstanceStructs).AllocatedSize - iVar10);
      iVar12 = *(int *)(puVar2 + lVar9 + -8);
      if (((longlong *)(puVar2 + iVar12) != (longlong *)0x0) &&
         (pUVar3 = *(UScriptStruct **)(puVar2 + lVar9 + -0x10), pUVar3 != (UScriptStruct *)0x0)) {
        if (pUVar8 == (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
          pUVar8 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                   (UObject *)pUVar7,L"StateTreeInstanceObjectWrapper");
          Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton = pUVar8;
        }
        if (pUVar3 != pUVar8) {
          if (pUVar8 == (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
            pUVar8 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                     (UObject *)pUVar7,L"StateTreeInstanceObjectWrapper");
            Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                 pUVar8;
            if (pUVar8 == (UScriptStruct *)0x0) goto LAB_14d4fbfb4;
          }
          iVar1 = (int)pUVar8->_padding_;
          if (((int)pUVar3->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_14d4fbfb4;
        }
        lVar9 = *(longlong *)(puVar2 + iVar12);
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x10);
          iVar12 = (int)*(short *)(lVar9 + 0x5c);
          iVar13 = iVar13 + (iVar12 + -1 + *(int *)(lVar9 + 0x58) & -iVar12);
        }
      }
LAB_14d4fbfb4:
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar11 != iVar6);
  }
  return iVar13;
}

// Init @ 14d500d10

void __thiscall
UE::StateTree::InstanceData::FInstanceContainer::Init
          (FInstanceContainer *this,TNotNull<UObject_*> param_1,FInstanceContainer *param_2,
          FAddArgs param_3)

{
  FInstancedStructContainer::Reset(&this->InstanceStructs);
  FInstancedStructContainer::operator=(&this->InstanceStructs,&param_2->InstanceStructs);
  InstanceData::Private::PostAppendToInstanceStructContainer
            (&this->InstanceStructs,param_1,param_3.bDuplicateWrappedObject,0);
  return;
}

// Init @ 14d500d70

void __thiscall
UE::StateTree::InstanceData::FInstanceContainer::Init
          (FInstanceContainer *this,TNotNull<UObject_*> param_1,
          TArrayView<FConstStructView_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  TArrayView<FConstStructView_const_,int> local_18;
  
  FInstancedStructContainer::Reset(&this->InstanceStructs);
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = (this->InstanceStructs).NumItems;
  FInstancedStructContainer::Append(&this->InstanceStructs,&local_18);
  InstanceData::Private::PostAppendToInstanceStructContainer
            (&this->InstanceStructs,param_1,param_3.bDuplicateWrappedObject,iVar1);
  return;
}

// Init @ 14d500df0

void __thiscall
UE::StateTree::InstanceData::FInstanceContainer::Init
          (FInstanceContainer *this,TNotNull<UObject_*> param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  FInstancedStructContainer::Reset(&this->InstanceStructs);
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = (this->InstanceStructs).NumItems;
  FInstancedStructContainer::Append(&this->InstanceStructs,&local_18);
  InstanceData::Private::PostAppendToInstanceStructContainer
            (&this->InstanceStructs,param_1,param_3.bDuplicateWrappedObject,iVar1);
  return;
}


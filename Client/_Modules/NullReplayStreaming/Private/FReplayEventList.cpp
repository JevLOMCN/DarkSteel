// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 2

// ~FReplayEventList @ 146c85ea0

void __thiscall FReplayEventList::~FReplayEventList(FReplayEventList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)(this->ReplayEvents).AllocatorInstance.Data,
             (this->ReplayEvents).ArrayNum);
  pFVar1 = (this->ReplayEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// Serialize @ 146c89370

void __thiscall
FReplayEventList::Serialize(FReplayEventList *this,FJsonSerializerBase *param_1,bool param_2)

{
  int *piVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 *puVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  cVar3 = (**(code **)*param_1)(param_1);
  if (cVar3 == '\0') {
    uStack_70 = 6;
    local_78 = L"events";
    local_38 = 0x51447ee0;
    uStack_34 = 1;
    uStack_30 = 6;
    uStack_2c = uStack_6c;
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_38);
    for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (this->ReplayEvents).ArrayNum)); iVar5 = iVar5 + 1) {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->ReplayEvents).AllocatorInstance.Data + (longlong)iVar5 * 0x40;
      (**(code **)(*(longlong *)pFVar12 + 0x50))(pFVar12,param_1,0);
    }
    (**(code **)((longlong)*param_1 + 0x38))(param_1);
  }
  else {
    plVar7 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_78);
    if ((*plVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar7;
    local_68._12_4_ = uStack_8c;
    local_68.Size = 6;
    local_68.DataPtr = L"events";
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xc6,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar11 = FCrc::CRCTable_DEPRECATED[0x45] >> 8 ^
             FCrc::CRCTable_DEPRECATED[FCrc::CRCTable_DEPRECATED[0x45] & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar11 ^ 0x56) & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[uVar11 & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar11 ^ 0x45) & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[uVar11 & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar11 ^ 0x4e) & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[uVar11 & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar11 ^ 0x54) & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[uVar11 & 0xff];
    uVar11 = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar11 ^ 0x53) & 0xff];
    pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>
                       (this_00,uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[uVar11 & 0xff],&local_68);
    if (((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar8->Object == (FJsonValue *)0x0)) ||
       (pTVar8->Object->Type != Array)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_6c,uStack_70));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_6c,uStack_70));
      plVar7 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_48);
      if ((*plVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58._12_4_ = uStack_8c;
      local_58.Size = 6;
      local_58.DataPtr = L"events";
      pTVar9 = FJsonObject::GetArrayField((FJsonObject *)*plVar7,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      for (uVar11 = 0; (-1 < (int)uVar11 && ((int)uVar11 < pTVar9->ArrayNum)); uVar11 = uVar11 + 1)
      {
        iVar5 = (this->ReplayEvents).ArrayNum;
        piVar1 = &(this->ReplayEvents).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&(this->ReplayEvents).AllocatorInstance,piVar1);
        }
        pFVar12 = (this->ReplayEvents).AllocatorInstance.Data;
        (this->ReplayEvents).ArrayNum = iVar5 + 1;
        pFVar12 = pFVar12 + (longlong)iVar5 * 0x40;
        DefaultConstructItems<FReplayEventListItem,int>(pFVar12,1);
        pcVar2 = *(code **)(*(longlong *)pFVar12 + 0x18);
        uVar6 = 0;
        if ((int)uVar11 < pTVar9->ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
        if ((*(longlong *)pFVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = (undefined8 *)(**(code **)**(undefined8 **)pFVar13)();
        local_88 = *puVar10;
        local_80 = puVar10[1];
        if (local_80 != 0) {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        (*pcVar2)(pFVar12,&local_88);
      }
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}


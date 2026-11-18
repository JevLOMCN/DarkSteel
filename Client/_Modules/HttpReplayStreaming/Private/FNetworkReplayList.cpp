// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// ~FNetworkReplayList @ 146cb6ae0

void __thiscall FNetworkReplayList::~FNetworkReplayList(FNetworkReplayList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayList__6B_;
  DestructItems<FNetworkReplayListItem,int>
            ((FNetworkReplayListItem *)(this->Replays).AllocatorInstance.Data,
             (this->Replays).ArrayNum);
  pFVar1 = (this->Replays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// Serialize @ 146cc7250

void __thiscall
FNetworkReplayList::Serialize(FNetworkReplayList *this,FJsonSerializerBase *param_1,bool param_2)

{
  int *piVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
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
    uStack_70 = 7;
    local_78 = L"replays";
    local_38 = 0x51451ac0;
    uStack_34 = 1;
    uStack_30 = 7;
    uStack_2c = uStack_6c;
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_38);
    for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (this->Replays).ArrayNum)); iVar6 = iVar6 + 1) {
      if ((iVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->Replays).AllocatorInstance.Data + (longlong)iVar6 * 0x58;
      (**(code **)(*(longlong *)pFVar12 + 0x50))(pFVar12,param_1,0);
    }
    (**(code **)((longlong)*param_1 + 0x38))(param_1);
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_78);
    if ((*plVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar8;
    local_68._12_4_ = uStack_8c;
    local_68.Size = 7;
    local_68.DataPtr = L"replays";
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"replays");
    pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_68);
    if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
       (pTVar9->Object->Type != Array)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_6c,uStack_70));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_6c,uStack_70));
      plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_48);
      if ((*plVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58._12_4_ = uStack_8c;
      local_58.Size = 7;
      local_58.DataPtr = L"replays";
      pTVar10 = FJsonObject::GetArrayField((FJsonObject *)*plVar8,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      for (uVar5 = 0; (-1 < (int)uVar5 && ((int)uVar5 < pTVar10->ArrayNum)); uVar5 = uVar5 + 1) {
        iVar6 = (this->Replays).ArrayNum;
        piVar1 = &(this->Replays).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,&(this->Replays).AllocatorInstance,piVar1);
        }
        (this->Replays).ArrayNum = iVar6 + 1;
        pFVar12 = (this->Replays).AllocatorInstance.Data + (longlong)iVar6 * 0x58;
        DefaultConstructItems<FNetworkReplayListItem,int>(pFVar12,1);
        pcVar2 = *(code **)(*(longlong *)pFVar12 + 0x18);
        uVar7 = 0;
        if ((int)uVar5 < pTVar10->ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
        if ((*(longlong *)pFVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar11 = (undefined8 *)(**(code **)**(undefined8 **)pFVar13)();
        local_88 = *puVar11;
        local_80 = puVar11[1];
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


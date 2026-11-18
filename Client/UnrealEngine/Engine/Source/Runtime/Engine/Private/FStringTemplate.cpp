// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FStringTemplate @ 147fa55f0

FStringTemplate * __thiscall FStringTemplate::FStringTemplate(FStringTemplate *this)

{
  (this->TemplateString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemplateString).Data.ArrayNum = 0;
  (this->TemplateString).Data.ArrayMax = 0;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  this->NumNamedParameters = 0;
  return this;
}

// operator() @ 147fadd50

wchar_t __thiscall `FStringTemplate::Load'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  
  **(int **)this = **(int **)this + 1;
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  iVar1 = (int)plVar2[1];
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  iVar1 = **(int **)this;
  if (iVar1 < iVar6) {
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        wVar5 = (*pcVar3)();
        return wVar5;
      }
    }
    **(undefined2 **)((longlong)this + 0x18) = *(undefined2 *)(*plVar2 + (longlong)iVar1 * 2);
  }
  else {
    **(undefined2 **)((longlong)this + 0x18) = 0;
  }
  return **(wchar_t **)((longlong)this + 0x18);
}

// operator() @ 147fae720

void __thiscall `FStringTemplate::Load'::__l2::<lambda_3>::operator()(void *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  pFVar3 = *(ForAnyElementType **)this;
  uStack_20 = **(undefined4 **)((longlong)this + 0x18);
  local_28 = **(longlong **)((longlong)this + 8) + (longlong)**(int **)((longlong)this + 0x10) * 2;
  local_18 = param_1;
  if ((pFVar3->Data <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  pFVar4 = pFVar3->Data;
  pFVar2 = pFVar4 + (longlong)iVar7 * 0x18;
  *(longlong *)pFVar2 = local_28;
  *(longlong *)(pFVar2 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = CONCAT71(uStack_17,local_18);
  **(undefined4 **)((longlong)this + 0x10) = **(undefined4 **)((longlong)this + 0x20);
  **(undefined4 **)((longlong)this + 0x18) = 0;
  return;
}

// GetParameters @ 147fd5d40

void __thiscall
FStringTemplate::GetParameters
          (FStringTemplate *this,TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  uVar3 = this->NumNamedParameters;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  iVar4 = (this->Chunks).ArrayNum;
  pFVar10 = (this->Chunks).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FStringTemplate::FChunk_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    if ((pFVar10[0x10] != (FScriptContainerElement)0x0) && (0 < *(int *)(pFVar10 + 8))) {
      pFVar5 = (param_1->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      uVar7 = *(undefined8 *)(pFVar10 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar10;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
    }
    pFVar10 = pFVar10 + 0x18;
  }
  return;
}

// Load @ 147fe3790

bool __thiscall FStringTemplate::Load(FStringTemplate *this,FString *param_1,FErrorInfo *param_2)

{
  int *piVar1;
  TArray<FStringTemplate::FChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FErrorInfo *pFVar6;
  FString *pFVar7;
  ulonglong uVar8;
  ForAnyElementType *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  short local_res8 [4];
  int local_res10 [2];
  FErrorInfo *local_res18;
  int local_res20 [2];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int *local_e8;
  int *local_e0;
  FString *local_d8;
  short *local_d0;
  int local_c8;
  int local_c4;
  wchar_t *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ForAnyElementType *local_a8;
  FString *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  FScriptContainerElement *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined7 uStack_6f;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined7 uStack_57;
  
  local_e8 = local_res20;
  this->NumNamedParameters = 0;
  local_b0 = 0;
  local_e0 = local_res10;
  local_a8 = &local_f8;
  local_d0 = local_res8;
  uStack_b8 = 0;
  local_98 = &local_c4;
  local_c0 = (wchar_t *)0x0;
  local_90 = local_res10;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_88 = local_res20;
  local_f0 = 0;
  (param_2->Message).DataPtr = (wchar_t *)0x0;
  *(undefined8 *)&(param_2->Message).Size = 0;
  param_2->Line = 0;
  param_2->Offset = 0;
  iVar12 = (param_1->Data).ArrayNum;
  local_c4 = 0;
  local_res10[0] = 0;
  local_res20[0] = 0;
  local_c8 = 1;
  local_res8[0] = 0;
  local_res18 = param_2;
  local_d8 = param_1;
  local_a0 = param_1;
  if (1 < iVar12) {
    local_d8 = param_1;
    if ((iVar12 + -1 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                            ,0x107,
                            L"String index out of bounds: Index %i from a string with a length of %i"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    local_res8[0] = *(short *)(param_1->Data).AllocatorInstance.Data;
    iVar12 = 1;
    pFVar7 = local_d8;
    while (pFVar6 = param_2, local_d8 = pFVar7, local_res8[0] != 0) {
      pFVar6->Offset = local_res20[0];
      pFVar6->Line = iVar12;
      if (local_res8[0] == 0x25) {
        `FStringTemplate::Load'::__l2::<lambda_1>::operator()(&local_e8);
        if (local_res8[0] == 0x73) {
          `FStringTemplate::Load'::__l2::<lambda_1>::operator()(&local_e8);
          pFVar9 = local_a8;
          local_res10[0] = local_res10[0] + -2;
          if (0 < local_res10[0]) {
            iStack_78 = *local_90;
            local_70 = 0;
            local_80 = (local_a0->Data).AllocatorInstance.Data + (longlong)*local_98 * 2;
            if (((local_a8->Data <= (FScriptContainerElement *)&local_80) &&
                ((FScriptContainerElement *)&local_80 <
                 local_a8->Data + (longlong)*(int *)((longlong)&local_a8[1].Data + 4) * 0x18)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
            iVar12 = *(int *)&pFVar9[1].Data;
            piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,pFVar9,piVar1);
            }
            *(int *)&pFVar9[1].Data = iVar12 + 1;
            pFVar4 = pFVar9->Data;
            pFVar3 = pFVar4 + (longlong)iVar12 * 0x18;
            *(FScriptContainerElement **)pFVar3 = local_80;
            *(longlong *)(pFVar3 + 8) = CONCAT44(uStack_74,iStack_78);
            *(ulonglong *)(pFVar4 + (longlong)iVar12 * 0x18 + 0x10) = CONCAT71(uStack_6f,local_70);
            *local_98 = *local_88;
            *local_90 = 0;
          }
          local_68 = L"";
          uStack_60 = 0;
          local_58 = 1;
          if (((local_f8.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               local_f8.Data + (longlong)local_f0._4_4_ * 0x18)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          iVar12 = (int)local_f0;
          if ((int)local_f0 == local_f0._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_f8,(int *)((longlong)&local_f0 + 4));
          }
          local_f0 = CONCAT44(local_f0._4_4_,iVar12 + 1);
          *(wchar_t **)(local_f8.Data + (longlong)iVar12 * 0x18) = local_68;
          *(ulonglong *)(local_f8.Data + (longlong)iVar12 * 0x18 + 8) =
               CONCAT44(uStack_5c,uStack_60);
          *(ulonglong *)(local_f8.Data + (longlong)iVar12 * 0x18 + 0x10) =
               CONCAT71(uStack_57,local_58);
          param_2 = local_res18;
          iVar12 = local_c8;
          pFVar7 = local_d8;
        }
        else {
          param_2 = local_res18;
          iVar12 = local_c8;
          pFVar7 = local_d8;
          if (local_res8[0] == 0x7b) {
            `FStringTemplate::Load'::__l2::<lambda_1>::operator()(&local_e8);
            local_res10[0] = local_res10[0] + -2;
            pFVar7 = local_d8;
            if (0 < local_res10[0]) {
              `FStringTemplate::Load'::__l2::<lambda_3>::operator()(&local_a8,false);
              pFVar7 = local_d8;
            }
            while( true ) {
              local_d8 = pFVar7;
              if (local_res8[0] == 0) {
                local_c0 = L"missing \'}\' in named parameter";
                uVar8 = (ulonglong)uStack_b8 >> 0x20;
                uStack_b8 = CONCAT44((int)uVar8,0x1e);
                (pFVar6->Message).DataPtr = L"missing \'}\' in named parameter";
                *(undefined8 *)&(pFVar6->Message).Size = uStack_b8;
                if (local_f8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data);
                }
                pFVar3 = (param_1->Data).AllocatorInstance.Data;
                if (pFVar3 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar3);
                }
                return false;
              }
              if (local_res8[0] == 0x7d) break;
              local_res20[0] = local_res20[0] + 1;
              local_res10[0] = local_res10[0] + 1;
              lVar14 = (longlong)local_res20[0];
              iVar12 = (pFVar7->Data).ArrayNum;
              iVar13 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar13 = 0;
              }
              if (local_res20[0] < iVar13) {
                if ((((local_res20[0] < 0) || (iVar12 == 0)) || (iVar12 + -1 <= local_res20[0])) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValidIndex(Index)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                        ,0x107,
                                        L"String index out of bounds: Index %i from a string with a length of %i"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
                local_res8[0] = *(short *)((pFVar7->Data).AllocatorInstance.Data + lVar14 * 2);
                pFVar6 = local_res18;
                pFVar7 = local_d8;
              }
              else {
                local_res8[0] = 0;
                pFVar6 = local_res18;
              }
            }
            `FStringTemplate::Load'::__l2::<lambda_1>::operator()(&local_e8);
            local_res10[0] = local_res10[0] + -1;
            `FStringTemplate::Load'::__l2::<lambda_3>::operator()(&local_a8,true);
            this->NumNamedParameters = this->NumNamedParameters + 1;
            param_2 = local_res18;
            iVar12 = local_c8;
            pFVar7 = local_d8;
          }
        }
      }
      else {
        local_res20[0] = local_res20[0] + 1;
        local_res10[0] = local_res10[0] + 1;
        local_c8 = iVar12 + (uint)(local_res8[0] == 10);
        lVar14 = (longlong)local_res20[0];
        iVar13 = (pFVar7->Data).ArrayNum;
        iVar12 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar12 = 0;
        }
        if (local_res20[0] < iVar12) {
          if ((local_res20[0] < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                  ,0x107,
                                  L"String index out of bounds: Index %i from a string with a length of %i"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          local_res8[0] = *(short *)((pFVar7->Data).AllocatorInstance.Data + lVar14 * 2);
          param_2 = local_res18;
          iVar12 = local_c8;
          pFVar7 = local_d8;
        }
        else {
          local_res8[0] = 0;
          param_2 = local_res18;
          iVar12 = local_c8;
        }
      }
    }
    if (0 < local_res10[0]) {
      `FStringTemplate::Load'::__l2::<lambda_3>::operator()(&local_a8,false);
    }
  }
  if (this != (FStringTemplate *)param_1) {
    pFVar3 = (this->TemplateString).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->TemplateString).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TemplateString).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->TemplateString).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  pTVar2 = &this->Chunks;
  if (pTVar2 != (TArray<FStringTemplate::FChunk,TSizedDefaultAllocator<32>_> *)&local_f8) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_f8.Data;
    (this->Chunks).ArrayNum = (int)local_f0;
    (this->Chunks).ArrayMax = local_f0._4_4_;
    local_f0 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return true;
}


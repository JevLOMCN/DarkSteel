// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// Append<int,TSizedDefaultAllocator<32>_> @ 142536770

void __thiscall
UE::Slate::Containers::TObservableArray<int>::Append<int,TSizedDefaultAllocator<32>_>
          (TObservableArray<int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<int> local_28;
  
  if (0 < param_1->ArrayNum) {
    iVar2 = (this->Array).ArrayNum;
    piVar1 = &(this->Array).ArrayNum;
    if ((this == (TObservableArray<int> *)param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 != 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar7,(ForAnyElementType *)this,piVar1,&(this->Array).ArrayMax);
      memcpy((this->Array).AllocatorInstance.Data + (longlong)iVar6 * 4,
             (param_1->AllocatorInstance).Data,(longlong)iVar7 << 2);
    }
    pFVar3 = (this->Array).AllocatorInstance.Data;
    iVar7 = *piVar1 - iVar2;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((iVar7 < 1) || (iVar2 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x3d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_28.MoveIndex = -1;
    local_28.StartIndex = iVar2;
    local_28._25_7_ = uStack_2f;
    local_28.Action = Add;
    local_28.Array.ArrayNum = iVar7;
    local_28.Array.DataPtr = (int *)(pFVar3 + (longlong)iVar2 * 4);
    TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  }
  return;
}

// EmplaceAt<int> @ 142538670

void __thiscall
UE::Slate::Containers::TObservableArray<int>::EmplaceAt<int>
          (TObservableArray<int> *this,int param_1,int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<int> local_28;
  
  iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,(ForAnyElementType *)this,&(this->Array).ArrayNum,&(this->Array).ArrayMax
                    );
  lVar1 = (longlong)param_1 * 4;
  _Src = (this->Array).AllocatorInstance.Data + lVar1;
  memmove(_Src + 4,_Src,(longlong)(iVar4 - param_1) << 2);
  *(int *)((this->Array).AllocatorInstance.Data + lVar1) = *param_2;
  local_28.Array.DataPtr = (int *)((this->Array).AllocatorInstance.Data + lVar1);
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x3d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28.Array.ArrayNum = 1;
  local_28.MoveIndex = -1;
  local_28.StartIndex = param_1;
  local_28._25_7_ = uStack_2f;
  local_28.Action = Add;
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  return;
}

// RemoveAt<int> @ 14253c0b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Slate::Containers::TObservableArray<int>::RemoveAt<int>
          (TObservableArray<int> *this,int param_1,int param_2,EAllowShrinking param_3)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  EAllowShrinking local_res20;
  ForElementType<int> local_158;
  undefined8 local_150;
  int local_148;
  uint local_144;
  int local_140;
  FMemMark local_138;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  int *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined1 *local_d0;
  int *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int iStack_b4;
  EObservableArrayChangedAction EStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  EObservableArrayChangedAction EStack_90;
  undefined7 uStack_8f;
  TObservableArrayChangedArgs<int> local_88;
  TObservableArrayChangedArgs<int> local_68;
  
  lVar12 = (longlong)param_1;
  lVar6 = (longlong)param_2;
  uVar8 = 0;
  uVar10 = (uint)~param_1 >> 0x1f;
  iVar9 = param_1 + param_2;
  uVar5 = uVar8;
  if (0 < param_2) {
    uVar5 = uVar10;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_144 = uVar10;
  local_140 = iVar9;
  if (((iVar9 <= (this->Array).ArrayNum & uVar5) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumToRemove > 0) & (Index >= 0) & (Index + NumToRemove <= Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x15c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < param_2) {
    if (param_2 == 1) {
      uVar5 = uVar8;
      if (param_1 < (this->Array).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_148 = *(int *)((this->Array).AllocatorInstance.Data + lVar12 * 4);
      if (iVar9 <= (this->Array).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar11 = (this->Array).AllocatorInstance.Data + lVar12 * 4;
      iVar9 = ((this->Array).ArrayNum - param_1) + -1;
      if (iVar9 != 0) {
        memmove(pFVar11,pFVar11 + 4,(longlong)iVar9 << 2);
      }
      iVar9 = (this->Array).ArrayNum + -1;
      (this->Array).ArrayNum = iVar9;
      if (local_res20 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,iVar9,&(this->Array).ArrayMax);
      }
      iStack_f0 = 1;
      local_f8 = &local_148;
      iStack_b4 = -1;
      EStack_b0 = Remove;
      uStack_c0 = 1;
      uStack_bc = uStack_ec;
      local_b8 = param_1;
      local_c8 = local_f8;
      if (param_1 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x47,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_88.MoveIndex = iStack_b4;
      local_88.StartIndex = local_b8;
      local_88._25_7_ = uStack_af;
      local_88.Action = EStack_b0;
      local_88.Array.ArrayNum = iStack_f0;
      local_88.Array.DataPtr = local_f8;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ArrayChangedDelegate,&local_88);
    }
    else {
      puVar3 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_d0 = local_res8;
      local_d8 = Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar4 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar3);
      local_158.Data = (int *)0x0;
      local_150 = 0;
      local_138.Mem = (FMemStackBase *)(pFVar4 + 2);
      local_138.Top = (local_138.Mem)->Top;
      local_138.SavedChunk = *(FTaggedMemory **)(pFVar4 + 4);
      local_138.bPopped = false;
      local_138.NextTopmostMark = *(FMemMark **)(pFVar4 + 5);
      pFVar4[5] = (FTlsAutoCleanup)&local_138;
      *(int *)(pFVar4 + 6) = *(int *)(pFVar4 + 6) + 1;
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
                (4,4,param_2,&local_158,0,(int *)((longlong)&local_150 + 4));
      lVar12 = lVar12 * 4;
      FVar7.Data = local_158.Data;
      local_108 = lVar12;
      local_100 = lVar6;
      if (param_2 != 0) {
        iVar9 = (int)local_150;
        local_110 = lVar6;
        do {
          uVar10 = 0;
          if (param_1 < (this->Array).ArrayNum) {
            uVar10 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar11 = (this->Array).AllocatorInstance.Data + lVar12;
          if (((FVar7.Data <= pFVar11) &&
              (pFVar11 < (FScriptContainerElement *)
                         ((longlong)FVar7.Data + (longlong)local_150._4_4_ * 4))) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (iVar9 == local_150._4_4_) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                              (0x404,&local_158,(int *)((longlong)&local_150 + 4));
            FVar7.Data = local_158.Data;
          }
          lVar6 = (longlong)iVar9;
          param_1 = param_1 + 1;
          lVar12 = lVar12 + 4;
          local_110 = local_110 + -1;
          iVar9 = iVar9 + 1;
          local_150 = CONCAT44(local_150._4_4_,iVar9);
          *(undefined4 *)((longlong)FVar7.Data + lVar6 * 4) = *(undefined4 *)pFVar11;
        } while (local_110 != 0);
        local_110 = 0;
        uVar10 = local_144;
        iVar9 = local_140;
        param_2 = local_res18;
        param_1 = local_res10;
      }
      uVar5 = 0;
      if (iVar9 <= (this->Array).ArrayNum) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if (((uVar10 & uVar5) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar11 = (this->Array).AllocatorInstance.Data + local_108;
      iVar9 = ((this->Array).ArrayNum - param_1) - param_2;
      if (iVar9 != 0) {
        memmove(pFVar11,pFVar11 + (longlong)param_2 * 4,(longlong)iVar9 << 2);
      }
      iVar9 = (this->Array).ArrayNum - param_2;
      (this->Array).ArrayNum = iVar9;
      if (local_res20 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,iVar9,&(this->Array).ArrayMax);
      }
      iStack_94 = -1;
      EStack_90 = Remove;
      local_e8._0_4_ = SUB84(FVar7.Data,0);
      local_e8._4_4_ = (undefined4)((ulonglong)FVar7.Data >> 0x20);
      local_a8 = (undefined4)local_e8;
      uStack_a4 = local_e8._4_4_;
      uStack_9c = uStack_dc;
      local_68.Array.DataPtr._4_4_ = local_e8._4_4_;
      uStack_e0 = param_2;
      uStack_a0 = param_2;
      local_98 = param_1;
      if (param_1 < 0) {
        local_e8 = (FScriptContainerElement *)FVar7.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x47,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_68.Array.DataPtr._4_4_ = local_e8._4_4_;
        FVar7.Data = (int *)local_e8;
      }
      local_e8 = (FScriptContainerElement *)FVar7.Data;
      local_68.MoveIndex = iStack_94;
      local_68.StartIndex = local_98;
      local_68._25_7_ = uStack_8f;
      local_68.Action = EStack_90;
      local_68.Array.DataPtr._0_4_ = (undefined4)local_e8;
      local_68.Array.ArrayNum = uStack_e0;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ArrayChangedDelegate,&local_68);
      if (local_138.bPopped == false) {
        if (((local_138.Mem)->TopMark != &local_138) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_138.bPopped = true;
        (local_138.Mem)->NumMarks = (local_138.Mem)->NumMarks + -1;
        if (local_138.SavedChunk != (local_138.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_138.Mem,local_138.SavedChunk);
        }
        (local_138.Mem)->Top = local_138.Top;
        (local_138.Mem)->TopMark = local_138.NextTopmostMark;
      }
    }
  }
  return;
}

// RemoveAtSwap<int> @ 14253c640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Slate::Containers::TObservableArray<int>::RemoveAtSwap<int>
          (TObservableArray<int> *this,int param_1,int param_2,EAllowShrinking param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  longlong lVar8;
  uint uVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  EAllowShrinking local_res20;
  ForElementType<int> local_150;
  undefined8 local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  FMemMark local_130;
  longlong local_108;
  longlong local_100;
  int *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined1 *local_d0;
  int *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int iStack_b4;
  EObservableArrayChangedAction EStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  EObservableArrayChangedAction EStack_90;
  undefined7 uStack_8f;
  TObservableArrayChangedArgs<int> local_88;
  TObservableArrayChangedArgs<int> local_68;
  
  uVar13 = (ulonglong)param_1;
  uVar9 = 0;
  uVar11 = (uint)~param_1 >> 0x1f;
  local_140 = param_1 + param_2;
  uVar5 = uVar9;
  if (0 < param_2) {
    uVar5 = uVar11;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (((local_140 <= (this->Array).ArrayNum & uVar5) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumToRemove > 0) & (Index >= 0) & (Index + NumToRemove <= Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x189,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < param_2) {
    iVar4 = (this->Array).ArrayNum;
    iVar15 = (iVar4 - param_1) - param_2;
    if (param_2 < iVar15) {
      iVar15 = param_2;
    }
    local_138 = iVar4;
    local_134 = iVar15;
    if (param_2 == 1) {
      uVar5 = uVar9;
      if (param_1 < iVar4) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_13c = *(int *)((this->Array).AllocatorInstance.Data + uVar13 * 4);
      if (local_140 <= (this->Array).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar12 = (this->Array).ArrayNum;
      pFVar16 = (this->Array).AllocatorInstance.Data;
      iVar3 = (iVar12 - param_1) + -1;
      if (1 < iVar3) {
        iVar3 = 1;
      }
      if (iVar3 != 0) {
        memmove(pFVar16 + uVar13 * 4,pFVar16 + (longlong)(iVar12 - iVar3) * 4,(longlong)iVar3 << 2);
      }
      iVar12 = (this->Array).ArrayNum + -1;
      (this->Array).ArrayNum = iVar12;
      if (local_res20 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,iVar12,&(this->Array).ArrayMax);
      }
      iStack_b4 = iVar4 - iVar15;
      iStack_f0 = 1;
      local_f8 = &local_13c;
      EStack_b0 = RemoveSwap;
      uStack_c0 = 1;
      uStack_bc = uStack_ec;
      local_b8 = param_1;
      local_c8 = local_f8;
      if (((iStack_b4 < 1) && (iStack_b4 != -1)) || (param_1 < 0)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && (Result.MoveIndex > 0 || Result.MoveIndex == INDEX_NONE) && Result.StartIndex >= 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x53,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_88.MoveIndex = iStack_b4;
      local_88.StartIndex = local_b8;
      local_88._25_7_ = uStack_af;
      local_88.Action = EStack_b0;
      local_88.Array.ArrayNum = iStack_f0;
      local_88.Array.DataPtr = local_f8;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ArrayChangedDelegate,&local_88);
    }
    else {
      puVar6 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_d0 = local_res8;
      local_d8 = Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar7 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar6);
      local_150.Data = (int *)0x0;
      local_148 = 0;
      local_130.Mem = (FMemStackBase *)(pFVar7 + 2);
      local_130.Top = (local_130.Mem)->Top;
      local_130.SavedChunk = *(FTaggedMemory **)(pFVar7 + 4);
      local_130.bPopped = false;
      local_130.NextTopmostMark = *(FMemMark **)(pFVar7 + 5);
      pFVar7[5] = (FTlsAutoCleanup)&local_130;
      *(int *)(pFVar7 + 6) = *(int *)(pFVar7 + 6) + 1;
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
                (4,4,param_2,&local_150,0,(int *)((longlong)&local_148 + 4));
      lVar14 = uVar13 * 4;
      FVar10.Data = local_150.Data;
      local_100 = lVar14;
      if (param_2 != 0) {
        iVar4 = (int)local_148;
        local_108 = (longlong)param_2;
        do {
          uVar9 = (uint)uVar13;
          uVar5 = 0;
          if ((int)uVar9 < (this->Array).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar16 = (this->Array).AllocatorInstance.Data + lVar14;
          if (((FVar10.Data <= pFVar16) &&
              (pFVar16 < (FScriptContainerElement *)
                         ((longlong)FVar10.Data + (longlong)local_148._4_4_ * 4))) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (iVar4 == local_148._4_4_) {
            iVar4 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                              (0x404,&local_150,(int *)((longlong)&local_148 + 4));
            FVar10.Data = local_150.Data;
          }
          lVar8 = (longlong)iVar4;
          uVar13 = (ulonglong)(uVar9 + 1);
          lVar14 = lVar14 + 4;
          local_108 = local_108 + -1;
          iVar4 = iVar4 + 1;
          local_148 = CONCAT44(local_148._4_4_,iVar4);
          *(undefined4 *)((longlong)FVar10.Data + lVar8 * 4) = *(undefined4 *)pFVar16;
        } while (local_108 != 0);
        local_108 = 0;
        iVar4 = local_138;
        iVar15 = local_134;
        param_1 = local_res10;
        param_2 = local_res18;
      }
      uVar5 = 0;
      if (param_1 + param_2 <= (this->Array).ArrayNum) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if (((uVar11 & uVar5) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar12 = (this->Array).ArrayNum;
      pFVar16 = (this->Array).AllocatorInstance.Data;
      uVar5 = (iVar12 - param_1) - param_2;
      if (param_2 < (int)uVar5) {
        uVar5 = param_2;
      }
      if (uVar5 != 0) {
        memmove(pFVar16 + local_100,pFVar16 + (longlong)(int)(iVar12 - uVar5) * 4,
                (longlong)(int)uVar5 << 2);
      }
      iVar12 = (this->Array).ArrayNum - param_2;
      (this->Array).ArrayNum = iVar12;
      if (local_res20 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,iVar12,&(this->Array).ArrayMax);
      }
      iStack_94 = iVar4 - iVar15;
      EStack_90 = RemoveSwap;
      local_e8._0_4_ = SUB84(FVar10.Data,0);
      local_e8._4_4_ = (undefined4)((ulonglong)FVar10.Data >> 0x20);
      local_a8 = (undefined4)local_e8;
      uStack_a4 = local_e8._4_4_;
      uStack_9c = uStack_dc;
      uStack_e0 = param_2;
      uStack_a0 = param_2;
      local_98 = param_1;
      if (((iStack_94 < 1) && (iStack_94 != -1)) ||
         (local_68.Array.DataPtr._4_4_ = local_e8._4_4_, param_1 < 0)) {
        local_e8 = (FScriptContainerElement *)FVar10.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && (Result.MoveIndex > 0 || Result.MoveIndex == INDEX_NONE) && Result.StartIndex >= 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x53,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_68.Array.DataPtr._4_4_ = local_e8._4_4_;
        FVar10.Data = (int *)local_e8;
      }
      local_e8 = (FScriptContainerElement *)FVar10.Data;
      local_68.MoveIndex = iStack_94;
      local_68.StartIndex = local_98;
      local_68._25_7_ = uStack_8f;
      local_68.Action = EStack_90;
      local_68.Array.DataPtr._0_4_ = (undefined4)local_e8;
      local_68.Array.ArrayNum = uStack_e0;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ArrayChangedDelegate,&local_68);
      if (local_130.bPopped == false) {
        if (((local_130.Mem)->TopMark != &local_130) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_130.bPopped = true;
        (local_130.Mem)->NumMarks = (local_130.Mem)->NumMarks + -1;
        if (local_130.SavedChunk != (local_130.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_130.Mem,local_130.SavedChunk);
        }
        (local_130.Mem)->Top = local_130.Top;
        (local_130.Mem)->TopMark = local_130.NextTopmostMark;
      }
    }
  }
  return;
}

// Add @ 142566160

int __thiscall
UE::Slate::Containers::TObservableArray<int>::Add(TObservableArray<int> *this,int *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<int> local_28;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Array).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  (this->Array).ArrayNum = iVar5 + 1;
  *(int *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x3d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  local_28.Array.ArrayNum = 1;
  local_28.MoveIndex = -1;
  local_28.StartIndex = iVar5;
  local_28._25_7_ = uStack_2f;
  local_28.Action = Add;
  local_28.Array.DataPtr = (int *)(pFVar2 + (longlong)iVar5 * 4);
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  return iVar5;
}

// RemoveAtSwap @ 14258f270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Slate::Containers::TObservableArray<int>::RemoveAtSwap
          (TObservableArray<int> *this,int param_1,EAllowShrinking param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_res10 [2];
  EAllowShrinking local_res18;
  undefined7 uStack_5f;
  TObservableArrayChangedArgs<int> local_58;
  
  iVar6 = (this->Array).ArrayNum;
  iVar8 = (iVar6 - param_1) + -1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < iVar6) {
    uVar5 = uVar9;
  }
  local_res18 = param_2;
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10[0] = *(int *)((this->Array).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar5 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Array).ArrayNum;
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar7 = iVar1 + ~param_1;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 4,pFVar2 + (longlong)(iVar1 - iVar7) * 4,
            (longlong)iVar7 << 2);
  }
  iVar7 = (this->Array).ArrayNum + -1;
  (this->Array).ArrayNum = iVar7;
  if (local_res18 == Default) {
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)this,iVar7,&(this->Array).ArrayMax);
  }
  iVar6 = iVar6 - iVar8;
  if ((((iVar6 < 1) && (iVar6 != -1)) || (param_1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() > 0 && (Result.MoveIndex > 0 || Result.MoveIndex == INDEX_NONE) && Result.StartIndex >= 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x53,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58.Array.ArrayNum = 1;
  local_58.MoveIndex = iVar6;
  local_58.StartIndex = param_1;
  local_58._25_7_ = uStack_5f;
  local_58.Action = RemoveSwap;
  local_58.Array.DataPtr = local_res10;
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ArrayChangedDelegate,&local_58);
  return;
}

// Swap @ 1425a8e40

void __thiscall
UE::Slate::Containers::TObservableArray<int>::Swap
          (TObservableArray<int> *this,int param_1,int param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uStack_3c;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<int> local_28;
  
  if ((param_1 < 0) || (param_2 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstIndexToSwap >= 0 && SecondIndexToSwap >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                       ,0x1ad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1 != param_2) {
    pFVar2 = (this->Array).AllocatorInstance.Data;
    uVar1 = *(undefined4 *)(pFVar2 + (longlong)param_1 * 4);
    *(undefined4 *)(pFVar2 + (longlong)param_1 * 4) =
         *(undefined4 *)(pFVar2 + (longlong)param_2 * 4);
    *(undefined4 *)(pFVar2 + (longlong)param_2 * 4) = uVar1;
    if ((param_2 < 0) || (param_1 < 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() == 0 && Result.MoveIndex >= 0 && Result.StartIndex >= 0 && Result.MoveIndex != Result.StartIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x5d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28.Array._8_8_ = (ulonglong)uStack_3c << 0x20;
    local_28.MoveIndex = param_2;
    local_28.StartIndex = param_1;
    local_28._25_7_ = uStack_2f;
    local_28.Action = Swap;
    local_28.Array.DataPtr = (int *)0x0;
    TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  }
  return;
}


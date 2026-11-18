// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 10

// operator() @ 14f0c1ba0

void __thiscall
`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  TPairInitializer<unsigned_int_const_&,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData_const_&>
  local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  void **local_38;
  void *local_30;
  undefined8 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  *(int *)(*(longlong *)this + 0x14) = *(int *)(*(longlong *)this + 0x14) + 1;
  lVar1 = *(longlong *)this;
  uVar6 = *(uint *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar8 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar8 = lVar1 + 0x68;
    }
    uVar4 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x78) - 1U & uVar6) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar4 * 0x30 + *(longlong *)(lVar1 + 0x30));
        if (*puVar7 == uVar6) {
          local_res8.Value._0_4_ = *(undefined4 *)((longlong)this + 0xc);
          puVar9 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            local_48 = local_res8.Value._0_4_;
            if (((*(undefined4 **)(puVar9 + 4) <= &local_48) &&
                (&local_48 < *(undefined4 **)(puVar9 + 4) + (longlong)(int)puVar9[7] * 2)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar6 = puVar9[6];
            if (uVar6 == puVar9[7]) {
              uVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)(puVar9 + 4),(int *)(puVar9 + 7));
            }
            puVar9[6] = uVar6 + 1;
            *(ulonglong *)(*(longlong *)(puVar9 + 4) + (longlong)(int)uVar6 * 8) =
                 CONCAT44(uStack_44,local_48);
            return;
          }
          goto LAB_14f0c1c21;
        }
        uVar4 = puVar7[10];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_res8.Value._0_4_ = *(undefined4 *)((longlong)this + 0xc);
LAB_14f0c1c21:
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_20,(int *)((longlong)&local_18 + 4));
  local_18 = CONCAT44(local_18._4_4_,iVar5 + 1);
  *(ulonglong *)(local_20.Data + (longlong)iVar5 * 8) =
       CONCAT44(local_res8.Value._4_4_,local_res8.Value._0_4_);
  local_38 = &local_30;
  local_40 = (uint *)((longlong)this + 8);
  TSet<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData_const_&>_>
            ((TSet<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x30),&local_res8,(bool *)&local_40);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// operator() @ 14f0c1fa0

void __thiscall
`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ForAnyElementType *pFVar12;
  uint uVar13;
  
  if ((*(int *)(*(longlong *)this + 0x14) < 1) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1130621927031832456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectEnvelopeFollower.cpp"
                         ,0x78,"NumInstances > 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int *)(*(longlong *)this + 0x14) = *(int *)(*(longlong *)this + 0x14) + -1;
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar6 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar6 = lVar1 + 0x68;
    }
    uVar4 = *(uint *)(lVar6 + (ulonglong)
                              (*(int *)(lVar1 + 0x78) - 1U & *(uint *)((longlong)this + 8)) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar7 = (uint *)((longlong)(int)uVar4 * 0x30 + *(longlong *)(lVar1 + 0x30)),
            *puVar7 != *(uint *)((longlong)this + 8)) {
        uVar4 = puVar7[10];
        if (uVar4 == 0xffffffff) {
          return;
        }
      }
      puVar9 = (uint *)0x0;
      puVar10 = puVar7 + 2;
      if (puVar7 == (uint *)0x0) {
        puVar10 = puVar9;
      }
      if (puVar10 != (uint *)0x0) {
        puVar10 = puVar7 + 8;
        if (puVar7 == (uint *)0x0) {
          puVar10 = (uint *)&DAT_00000018;
        }
        if (0 < (int)*puVar10) {
          pFVar12 = (ForAnyElementType *)(puVar7 + 6);
          puVar11 = puVar9;
          if (puVar7 == (uint *)0x0) {
            pFVar12 = (ForAnyElementType *)&DAT_00000010;
          }
          do {
            uVar8 = (uint)puVar9;
            uVar13 = ~uVar8 >> 0x1f;
            uVar4 = 0;
            if ((int)uVar8 < *(int *)&pFVar12[1].Data) {
              uVar4 = uVar13;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)((longlong)puVar11 + (longlong)pFVar12->Data) ==
                *(int *)((longlong)this + 0xc)) {
              uVar4 = 0;
              if ((int)uVar8 < *(int *)&pFVar12[1].Data) {
                uVar4 = uVar13;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = *(int *)&pFVar12[1].Data + ~uVar8;
              if (1 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                memmove(pFVar12->Data + (longlong)(int)uVar8 * 8,
                        pFVar12->Data + (longlong)(*(int *)&pFVar12[1].Data - iVar5) * 8,
                        (longlong)iVar5 << 3);
              }
              *(int *)&pFVar12[1].Data = *(int *)&pFVar12[1].Data + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,pFVar12,*(int *)&pFVar12[1].Data,
                         (int *)((longlong)&pFVar12[1].Data + 4));
              return;
            }
            puVar9 = (uint *)(ulonglong)(uVar8 + 1);
            puVar11 = puVar11 + 2;
          } while ((int)(uVar8 + 1) < (int)*puVar10);
        }
      }
    }
  }
  return;
}

// operator() @ 14f0c3490

void __thiscall
`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>::operator()
          (void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  lVar2 = *(longlong *)this;
  if ((0 < *(int *)(lVar2 + 0x10)) && (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100))) {
    lVar6 = *(longlong *)(lVar2 + 0x70);
    if (*(longlong *)(lVar2 + 0x70) == 0) {
      lVar6 = lVar2 + 0x68;
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)
                              (*(int *)(lVar2 + 0x78) - 1U & *(uint *)((longlong)this + 8)) * 4);
    if (uVar5 != 0xffffffff) {
      while (puVar7 = (uint *)((longlong)(int)uVar5 * 0x30 + *(longlong *)(lVar2 + 0x30)),
            *puVar7 != *(uint *)((longlong)this + 8)) {
        uVar5 = puVar7[10];
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      puVar9 = (uint *)0x0;
      puVar12 = puVar7 + 2;
      if (puVar7 == (uint *)0x0) {
        puVar12 = puVar9;
      }
      if (puVar12 != (uint *)0x0) {
        puVar12 = puVar7 + 8;
        if (puVar7 == (uint *)0x0) {
          puVar12 = (uint *)&DAT_00000018;
        }
        if (0 < (int)*puVar12) {
          puVar11 = puVar7 + 6;
          puVar10 = puVar9;
          if (puVar7 == (uint *)0x0) {
            puVar11 = (uint *)&DAT_00000010;
            puVar9 = (uint *)0x0;
            puVar10 = (uint *)0x0;
          }
          do {
            uVar8 = (uint)puVar9;
            uVar5 = 0;
            if ((int)uVar8 < (int)puVar11[2]) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)((longlong)puVar10 + *(longlong *)puVar11) == *(int *)((longlong)this + 0xc)
               ) {
              uVar1 = *(undefined4 *)((longlong)this + 0x10);
              uVar5 = 0;
              if ((int)uVar8 < (int)puVar11[2]) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)(*(longlong *)puVar11 + 4 + (longlong)(int)uVar8 * 8) = uVar1;
              return;
            }
            puVar9 = (uint *)(ulonglong)(uVar8 + 1);
            puVar10 = puVar10 + 2;
          } while ((int)(uVar8 + 1) < (int)*puVar12);
        }
      }
    }
  }
  return;
}

// GetStatId @ 14f0de9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FSourceEffectEnvFollowerNotifier::GetStatId(FSourceEffectEnvFollowerNotifier *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FSourceEffectEnvFollowerNotifier::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FSourceEffectEnvFollowerNotifier::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FSourceEffectEnvFollowerNotifier::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FSourceEffectEnvFollowerNotifier = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FSourceEffectEnvFollowerNotifier");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FSourceEffectEnvFollowerNotifier::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FSourceEffectEnvFollowerNotifier,*pFVar1,
               L"FSourceEffectEnvFollowerNotifier","STATGROUP_Tickables","STATCAT_Advanced",
               L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FSourceEffectEnvFollowerNotifier::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FSourceEffectEnvFollowerNotifier;
  if (_StatPtr_FSourceEffectEnvFollowerNotifier == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FSourceEffectEnvFollowerNotifier");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FSourceEffectEnvFollowerNotifier::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FSourceEffectEnvFollowerNotifier,*pFVar1,
                       L"FSourceEffectEnvFollowerNotifier","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 14f0df130

ETickableTickType __thiscall
FSourceEffectEnvFollowerNotifier::GetTickableTickType(FSourceEffectEnvFollowerNotifier *this)

{
  return Always;
}

// IsTickableWhenPaused @ 14f0e7bb0

bool __thiscall
FSourceEffectEnvFollowerNotifier::IsTickableWhenPaused(FSourceEffectEnvFollowerNotifier *this)

{
  return true;
}

// PushToCommandQueue @ 14f0f46c0

void __thiscall
FSourceEffectEnvFollowerNotifier::PushToCommandQueue
          (FSourceEffectEnvFollowerNotifier *this,TFunction<void___cdecl(void)> *param_1)

{
  TNode *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TNode *pTVar5;
  longlong *plVar6;
  
  pTVar5 = ::operator_new(0x40);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar5->Item = *(undefined8 *)param_1;
    *(undefined8 *)&(pTVar5->Item).field_0x28 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined4 *)&param_1->field_0x14;
    uVar3 = *(undefined4 *)&param_1->field_0x18;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)&(pTVar5->Item).field_0x10 = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)&(pTVar5->Item).field_0x14 = uVar2;
    *(undefined4 *)&(pTVar5->Item).field_0x18 = uVar3;
    *(undefined4 *)&(pTVar5->Item).field_0x1c = uVar4;
    *(undefined8 *)&(pTVar5->Item).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    if (*(longlong *)&pTVar5->Item != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pTVar1 = (this->CommandQueue).Head;
    (this->CommandQueue).Head = pTVar5;
    pTVar1->NextNode = pTVar5;
  }
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// RegisterEnvelopFollowerListener @ 14f0f65f0

void __thiscall
FSourceEffectEnvFollowerNotifier::RegisterEnvelopFollowerListener
          (FSourceEffectEnvFollowerNotifier *this,uint param_1,UEnvelopeFollowerListener *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  IEnvelopeFollowerNotifier *pIVar7;
  TPairInitializer<unsigned_int_const_&,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData_const_&>
  local_res8;
  UEnvelopeFollowerListener *local_res18;
  FEnvFollowListenerData **local_58;
  ForAnyElementType *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  this->NumListenersRegistered = this->NumListenersRegistered + 1;
  pIVar7 = (IEnvelopeFollowerNotifier *)&this->_padding_;
  if (this == (FSourceEffectEnvFollowerNotifier *)0x0) {
    pIVar7 = (IEnvelopeFollowerNotifier *)0x0;
  }
  local_res8.Value._0_4_ = param_1;
  local_res18 = param_2;
  if (param_2->PresetUniqueId != 0xffffffff) {
    if ((pIVar7 == (IEnvelopeFollowerNotifier *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNotifier",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Classes\\SourceEffects\\SourceEffectEnvelopeFollower.h"
                           ,0x73,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)*pIVar7)(pIVar7,param_2->PresetUniqueId,param_2);
  }
  param_2->PresetUniqueId = param_1;
  param_2->EnvelopeFollowerNotifier = pIVar7;
  if (*(int *)&(this->EnvelopeFollowerData).field_0x8 !=
      *(int *)&(this->EnvelopeFollowerData).field_0x34) {
    puVar6 = *(undefined1 **)&(this->EnvelopeFollowerData).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->EnvelopeFollowerData).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->EnvelopeFollowerData).field_0x48 - 1U &
                               (uint)local_res8.Value) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&this->EnvelopeFollowerData);
        if (*puVar5 == (uint)local_res8.Value) {
          pIVar7 = (IEnvelopeFollowerNotifier *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            pIVar7 = (IEnvelopeFollowerNotifier *)0x0;
          }
          if (pIVar7 != (IEnvelopeFollowerNotifier *)0x0) {
            if ((((ulonglong)*pIVar7 <= &local_res18) &&
                (&local_res18 <
                 (UEnvelopeFollowerListener **)
                 ((longlong)*pIVar7 + (longlong)*(int *)&pIVar7[1].field_0x4 * 8))) &&
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
            iVar4 = *(int *)(pIVar7 + 1);
            if (iVar4 == *(int *)&pIVar7[1].field_0x4) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,(ForAnyElementType *)pIVar7,(int *)&pIVar7[1].field_0x4);
            }
            *(int *)(pIVar7 + 1) = iVar4 + 1;
            *(UEnvelopeFollowerListener **)((longlong)*pIVar7 + (longlong)iVar4 * 8) = local_res18;
            return;
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_48,(int *)((longlong)&local_40 + 4));
  local_40 = CONCAT44(local_40._4_4_,iVar4 + 1);
  *(UEnvelopeFollowerListener **)(local_48.Data + (longlong)iVar4 * 8) = local_res18;
  local_58 = &local_res8.Value;
  local_50 = &local_48;
  TSet<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData_const_&>_>
            ((TSet<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>,FDefaultSetAllocator>
              *)&this->EnvelopeFollowerData,&local_res8,(bool *)&local_58);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// Tick @ 14f104ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectEnvFollowerNotifier::Tick(FSourceEffectEnvFollowerNotifier *this,float param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TMap<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>_>
  *pTVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TMap<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>_>
  *pTVar27;
  float fVar28;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168;
  undefined1 local_167 [3];
  float local_164;
  TMap<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>_>
  *local_160;
  undefined1 auStack_158 [16];
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  TMap<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>_>
  *local_128;
  TMap<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FReadAccessScope local_f0 [2];
  int local_bc;
  code *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_b8 = (code *)0x0;
  plStack_90 = (longlong *)0x0;
  while (plVar16 = plStack_90, uVar11 = local_98, uVar15 = uStack_a0, lVar17 = local_a8,
        pTVar3 = ((this->CommandQueue).Tail)->NextNode, pTVar3 != (TNode *)0x0) {
    pcVar6 = *(code **)&pTVar3->Item;
    uVar12 = *(undefined8 *)&(pTVar3->Item).field_0x8;
    local_a8 = *(longlong *)&(pTVar3->Item).field_0x10;
    uStack_a0 = *(undefined8 *)&(pTVar3->Item).field_0x18;
    local_98 = *(undefined8 *)&(pTVar3->Item).field_0x20;
    plStack_90 = *(longlong **)&(pTVar3->Item).field_0x28;
    *(code **)&pTVar3->Item = local_b8;
    *(undefined8 *)&(pTVar3->Item).field_0x8 = uStack_b0;
    *(longlong *)&(pTVar3->Item).field_0x10 = lVar17;
    *(undefined8 *)&(pTVar3->Item).field_0x18 = uVar15;
    *(undefined8 *)&(pTVar3->Item).field_0x20 = uVar11;
    *(longlong **)&(pTVar3->Item).field_0x28 = plVar16;
    pTVar4 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar3;
    local_88 = *(longlong *)&pTVar3->Item;
    uVar11 = *(undefined8 *)&(pTVar3->Item).field_0x8;
    uVar7 = *(undefined4 *)&(pTVar3->Item).field_0x10;
    uVar8 = *(undefined4 *)&(pTVar3->Item).field_0x14;
    uVar9 = *(undefined4 *)&(pTVar3->Item).field_0x18;
    uVar10 = *(undefined4 *)&(pTVar3->Item).field_0x1c;
    uVar15 = *(undefined8 *)&(pTVar3->Item).field_0x20;
    plStack_60 = *(longlong **)&(pTVar3->Item).field_0x28;
    *(undefined8 *)&pTVar3->Item = 0;
    *(undefined8 *)&(pTVar3->Item).field_0x8 = uStack_80;
    *(undefined4 *)&(pTVar3->Item).field_0x10 = local_78;
    *(undefined4 *)&(pTVar3->Item).field_0x14 = uStack_74;
    *(undefined4 *)&(pTVar3->Item).field_0x18 = uStack_70;
    *(undefined4 *)&(pTVar3->Item).field_0x1c = uStack_6c;
    *(undefined8 *)&(pTVar3->Item).field_0x20 = local_68;
    *(undefined8 *)&(pTVar3->Item).field_0x28 = 0;
    uStack_80 = uVar11;
    local_78 = uVar7;
    uStack_74 = uVar8;
    uStack_70 = uVar9;
    uStack_6c = uVar10;
    local_68 = uVar15;
    local_b8 = pcVar6;
    uStack_b0 = uVar12;
    if (local_88 != 0) {
      plVar16 = (longlong *)&local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar16 = plStack_60;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (pTVar4 != (TNode *)0x0) {
      if (*(longlong *)&pTVar4->Item != 0) {
        plVar16 = *(longlong **)&(pTVar4->Item).field_0x28;
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)&(pTVar4->Item).field_0x10;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      ::operator_delete(pTVar4,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar6 = local_b8;
    plVar16 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar16 = plStack_90;
    }
    uVar15 = (**(code **)(*plVar16 + 8))();
    (*pcVar6)(uVar15);
  }
  if (local_b8 != (code *)0x0) {
    plVar16 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar16 = plStack_90;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  iVar2 = *(int *)&(this->EnvelopeFollowerData).field_0x28;
  puVar1 = &(this->EnvelopeFollowerData).field_0x10;
  pTVar27 = &this->EnvelopeFollowerData;
  auStack_158._0_4_ = 0;
  auStack_158._4_4_ = 1;
  local_140 = 0;
  iStack_144 = auStack_158._0_4_;
  if (iVar2 != 0) {
    puVar26 = *(uint **)&(this->EnvelopeFollowerData).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar22 = *puVar26;
    local_140 = 0;
    auStack_158._0_4_ = 0;
    while (uVar22 == 0) {
      lVar17 = (longlong)(int)auStack_158._0_4_;
      local_140 = local_140 + 0x20;
      auStack_158._0_4_ = auStack_158._0_4_ + 1;
      iStack_144 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_158._0_4_)
      goto LAB_14f10508e;
      uVar22 = puVar26[lVar17 + 1];
    }
    auStack_158._4_4_ = -uVar22 & uVar22;
    uVar20 = (ulonglong)(uint)auStack_158._4_4_ * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_130 = (int)lVar17;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar2 < iStack_144) {
      iStack_144 = iVar2;
    }
  }
LAB_14f10508e:
  uVar22 = *(uint *)&(this->EnvelopeFollowerData).field_0x28;
  iStack_13c = local_bc;
  iStack_138 = *(int *)&(this->EnvelopeFollowerData).field_0x8 -
               *(int *)&(this->EnvelopeFollowerData).field_0x34;
  uVar21 = uVar22 & 0xffffffe0;
  uStack_148 = 0xffffffff;
  TStack_118._padding_ = CONCAT44(auStack_158._4_4_,auStack_158._0_4_);
  TStack_118.CurrentBitIndex = iStack_144;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar22 >> 5;
  TStack_118._28_4_ = local_bc;
  TStack_118.BaseBitIndex = local_140;
  uStack_f8 = CONCAT44(uStack_134,iStack_138);
  local_160 = pTVar27;
  auStack_158._8_8_ = puVar1;
  local_128 = pTVar27;
  local_120 = pTVar27;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar22 < 0) || (iVar2 < (int)uVar22)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar19 = *(uint *)&(this->EnvelopeFollowerData).field_0x28;
  if (uVar22 != uVar19) {
    puVar5 = *(undefined1 **)&(this->EnvelopeFollowerData).field_0x20;
    puVar25 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar25 = puVar5;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar18 * 4);
    while (uVar22 == 0) {
      lVar17 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar22 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14f1051b0;
      uVar22 = *(uint *)(puVar25 + lVar17 * 4 + 4);
    }
    uVar20 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_12c = (int)lVar17;
    uVar22 = local_12c + -1 + uVar21;
    if ((int)uVar19 < (int)uVar22) {
      uVar22 = uVar19;
    }
  }
LAB_14f1051b0:
  while( true ) {
    pTVar13 = local_120;
    uVar20 = 0;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      local_168 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_168);
    }
    if (((TStack_118.CurrentBitIndex == uVar22) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar13 == pTVar27)) break;
    lVar17 = *(longlong *)pTVar13;
    local_160 = (TMap<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>_>
                 *)CONCAT44(local_160._4_4_,
                            *(undefined4 *)((longlong)TStack_118.CurrentBitIndex * 0x30 + lVar17));
    FEnvFollowListenerData::FEnvFollowListenerData
              ((FEnvFollowListenerData *)auStack_158,
               (FEnvFollowListenerData *)((longlong)TStack_118.CurrentBitIndex * 0x30 + lVar17 + 8))
    ;
    iVar2 = local_140;
    if ((0 < (int)auStack_158._8_4_) && (0 < local_140)) {
      fVar28 = 0.0;
      uVar23 = uVar20;
      iVar18 = local_140;
      do {
        uVar19 = (uint)uVar20;
        uVar21 = 0;
        if ((int)uVar19 < iVar18) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_170 = (longlong)iVar18;
          local_178 = (longlong)(int)uVar19;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar18 = local_140;
          if (bVar14) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar20 = (ulonglong)(uVar19 + 1);
        fVar28 = fVar28 + *(float *)(uVar23 + 4 + CONCAT44(iStack_144,uStack_148));
        uVar23 = uVar23 + 8;
      } while ((int)(uVar19 + 1) < iVar18);
      plVar24 = (longlong *)CONCAT44(auStack_158._4_4_,auStack_158._0_4_);
      uVar7 = auStack_158._8_4_;
      plVar16 = plVar24 + (int)auStack_158._8_4_;
      while( true ) {
        if (auStack_158._8_4_ != uVar7) {
          local_167[0] = 0;
          `TCheckedPointerIterator<UEnvelopeFollowerListener_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_167);
        }
        pTVar27 = local_128;
        if (plVar24 == plVar16) break;
        lVar17 = *plVar24;
        if ((lVar17 != 0) && ((*(uint *)(lVar17 + 8) >> 0x1e & 1) == 0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar17 + 0xc0),
                     local_f0);
          iVar18 = *(int *)(lVar17 + 0xd0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_f0);
          if (0 < iVar18) {
            local_164 = fVar28 / (float)iVar2;
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar17 + 0xc0),
                       &local_164);
          }
        }
        plVar24 = plVar24 + 1;
      }
    }
    if ((void *)CONCAT44(iStack_144,uStack_148) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(iStack_144,uStack_148));
    }
    if ((void *)CONCAT44(auStack_158._4_4_,auStack_158._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(auStack_158._4_4_,auStack_158._0_4_));
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  return;
}

// UnregisterEnvelopeFollowerListener @ 14f106390

void __thiscall
FSourceEffectEnvFollowerNotifier::UnregisterEnvelopeFollowerListener
          (FSourceEffectEnvFollowerNotifier *this,uint param_1,UEnvelopeFollowerListener *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TNode **ppTVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  UEnvelopeFollowerListener *pUVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  UEnvelopeFollowerListener *local_res18;
  ulonglong uVar9;
  
  if (*(int *)&this->EnvelopeFollowerData != *(int *)&(this->EnvelopeFollowerData).field_0x2c) {
    puVar11 = *(undefined1 **)&(this->EnvelopeFollowerData).field_0x38;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->EnvelopeFollowerData).field_0x30;
    }
    iVar4 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->EnvelopeFollowerData).field_0x40 - 1U & param_1) * 4
                    );
    if (iVar4 != -1) {
      while (ppTVar5 = &((this->CommandQueue).Tail)->NextNode + (longlong)iVar4 * 6,
            *(uint *)ppTVar5 != param_1) {
        iVar4 = *(int *)(ppTVar5 + 5);
        if (iVar4 == -1) {
          return;
        }
      }
      plVar14 = (longlong *)(ppTVar5 + 1);
      if (ppTVar5 == (TNode **)0x0) {
        plVar14 = (longlong *)0x0;
      }
      if (plVar14 != (longlong *)0x0) {
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        local_res18 = param_2;
        if ((((UEnvelopeFollowerListener **)*plVar14 <= &local_res18) &&
            (&local_res18 <
             (UEnvelopeFollowerListener **)*plVar14 + *(int *)((longlong)plVar14 + 0xc))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = 0;
        iVar4 = *(int *)(plVar14 + 1);
        if (iVar4 != 0) {
          plVar1 = (longlong *)*plVar14;
          bVar3 = (UEnvelopeFollowerListener *)*plVar1 != local_res18;
          uVar9 = uVar6;
          pUVar10 = local_res18;
          uVar13 = uVar6;
          do {
            uVar7 = (uint)uVar9;
            uVar8 = uVar7;
            do {
              uVar6 = uVar6 + 1;
              uVar8 = uVar8 + 1;
              uVar9 = (ulonglong)uVar8;
              if ((longlong)iVar4 <= (longlong)uVar6) break;
            } while (bVar3 == ((UEnvelopeFollowerListener *)plVar1[uVar6] != pUVar10));
            if (bVar3 != false) {
              uVar12 = (uint)uVar13;
              if (uVar12 != uVar7) {
                memmove(plVar1 + (int)uVar12,plVar1 + (int)uVar7,(longlong)(int)(uVar8 - uVar7) << 3
                       );
                pUVar10 = local_res18;
              }
              uVar13 = (ulonglong)(uVar12 + (uVar8 - uVar7));
            }
            bVar3 = (bool)(bVar3 ^ 1);
          } while ((longlong)uVar6 < (longlong)iVar4);
          *(int *)(plVar14 + 1) = (int)uVar13;
        }
      }
    }
  }
  return;
}


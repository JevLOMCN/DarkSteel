// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 4

// IsEmpty @ 141e26610

bool __thiscall FCustomBuildSteps::IsEmpty(FCustomBuildSteps *this)

{
  return *(int *)&(this->HostPlatformToCommands).field_0x8 ==
         *(int *)&(this->HostPlatformToCommands).field_0x34;
}

// Read @ 141e2d270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCustomBuildSteps::Read(FCustomBuildSteps *this,FJsonObject *param_1,FString *param_2)

{
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar1;
  wchar_t *pwVar2;
  undefined1 auStack_118 [32];
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_f8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_f0;
  Data local_d8;
  void *local_c0;
  void *local_b0;
  void *local_a8;
  char local_78;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_d8.s,param_1);
  if (local_78 != '\0') {
    UE::Json::GetRootObject
              (&local_f0,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_d8.s);
    if (local_f0.bIsSet != false) {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      local_f8 = local_f0.TypedValue.value_;
      pTVar1 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)UE::Projects::Private::ReadCustomBuildSteps
                            ((FCustomBuildSteps *)local_68,
                             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_f8,pwVar2);
      if ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this != pTVar1) {
        TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this,pTVar1);
      }
      local_20 = 0;
      if ((void *)local_68._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_68);
    }
    if (local_78 != '\0') {
      if (local_c0 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_d8.s);
        local_d8.n.i64 = (Number)0x0;
        local_d8.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_c0,1);
      free(local_a8);
      ::operator_delete(local_b0,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_d8.s);
    }
  }
  return;
}

// UpdateJson @ 141e3f510

void __thiscall
FCustomBuildSteps::UpdateJson(FCustomBuildSteps *this,FJsonObject *param_1,FString *param_2)

{
  FString *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  FCustomBuildSteps *pFVar6;
  bool bVar7;
  int iVar8;
  TSharedRef<FJsonObject,1> *pTVar9;
  TJsonValueString<wchar_t> *pTVar10;
  longlong lVar11;
  int iVar12;
  TJsonValueString<wchar_t> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TJsonValueString<wchar_t> *pTVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 local_res20 [8];
  undefined1 local_158 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_150;
  uint local_140;
  TSharedPtr<FJsonObject,1> local_138;
  TSharedPtr<FJsonValue,1> local_128;
  TSharedPtr<FJsonObject,1> *local_118;
  FCustomBuildSteps *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_d8;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  FCustomBuildSteps *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FScriptContainerElement *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TSharedRef<FJsonObject,1> local_58;
  TStringView<wchar_t> local_48;
  
  iVar12 = (param_2->Data).ArrayNum;
  pTVar21 = (TJsonValueString<wchar_t> *)0x0;
  uVar16 = 0;
  local_88 = (param_2->Data).AllocatorInstance.Data;
  uVar18 = 0;
  if (*(int *)&(this->HostPlatformToCommands).field_0x8 ==
      *(int *)&(this->HostPlatformToCommands).field_0x34) {
    uStack_70 = iVar12 - 1U;
    if (iVar12 == 0) {
      uStack_70 = uVar16;
    }
    local_48._12_4_ = uStack_6c;
    local_48.Size = uStack_70;
    local_78 = local_88;
    local_48.DataPtr = (wchar_t *)local_88;
    FJsonObject::RemoveField(param_1,&local_48);
    return;
  }
  local_138.Object = (FJsonObject *)0x0;
  local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_118 = (TSharedPtr<FJsonObject,1> *)0x0;
  uStack_80 = iVar12 - 1U;
  if (iVar12 == 0) {
    uStack_80 = uVar18;
  }
  local_68._12_4_ = uStack_7c;
  local_68.Size = uStack_80;
  local_68.DataPtr = (wchar_t *)local_88;
  bVar7 = FJsonObject::TryGetObjectField(param_1,&local_68,&local_118);
  FVar5.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
  if ((bVar7) && (local_118 != (TSharedPtr<FJsonObject,1> *)0x0)) {
    local_138.Object = local_118->Object;
    local_138.SharedReferenceCount.ReferenceController =
         (local_118->SharedReferenceCount).ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  else {
    pTVar9 = MakeShared<FJsonObject,1>(&local_58);
    local_c0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_138.Object = pTVar9->Object;
    if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_138.SharedReferenceCount,&local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    FJsonObject::SetObjectField(param_1,param_2,&local_138);
  }
  if (local_138.Object == (FJsonObject *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8282218769565089703>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\CustomBuildSteps.cpp"
                       ,0x59,"StepsObject.IsValid()");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar3 = *(uint *)&(this->HostPlatformToCommands).field_0x28;
    uStack_104 = 1;
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->HostPlatformToCommands).field_0x10;
    uStack_f4 = uVar18;
    local_f0 = uVar18;
    if (uVar3 != 0) {
      puVar20 = *(uint **)&(this->HostPlatformToCommands).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)pTVar22;
      }
      uVar14 = *puVar20;
      pTVar13 = pTVar21;
      pTVar10 = pTVar21;
      local_f0 = uVar16;
      uVar18 = uVar16;
      while (uVar14 == 0) {
        iVar12 = (int)pTVar13;
        local_f0 = (int)pTVar10 + 0x20;
        pTVar10 = (TJsonValueString<wchar_t> *)(ulonglong)local_f0;
        uVar18 = iVar12 + 1;
        pTVar13 = (TJsonValueString<wchar_t> *)(ulonglong)uVar18;
        uStack_f4 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_141e3f6fd;
        uVar14 = puVar20[(longlong)iVar12 + 1];
      }
      uStack_104 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_104 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_e0 = (int)lVar11;
      uStack_f4 = (local_f0 - 1) + local_e0;
      if ((int)uVar3 < (int)uStack_f4) {
        uStack_f4 = uVar3;
      }
    }
LAB_141e3f6fd:
    uVar16 = *(uint *)&(this->HostPlatformToCommands).field_0x28;
    uVar14 = uVar16 & 0xffffffe0;
    iStack_e8 = *(int *)&(this->HostPlatformToCommands).field_0x8 -
                *(int *)&(this->HostPlatformToCommands).field_0x34;
    uStack_f8 = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_104,uVar18);
    TStack_b0.CurrentBitIndex = uStack_f4;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar16 >> 5;
    TStack_b0._28_4_ = uStack_f4;
    TStack_b0.BaseBitIndex = local_f0;
    uStack_90 = CONCAT44(uStack_e4,iStack_e8);
    local_140 = uVar16;
    local_110 = this;
    uStack_108 = uVar18;
    local_100 = (undefined1 *)pTVar22;
    uStack_ec = uStack_f4;
    local_d0 = pTVar22;
    local_b8 = this;
    TStack_b0.Array = pTVar22;
    if ((((int)uVar16 < 0) || ((int)uVar3 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = *(uint *)&(this->HostPlatformToCommands).field_0x28;
    if (uVar16 != uVar18) {
      puVar19 = *(undefined1 **)&(this->HostPlatformToCommands).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)pTVar22;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        uVar16 = uVar18;
        local_140 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_141e3f810;
        uVar16 = *(uint *)(puVar19 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_dc = (int)lVar11;
      uVar16 = local_dc + -1 + uVar14;
      local_140 = uVar16;
      if ((int)uVar18 < (int)uVar16) {
        uVar16 = uVar18;
        local_140 = uVar18;
      }
    }
LAB_141e3f810:
    while( true ) {
      pFVar6 = local_b8;
      if (*(int *)&(local_b8->HostPlatformToCommands).field_0x8 -
          *(int *)&(local_b8->HostPlatformToCommands).field_0x34 != (int)uStack_90) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_b0.CurrentBitIndex == uVar16) && (TStack_b0.Array == pTVar22)) &&
         (pFVar6 == this)) break;
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar11 = *(longlong *)&pFVar6->HostPlatformToCommands;
      iVar12 = *(int *)(lVar11 + 0x18 + (longlong)TStack_b0.CurrentBitIndex * 0x28);
      pFVar1 = (FString *)(lVar11 + (longlong)TStack_b0.CurrentBitIndex * 0x28);
      pFVar17 = pFVar1[1].Data.AllocatorInstance.Data;
      pFVar15 = pFVar17 + (longlong)iVar12 * 0x10;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      while( true ) {
        if (pFVar1[1].Data.ArrayNum != iVar12) {
          local_158[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        uVar16 = local_140;
        if (pFVar17 == pFVar15) break;
        pTVar10 = ::operator_new(0x20);
        pTVar13 = pTVar21;
        if (pTVar10 != (TJsonValueString<wchar_t> *)0x0) {
          FJsonValue::FJsonValue((FJsonValue *)pTVar10);
          pTVar10->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          ::FString::FString(&pTVar10->Value,(FString *)pFVar17);
          *(EJson *)&pTVar10->_padding_ = String;
          pTVar13 = pTVar10;
        }
        local_d8.Object = pTVar13;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&local_128,&local_d8);
        if (((local_150.AllocatorInstance.Data <= &local_128) &&
            (&local_128 <
             (TSharedPtr<FJsonValue,1> *)
             (local_150.AllocatorInstance.Data + (longlong)local_150.ArrayMax * 0x10))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = local_150.ArrayNum;
        if (local_150.ArrayNum == local_150.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_150.AllocatorInstance,&local_150.ArrayMax);
        }
        local_150.ArrayNum = iVar8 + 1;
        *(FJsonValue **)&local_150.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 =
             local_128.Object;
        *(TReferenceControllerBase<1> **)
         (local_150.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
             local_128.SharedReferenceCount.ReferenceController;
        local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_128.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar17 = pFVar17 + 0x10;
      }
      if ((local_138.Object == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FJsonObject::SetArrayField(local_138.Object,pFVar1,&local_150);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_150.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      pTVar22 = local_d0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  return;
}

// Write @ 141e44ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCustomBuildSteps::Write
          (FCustomBuildSteps *this,TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1,
          FString *param_2)

{
  int iVar1;
  FJsonValue *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  FSharedReferencer<1> FVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TSharedRef<FJsonObject,1> local_48;
  TStringView<wchar_t> local_38;
  FJsonValue *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->HostPlatformToCommands).field_0x8 !=
      *(int *)&(this->HostPlatformToCommands).field_0x34) {
    MakeShared<FJsonObject,1>(&local_48);
    UpdateJson(this,local_48.Object,param_2);
    iVar1 = (param_2->Data).ArrayNum;
    local_58 = (param_2->Data).AllocatorInstance.Data;
    iStack_50 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_50 = 0;
    }
    local_38._12_4_ = uStack_4c;
    local_38.Size = iStack_50;
    local_38.DataPtr = (wchar_t *)local_58;
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_50,(wchar_t *)local_58);
    pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>
                       ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                         *)local_48.Object,uVar5,&local_38);
    if ((pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) ||
       (pFVar2 = pTVar6->Object, pFVar2 == (FJsonValue *)0x0)) {
      FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      local_28 = pFVar2;
      local_20 = pTVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      local_68.SharedReferenceCount.ReferenceController = ::operator_new(0x38);
      if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_68.Object = ___xmm_00000000000000000000000000000010;
        local_68.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
        ;
        ::FString::FString((FString *)(local_68.SharedReferenceCount.ReferenceController + 1),
                           param_2);
        local_68.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)pFVar2;
        *(TReferenceControllerBase<1> **)
         &local_68.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = pTVar8;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = (FElement *)(local_68.SharedReferenceCount.ReferenceController + 1);
        *(undefined2 *)&local_68.SharedReferenceCount.ReferenceController[3]._padding_ = 0x100;
        if (local_68.Object == (FElement *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_68,param_1,true);
      FVar7.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}


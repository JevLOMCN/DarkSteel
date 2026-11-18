// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// FStringTokenStore @ 1442f6d40

FStringTokenStore * __thiscall
UE::Net::FStringTokenStore::FStringTokenStore(FStringTokenStore *this,FNetTokenStore *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FStringTokenStore *pFVar8;
  uint uVar9;
  
  FNetTokenDataStore::FNetTokenDataStore((FNetTokenDataStore *)this,param_1);
  this->_padding_ = (longlong)&___7FStringTokenStore_Net_UE__6B_;
  piVar1 = &(this->StoredStrings).ArrayNum;
  piVar2 = &(this->StoredStrings).ArrayMax;
  *(undefined8 *)&this->HashToKey = 0;
  *(undefined8 *)&(this->HashToKey).field_0x8 = 0;
  *(undefined8 *)&(this->HashToKey).field_0x20 = 0;
  *(undefined4 *)&(this->HashToKey).field_0x28 = 0;
  *(undefined4 *)&(this->HashToKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->HashToKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HashToKey).field_0x34 = 0;
  *(undefined8 *)&(this->HashToKey).field_0x40 = 0;
  *(undefined4 *)&(this->HashToKey).field_0x48 = 0;
  (this->StoredStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  FMemStackBase::FMemStackBase(&this->Allocator,Small);
  iVar7 = *piVar1;
  uVar3 = (uint)this->_padding_;
  if (iVar7 < (int)uVar3) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar3 - iVar7,&(this->StoredStrings).AllocatorInstance,piVar1,piVar2);
    memset((this->StoredStrings).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
           (longlong)(int)(uVar3 - iVar7) << 3);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar7) {
      uVar9 = iVar7 - uVar3;
      if (((int)(uVar9 | uVar3) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FStringTokenStore *)(*pcVar4)();
        return pFVar8;
      }
      if (uVar9 != 0) {
        _Dst = (this->StoredStrings).AllocatorInstance.Data + (longlong)(int)uVar3 * 8;
        iVar7 = (*piVar1 - uVar3) - uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 8,(longlong)iVar7 << 3);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->StoredStrings).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  return this;
}

// GetOrCreatePersistentString @ 144303c70

FNetTokenStoreKey __thiscall
UE::Net::FStringTokenStore::GetOrCreatePersistentString
          (FStringTokenStore *this,wchar_t *param_1,uint param_2)

{
  int *piVar1;
  FMemStackBase *this_00;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
  uint *puVar10;
  wchar_t *_Dest;
  undefined4 in_register_00000084;
  undefined1 *puVar11;
  int in_R9D;
  uint local_res20 [2];
  undefined4 local_68 [2];
  wchar_t *local_60;
  ulong64 local_58;
  ulong64 *local_50;
  uint *local_48;
  
  uVar7 = in_R9D * 2;
  local_58 = CityHash64((char *)CONCAT44(in_register_00000084,param_2),uVar7);
  if (*(int *)&(this->HashToKey).field_0x8 != *(int *)&(this->HashToKey).field_0x34) {
    puVar11 = *(undefined1 **)&(this->HashToKey).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->HashToKey).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    ((local_58 >> 0x20) * 0x17 + local_58 &
                    (ulonglong)(*(int *)&(this->HashToKey).field_0x48 - 1)) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *(longlong *)&this->HashToKey + (longlong)iVar8 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->HashToKey + (longlong)iVar8 * 0x18) == local_58) {
          puVar10 = (uint *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            local_res20[0] = *puVar10;
            goto LAB_144303d63;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10);
      } while (iVar8 != -1);
    }
  }
  uVar3 = (uint)this->_padding_;
  if (uVar3 < 0x100000) {
    local_68[0] = 0;
    if ((((undefined4 *)this->_padding_ <= local_68) &&
        (local_68 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FNetTokenStoreKey)uVar7;
    }
    iVar8 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar8 + 1;
    *(undefined4 *)(this->_padding_ + (longlong)iVar8 * 4) = local_68[0];
    if (uVar3 != 0) {
      this_00 = &this->Allocator;
      local_res20[0] = uVar3;
      if ((((this->Allocator).bShouldEnforceAllocMarks != false) && ((this->Allocator).NumMarks < 1)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!bShouldEnforceAllocMarks || NumMarks > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                   ,0x8a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (FNetTokenStoreKey)uVar7;
      }
      _Dest = (wchar_t *)((ulonglong)(this_00->Top + 1) & 0xfffffffffffffffe);
      puVar9 = (uchar *)((longlong)_Dest + (ulonglong)uVar7 + 2);
      if ((this->Allocator).End < puVar9) {
        FMemStackBase::AllocateNewChunk(this_00,uVar7 + 4);
        _Dest = (wchar_t *)((ulonglong)(this_00->Top + 1) & 0xfffffffffffffffe);
        puVar9 = (uchar *)((longlong)_Dest + (ulonglong)uVar7 + 2);
      }
      this_00->Top = puVar9;
      local_60 = _Dest;
      wcsncpy(_Dest,(wchar_t *)CONCAT44(in_register_00000084,param_2),(ulonglong)(in_R9D + 1U) - 1);
      _Dest[(ulonglong)(in_R9D + 1U) - 1] = L'\0';
      local_50 = &local_58;
      local_48 = local_res20;
      TSet<TTuple<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,UE::Net::FNetTokenDataStore::FNetTokenStoreKey_const_&>_>
                ((TSet<TTuple<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey,0>,FDefaultSetAllocator>
                  *)&this->HashToKey,
                 (TPairInitializer<unsigned___int64_const_&,UE::Net::FNetTokenDataStore::FNetTokenStoreKey_const_&>
                  *)&stack0x00000008,(bool *)&local_50);
      pFVar4 = (this->StoredStrings).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 <
           pFVar4 + (longlong)(this->StoredStrings).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (FNetTokenStoreKey)uVar7;
      }
      iVar8 = (this->StoredStrings).ArrayNum;
      piVar1 = &(this->StoredStrings).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->StoredStrings).AllocatorInstance,piVar1);
      }
      (this->StoredStrings).ArrayNum = iVar8 + 1;
      *(wchar_t **)((this->StoredStrings).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_60;
      goto LAB_144303d63;
    }
  }
  else {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_543918596850450021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetTokenStore.h"
                       ,0x19b,"NextTokenStoreKeyIndex < FNetToken::MaxNetTokenCount");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FNetTokenStoreKey)uVar7;
    }
  }
  local_res20[0] = 0;
LAB_144303d63:
  *(uint *)param_1 = local_res20[0];
  return (FNetTokenStoreKey)(uint)param_1;
}

// GetOrCreateToken @ 1443040b0

/* WARNING: Enum "Type": Some values do not have unique names */

FNetToken __thiscall
UE::Net::FStringTokenStore::GetOrCreateToken(FStringTokenStore *this,FString *param_1)

{
  FNetToken FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar2;
  undefined8 *in_R8;
  int local_res10 [2];
  undefined1 local_res18 [16];
  FString local_28;
  
  if (*(int *)(in_R8 + 1) == 0) {
    uVar2 = 0x5060d16c;
  }
  else {
    uVar2 = (uint)*in_R8;
  }
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0;
  GetOrCreatePersistentString(this,(wchar_t *)local_res10,uVar2);
  if (local_res10[0] != 0) {
    FVar1 = FNetTokenDataStore::GetNetTokenFromKey
                      ((FNetTokenDataStore *)this,(FNetTokenStoreKey)(uint)local_res18);
    uVar2 = *(uint *)CONCAT44(extraout_var,FVar1.field0_0x0);
    *(uint *)&(param_1->Data).AllocatorInstance.Data = uVar2;
    if ((uVar2 & 0xfffff) == 0) {
      FVar1 = FNetTokenDataStore::CreateAndStoreTokenForKey
                        ((FNetTokenDataStore *)this,(FNetTokenStoreKey)(uint)local_res10);
      *(undefined4 *)&(param_1->Data).AllocatorInstance.Data =
           *(undefined4 *)CONCAT44(extraout_var_00,FVar1.field0_0x0);
      if (5 < (byte)LogNetToken._0_1_) {
        FNetToken::ToString((FNetToken *)param_1,&local_28);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return (FNetToken)SUB84(param_1,0);
}

// GetOrCreateToken @ 144304190

/* WARNING: Enum "Type": Some values do not have unique names */

FNetToken __thiscall
UE::Net::FStringTokenStore::GetOrCreateToken(FStringTokenStore *this,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  FNetToken FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int local_res10 [2];
  undefined1 local_28 [8];
  FString local_20;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  GetOrCreatePersistentString(this,(wchar_t *)local_res10,param_2);
  if (local_res10[0] != 0) {
    FVar2 = FNetTokenDataStore::GetNetTokenFromKey
                      ((FNetTokenDataStore *)this,(FNetTokenStoreKey)(uint)local_28);
    uVar1 = *(uint *)CONCAT44(extraout_var,FVar2.field0_0x0);
    *(uint *)param_1 = uVar1;
    if ((uVar1 & 0xfffff) == 0) {
      FVar2 = FNetTokenDataStore::CreateAndStoreTokenForKey
                        ((FNetTokenDataStore *)this,(FNetTokenStoreKey)(uint)local_res10);
      *(undefined4 *)param_1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar2.field0_0x0);
      if (5 < (byte)LogNetToken._0_1_) {
        FNetToken::ToString((FNetToken *)param_1,&local_20);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
        if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return (FNetToken)SUB84(param_1,0);
}

// ReadTokenData @ 14430d530

FNetTokenStoreKey __thiscall
UE::Net::FStringTokenStore::ReadTokenData
          (FStringTokenStore *this,FArchive *param_1,FNetToken *param_2,UPackageMap *param_3)

{
  uint uVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::operator<<((FArchive *)param_2,&local_18);
  if ((*(byte *)((longlong)&param_2[10].field0_0x0 + 1) & 2) == 0) {
    uVar1 = (uint)local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      uVar1 = 0x5060d16c;
    }
    GetOrCreatePersistentString(this,(wchar_t *)param_1,uVar1);
  }
  else {
    *(undefined4 *)param_1 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FNetTokenStoreKey)(uint)param_1;
}

// ReadTokenData @ 14430d5d0

FNetTokenStoreKey __thiscall
UE::Net::FStringTokenStore::ReadTokenData
          (FStringTokenStore *this,FNetSerializationContext *param_1,FNetToken *param_2)

{
  uint uVar1;
  FNetBitStreamReader *pFVar2;
  FString local_18;
  
  pFVar2 = *(FNetBitStreamReader **)(param_2 + 0xc6);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ReadString(pFVar2,&local_18);
  if (pFVar2->OverflowBitCount == 0) {
    uVar1 = (uint)local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      uVar1 = 0x5060d16c;
    }
    GetOrCreatePersistentString(this,(wchar_t *)param_1,uVar1);
  }
  else {
    *(undefined4 *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FNetTokenStoreKey)(uint)param_1;
}

// ResolveToken @ 14430f5f0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
UE::Net::FStringTokenStore::ResolveToken
          (FStringTokenStore *this,FNetToken param_1,FNetTokenStoreState *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint local_res8 [2];
  FNetToken_u_0 local_res10 [2];
  FNetToken_u_0 *local_res20;
  FName local_38;
  FString local_30;
  FString local_20;
  
  if (((((uint)param_1.field0_0x0 & 0xfffff) != 0) &&
      ((*(int *)(this->_padding_ + 0x28) == 1) !=
       (bool)((byte)((uint)param_1.field0_0x0 >> 0x17) & 1))) ||
     (param_2 = *(FNetTokenStoreState **)this->_padding_, ((uint)param_1.field0_0x0 & 0xfffff) != 0)
     ) {
    local_res10[0] = param_1.field0_0x0;
    if (param_2 == (FNetTokenStoreState *)0x0) {
      local_res20 = local_res10;
      bVar3 = `UE::Net::FStringTokenStore::ResolveToken'::__l3::<lambda_1>::operator()(&local_res20)
      ;
      if (!bVar3) {
        return (wchar_t *)0x0;
      }
    }
    FNetTokenDataStore::GetTokenKey
              ((FNetTokenDataStore *)this,(FNetToken)SUB84(local_res8,0),
               (FNetTokenStoreState *)(ulonglong)local_res10[0].Value);
    if ((local_res8[0] != 0) && (uVar1 = (this->StoredStrings).ArrayNum, local_res8[0] < uVar1)) {
      uVar4 = 0;
      if ((int)local_res8[0] < (int)uVar1) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pwVar5 = (wchar_t *)(*pcVar2)();
        return pwVar5;
      }
      return *(wchar_t **)
              ((this->StoredStrings).AllocatorInstance.Data + (longlong)(int)local_res8[0] * 8);
    }
    if (1 < (byte)LogNetToken._0_1_) {
      local_38 = StringTokenStoreName;
      ::FName::ToString(&local_38,&local_20);
      ::FString::PrintfImpl(&local_30,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
  }
  return (wchar_t *)0x0;
}

// WriteTokenData @ 14431d7e0

void __thiscall
UE::Net::FStringTokenStore::WriteTokenData
          (FStringTokenStore *this,FArchive *param_1,FNetTokenStoreKey param_2,UPackageMap *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString local_18;
  
  uVar3 = 0;
  if ((int)param_2.KeyIndex < (this->StoredStrings).ArrayNum) {
    uVar3 = ~param_2.KeyIndex >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::FString(&local_18,
                     *(wchar_t **)
                      ((this->StoredStrings).AllocatorInstance.Data +
                      (longlong)(int)param_2.KeyIndex * 8));
  ::operator<<(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteTokenData @ 14431d890

void __thiscall
UE::Net::FStringTokenStore::WriteTokenData
          (FStringTokenStore *this,FNetSerializationContext *param_1,FNetTokenStoreKey param_2)

{
  wchar_t *_Str;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  uVar5 = 0;
  uVar3 = uVar5;
  if ((int)param_2.KeyIndex < (this->StoredStrings).ArrayNum) {
    uVar3 = ~param_2.KeyIndex >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Str = *(wchar_t **)
          ((this->StoredStrings).AllocatorInstance.Data + (longlong)(int)param_2.KeyIndex * 8);
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    uVar5 = (uint)sVar4;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = uVar5;
  local_18.DataPtr = _Str;
  WriteString(param_1->BitStreamWriter,&local_18);
  return;
}

// operator() @ 1504b9a10

bool __thiscall `UE::Net::FStringTokenStore::ResolveToken'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5377832515299966887>);
  if (bVar2) {
    UE::Net::FNetToken::ToString(*(FNetToken **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5377832515299966887>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b9a77;
    }
  }
  bVar2 = false;
LAB_1504b9a77:
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


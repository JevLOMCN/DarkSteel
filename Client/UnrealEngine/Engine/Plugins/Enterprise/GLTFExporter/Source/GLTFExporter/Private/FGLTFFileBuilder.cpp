// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 10

// FGLTFFileBuilder @ 14e5d1210

FGLTFFileBuilder * __thiscall
FGLTFFileBuilder::FGLTFFileBuilder
          (FGLTFFileBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  FGLTFBuilder::FGLTFBuilder((FGLTFBuilder *)this,param_1,param_2);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->ExternalArchives = 0;
  *(undefined8 *)&(this->ExternalArchives).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalArchives).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalArchives).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalArchives).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalArchives).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalArchives).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalArchives).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalArchives).field_0x48 = 0;
  return this;
}

// ~FGLTFFileBuilder @ 14e5d7a10

void __thiscall FGLTFFileBuilder::~FGLTFFileBuilder(FGLTFFileBuilder *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ExternalArchives).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalArchives).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalArchives);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->_padding_);
  FGLTFLogBuilder::~FGLTFLogBuilder((FGLTFLogBuilder *)this);
  return;
}

// AddExternalFile @ 14e5dd5f0

FString * __thiscall
FGLTFFileBuilder::AddExternalFile
          (FGLTFFileBuilder *this,FString *__return_storage_ptr__,FString *param_1,
          TSharedPtr<FGLTFMemoryArchive,1> *param_2)

{
  int *piVar1;
  wchar_t _C;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *(*papwVar4) [2];
  uint uVar5;
  undefined1 local_48 [8];
  undefined8 local_40;
  FString local_38;
  
  iVar2 = (param_1->Data).ArrayNum;
  uVar5 = 0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48 = (undefined1  [8])0x0;
  local_40._0_4_ = iVar2;
  if (iVar2 == 0) {
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)local_48,iVar2,(int *)((longlong)&local_40 + 4));
    memcpy((void *)local_48,_Src,(longlong)iVar2 * 2);
  }
  pwVar3 = L"<>:\"/\\|?*";
  do {
    _C = *pwVar3;
    iVar2 = iswalpha(_C);
    if (iVar2 == 0) {
      ::FString::ReplaceCharInlineCaseSensitive((FString *)local_48,_C,L'_');
    }
    else {
      ::FString::ReplaceCharInlineIgnoreCase((FString *)local_48,_C,L'_');
    }
    pwVar3 = pwVar3 + 1;
  } while (pwVar3 != L"");
  GetUniqueFileName(this,&local_38,(FString *)local_48);
  if (local_48 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_48);
  }
  local_48 = (undefined1  [8])&local_38;
  local_40 = param_2;
  TSet<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FGLTFMemoryArchive,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>,FDefaultSetAllocator>
              *)&this->ExternalArchives,
             (TPairInitializer<FString_const_&,TSharedPtr<FGLTFMemoryArchive,1>_const_&> *)
             &stack0x00000008,(bool *)local_48);
  _Src_00.Data = local_38.Data.AllocatorInstance.Data;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_38.Data.ArrayNum,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src_00.Data,
           (longlong)local_38.Data.ArrayNum * 2);
  }
  papwVar4 = CharEncodingMap;
  do {
    ::FString::ReplaceInline(__return_storage_ptr__,(*papwVar4)[0],(*papwVar4)[1],CaseSensitive);
    uVar5 = uVar5 + 1;
    papwVar4 = papwVar4 + 1;
  } while (uVar5 < 0x13);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EncodeURI @ 14e5f0e60

FString * __cdecl FGLTFFileBuilder::EncodeURI(FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t *(*papwVar1) [2];
  uint uVar2;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  uVar2 = 0;
  papwVar1 = CharEncodingMap;
  do {
    ::FString::ReplaceInline(__return_storage_ptr__,(*papwVar1)[0],(*papwVar1)[1],CaseSensitive);
    uVar2 = uVar2 + 1;
    papwVar1 = papwVar1 + 1;
  } while (uVar2 < 0x13);
  return __return_storage_ptr__;
}

// GetExternalArchives @ 14e5f5e90

TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
* __thiscall FGLTFFileBuilder::GetExternalArchives(FGLTFFileBuilder *this)

{
  return &this->ExternalArchives;
}

// GetExternalFiles @ 14e5f5ea0

void __thiscall
FGLTFFileBuilder::GetExternalFiles
          (FGLTFFileBuilder *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *pTVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FString local_d8;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *local_90;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  
  local_c8 = &this->ExternalArchives;
  iStack_c0 = 0;
  uStack_bc = 1;
  puVar1 = &(this->ExternalArchives).field_0x10;
  iVar8 = *(int *)&(this->ExternalArchives).field_0x28;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->ExternalArchives).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_a8 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14e5f5f5f;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_bc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_ac = local_a8 + -1 + (int)lVar10;
    if (iVar8 < iStack_ac) {
      iStack_ac = iVar8;
    }
  }
LAB_14e5f5f5f:
  iStack_a0 = *(int *)&(this->ExternalArchives).field_0x8 -
              *(int *)&(this->ExternalArchives).field_0x34;
  uVar13 = *(uint *)&(this->ExternalArchives).field_0x28;
  uStack_b0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uVar16 = uVar13 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_90 = local_c8;
  local_88 = local_c8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->ExternalArchives).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->ExternalArchives).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e5f6060;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_98 = (int)lVar10;
    uVar13 = local_98 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14e5f6060:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == local_90)
       ) {
      return;
    }
    lVar10 = *(longlong *)pTVar5;
    if (*(int *)(lVar10 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x28) == 0) {
      local_48 = L"";
    }
    else {
      local_48 = *(wchar_t **)(lVar10 + (longlong)TStack_80.CurrentBitIndex * 0x28);
    }
    local_58.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar8 = (param_2->Data).ArrayNum;
    local_58.Size = iVar8 + -1;
    uVar7 = 0;
    if (iVar8 == 0) {
      local_58.Size = 0;
    }
    if (local_48 != (wchar_t *)0x0) {
      sVar9 = wcslen(local_48);
      uVar7 = (undefined4)sVar9;
    }
    local_40 = uVar7;
    FPaths::CombineInternal(&local_d8,&local_58,2);
    pFVar12 = (param_1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar12 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    _Src.Data = local_d8.Data.AllocatorInstance.Data;
    pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    param_1->ArrayNum = iVar8 + 1;
    *(undefined8 *)&pFVar12->field_0x0 = 0;
    iVar8 = local_d8.Data.ArrayNum;
    *(int *)&pFVar12[8].field_0x0 = iVar8;
    if (iVar8 == 0) {
      *(int *)(pFVar12 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,(ForAnyElementType *)pFVar12,iVar8,(int *)(pFVar12 + 0xc));
      memcpy(*(void **)&pFVar12->field_0x0,_Src.Data,(longlong)iVar8 * 2);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetUniqueFileName @ 14e5ff490

FString * __thiscall
FGLTFFileBuilder::GetUniqueFileName
          (FGLTFFileBuilder *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  ForAnyElementType _Src;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar5);
  iVar3 = TSet<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>,FDefaultSetAllocator>
                      *)&this->ExternalArchives,uVar2,param_1);
  if (iVar3 == -1) {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  else {
    FPaths::GetBaseFilename(&local_58,param_1,true);
    FPaths::GetExtension(&local_38,param_1,true);
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    iVar3 = 1;
    do {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_78,iVar3);
      _Src.Data = local_58.Data.AllocatorInstance.Data;
      iVar6 = local_58.Data.ArrayNum;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar2 = iVar6 + 1 + (uint)(iVar6 == 0);
      local_98.Data.ArrayNum = iVar6;
      if ((int)uVar2 < iVar6) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar2,0,(ForAnyElementType *)&local_98,iVar6,&local_98.Data.ArrayMax);
      if (iVar6 != 0) {
        memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
      }
      ::FString::AppendChar(&local_98,L'_');
      ::FString::ConcatFF(&local_48,&local_98,&local_78);
      ::FString::ConcatFF(&local_88,&local_48,&local_38);
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
      iVar6 = local_88.Data.ArrayNum;
      iVar1 = local_88.Data.ArrayMax;
      local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = local_88.Data.ArrayNum;
      local_68.Data.ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar3 = iVar3 + 1;
      if (iVar6 == 0) {
        pwVar5 = L"";
        iVar4 = 0;
      }
      else {
        pwVar5 = (wchar_t *)FVar7.Data;
        iVar4 = iVar6 + -1;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
      iVar4 = TSet<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>,FDefaultSetAllocator>
                          *)&this->ExternalArchives,uVar2,&local_68);
    } while (iVar4 != -1);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
    (__return_storage_ptr__->Data).ArrayNum = iVar6;
    (__return_storage_ptr__->Data).ArrayMax = iVar1;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// SanitizeFileName @ 14e612dd0

FString * __cdecl
FGLTFFileBuilder::SanitizeFileName(FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pwVar2 = L"<>:\"/\\|?*";
  do {
    _C = *pwVar2;
    iVar1 = iswalpha(_C);
    if (iVar1 == 0) {
      ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,_C,L'_');
    }
    else {
      ::FString::ReplaceCharInlineIgnoreCase(__return_storage_ptr__,_C,L'_');
    }
    pwVar2 = pwVar2 + 1;
  } while (pwVar2 != L"");
  return __return_storage_ptr__;
}

// SaveToFile @ 14e613050

bool __thiscall
FGLTFFileBuilder::SaveToFile
          (FGLTFFileBuilder *this,FString *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2,uint param_3)

{
  bool bVar1;
  IFileManager *pIVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::SaveArrayToFile(param_2,pwVar3,pIVar2,param_3);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    ::FString::PrintfImpl(&local_18,L"Failed to save file: %s");
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// WriteExternalFiles @ 14e619090

bool __thiscall
FGLTFFileBuilder::WriteExternalFiles(FGLTFFileBuilder *this,FString *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *pTVar7;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  size_t sVar12;
  IFileManager *pIVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res20 [8];
  FString local_e8;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *local_a0;
  TMap<FString,TSharedPtr<FGLTFMemoryArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FGLTFMemoryArchive,1>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  
  puVar1 = &(this->ExternalArchives).field_0x10;
  iStack_d0 = 0;
  iVar4 = *(int *)&(this->ExternalArchives).field_0x28;
  local_d8 = &this->ExternalArchives;
  local_b8 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ExternalArchives).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar14 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14e61914d;
      uVar18 = puVar20[lVar14 + 1];
    }
    uStack_cc = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_cc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_a8 = (int)lVar14;
    iStack_bc = local_b8 + -1 + local_a8;
    if (iVar4 < iStack_bc) {
      iStack_bc = iVar4;
    }
  }
LAB_14e61914d:
  uVar18 = *(uint *)&(this->ExternalArchives).field_0x28;
  iStack_b0 = *(int *)&(this->ExternalArchives).field_0x8 -
              *(int *)&(this->ExternalArchives).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_cc,iStack_d0);
  uStack_c0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_bc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_90._28_4_ = iStack_bc;
  TStack_90.BaseBitIndex = local_b8;
  uStack_70 = CONCAT44(uStack_ac,iStack_b0);
  local_c8 = puVar1;
  iStack_b4 = iStack_bc;
  local_a0 = local_d8;
  local_98 = local_d8;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar7 = local_a0;
  uVar5 = *(uint *)&(this->ExternalArchives).field_0x28;
  if (uVar18 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ExternalArchives).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14e619260;
      uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_a4 = (int)lVar14;
    uVar18 = local_a4 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14e619260:
  while( true ) {
    pTVar8 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FGLTFMemoryArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_90.CurrentBitIndex == uVar18) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    {
      return true;
    }
    lVar14 = *(longlong *)pTVar8;
    puVar2 = (undefined8 *)(lVar14 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    if (*(int *)(lVar14 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x28) == 0) {
      local_48 = L"";
    }
    else {
      local_48 = (wchar_t *)*puVar2;
    }
    local_58.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar4 = (param_1->Data).ArrayNum;
    local_58.Size = iVar4 + -1;
    uVar11 = 0;
    if (iVar4 == 0) {
      local_58.Size = 0;
    }
    if (local_48 != (wchar_t *)0x0) {
      sVar12 = wcslen(local_48);
      uVar11 = (undefined4)sVar12;
    }
    local_40 = uVar11;
    FPaths::CombineInternal(&local_e8,&local_58,2);
    if ((puVar2[2] == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) break;
    lVar14 = puVar2[2];
    pIVar13 = IFileManager::Get();
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    bVar9 = FFileHelper::SaveArrayToFile
                      ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(lVar14 + 0x98),
                       (wchar_t *)FVar15.Data,pIVar13,param_2);
    if (!bVar9) {
      ::FString::PrintfImpl(&local_68,L"Failed to save file: %s");
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)this,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}


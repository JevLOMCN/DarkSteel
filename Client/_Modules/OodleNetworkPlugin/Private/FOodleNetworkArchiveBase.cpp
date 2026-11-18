// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 4

// SeekPop @ 14e29b7a0

void __thiscall FOodleNetworkArchiveBase::SeekPop(FOodleNetworkArchiveBase *this)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  int iVar4;
  
  if ((this->SeekStack).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SeekStack.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Public\\OodleNetworkArchives.h"
                       ,0xcc,L"");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  plVar1 = (longlong *)this->_padding_;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x1b8);
  if ((this->SeekStack).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  iVar4 = (this->SeekStack).ArrayNum;
  uVar2 = *(undefined8 *)((this->SeekStack).AllocatorInstance.Data + (longlong)iVar4 * 8 + -8);
  iVar4 = iVar4 + -1;
  (this->SeekStack).ArrayNum = iVar4;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->SeekStack).AllocatorInstance,iVar4,&(this->SeekStack).ArrayMax);
                    /* WARNING: Could not recover jumptable at 0x00014e29b882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
  return;
}

// SeekPush @ 14e29b890

void __thiscall FOodleNetworkArchiveBase::SeekPush(FOodleNetworkArchiveBase *this,long64 param_1)

{
  int *piVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_18 [2];
  
  pTVar2 = &this->SeekStack;
  local_18[0] = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->SeekStack).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->SeekStack).ArrayNum;
  piVar1 = &(this->SeekStack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SeekStack).ArrayNum = iVar6 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
                    /* WARNING: Could not recover jumptable at 0x00014e29b973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,param_1);
  return;
}

// SerializeOodleCompressData @ 14e29da30

bool __thiscall
FOodleNetworkArchiveBase::SerializeOodleCompressData
          (FOodleNetworkArchiveBase *this,FOodleCompressedData *param_1,uchar *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if (param_2 == (uchar *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380766>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x1e,"Data != nullptr");
    if (bVar2) {
code_r0x00014e29daf2:
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (param_3 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380767>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x1f,"DataBytes > 0");
    if (bVar2) goto code_r0x00014e29daf2;
  }
  else if (param_3 < 0x7ff00001) {
    TRewritable<unsigned_int>::Set(&param_1->DecompressedLength,this,param_3);
    TRewritable<unsigned_int>::Set(&param_1->CompressedLength,this,param_3);
    uVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    TRewritable<unsigned_int>::Set(&param_1->Offset,this,uVar4);
    (**(code **)(*(longlong *)this->_padding_ + 0x188))((longlong *)this->_padding_,param_2,param_3)
    ;
    bVar2 = (bool)(~(*(byte *)(this->_padding_ + 0x29) >> 1) & 1);
    if (bVar2 != false) {
      return bVar2;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380768>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x20,"DataBytes <= (1024 * 1024 * 2047)");
    if (bVar2) goto code_r0x00014e29daf2;
  }
  FArchiveState::SetError((FArchiveState *)this);
  return false;
}

// SerializeOodleDecompressData @ 14e29db80

bool __thiscall
FOodleNetworkArchiveBase::SerializeOodleDecompressData
          (FOodleNetworkArchiveBase *this,FOodleCompressedData *param_1,uchar **param_2,
          uint *param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  uchar *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((*param_2 != (uchar *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x3c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar1 = (param_1->DecompressedLength).Value;
  uVar9 = (ulonglong)uVar1;
  uVar2 = (param_1->CompressedLength).Value;
  uVar10 = (ulonglong)uVar2;
  uVar11 = (ulonglong)(param_1->Offset).Value;
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x30))();
  if ((longlong)(lVar6 - uVar11) < (longlong)uVar10) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380803>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x43,"CompressedLength <= (InnerArchive.TotalSize() - DataOffset)");
    if (bVar4) {
code_r0x00014e29dc94:
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_14e29dd69;
  }
  if (0x7ff00000 < uVar1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380804>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x44,"DecompressedLength <= (1024 * 1024 * 2047)");
    if (bVar4) goto code_r0x00014e29dc94;
    goto LAB_14e29dd69;
  }
  if (0x7ff00000 < uVar2) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380805>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x45,"CompressedLength <= (1024 * 1024 * 2047)");
    if (bVar4) goto code_r0x00014e29dc94;
    goto LAB_14e29dd69;
  }
  bVar4 = true;
  SeekPush(this,uVar11);
  puVar7 = operator_new__(uVar9);
  if (uVar2 == uVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x188))((longlong *)this->_padding_,puVar7,uVar9);
LAB_14e29dd2c:
    if ((*(byte *)(this->_padding_ + 0x29) & 2) == 0) {
      *param_2 = puVar7;
      *param_3 = uVar1;
      SeekPop(this);
      if ((*(byte *)(this->_padding_ + 0x29) & 2) == 0) {
        return true;
      }
      goto LAB_14e29dd69;
    }
  }
  else {
    pvVar8 = operator_new__(uVar10);
    (**(code **)(*(longlong *)this->_padding_ + 0x188))((longlong *)this->_padding_,pvVar8,uVar10);
    if ((*(byte *)(this->_padding_ + 0x29) & 2) == 0) {
      bVar4 = FOodleDataCompression::Decompress(puVar7,uVar9,pvVar8,uVar10);
    }
    operator_delete__(pvVar8);
    if (bVar4 != false) goto LAB_14e29dd2c;
  }
  operator_delete__(puVar7);
  SeekPop(this);
LAB_14e29dd69:
  FArchiveState::SetError((FArchiveState *)this);
  return false;
}


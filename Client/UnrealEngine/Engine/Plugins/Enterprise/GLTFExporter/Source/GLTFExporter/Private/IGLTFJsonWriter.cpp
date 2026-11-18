// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 4

// Write<enum_EGLTFJsonExtension> @ 14e5cb650

void __thiscall
IGLTFJsonWriter::Write<enum_EGLTFJsonExtension>
          (IGLTFJsonWriter *this,
          TSet<EGLTFJsonExtension,DefaultKeyFuncs<EGLTFJsonExtension,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<EGLTFJsonExtension,DefaultKeyFuncs<EGLTFJsonExtension,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_a8;
  TSet<EGLTFJsonExtension,DefaultKeyFuncs<EGLTFJsonExtension,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<EGLTFJsonExtension,DefaultKeyFuncs<EGLTFJsonExtension,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (**(code **)(this->_padding_ + 0x58))();
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14e5cb6fd;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14e5cb6fd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e5cb800;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14e5cb800:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<enum_EGLTFJsonExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    pwVar8 = FGLTFJsonUtilities::GetValue
                       (*(EGLTFJsonExtension *)
                         (*(longlong *)&pTVar6->Elements + (longlong)TStack_60.CurrentBitIndex * 0xc
                         ));
    pcVar5 = *(code **)(this->_padding_ + 0x18);
    pFVar9 = ::FString::FString(&local_a8,pwVar8);
    (*pcVar5)(this,pFVar9);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e5cb899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

// ~IGLTFJsonWriter @ 14e5d7ed0

void __thiscall IGLTFJsonWriter::~IGLTFJsonWriter(IGLTFJsonWriter *this)

{
  return;
}

// Create @ 14e5ef500

TSharedRef<IGLTFJsonWriter,1> * __cdecl
IGLTFJsonWriter::Create
          (TSharedRef<IGLTFJsonWriter,1> *__return_storage_ptr__,FArchive *param_1,bool param_2,
          FGLTFJsonExtensions *param_3)

{
  TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar1;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *pTVar2;
  TRawPtrProxy<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_> local_res8;
  
  if (param_2) {
    pTVar1 = ::operator_new(0x38);
    local_res8.Object = (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0;
    if (pTVar1 != (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
      *(undefined4 *)&pTVar1->_padding_ = 0;
      pTVar1->_padding_ = (longlong)param_3;
      pTVar1->_padding_ =
           (longlong)&___7__TGLTFJsonWriterImpl__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
      (pTVar1->CurrentIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->CurrentIdentifier).Data.ArrayNum = 0;
      (pTVar1->CurrentIdentifier).Data.ArrayMax = 0;
      pTVar2 = ::operator_new(0x28);
      if (pTVar2 != (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0) {
        pTVar2->Stream = param_1;
        pTVar2->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
        (pTVar2->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar2->Stack).ArrayNum = 0;
        (pTVar2->Stack).ArrayMax = 0;
        pTVar2->PreviousTokenWritten = None;
        pTVar2->IndentLevel = 0;
        local_res8.Object = pTVar2;
      }
      TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1>::
      TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>
                ((TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> *)
                 &pTVar1->JsonWriter,&local_res8);
      goto LAB_14e5ef5b2;
    }
  }
  else {
    pTVar1 = ::operator_new(0x38);
    if (pTVar1 != (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
      pTVar1 = TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::
               TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>
                         (pTVar1,param_1,param_3);
      goto LAB_14e5ef5b2;
    }
  }
  pTVar1 = (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0;
LAB_14e5ef5b2:
  local_res8.Object = (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)pTVar1;
  TSharedRef<IGLTFJsonWriter,1>::TSharedRef<IGLTFJsonWriter,1><IGLTFJsonWriter>
            (__return_storage_ptr__,(TRawPtrProxy<IGLTFJsonWriter> *)&local_res8);
  return __return_storage_ptr__;
}

// StartExtensions @ 14e6145f0

void __thiscall IGLTFJsonWriter::StartExtensions(IGLTFJsonWriter *this)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"extensions");
  (**(code **)(this->_padding_ + 0x40))(this,&local_18);
  (**(code **)(this->_padding_ + 0x48))(this);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}


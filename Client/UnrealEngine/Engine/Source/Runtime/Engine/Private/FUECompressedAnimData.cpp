// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ByteSwapData<FMemoryReader> @ 1473cd380

void __thiscall
FUECompressedAnimData::ByteSwapData<FMemoryReader>
          (FUECompressedAnimData *this,TArrayView<unsigned_char,int> *param_1,FMemoryReader *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = param_1->DataPtr;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)&this->field_0x18) {
    do {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)&this->field_0x18);
  }
  if (0 < *(int *)&this->field_0x28) {
    do {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)&this->field_0x28);
  }
  AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(this);
  if ((*(longlong *)&this->field_0x50 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RotationCodec",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                         ,0x4bc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473cd45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)&this->field_0x50)(*(undefined8 **)&this->field_0x50,this,param_2);
  return;
}

// ByteSwapData<FMemoryWriter> @ 1473cd470

void __thiscall
FUECompressedAnimData::ByteSwapData<FMemoryWriter>
          (FUECompressedAnimData *this,TArrayView<unsigned_char,int> *param_1,FMemoryWriter *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = param_1->DataPtr;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)&this->field_0x18) {
    do {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)&this->field_0x18);
  }
  if (0 < *(int *)&this->field_0x28) {
    do {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)&this->field_0x28);
  }
  AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(this);
  if ((*(longlong *)&this->field_0x50 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RotationCodec",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                         ,0x4bc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473cd54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x50 + 8))(*(longlong **)&this->field_0x50,this,param_2);
  return;
}

// Bind @ 1473e30c0

void __thiscall
FUECompressedAnimData::Bind(FUECompressedAnimData *this,TArrayView<unsigned_char,int> *param_1)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uchar *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  puVar5 = param_1->DataPtr;
  iVar7 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar7 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkData.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                       ,0x447,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)&this->field_0x18;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uchar **)&this->field_0x10 = puVar5;
  *(ulonglong *)&this->field_0x18 = CONCAT44(uStack_2c,iVar2);
  puVar1 = puVar5 + (longlong)*(int *)&this->field_0x18 * 4;
  iVar2 = *(int *)&this->field_0x28;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uchar **)&this->field_0x20 = puVar1;
  *(ulonglong *)&this->field_0x28 = CONCAT44(uStack_1c,iVar2);
  iVar2 = *(int *)&this->field_0x28;
  iVar3 = *(int *)&this->field_0x40;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uchar **)&this->field_0x38 = puVar1 + (longlong)iVar2 * 4;
  *(ulonglong *)&this->field_0x40 = CONCAT44(uStack_c,iVar3);
  if (puVar1 + (longlong)iVar2 * 4 + ((longlong)*(int *)&this->field_0x40 - (longlong)puVar5) !=
      (uchar *)(longlong)iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BulkDataPtr - BulkData.GetData()) == BulkData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                       ,0x44f,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetApproxCompressedSize @ 1474000c0

long64 __thiscall FUECompressedAnimData::GetApproxCompressedSize(FUECompressedAnimData *this)

{
  return (longlong)(*(int *)&this->field_0x28 * 4 + 4) + (longlong)*(int *)&this->field_0x18 * 4 +
         (longlong)*(int *)&this->field_0x40;
}

// GetDebugString @ 147401570

FString * __thiscall
FUECompressedAnimData::GetDebugString(FUECompressedAnimData *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  FAnimationUtils::GetAnimationCompressionFormatString
            (&local_18,*(AnimationCompressionFormat *)&this->field_0x64);
  FAnimationUtils::GetAnimationCompressionFormatString
            (&local_28,*(AnimationCompressionFormat *)&this->field_0x68);
  FAnimationUtils::GetAnimationCompressionFormatString
            (&local_38,*(AnimationCompressionFormat *)&this->field_0x6c);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%s, %s, %s]");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitViewsFromBuffer @ 147406a30

void __thiscall
FUECompressedAnimData::InitViewsFromBuffer
          (FUECompressedAnimData *this,TArrayView<unsigned_char,int> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  if (param_1->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkData.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                       ,0x447,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = *(int *)&this->field_0x18;
  puVar4 = param_1->DataPtr;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uchar **)&this->field_0x10 = puVar4;
  *(ulonglong *)&this->field_0x18 = CONCAT44(uStack_2c,iVar1);
  puVar4 = puVar4 + (longlong)*(int *)&this->field_0x18 * 4;
  iVar1 = *(int *)&this->field_0x28;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uchar **)&this->field_0x20 = puVar4;
  *(ulonglong *)&this->field_0x28 = CONCAT44(uStack_1c,iVar1);
  iVar1 = *(int *)&this->field_0x28;
  iVar2 = *(int *)&this->field_0x40;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  *(uchar **)&this->field_0x38 = puVar4 + (longlong)iVar1 * 4;
  *(ulonglong *)&this->field_0x40 = CONCAT44(uStack_c,iVar2);
  if (puVar4 + (longlong)iVar1 * 4 +
      ((longlong)*(int *)&this->field_0x40 - (longlong)param_1->DataPtr) != (uchar *)(longlong)iVar3
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BulkDataPtr - BulkData.GetData()) == BulkData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                       ,0x44f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// IsValid @ 147408150

bool __thiscall FUECompressedAnimData::IsValid(FUECompressedAnimData *this)

{
  if ((*(int *)&this->field_0x40 < 1) &&
     (((*(int *)&this->field_0x64 != 6 || (*(int *)&this->field_0x68 != 6)) ||
      (*(int *)&this->field_0x6c != 6)))) {
    return false;
  }
  return true;
}

// SerializeCompressedData @ 147418d40

void __thiscall
FUECompressedAnimData::SerializeCompressedData(FUECompressedAnimData *this,FArchive *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  byte *pbVar4;
  uint *puVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte local_res8 [8];
  uint local_res10 [2];
  undefined4 uStack_c;
  
  puVar1 = &this->field_0x8;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
    }
  }
  else {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_res8[0] = this->field_0x60;
  plVar3 = *(longlong **)&param_1->field_0x8;
  pbVar4 = (byte *)*plVar3;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((byte *)plVar3[1] < pbVar4 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *pbVar4;
      *plVar3 = *plVar3 + 1;
    }
  }
  else if ((byte *)plVar3[1] < pbVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    *(uint *)&this->field_0x60 = (uint)local_res8[0];
  }
  else {
    local_res8[0] = *pbVar4;
    *plVar3 = *plVar3 + 1;
    *(uint *)&this->field_0x60 = (uint)local_res8[0];
  }
  ::operator<<(param_1,(AnimationCompressionFormat *)&this->field_0x64);
  ::operator<<(param_1,(AnimationCompressionFormat *)&this->field_0x68);
  ::operator<<(param_1,(AnimationCompressionFormat *)&this->field_0x6c);
  local_res10[0] = *(uint *)&this->field_0x40;
  plVar3 = *(longlong **)&param_1->field_0x8;
  puVar5 = (uint *)*plVar3;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)plVar3[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *puVar5;
      *plVar3 = *plVar3 + 4;
    }
  }
  else {
    if ((uint *)plVar3[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *puVar5;
      *plVar3 = *plVar3 + 4;
    }
    uVar7 = local_res10[0];
    if ((int)local_res10[0] < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(undefined8 *)&this->field_0x38 = 0;
    *(ulonglong *)&this->field_0x40 = CONCAT44(uStack_c,uVar7);
  }
  SerializeView<int>(param_1,(TArrayView<int,int> *)&this->field_0x10);
  SerializeView<int>(param_1,(TArrayView<int,int> *)&this->field_0x20);
  puVar1 = &this->field_0x30;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
    }
  }
  else {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(this);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// GetString<1> @ 14d3875c0

TStringView<char8_t> * __thiscall
UE::Trace::FResponse::GetString<1>
          (FResponse *this,TStringView<char8_t> *__return_storage_ptr__,char *param_1,
          char (*param_2) [1])

{
  TStringView<char8_t> local_38;
  <lambda_1> local_28;
  
  local_28.DefaultView._12_4_ = local_38._12_4_;
  local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
  local_28.DefaultView.Size = 0;
  local_38.DataPtr = (uchar *)param_2;
  local_28.__this = this;
  local_28.DefaultView.DataPtr = (uchar *)param_2;
  GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<1>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,param_1,&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetString<8> @ 14d387620

TStringView<char8_t> * __thiscall
UE::Trace::FResponse::GetString<8>
          (FResponse *this,TStringView<char8_t> *__return_storage_ptr__,char *param_1,
          char (*param_2) [8])

{
  TStringView<char8_t> local_38;
  <lambda_1> local_28;
  
  local_38.Size = 7;
  local_28.DefaultView._12_4_ = local_38._12_4_;
  local_28.DefaultView.Size = 7;
  local_38.DataPtr = (uchar *)param_2;
  local_28.__this = this;
  local_28.DefaultView.DataPtr = (uchar *)param_2;
  GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<8>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,param_1,&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetString<9> @ 14d387680

TStringView<char8_t> * __thiscall
UE::Trace::FResponse::GetString<9>
          (FResponse *this,TStringView<char8_t> *__return_storage_ptr__,char *param_1,
          char (*param_2) [9])

{
  TStringView<char8_t> local_38;
  <lambda_1> local_28;
  
  local_38.Size = 8;
  local_28.DefaultView._12_4_ = local_38._12_4_;
  local_28.DefaultView.Size = 8;
  local_38.DataPtr = (uchar *)param_2;
  local_28.__this = this;
  local_28.DefaultView.DataPtr = (uchar *)param_2;
  GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<9>_::__l2::<lambda_1>_>
            (this,__return_storage_ptr__,param_1,&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetStringArray @ 14d39f130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d39f4c4) */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __thiscall
UE::Trace::FResponse::GetStringArray
          (FResponse *this,char *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  byte bVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 auStack_278 [32];
  FString local_258;
  FCborContext local_248;
  FCborReader local_228;
  FArchiveState local_208;
  ulonglong local_178;
  FResponse *local_170;
  undefined8 local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_208._padding_ = 0;
  local_208.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_208.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_208.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_208.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_208._40_8_ = 0;
  local_208.ArSerializingDefaults = 0;
  local_208.ArPortFlags = 0;
  local_208.ArMaxSerializeSize = 0;
  local_208.ArUEVer.FileVersionUE4 = 0;
  local_208.ArUEVer.FileVersionUE5 = 0;
  local_208.ArLicenseeUEVer = 0;
  local_208.ArEngineVer.Major = 0;
  local_208.ArEngineVer.Minor = 0;
  local_208.ArEngineVer.Patch = 0;
  local_208.ArEngineVer._6_2_ = 0;
  local_208.ArEngineVer.Changelist = 0;
  local_208.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_208.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_208.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_208.SerializedProperty = (FProperty *)0x0;
  local_208.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_208.bCustomVersionsAreReset = false;
  local_208._129_7_ = 0;
  local_208.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_208);
  local_208._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_168 = 0x7fffffffffffffff;
  local_178 = 0;
  local_170 = this;
  FArchiveState::SetIsLoading(&local_208,true);
  (**(code **)(local_208._padding_ + 0x108))(&local_208,0);
  FCborReader::FCborReader(&local_228,(FArchive *)&local_208,BigEndian);
  local_248.Header.Header = 0x1c;
  local_248.RawTextValue.ArrayNum = 0;
  local_248.RawTextValue.ArrayMax = 0;
  local_248.field1_0x8.IntValue = 0;
  local_248.RawTextValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar4 = FCborReader::ReadNext(&local_228,&local_248);
  if (bVar4) {
    do {
      bVar8 = local_248.Header.Header & 0xe0;
      if ((bVar8 == 0x60) || (bVar8 == 0x40)) {
        if ((local_248.Header.Header != 0xff) &&
           (((((bVar8 - 0x40 & 0x9f) != 0 || (bVar8 == 0x60)) && (bVar8 != 0x60)) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawCode() == ECborCode::Break || MajorType() == ECborCode::Array || MajorType() == ECborCode::Map || MajorType() == ECborCode::ByteString || MajorType() == ECborCode::TextString"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                                ,0xd6,L""), bVar4)))) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar6 = strncmp(param_1,(char *)((this->Buffer).AllocatorInstance.Data +
                                        ((local_178 & 0xffffffff) -
                                        (local_248.field1_0x8.UIntValue & 0xffffffff))),
                        local_248.field1_0x8.UIntValue & 0xffffffff);
        if ((iVar6 == 0) && (bVar4 = FCborReader::ReadNext(&local_228,&local_248), bVar4)) {
          bVar8 = local_248.Header.Header & 0xe0;
          if ((bVar8 == 0x80) || (((bVar8 - 0x40 & 0x9f) == 0 && (bVar8 != 0x80)))) {
            if ((local_248.Header.Header & 0x1f) == 0x1f) goto LAB_14d39f2dd;
            if (bVar8 != 0x80) goto LAB_14d39f2d0;
LAB_14d39f352:
            bVar4 = FCborReader::ReadNext(&local_228,&local_248);
            if (bVar4) goto LAB_14d39f371;
            goto LAB_14d39f4e8;
          }
LAB_14d39f2d0:
          if ((bVar8 == 0xa0) && ((local_248.Header.Header & 0x1f) != 0x1f)) {
LAB_14d39f2dd:
            if (bVar8 == 0x80) goto LAB_14d39f352;
          }
        }
      }
      bVar4 = FCborReader::ReadNext(&local_228,&local_248);
    } while (bVar4);
  }
  bVar4 = false;
  goto LAB_14d39f2fb;
LAB_14d39f371:
  do {
    if ((local_248.Header.Header & 0xe0) != 0x60) {
      if ((local_248.Header.Header & 0xe0) != 0x40) break;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MajorType() == ECborCode::TextString",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                         ,0x100,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FVar3.Data = local_248.RawTextValue.AllocatorInstance.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    if (local_248.RawTextValue.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      local_48 = 0;
      local_50 = (FScriptContainerElement *)0x0;
    }
    else {
      sVar7 = strlen((char *)local_248.RawTextValue.AllocatorInstance.Data);
      local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)FVar3.Data,(int)sVar7);
      uVar1 = local_48 + 1;
      uVar10 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar10 = 0;
          goto LAB_14d39f3fc;
        }
      }
      else {
LAB_14d39f3fc:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)FVar3.Data,(int)sVar7 + 1);
    }
    ::FString::FString(&local_258,(wchar_t *)local_50);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_258.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_258.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_258.Data.ArrayMax;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar4 = FCborReader::ReadNext(&local_228,&local_248);
  } while (bVar4);
LAB_14d39f4e8:
  bVar4 = true;
LAB_14d39f2fb:
  if (local_248.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.RawTextValue.AllocatorInstance.Data);
  }
  FCborReader::~FCborReader(&local_228);
  FArchive::~FArchive((FArchive *)&local_208);
  return bVar4;
}


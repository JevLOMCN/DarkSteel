// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// FDS_ChattingCommonData @ 14b9d7720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_ChattingCommonData * __thiscall
FDS_ChattingCommonData::FDS_ChattingCommonData
          (FDS_ChattingCommonData *this,FDS_ChattingBaseTableRow *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FDS_ChattingCommonData *pFVar4;
  UDS_LogManager *pUVar5;
  FDS_ResourceColorTableRow *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_2b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  (this->ChannelNameID).ID = 0;
  (this->ChannelNameID)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->Commands).ArrayMax = 0;
  piVar1 = &(this->Commands).ArrayMax;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  if (param_1 == (FDS_ChattingBaseTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<978511124758528027>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChattingDefines.cpp"
                       ,0x1b,"InChattingBaseTableRow");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ChattingCommonData *)(*pcVar2)();
      return pFVar4;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"FDS_ChattingCommonData::FDS_ChattingCommonData",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_268.Ptr,0x1d,L"InChattingBaseTableRow is null.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  else {
    this->ChattingType = param_1->ChattingType;
    this->BaseTableID = param_1->ID;
    this->ChatIconID = param_1->ID_SubjectImage;
    (this->ChannelNameID).ID = (param_1->ID_ChattingChannelName).ID;
    this->CommandNumber = param_1->ChattingNumber;
    (this->Commands).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Commands).AllocatorInstance,0,piVar1);
    }
    pFVar6 = FDS_ResourceColorTableRow::Get((longlong)param_1->ID_ChattingColor,true);
    if (pFVar6 == (FDS_ResourceColorTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_ChattingCommonData::FDS_ChattingCommonData",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_148.Ptr,0x2d,
                   L"[Chat] FDS_ResourceColorTableRow is nullptr (%d).");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      fVar8 = FLinearColor::White.field0_0x0._0_4_;
      fVar9 = FLinearColor::White.field0_0x0._4_4_;
      fVar10 = FLinearColor::White.field0_0x0._8_4_;
      fVar7 = FLinearColor::White.field0_0x0._12_4_;
    }
    else {
      fVar8 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.R];
      fVar9 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.G];
      fVar10 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.B];
      fVar7 = (float)(pFVar6->Color).field0_0x0._s_0.A * __real_3b808081;
    }
    (this->Color).field0_0x0._s_0.R = fVar8;
    (this->Color).field0_0x0._s_0.G = fVar9;
    (this->Color).field0_0x0._s_0.B = fVar10;
    (this->Color).field0_0x0._s_0.A = fVar7;
  }
  return this;
}

// AddCommand @ 14b9df110

void __thiscall
FDS_ChattingCommonData::AddCommand(FDS_ChattingCommonData *this,FDS_StringBaseID *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = (this->Commands).ArrayNum;
  piVar1 = &(this->Commands).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Commands).AllocatorInstance,piVar1);
  }
  (this->Commands).ArrayNum = iVar2 + 1;
  pFVar3 = (this->Commands).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
  *(undefined ***)pFVar3 = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar3 + 8) = param_1->ID;
  return;
}

// CheckCommand @ 14b9e2a10

bool __thiscall FDS_ChattingCommonData::CheckCommand(FDS_ChattingCommonData *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Commands).ArrayNum;
  pFVar5 = (this->Commands).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Commands).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_StringBaseID_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
    iVar3 = (param_1->Data).ArrayNum;
    iVar2 = *(int *)(puVar4 + 1);
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar4,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
    }
    else {
      bVar7 = iVar3 + iVar2 == 1;
    }
    if (bVar7) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return true;
}

// GetCommand @ 14b9ee890

FDS_StringBaseID * __thiscall
FDS_ChattingCommonData::GetCommand
          (FDS_ChattingCommonData *this,FDS_StringBaseID *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_StringBaseID *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Commands).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Commands).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FDS_StringBaseID *)(*pcVar1)();
        return pFVar3;
      }
    }
    __return_storage_ptr__->_padding_ = (longlong)&___7FDS_StringBaseID__6B_;
    __return_storage_ptr__->ID =
         *(long64 *)((this->Commands).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  __return_storage_ptr__->ID = 0;
  return __return_storage_ptr__;
}


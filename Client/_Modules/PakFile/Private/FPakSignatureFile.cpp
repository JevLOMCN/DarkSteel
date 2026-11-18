// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// DecryptSignatureAndValidate @ 142a67520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPakSignatureFile::DecryptSignatureAndValidate
          (FPakSignatureFile *this,void *param_1,FString *param_2)

{
  FSHAHash *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FPakSigningFailureHandlerData *lpCriticalSection;
  FStaticBasicLogRecord *pFVar9;
  undefined1 auStack_c8 [32];
  FScriptContainerElement *local_a8;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<unsigned_char_const_,int> local_68;
  longlong local_58;
  longlong lStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->Version == Invalid) {
    if ((byte)LogPakFile._0_1_ < 3) goto LAB_142a6771e;
    if ((param_2->Data).ArrayNum == 0) {
      pFVar9 = &`public:_bool___cdecl_FPakSignatureFile::DecryptSignatureAndValidate(void*___ptr64_const,FString_const&___ptr64)___ptr64'
                ::__l6::LOG_Static;
    }
    else {
      pFVar9 = &`public:_bool___cdecl_FPakSignatureFile::DecryptSignatureAndValidate(void*___ptr64_const,FString_const&___ptr64)___ptr64'
                ::__l6::LOG_Static;
    }
  }
  else {
    local_78 = (this->EncryptedHash).AllocatorInstance.Data;
    iVar8 = (this->EncryptedHash).ArrayNum;
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_68._12_4_ = uStack_6c;
    local_68.ArrayNum = iVar8;
    local_68.DataPtr = (uchar *)local_78;
    iStack_70 = iVar8;
    iVar8 = FRSA::DecryptPublic(&local_68,&this->SignatureData,param_1);
    if (0x14 < iVar8) {
      iVar8 = (this->SignatureData).ArrayNum;
      pFVar1 = &this->DecryptedHash;
      pFVar3 = (this->SignatureData).AllocatorInstance.Data;
      pFVar2 = pFVar3 + (longlong)iVar8 + -0x14;
      uVar5 = *(undefined8 *)(pFVar2 + 8);
      *(undefined8 *)pFVar1->Hash = *(undefined8 *)pFVar2;
      *(undefined8 *)((this->DecryptedHash).Hash + 8) = uVar5;
      *(undefined4 *)((this->DecryptedHash).Hash + 0x10) =
           *(undefined4 *)(pFVar3 + (longlong)iVar8 + -4);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&this->SignatureData,iVar8 + -0x14,Default);
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0;
      FSHA1::HashBuffer((this->ChunkHashes).AllocatorInstance.Data,
                        (longlong)(this->ChunkHashes).ArrayNum << 2,(uchar *)&local_58);
      if (((*(longlong *)pFVar1->Hash == local_58) &&
          (*(longlong *)((this->DecryptedHash).Hash + 8) == lStack_50)) &&
         (*(int *)((this->DecryptedHash).Hash + 0x10) == local_48)) {
        return true;
      }
      if (2 < (byte)LogPakFile._0_1_) {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        BytesToHex((uchar *)&local_58,0x14,&local_88);
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8 = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          local_a8 = local_88.Data.AllocatorInstance.Data;
        }
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        BytesToHex(pFVar1->Hash,0x14,&local_98);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_FPakSignatureFile::DecryptSignatureAndValidate(void*___ptr64_const,FString_const&___ptr64)___ptr64'
                    ::__l34::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_142a6771e;
    }
    if ((byte)LogPakFile._0_1_ < 3) goto LAB_142a6771e;
    pFVar9 = &`public:_bool___cdecl_FPakSignatureFile::DecryptSignatureAndValidate(void*___ptr64_const,FString_const&___ptr64)___ptr64'
              ::__l54::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogPakFile);
LAB_142a6771e:
  lpCriticalSection = FPakPlatformFile::GetPakSigningFailureHandlerData();
  if (lpCriticalSection != (FPakSigningFailureHandlerData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&lpCriticalSection->MasterSignatureTableCheckFailedDelegate,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return false;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Serialize @ 142a9f1a0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakSignatureFile::Serialize(FPakSignatureFile *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  EVersion *pEVar3;
  uint local_res10 [6];
  
  local_res10[0] = 0x73832daa;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (((param_1->field_0x28 & 1) == 0) || (local_res10[0] == 0x73832daa)) {
    pEVar3 = (EVersion *)**(undefined8 **)&param_1->field_0x8;
    if ((EVersion *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->Version);
      }
    }
    else {
      this->Version = *pEVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&this->EncryptedHash);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->ChunkHashes);
  }
  else {
    this->Version = Invalid;
    piVar1 = &(this->EncryptedHash).ArrayMax;
    (this->EncryptedHash).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->EncryptedHash).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->ChunkHashes).ArrayMax;
    (this->ChunkHashes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ChunkHashes).AllocatorInstance,0,piVar1);
      return;
    }
  }
  return;
}


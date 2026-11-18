// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 3

// FOutputDeviceTestExit @ 148d9c130

FOutputDeviceTestExit * __thiscall
FOutputDeviceTestExit::FOutputDeviceTestExit
          (FOutputDeviceTestExit *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  pTVar1 = &this->ExitPhrases;
  this->_padding_ = (longlong)&___7FOutputDeviceTestExit__6B_;
  piVar2 = &(this->ExitPhrases).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->ExitPhrases).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  this->FoundExitPhrase = (FString *)0x0;
  return this;
}

// ~FOutputDeviceTestExit @ 148d9caf0

void __thiscall FOutputDeviceTestExit::~FOutputDeviceTestExit(FOutputDeviceTestExit *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOutputDeviceTestExit__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ExitPhrases).AllocatorInstance.Data,(this->ExitPhrases).ArrayNum);
  pFVar1 = (this->ExitPhrases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// Serialize @ 148db1cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceTestExit::Serialize
          (FOutputDeviceTestExit *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  uint uVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  int iVar4;
  ulonglong uVar5;
  size_t sVar6;
  wchar_t wVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  if ((this->FoundExitPhrase == (FString *)0x0) && (!GIsRequestingExit)) {
    uVar1 = (this->ExitPhrases).ArrayNum;
    uVar5 = (ulonglong)(int)uVar1;
    pFVar12 = (this->ExitPhrases).AllocatorInstance.Data;
    pFVar11 = pFVar12 + uVar5 * 0x10;
LAB_148db1d50:
    while( true ) {
      if ((this->ExitPhrases).ArrayNum != (int)uVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar11) {
        return;
      }
      if (*(int *)(pFVar12 + 8) == 0) break;
      pwVar8 = *(wchar_t **)&pFVar12->field_0x0;
      if (pwVar8 != (wchar_t *)0x0) goto LAB_148db1d85;
LAB_148db1e92:
      uVar5 = (ulonglong)uVar1;
      pFVar12 = pFVar12 + 0x10;
    }
    pwVar8 = L"";
LAB_148db1d85:
    if (param_1 == (wchar_t *)0x0) goto LAB_148db1e92;
    wVar3 = *pwVar8;
    wVar2 = -(ushort)((ushort)wVar3 - 0x61 < 0x1a) & 0x20;
    if (wVar3 != wVar2) {
      sVar6 = wcslen(pwVar8);
      wVar7 = *param_1;
      pwVar10 = param_1;
      if (wVar7 == L'\0') goto LAB_148db1e92;
      do {
        pwVar9 = pwVar10 + 1;
        if (((wchar_t)(wVar7 - (-(ushort)((ushort)wVar7 - 0x61 < 0x1a) & 0x20)) ==
             (wchar_t)(wVar3 - wVar2)) &&
           (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar9,pwVar8 + 1,(longlong)((int)sVar6 + -1))
           , iVar4 == 0)) {
          if (pwVar10 != (wchar_t *)0x0) goto LAB_148db1e10;
          goto LAB_148db1e92;
        }
        wVar7 = *pwVar9;
        pwVar10 = pwVar9;
      } while (wVar7 != L'\0');
      uVar5 = (ulonglong)uVar1;
      pFVar12 = pFVar12 + 0x10;
      goto LAB_148db1d50;
    }
LAB_148db1e10:
    wVar3 = *param_1;
    pwVar8 = param_1;
    if (wVar3 != L'\0') {
      while ((pwVar10 = pwVar8 + 1,
             (wchar_t)(wVar3 - (-(ushort)((ushort)wVar3 - 0x61 < 0x1a) & 0x20)) != 0x2d ||
             (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar10,L"testexit=",9), iVar4 != 0))) {
        wVar3 = *pwVar10;
        pwVar8 = pwVar10;
        if (wVar3 == L'\0') goto LAB_148db1e5e;
      }
      if (pwVar8 != (wchar_t *)0x0) goto LAB_148db1e92;
    }
LAB_148db1e5e:
    this->FoundExitPhrase = (FString *)pFVar12;
  }
  return;
}


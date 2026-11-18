// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 146

// FString @ 14147ebf0

FString * __thiscall FString::FString(FString *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).ArrayMax;
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  return this;
}

// ~FString @ 141481790

void __thiscall FString::~FString(FString *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator/=<char> @ 1414e7520

FString * __thiscall FString::operator/=<char>(FString *this,char *param_1)

{
  size_t sVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_10[1] = 0;
  FVar3.Data = (FScriptContainerElement *)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar1 = strlen(param_1);
    uVar2 = (int)sVar1 + 1;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar2,&local_18,0,local_10 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar2,&local_18,local_10,local_10 + 1);
    FVar3.Data = local_18.Data;
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_18.Data,uVar2,param_1,uVar2);
  }
  iVar4 = local_10[0] + -1;
  if (local_10[0] == 0) {
    iVar4 = 0;
  }
  PathAppend(this,(wchar_t *)FVar3.Data,iVar4);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return this;
}

// FString @ 141584690

FString * __thiscall FString::FString(FString *this,FString *param_1)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = (param_1->Data).ArrayNum;
  (this->Data).ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return this;
}

// FString @ 1415846c0

FString * __thiscall FString::FString(FString *this,int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar2 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
    }
    else if (0 < param_1) {
      uVar7 = param_1 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar3,param_1,param_2,param_1);
      *(undefined2 *)(pFVar3 + (longlong)param_1 * 2) = 0;
    }
  }
  return this;
}

// FString @ 1415847d0

FString * __thiscall FString::FString(FString *this,int param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar2 = 0;
  if ((param_2 != (ushort *)0x0) && (*param_2 != 0)) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
    }
    else if (0 < param_1) {
      uVar7 = param_1 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      FGenericPlatformString::Memcpy(pFVar3,param_2,(longlong)param_1 * 2);
      *(undefined2 *)(pFVar3 + (longlong)param_1 * 2) = 0;
    }
  }
  return this;
}

// FString @ 1415848e0

FString * __thiscall FString::FString(FString *this,int param_1,uchar *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  uint uVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_2 != (uchar *)0x0) && (*param_2 != '\0')) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,param_1);
    if (0 < iVar6) {
      uVar8 = iVar6 + 1;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,(ForAnyElementType *)this,*piVar1,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      UE::Core::Private::Convert((wchar_t *)pFVar3,iVar6,param_2,param_1);
      *(undefined2 *)(pFVar3 + (longlong)iVar6 * 2) = 0;
    }
  }
  return this;
}

// FString @ 141584a00

FString * __thiscall FString::FString(FString *this,int param_1,wchar_t *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar2 = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
    }
    else if (0 < param_1) {
      uVar7 = param_1 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      FGenericPlatformString::Memcpy(pFVar3,param_2,(longlong)param_1 * 2);
      *(undefined2 *)(pFVar3 + (longlong)param_1 * 2) = 0;
    }
  }
  return this;
}

// FString @ 141584b10

FString * __thiscall FString::FString(FString *this,char *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar3 = strlen(param_1);
    uVar4 = (int)sVar3 + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    FGenericPlatformString::Convert<char,wchar_t>
              ((wchar_t *)(this->Data).AllocatorInstance.Data,uVar4,param_1,uVar4);
  }
  return this;
}

// FString @ 141584bd0

FString * __thiscall FString::FString(FString *this,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar8 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (char *)0x0) {
    if (param_2 < 1) {
      return this;
    }
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < 1) {
      return this;
    }
  }
  else {
    if ((param_2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExtraSlack >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                           ,0xa6,L"Unable to construct string with negative slack"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != '\0') {
      sVar6 = strlen(param_1);
      iVar8 = (int)sVar6 + 1;
      uVar7 = iVar8 + param_2;
      if (-1 < (int)uVar7) {
        if (*piVar2 < (int)uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar7,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        FGenericPlatformString::Convert<char,wchar_t>
                  ((wchar_t *)(this->Data).AllocatorInstance.Data,iVar8,param_1,iVar8);
        return this;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (param_2 < 1) {
      return this;
    }
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 <= *piVar2) {
      return this;
    }
    iVar8 = *piVar1;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2 + 1,(ForAnyElementType *)this,iVar8,piVar2);
  return this;
}

// FString @ 141584d20

FString * __thiscall FString::FString(FString *this,ushort *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    sVar3 = wcslen((wchar_t *)param_1);
    uVar4 = (int)sVar3 + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((this->Data).AllocatorInstance.Data,param_1,(longlong)(int)uVar4 * 2);
  }
  return this;
}

// FString @ 141584de0

FString * __thiscall FString::FString(FString *this,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar8 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    if (param_2 < 1) {
      return this;
    }
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < 1) {
      return this;
    }
  }
  else {
    if ((param_2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExtraSlack >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                           ,0xa6,L"Unable to construct string with negative slack"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != 0) {
      sVar6 = wcslen((wchar_t *)param_1);
      iVar8 = (int)sVar6 + 1;
      uVar7 = iVar8 + param_2;
      if (-1 < (int)uVar7) {
        if (*piVar2 < (int)uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar7,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        FGenericPlatformString::Memcpy
                  ((this->Data).AllocatorInstance.Data,param_1,(longlong)iVar8 * 2);
        return this;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (param_2 < 1) {
      return this;
    }
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 <= *piVar2) {
      return this;
    }
    iVar8 = *piVar1;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2 + 1,(ForAnyElementType *)this,iVar8,piVar2);
  return this;
}

// FString @ 141584f30

FString * __thiscall FString::FString(FString *this,uchar *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_1 != (uchar *)0x0) && (*param_1 != '\0')) {
    sVar4 = strlen((char *)param_1);
    iVar5 = (int)sVar4 + 1;
    uVar3 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,iVar5);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,(ForAnyElementType *)this,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,(ForAnyElementType *)this,piVar1,piVar2);
    UE::Core::Private::Convert((wchar_t *)(this->Data).AllocatorInstance.Data,uVar3,param_1,iVar5);
  }
  return this;
}

// FString @ 141585010

FString * __thiscall FString::FString(FString *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar5 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 < 1) {
      return this;
    }
    uVar8 = param_2 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < 1) {
      return this;
    }
  }
  else {
    if ((param_2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExtraSlack >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                           ,0xa6,L"Unable to construct string with negative slack"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    if (*param_1 != '\0') {
      sVar7 = strlen((char *)param_1);
      iVar9 = (int)sVar7 + 1;
      iVar5 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,iVar9);
      uVar8 = iVar5 + param_2;
      if (-1 < (int)uVar8) {
        if (*piVar2 < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar8,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,(ForAnyElementType *)this,piVar1,piVar2);
        UE::Core::Private::Convert
                  ((wchar_t *)(this->Data).AllocatorInstance.Data,iVar5,param_1,iVar9);
        return this;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (param_2 < 1) {
      return this;
    }
    uVar8 = param_2 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 <= *piVar2) {
      return this;
    }
    iVar5 = *piVar1;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2 + 1,(ForAnyElementType *)this,iVar5,piVar2);
  return this;
}

// FString @ 141585180

FString * __thiscall FString::FString(FString *this,wchar32 *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Data).ArrayMax;
  *piVar2 = 0;
  *piVar3 = 0;
  if ((param_1 != (wchar32 *)0x0) && (*param_1 != L'\0')) {
    iVar4 = UE::Core::Private::Strlen32(param_1);
    uVar1 = iVar4 + 1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (*piVar3 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,(ForAnyElementType *)this,*piVar2,piVar3);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar1,(ForAnyElementType *)this,piVar2,piVar3);
    FGenericPlatformString::Convert<char32_t,wchar_t>
              ((wchar_t *)(this->Data).AllocatorInstance.Data,uVar1,param_1,uVar1);
  }
  return this;
}

// FString @ 141585250

FString * __thiscall FString::FString(FString *this,wchar_t *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar3 = wcslen(param_1);
    uVar4 = (int)sVar3 + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((this->Data).AllocatorInstance.Data,param_1,(longlong)(int)uVar4 * 2);
  }
  return this;
}

// FString @ 141585310

FString * __thiscall FString::FString(FString *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar8 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 < 1) {
      return this;
    }
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < 1) {
      return this;
    }
  }
  else {
    if ((param_2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExtraSlack >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                           ,0xa6,L"Unable to construct string with negative slack"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != L'\0') {
      sVar6 = wcslen(param_1);
      iVar8 = (int)sVar6 + 1;
      uVar7 = iVar8 + param_2;
      if (-1 < (int)uVar7) {
        if (*piVar2 < (int)uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar7,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        FGenericPlatformString::Memcpy
                  ((this->Data).AllocatorInstance.Data,param_1,(longlong)iVar8 * 2);
        return this;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (param_2 < 1) {
      return this;
    }
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 <= *piVar2) {
      return this;
    }
    iVar8 = *piVar1;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2 + 1,(ForAnyElementType *)this,iVar8,piVar2);
  return this;
}

// FString @ 141585460

FString * __thiscall FString::FString(FString *this)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return this;
}

// operator= @ 14158bcd0

FString * __thiscall FString::operator=(FString *this,wchar_t *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  
  if ((this->Data).AllocatorInstance.Data != (FScriptContainerElement *)param_1) {
    if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
      uVar4 = 0;
    }
    else {
      sVar3 = wcslen(param_1);
      uVar4 = (int)sVar3 + 1;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
    }
    piVar1 = &(this->Data).ArrayMax;
    piVar2 = &(this->Data).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)this,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar4,(ForAnyElementType *)this,piVar2,piVar1);
    if (uVar4 != 0) {
      memcpy((this->Data).AllocatorInstance.Data,param_1,(ulonglong)uVar4 * 2);
    }
  }
  return this;
}

// operator[] @ 14158cf40

wchar_t * __thiscall FString::operator[](FString *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (param_1 < iVar4) goto LAB_14158cfa1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x107,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar2)();
    return pwVar5;
  }
LAB_14158cfa1:
  return (wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)param_1 * 2);
}

// AppendChar @ 1415ac600

FString * __thiscall FString::AppendChar(FString *this,wchar_t param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != L'\0') {
    iVar2 = (this->Data).ArrayNum;
    piVar1 = &(this->Data).ArrayNum;
    uVar7 = iVar2 - 1;
    if (iVar2 < 1) {
      uVar7 = 0;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(iVar2 < 1) + 1,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    uVar6 = 0;
    if ((int)uVar7 < *piVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
    }
    *(wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2) = param_1;
    uVar7 = uVar7 + 1;
    uVar6 = 0;
    if ((int)uVar7 < *piVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
    }
    *(undefined2 *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2) = 0;
  }
  return this;
}

// AppendChars @ 1415acec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::AppendChars(FString *this,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,(uint)(iVar8 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar8 = iVar8 - (uint)(iVar8 != 0);
  lVar4 = (longlong)iVar8 * 2;
  pFVar9 = (this->Data).AllocatorInstance.Data + lVar4;
  pwVar7 = FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar9,param_2,param_1,param_2);
  if (pwVar7 == (wchar_t *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,piVar1,piVar2);
    pwVar7 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)((this->Data).AllocatorInstance.Data + lVar4),param_2,param_1,
                        param_2);
  }
  else {
    iVar6 = (int)((longlong)pwVar7 - (longlong)pFVar9 >> 1);
    if (iVar6 < param_2) {
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar8 + 1 + iVar6,No);
    }
  }
  *pwVar7 = L'\0';
  return;
}

// AppendChars @ 1415ad010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::AppendChars(FString *this,ushort *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  ulong64 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined2 *puVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  piVar1 = &(this->Data).ArrayNum;
  iVar10 = *piVar1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,(uint)(iVar10 == 0) + param_2,(ForAnyElementType *)this,piVar1,
             &(this->Data).ArrayMax);
  uVar3 = (longlong)param_2 * 2;
  iVar10 = iVar10 - (uint)(iVar10 != 0);
  lVar4 = (longlong)iVar10 * 2;
  pFVar9 = (this->Data).AllocatorInstance.Data + lVar4;
  pvVar7 = FGenericPlatformString::Memcpy(pFVar9,param_1,uVar3);
  puVar8 = (undefined2 *)((longlong)pvVar7 + uVar3);
  if (puVar8 == (undefined2 *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    pvVar7 = FGenericPlatformString::Memcpy
                       ((this->Data).AllocatorInstance.Data + lVar4,param_1,uVar3);
    puVar8 = (undefined2 *)((longlong)pvVar7 + uVar3);
  }
  else {
    iVar6 = (int)((longlong)puVar8 - (longlong)pFVar9 >> 1);
    if (iVar6 < param_2) {
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar10 + 1 + iVar6,No);
    }
  }
  *puVar8 = 0;
  return;
}

// AppendChars @ 1415ad160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::AppendChars(FString *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  piVar1 = &(this->Data).ArrayNum;
  iVar8 = *piVar1;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,(uint)(iVar8 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar8 = iVar8 - (uint)(iVar8 != 0);
  lVar4 = (longlong)iVar8 * 2;
  pFVar9 = (this->Data).AllocatorInstance.Data + lVar4;
  pwVar7 = UE::Core::Private::Convert((wchar_t *)pFVar9,param_2,param_1,param_2);
  if (pwVar7 == (wchar_t *)0x0) {
    iVar8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,param_2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8 - param_2,(ForAnyElementType *)this,piVar1,piVar2);
    pwVar7 = UE::Core::Private::Convert
                       ((wchar_t *)((this->Data).AllocatorInstance.Data + lVar4),iVar8,param_1,
                        param_2);
  }
  else {
    iVar6 = (int)((longlong)pwVar7 - (longlong)pFVar9 >> 1);
    if (iVar6 < param_2) {
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar8 + 1 + iVar6,No);
    }
  }
  *pwVar7 = L'\0';
  return;
}

// AppendChars @ 1415ad2c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::AppendChars(FString *this,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,(uint)(iVar8 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar8 = iVar8 - (uint)(iVar8 != 0);
  lVar4 = (longlong)iVar8 * 2;
  pFVar9 = (this->Data).AllocatorInstance.Data + lVar4;
  pwVar7 = FGenericPlatformString::Convert<char32_t,wchar_t>
                     ((wchar_t *)pFVar9,param_2,param_1,param_2);
  if (pwVar7 == (wchar_t *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,piVar1,piVar2);
    pwVar7 = FGenericPlatformString::Convert<char32_t,wchar_t>
                       ((wchar_t *)((this->Data).AllocatorInstance.Data + lVar4),param_2,param_1,
                        param_2);
  }
  else {
    iVar6 = (int)((longlong)pwVar7 - (longlong)pFVar9 >> 1);
    if (iVar6 < param_2) {
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar8 + 1 + iVar6,No);
    }
  }
  *pwVar7 = L'\0';
  return;
}

// AppendChars @ 1415ad410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::AppendChars(FString *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  ulong64 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined2 *puVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  piVar1 = &(this->Data).ArrayNum;
  iVar10 = *piVar1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,(uint)(iVar10 == 0) + param_2,(ForAnyElementType *)this,piVar1,
             &(this->Data).ArrayMax);
  uVar3 = (longlong)param_2 * 2;
  iVar10 = iVar10 - (uint)(iVar10 != 0);
  lVar4 = (longlong)iVar10 * 2;
  pFVar9 = (this->Data).AllocatorInstance.Data + lVar4;
  pvVar7 = FGenericPlatformString::Memcpy(pFVar9,param_1,uVar3);
  puVar8 = (undefined2 *)((longlong)pvVar7 + uVar3);
  if (puVar8 == (undefined2 *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    pvVar7 = FGenericPlatformString::Memcpy
                       ((this->Data).AllocatorInstance.Data + lVar4,param_1,uVar3);
    puVar8 = (undefined2 *)((longlong)pvVar7 + uVar3);
  }
  else {
    iVar6 = (int)((longlong)puVar8 - (longlong)pFVar9 >> 1);
    if (iVar6 < param_2) {
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar10 + 1 + iVar6,No);
    }
  }
  *puVar8 = 0;
  return;
}

// AppendInt64 @ 1415adda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FString::AppendInt64(FString *this,long64 param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  long64 lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [28];
  wchar_t awStack_5c [33];
  wchar_t local_1a;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pwVar2 = (wchar_t *)&local_18;
  lVar3 = param_1;
  iVar5 = 0x20;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + -1;
    pwVar2 = pwVar2 + -1;
    lVar1 = lVar3 / 10;
    *pwVar2 = L"9876543210123456789"[lVar3 % 10 + 9];
    lVar3 = lVar1;
  } while (lVar1 != 0);
  if (param_1 < 0) {
    iVar5 = iVar4 + -2;
    awStack_5c[iVar4] = L'-';
  }
  AppendChars(this,awStack_5c + (longlong)iVar5 + 2,0x20 - iVar5);
  return;
}

// AppendInt @ 1415ae020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FString::AppendInt(FString *this,int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [28];
  wchar_t awStack_3c [17];
  wchar_t local_1a;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pwVar2 = (wchar_t *)&local_18;
  iVar3 = param_1;
  iVar5 = 0x10;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + -1;
    pwVar2 = pwVar2 + -1;
    iVar1 = iVar3 / 10;
    *pwVar2 = L"9876543210123456789"[iVar3 % 10 + 9];
    iVar3 = iVar1;
  } while (iVar1 != 0);
  if (param_1 < 0) {
    iVar5 = iVar4 + -2;
    awStack_3c[iVar4] = L'-';
  }
  AppendChars(this,awStack_3c + (longlong)iVar5 + 2,0x10 - iVar5);
  return;
}

// AppendfImpl @ 1415ae2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FString::AppendfImpl(FString *param_1,wchar_t *param_2)

{
  wchar_t *_Str;
  int iVar1;
  ulong64 *puVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int iVar5;
  undefined1 local_res18 [16];
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined1 *local_460;
  wchar_t local_448 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  iVar5 = 0x200;
  puVar2 = __local_stdio_printf_options();
  pwVar3 = (wchar_t *)0x0;
  local_468 = 0;
  local_460 = local_res18;
  iVar1 = __stdio_common_vswprintf(*puVar2,local_448,0x200,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  _Str = local_448;
  if (0x1ff < iVar1) goto LAB_1415ae380;
  while (iVar1 == -1) {
LAB_1415ae380:
    do {
      iVar5 = iVar5 * 2;
      pwVar3 = FMemory::Realloc(pwVar3,(longlong)iVar5 * 2,0);
      local_460 = local_res18;
      local_468 = 0;
      iVar1 = __stdio_common_vswprintf(*puVar2,pwVar3,(longlong)iVar5,param_2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      _Str = pwVar3;
    } while (iVar5 <= iVar1);
  }
  _Str[iVar1] = L'\0';
  sVar4 = wcslen(_Str);
  AppendChars(param_1,_Str,(int)sVar4);
  if (iVar5 != 0x200) {
    FMemory::Free(_Str);
  }
  return;
}

// AssignRange @ 1415ae750

void __thiscall FString::AssignRange(FString *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  piVar1 = &(this->Data).ArrayNum;
  if (param_2 == 0) {
    piVar2 = &(this->Data).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)this,0,piVar2);
      return;
    }
  }
  else {
    iVar7 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar7 = 0;
    }
    uVar10 = param_2 + 1;
    if (iVar7 < param_2) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      piVar2 = &(this->Data).ArrayMax;
      *piVar1 = 0;
      if (*piVar2 != uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar10,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar10,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar4 = (this->Data).AllocatorInstance.Data;
      sVar3 = (longlong)param_2 * 2;
      memcpy(pFVar4,param_1,sVar3);
      *(undefined2 *)(pFVar4 + sVar3) = 0;
    }
    else {
      pFVar4 = (this->Data).AllocatorInstance.Data;
      sVar3 = (longlong)param_2 * 2;
      memmove(pFVar4,param_1,sVar3);
      uVar8 = iVar7 - param_2;
      *(undefined2 *)(pFVar4 + sVar3) = 0;
      uVar9 = 0;
      if ((int)(uVar10 + uVar8) <= *piVar1) {
        uVar9 = ~(uVar10 | uVar8) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar8 != 0) {
        pFVar4 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2;
        iVar7 = (*piVar1 - uVar10) - uVar8;
        if (iVar7 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar8 * 2,(longlong)iVar7 * 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(ForAnyElementType *)this,*piVar1,&(this->Data).ArrayMax);
      }
    }
  }
  return;
}

// Chr @ 1415b01b0

FString * __cdecl FString::Chr(FString *__return_storage_ptr__,wchar_t param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t local_res10 [4];
  
  local_res10[1] = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 != L'\0') {
    local_res10[0] = param_1;
    sVar3 = wcslen(local_res10);
    uVar4 = (int)sVar3 + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar4,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((__return_storage_ptr__->Data).AllocatorInstance.Data,local_res10,
               (longlong)(int)uVar4 * 2);
  }
  return __return_storage_ptr__;
}

// ChrN @ 1415b0490

FString * __cdecl FString::ChrN(FString *__return_storage_ptr__,int param_1,wchar_t param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCharacters >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x52e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  uVar7 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_1 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  uVar8 = uVar7;
  if (0 < param_1) {
    do {
      uVar6 = *piVar2 - 1;
      if (*piVar2 == 0) {
        uVar6 = 0;
      }
      if (((int)uVar6 <= (int)uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(wchar_t *)((__return_storage_ptr__->Data).AllocatorInstance.Data + uVar8) = param_2;
      uVar8 = uVar8 + 2;
    } while ((int)uVar6 < param_1);
  }
  uVar6 = 0;
  if (param_1 < (__return_storage_ptr__->Data).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)param_1 * 2) = 0
  ;
  return __return_storage_ptr__;
}

// ConcatCF @ 1415b21a0

FString * __cdecl
FString::ConcatCF(FString *__return_storage_ptr__,wchar_t *param_1,FString *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType local_38;
  int local_30 [2];
  
  if (param_1 == (wchar_t *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  else {
    sVar4 = wcslen(param_1);
    iVar3 = (int)sVar4;
    if (iVar3 == 0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data
      ;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
    else {
      iVar1 = (param_2->Data).ArrayNum;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30[0] = 0;
      local_30[1] = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      uVar5 = iVar6 + 1 + iVar3;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (0 < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar5,&local_38,0,local_30 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar5,&local_38,local_30,local_30 + 1);
      FVar2.Data = local_38.Data;
      sVar4 = (longlong)iVar3 * 2;
      memcpy(local_38.Data,param_1,sVar4);
      memcpy(FVar2.Data + sVar4,(param_2->Data).AllocatorInstance.Data,(longlong)iVar6 * 2);
      *(undefined2 *)(FVar2.Data + ((longlong)iVar6 + (longlong)iVar3) * 2) = 0;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_30[0];
      (__return_storage_ptr__->Data).ArrayMax = local_30[1];
    }
  }
  return __return_storage_ptr__;
}

// ConcatCF @ 1415b2320

FString * __cdecl
FString::ConcatCF(FString *__return_storage_ptr__,wchar_t *param_1,FString *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType local_38;
  int local_30 [2];
  
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar3 = (int)sVar4;
    if (iVar3 != 0) {
      iVar1 = (param_2->Data).ArrayNum;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30[0] = 0;
      local_30[1] = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      uVar5 = iVar6 + 1 + iVar3;
      if (-1 < (int)uVar5) {
        if (0 < (int)uVar5) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar5,&local_38,0,local_30 + 1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar5,&local_38,local_30,local_30 + 1);
        FVar2.Data = local_38.Data;
        sVar4 = (longlong)iVar3 * 2;
        memcpy(local_38.Data,param_1,sVar4);
        memcpy(FVar2.Data + sVar4,(param_2->Data).AllocatorInstance.Data,(longlong)iVar6 * 2);
        *(undefined2 *)(FVar2.Data + ((longlong)iVar6 + (longlong)iVar3) * 2) = 0;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_30[0];
        (__return_storage_ptr__->Data).ArrayMax = local_30[1];
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  FString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// ConcatFC @ 1415b28e0

FString * __cdecl
FString::ConcatFC(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  int iVar1;
  size_t sVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2 == (wchar_t *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  sVar2 = wcslen(param_2);
  iVar1 = (int)sVar2;
  if (iVar1 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_18,&param_1->Data,(uint)((param_1->Data).ArrayNum == 0) + iVar1);
    AppendChars((FString *)&local_18,param_2,iVar1);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFC @ 1415b29c0

FString * __cdecl
FString::ConcatFC(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  FString local_18;
  
  if (param_2 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_2);
    iVar2 = (int)sVar4;
    if (iVar2 != 0) {
      iVar1 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = iVar2;
      local_18.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (iVar3 = iVar2 + 1, iVar3 == 0)) {
        local_18.Data.ArrayMax = 0;
      }
      else {
        uVar5 = iVar1 + iVar3;
        if ((int)uVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar5,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
        }
      }
      AppendChars(&local_18,param_2,iVar2);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b2ff0

FString * __cdecl
FString::ConcatFF(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_18,&param_1->Data,iVar2);
  AppendChars((FString *)&local_18,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b30a0

FString * __cdecl
FString::ConcatFF(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    FString(__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_18,&param_1->Data,iVar2);
  AppendChars((FString *)&local_18,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b3130

FString * __cdecl
FString::ConcatFF(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  else {
    iVar1 = (param_2->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    uVar3 = iVar4 + local_18.Data.ArrayNum;
    if ((int)uVar3 < local_18.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    AppendChars(&local_18,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b3230

FString * __cdecl
FString::ConcatFF(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum < 2) {
    FString(__return_storage_ptr__,param_2);
  }
  else {
    iVar1 = (param_2->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    uVar3 = iVar4 + local_18.Data.ArrayNum;
    if ((int)uVar3 < local_18.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    AppendChars(&local_18,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFR @ 1415b37f0

FString * __cdecl
FString::ConcatFR(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2,int param_3)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_3 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_18,&param_1->Data,(uint)((param_1->Data).ArrayNum == 0) + param_3);
  AppendChars((FString *)&local_18,param_2,param_3);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFR @ 1415b38a0

FString * __cdecl
FString::ConcatFR(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  uint uVar3;
  FString local_18;
  
  if (param_3 == 0) {
    FString(__return_storage_ptr__,param_1);
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = param_3;
    local_18.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (iVar2 = param_3 + 1, param_3 + 1 == 0)) {
      local_18.Data.ArrayMax = 0;
    }
    else {
      uVar3 = iVar1 + iVar2;
      if ((int)uVar3 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    AppendChars(&local_18,param_2,param_3);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatRF @ 1415b3da0

FString * __cdecl
FString::ConcatRF(FString *__return_storage_ptr__,wchar_t *param_1,int param_2,FString *param_3)

{
  int iVar1;
  size_t _Size;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType local_38;
  int local_30 [2];
  
  if (param_2 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  else {
    iVar1 = (param_3->Data).ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    uVar3 = param_2 + 1 + iVar4;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,&local_38,0,local_30 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,&local_38,local_30,local_30 + 1);
    FVar2.Data = local_38.Data;
    _Size = (longlong)param_2 * 2;
    memcpy(local_38.Data,param_1,_Size);
    memcpy(FVar2.Data + _Size,(param_3->Data).AllocatorInstance.Data,(longlong)iVar4 * 2);
    *(undefined2 *)(FVar2.Data + ((longlong)iVar4 + (longlong)param_2) * 2) = 0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_30[0];
    (__return_storage_ptr__->Data).ArrayMax = local_30[1];
  }
  return __return_storage_ptr__;
}

// ConcatRF @ 1415b3ee0

FString * __cdecl
FString::ConcatRF(FString *__return_storage_ptr__,wchar_t *param_1,int param_2,FString *param_3)

{
  int iVar1;
  size_t _Size;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType local_38;
  int local_30 [2];
  
  if (param_2 == 0) {
    FString(__return_storage_ptr__,param_3);
  }
  else {
    iVar1 = (param_3->Data).ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    uVar3 = param_2 + 1 + iVar4;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,&local_38,0,local_30 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,&local_38,local_30,local_30 + 1);
    FVar2.Data = local_38.Data;
    _Size = (longlong)param_2 * 2;
    memcpy(local_38.Data,param_1,_Size);
    memcpy(FVar2.Data + _Size,(param_3->Data).AllocatorInstance.Data,(longlong)iVar4 * 2);
    *(undefined2 *)(FVar2.Data + ((longlong)iVar4 + (longlong)param_2) * 2) = 0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_30[0];
    (__return_storage_ptr__->Data).ArrayMax = local_30[1];
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4a30

FString * __cdecl
FString::ConstructFromPtrSize(FString *__return_storage_ptr__,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (char *)0x0) {
    if (param_2 == 0) {
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  else if (0 < param_2) {
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar3,param_2,param_1,param_2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4b60

FString * __cdecl
FString::ConstructFromPtrSize(FString *__return_storage_ptr__,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    if (param_2 == 0) {
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  else if (0 < param_2) {
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(pFVar3,param_1,(longlong)param_2 * 2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4c90

FString * __cdecl
FString::ConstructFromPtrSize(FString *__return_storage_ptr__,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 == 0) goto LAB_1415b4d1f;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b4d1f:
  iVar6 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,param_2);
  if (0 < iVar6) {
    uVar8 = iVar6 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar2 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    UE::Core::Private::Convert((wchar_t *)pFVar3,iVar6,param_1,param_2);
    *(undefined2 *)(pFVar3 + (longlong)iVar6 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4dd0

FString * __cdecl
FString::ConstructFromPtrSize(FString *__return_storage_ptr__,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (wchar32 *)0x0) {
    if (param_2 == 0) {
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  else if (0 < param_2) {
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<char32_t,wchar_t>((wchar_t *)pFVar3,param_2,param_1,param_2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4f00

FString * __cdecl
FString::ConstructFromPtrSize(FString *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 == 0) {
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  else if (0 < param_2) {
    uVar7 = param_2 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(pFVar3,param_1,(longlong)param_2 * 2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b5e10

FString * __cdecl
FString::ConstructFromPtrSizeWithSlack
          (FString *__return_storage_ptr__,char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (char *)0x0) {
    if (param_2 == 0) goto LAB_1415b5ea8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b5ea8:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 1) {
    if (0 < param_3) {
      uVar7 = param_3 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    uVar7 = param_3 + 1 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar3,param_2,param_1,param_2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b5fb0

FString * __cdecl
FString::ConstructFromPtrSizeWithSlack
          (FString *__return_storage_ptr__,ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    if (param_2 == 0) goto LAB_1415b6048;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b6048:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 1) {
    if (0 < param_3) {
      uVar7 = param_3 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    uVar7 = param_3 + 1 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(pFVar3,param_1,(longlong)param_2 * 2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b6150

FString * __cdecl
FString::ConstructFromPtrSizeWithSlack
          (FString *__return_storage_ptr__,uchar *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 == 0) goto LAB_1415b61e7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b61e7:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,param_2);
  if (iVar6 < 1) {
    if (0 < param_3) {
      uVar8 = param_3 + 1;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    uVar8 = param_3 + 1 + iVar6;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar2 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    UE::Core::Private::Convert((wchar_t *)pFVar3,iVar6,param_1,param_2);
    *(undefined2 *)(pFVar3 + (longlong)iVar6 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b62f0

FString * __cdecl
FString::ConstructFromPtrSizeWithSlack
          (FString *__return_storage_ptr__,wchar32 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (wchar32 *)0x0) {
    if (param_2 == 0) goto LAB_1415b6388;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b6388:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 1) {
    if (0 < param_3) {
      uVar7 = param_3 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    uVar7 = param_3 + 1 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<char32_t,wchar_t>((wchar_t *)pFVar3,param_2,param_1,param_2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b6490

FString * __cdecl
FString::ConstructFromPtrSizeWithSlack
          (FString *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 == 0) goto LAB_1415b6528;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbb,L"Unable to construct string with a negative size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b6528:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (param_2 < 1) {
    if (0 < param_3) {
      uVar7 = param_3 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    uVar7 = param_3 + 1 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(pFVar3,param_1,(longlong)param_2 * 2);
    *(undefined2 *)(pFVar3 + (longlong)param_2 * 2) = 0;
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b80b0

FString * __cdecl
FString::ConstructWithSlack(FString *__return_storage_ptr__,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (char *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa5,L"Unable to construct string from a null pointer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa6,L"Unable to construct string with negative slack");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (*param_1 == '\0') {
    if (0 < param_2) {
      uVar7 = param_2 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    sVar6 = strlen(param_1);
    iVar8 = (int)sVar6 + 1;
    uVar7 = iVar8 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Convert<char,wchar_t>
              ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar8,param_1,iVar8)
    ;
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b8210

FString * __cdecl
FString::ConstructWithSlack(FString *__return_storage_ptr__,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa5,L"Unable to construct string from a null pointer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa6,L"Unable to construct string with negative slack");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (*param_1 == 0) {
    if (0 < param_2) {
      uVar7 = param_2 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    sVar6 = wcslen((wchar_t *)param_1);
    iVar8 = (int)sVar6 + 1;
    uVar7 = iVar8 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((__return_storage_ptr__->Data).AllocatorInstance.Data,param_1,(longlong)iVar8 * 2);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b8370

FString * __cdecl
FString::ConstructWithSlack(FString *__return_storage_ptr__,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa5,L"Unable to construct string from a null pointer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa6,L"Unable to construct string with negative slack");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*param_1 == '\0') {
    if (0 < param_2) {
      uVar8 = param_2 + 1;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    sVar7 = strlen((char *)param_1);
    iVar9 = (int)sVar7 + 1;
    iVar5 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,iVar9);
    uVar8 = iVar5 + param_2;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar2 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    UE::Core::Private::Convert
              ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar5,param_1,iVar9)
    ;
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b84e0

FString * __cdecl
FString::ConstructWithSlack(FString *__return_storage_ptr__,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  uint uVar7;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar32 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa5,L"Unable to construct string from a null pointer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa6,L"Unable to construct string with negative slack");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*param_1 == L'\0') {
    if (0 < param_2) {
      uVar7 = param_2 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    iVar5 = UE::Core::Private::Strlen32(param_1);
    iVar5 = iVar5 + 1;
    uVar7 = iVar5 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Convert<char32_t,wchar_t>
              ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar5,param_1,iVar5)
    ;
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b8640

FString * __cdecl
FString::ConstructWithSlack(FString *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa5,L"Unable to construct string from a null pointer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa6,L"Unable to construct string with negative slack");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (*param_1 == L'\0') {
    if (0 < param_2) {
      uVar7 = param_2 + 1;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    sVar6 = wcslen(param_1);
    iVar8 = (int)sVar6 + 1;
    uVar7 = iVar8 + param_2;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*piVar2 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((__return_storage_ptr__->Data).AllocatorInstance.Data,param_1,(longlong)iVar8 * 2);
  }
  return __return_storage_ptr__;
}

// ConvertTabsToSpacesInline @ 1415b9220

void __thiscall FString::ConvertTabsToSpacesInline(FString *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FString local_28;
  
  if ((param_1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSpacesPerTab > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x6c5,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while( true ) {
    iVar6 = (this->Data).ArrayNum;
    uVar8 = 0;
    if (iVar6 == 0) {
      pwVar9 = L"";
      uVar14 = uVar8;
    }
    else {
      pwVar9 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      uVar14 = iVar6 - 1;
    }
    pwVar9 = TCString<wchar_t>::Strnstr(pwVar9,uVar14,L"\t",1);
    if (pwVar9 == (wchar_t *)0x0) {
      return;
    }
    if ((this->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    uVar14 = (uint)((longlong)pwVar9 - (longlong)pwVar10 >> 1);
    if (uVar14 == 0xffffffff) break;
    iVar6 = (this->Data).ArrayNum;
    uVar16 = iVar6 - 1;
    if (iVar6 == 0) {
      uVar16 = uVar8;
    }
    uVar5 = uVar16;
    if ((int)(uVar14 + 1) < (int)uVar16) {
      uVar5 = uVar14 + 1;
    }
    uVar11 = uVar8;
    if (0 < (int)uVar5) {
      uVar11 = uVar5;
    }
    if (iVar6 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    ConstructFromPtrSize
              (&local_28,(wchar_t *)((longlong)pwVar9 + (longlong)(int)uVar11 * 2),uVar16 - uVar11);
    iVar6 = (this->Data).ArrayNum;
    uVar16 = iVar6 - 1;
    if (iVar6 == 0) {
      uVar16 = uVar8;
    }
    uVar8 = uVar16;
    if ((int)uVar14 < (int)uVar16) {
      uVar8 = uVar14;
    }
    uVar5 = 0;
    if (0 < (int)uVar8) {
      uVar5 = uVar8;
    }
    uVar8 = 0;
    if (0 < (int)(uVar16 - uVar5)) {
      uVar8 = uVar16 - uVar5;
    }
    uVar16 = 0;
    if ((int)(uVar8 + uVar5) <= iVar6) {
      uVar16 = ~(uVar8 | uVar5) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      _Dst = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 2;
      iVar6 = ((this->Data).ArrayNum - uVar8) - uVar5;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar8 * 2,(longlong)iVar6 * 2);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
    }
    iVar7 = Find(this,L"\n",1,CaseSensitive,FromEnd,uVar14);
    iVar6 = (this->Data).ArrayNum;
    iVar12 = 0;
    iVar13 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar13 = iVar12;
    }
    iVar6 = iVar12;
    if (iVar7 != -1) {
      iVar6 = iVar7;
    }
    uVar8 = param_1 - (iVar13 - iVar6) % param_1;
    if (0 < (int)uVar8) {
      uVar15 = (ulonglong)uVar8;
      do {
        AppendChar(this,L' ');
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = iVar12;
    }
    AppendChars(this,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar6);
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
  }
  return;
}

// CullArray @ 1415bc340

int __cdecl FString::CullArray(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  <lambda_1> local_res8 [4];
  FString local_18;
  
  if (param_1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutArray",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x3ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  local_res8[0].Item = &local_18;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (param_1,local_res8);
  iVar4 = param_1->ArrayNum;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar4;
}

// Empty @ 1415c05c0

void __thiscall FString::Empty(FString *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_1 + 1;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  if (-1 < (int)uVar2) {
    piVar1 = &(this->Data).ArrayMax;
    (this->Data).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar2,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Empty @ 1415c0610

void __thiscall FString::Empty(FString *this)

{
  int *piVar1;
  
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// EndsWith @ 1415c0800

bool __thiscall FString::EndsWith(FString *this,wchar_t *param_1,int param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == IgnoreCase) {
    if (param_2 < 1) {
      return false;
    }
    iVar5 = (this->Data).ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < param_2) {
      return false;
    }
    iVar5 = iVar4 - param_2;
    if (((iVar5 < 0) || (iVar4 <= iVar5)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)iVar5 * 2),
                       param_1);
  }
  else {
    if (param_2 < 1) {
      return false;
    }
    iVar5 = (this->Data).ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < param_2) {
      return false;
    }
    iVar5 = iVar4 - param_2;
    if (((iVar5 < 0) || (iVar4 <= iVar5)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = wcscmp((wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)iVar5 * 2),param_1);
  }
  if (iVar4 != 0) {
    return false;
  }
  return true;
}

// Find @ 1415c1be0

int __thiscall
FString::Find(FString *this,wchar_t *param_1,int param_2,Type param_3,Type param_4,int param_5)

{
  int *piVar1;
  wchar_t wVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FString *this_00;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  FString local_58;
  FString local_48;
  
  uVar17 = (ulonglong)param_2;
  if ((param_2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubStrLen >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x1b3,L"Invalid SubStrLen: %d"), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (param_4 == FromStart) {
    iVar6 = (this->Data).ArrayNum;
    pwVar21 = L"";
    pFVar14 = (FScriptContainerElement *)0x0;
    iVar9 = 0;
    if (iVar6 == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      iVar9 = iVar6 + -1;
    }
    pFVar10 = (FScriptContainerElement *)pwVar16;
    if ((param_5 != -1) && (0 < iVar9)) {
      iVar6 = iVar9 + -1;
      if (param_5 < iVar9 + -1) {
        iVar6 = param_5;
      }
      iVar7 = 0;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      pFVar10 = (FScriptContainerElement *)((longlong)pwVar16 + (longlong)iVar7 * 2);
      iVar9 = (int)((longlong)((longlong)pwVar16 + ((longlong)iVar9 * 2 - (longlong)pFVar10)) >> 1);
    }
    if (param_3 == IgnoreCase) {
      if (param_2 < 1) {
        pFVar8 = pFVar10;
        if ((param_2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("FindLen >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                               ,0x34d,L"Invalid FindLen: %d"), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      else {
        pFVar8 = pFVar14;
        if (iVar9 < param_2) {
          if ((iVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InStrLen >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                 ,0x352,L"Invalid InStrLen: %d"), bVar5)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
        }
        else {
          wVar2 = *param_1;
          pFVar11 = pFVar10;
          do {
            pFVar4 = pFVar11;
            pFVar8 = pFVar14;
            if (pFVar10 + ((longlong)iVar9 - uVar17) * 2 < pFVar4) break;
            pFVar11 = pFVar4 + 2;
          } while (((wchar_t)(*(wchar_t *)pFVar4 -
                             (-(ushort)((ushort)*(wchar_t *)pFVar4 - 0x61 < 0x1a) & 0x20)) !=
                    (wchar_t)(wVar2 - (-(ushort)((ushort)wVar2 - 0x61 < 0x1a) & 0x20))) ||
                  (iVar6 = FGenericPlatformStricmp::Strnicmp
                                     ((wchar_t *)pFVar11,param_1 + 1,uVar17 - 1), pFVar8 = pFVar4,
                  iVar6 != 0));
        }
      }
    }
    else {
      pFVar8 = (FScriptContainerElement *)
               TCString<wchar_t>::Strnstr((wchar_t *)pFVar10,iVar9,param_1,param_2);
    }
    if (pFVar8 == (FScriptContainerElement *)0x0) {
      return -1;
    }
    if ((this->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    return (int)((longlong)pFVar8 - (longlong)pwVar21 >> 1);
  }
  if (param_3 == IgnoreCase) {
    local_58.Data.ArrayNum = (this->Data).ArrayNum;
    lVar12 = (longlong)local_58.Data.ArrayNum;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,pFVar14,lVar12 * 2);
    }
    ToUpperInline(&local_58);
    this_00 = ConstructFromPtrSize(&local_48,param_1,param_2);
    ToUpperInline(this_00);
    pFVar14 = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = (this_00->Data).ArrayNum;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    iVar6 = iVar9 + -1;
    pFVar10 = pFVar14;
    if (iVar9 == 0) {
      iVar6 = 0;
      pFVar10 = (FScriptContainerElement *)L"";
    }
    iVar6 = Find(&local_58,(wchar_t *)pFVar10,iVar6,CaseSensitive,param_4,param_5);
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return iVar6;
    }
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return iVar6;
  }
  piVar1 = &(this->Data).ArrayNum;
  iVar6 = param_2;
  if (param_2 < 1) {
    iVar6 = 1;
  }
  uVar13 = 0;
  if (param_5 != -1) {
    uVar19 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar19 = uVar13;
    }
    if (param_5 < (int)uVar19) goto LAB_1415c1f3a;
  }
  param_5 = *piVar1 - 1;
  if (*piVar1 == 0) {
    param_5 = uVar13;
  }
LAB_1415c1f3a:
  iVar6 = param_5 - iVar6;
  lVar12 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar18 = lVar12 * 2 - (longlong)param_1;
    do {
      uVar15 = 0;
      pwVar21 = param_1;
      uVar20 = 0;
      uVar19 = uVar13;
      iVar9 = iVar6;
      if (uVar17 != 0) {
        do {
          uVar19 = (uint)uVar20;
          if (iVar9 < 0) {
code_r0x0001415c1fc2:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
          }
          else {
            iVar7 = *piVar1 + -1;
            if (*piVar1 == 0) {
              iVar7 = 0;
            }
            if (iVar7 <= iVar9) goto code_r0x0001415c1fc2;
          }
          if (*(wchar_t *)((this->Data).AllocatorInstance.Data + lVar18 + (longlong)pwVar21) !=
              *pwVar21) break;
          uVar19 = uVar19 + 1;
          uVar15 = uVar15 + 1;
          pwVar21 = pwVar21 + 1;
          uVar20 = (ulonglong)uVar19;
          iVar9 = iVar9 + 1;
        } while (uVar15 != uVar17);
      }
      if (uVar19 == param_2) {
        return iVar6;
      }
      iVar6 = iVar6 + -1;
      lVar12 = lVar12 + -1;
      lVar18 = lVar18 + -2;
    } while (-1 < lVar12);
  }
  return -1;
}

// FormatAsNumber64 @ 1415c3770

FString * __cdecl FString::FormatAsNumber64(FString *__return_storage_ptr__,long64 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FString local_58;
  FString local_48;
  FString local_38;
  FScriptContainerElement *pFVar11;
  
  pFVar13 = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  AppendInt64(&local_48,param_1);
  iVar3 = local_48.Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  uVar14 = local_48.Data.ArrayNum - 2;
  if (local_48.Data.ArrayNum == 0) {
    uVar14 = 0xffffffff;
  }
  pFVar11 = pFVar13;
  FVar5.Data = pFVar13;
  uVar7 = uVar12;
  if (-1 < (int)uVar14) {
    do {
      uVar7 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      uVar9 = uVar7;
      if ((int)uVar14 < (int)uVar7) {
        uVar9 = uVar14;
      }
      uVar10 = 0;
      if (0 < (int)uVar9) {
        uVar10 = uVar9;
      }
      lVar8 = (longlong)(int)uVar7;
      if ((longlong)(int)uVar14 + 1 < (longlong)(int)uVar7) {
        lVar8 = (longlong)(int)uVar14 + 1;
      }
      uVar7 = uVar10;
      if ((int)uVar10 < lVar8) {
        uVar7 = (uint)lVar8;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (iVar3 != 0) {
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
      ConstructFromPtrSize
                (&local_38,(wchar_t *)(FVar5.Data + (longlong)(int)uVar10 * 2),uVar7 - uVar10);
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
      uVar7 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar7 = 0;
      }
      AppendChars(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar7);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
      uVar9 = (int)pFVar11 + 1;
      pFVar11 = (FScriptContainerElement *)(ulonglong)uVar9;
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      uVar7 = local_58.Data.ArrayNum;
      if ((uVar9 == 3) && (0 < (int)uVar14)) {
        uVar9 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum < 1) {
          uVar9 = 0;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(local_58.Data.ArrayNum < 1) + 1,(ForAnyElementType *)&local_58,
                   &local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
        uVar7 = local_58.Data.ArrayNum;
        uVar10 = uVar12;
        if ((int)uVar9 < local_58.Data.ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
        uVar10 = uVar9 + 1;
        *(undefined2 *)(local_58.Data.AllocatorInstance.Data + (longlong)(int)uVar9 * 2) = 0x2c;
        uVar9 = uVar12;
        if ((int)uVar10 < (int)uVar7) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        *(undefined2 *)(FVar5.Data + (longlong)(int)uVar10 * 2) = 0;
        pFVar11 = pFVar13;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 < 0x80000000);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = uVar7;
  if (uVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)__return_storage_ptr__,uVar7,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar5.Data,(longlong)(int)uVar7 * 2
          );
  }
  ReverseString(__return_storage_ptr__);
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FormatAsNumber @ 1415c4000

FString * __cdecl FString::FormatAsNumber(FString *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FString local_58;
  FString local_48;
  FString local_38;
  FScriptContainerElement *pFVar11;
  
  pFVar13 = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  AppendInt(&local_48,param_1);
  iVar3 = local_48.Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  uVar14 = local_48.Data.ArrayNum - 2;
  if (local_48.Data.ArrayNum == 0) {
    uVar14 = 0xffffffff;
  }
  pFVar11 = pFVar13;
  FVar5.Data = pFVar13;
  uVar7 = uVar12;
  if (-1 < (int)uVar14) {
    do {
      uVar7 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      uVar9 = uVar7;
      if ((int)uVar14 < (int)uVar7) {
        uVar9 = uVar14;
      }
      uVar10 = 0;
      if (0 < (int)uVar9) {
        uVar10 = uVar9;
      }
      lVar8 = (longlong)(int)uVar7;
      if ((longlong)(int)uVar14 + 1 < (longlong)(int)uVar7) {
        lVar8 = (longlong)(int)uVar14 + 1;
      }
      uVar7 = uVar10;
      if ((int)uVar10 < lVar8) {
        uVar7 = (uint)lVar8;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (iVar3 != 0) {
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
      ConstructFromPtrSize
                (&local_38,(wchar_t *)(FVar5.Data + (longlong)(int)uVar10 * 2),uVar7 - uVar10);
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
      uVar7 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar7 = 0;
      }
      AppendChars(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar7);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
      uVar9 = (int)pFVar11 + 1;
      pFVar11 = (FScriptContainerElement *)(ulonglong)uVar9;
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      uVar7 = local_58.Data.ArrayNum;
      if ((uVar9 == 3) && (0 < (int)uVar14)) {
        uVar9 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum < 1) {
          uVar9 = 0;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(local_58.Data.ArrayNum < 1) + 1,(ForAnyElementType *)&local_58,
                   &local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
        uVar7 = local_58.Data.ArrayNum;
        uVar10 = uVar12;
        if ((int)uVar9 < local_58.Data.ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
        uVar10 = uVar9 + 1;
        *(undefined2 *)(local_58.Data.AllocatorInstance.Data + (longlong)(int)uVar9 * 2) = 0x2c;
        uVar9 = uVar12;
        if ((int)uVar10 < (int)uVar7) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        *(undefined2 *)(FVar5.Data + (longlong)(int)uVar10 * 2) = 0;
        pFVar11 = pFVar13;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 < 0x80000000);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = uVar7;
  if (uVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)__return_storage_ptr__,uVar7,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar5.Data,(longlong)(int)uVar7 * 2
          );
  }
  ReverseString(__return_storage_ptr__);
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromBlob @ 1415c46e0

FString * __cdecl FString::FromBlob(FString *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  uVar2 = (ulonglong)param_2;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  *piVar1 = 0;
  if (0 < (int)(param_2 * 3)) {
    uVar3 = param_2 * 3 + 1;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
    }
  }
  if (param_2 != 0) {
    do {
      PrintfImpl(&local_18,L"%03d");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      AppendChars(__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return __return_storage_ptr__;
}

// FromHexBlob @ 1415c4950

FString * __cdecl FString::FromHexBlob(FString *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  uVar2 = (ulonglong)param_2;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  *piVar1 = 0;
  if (0 < (int)(param_2 * 2)) {
    uVar3 = param_2 * 2 + 1;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
    }
  }
  if (param_2 != 0) {
    do {
      PrintfImpl(&local_18,L"%02X");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      AppendChars(__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return __return_storage_ptr__;
}

// InsertAt @ 1415c8940

void __thiscall FString::InsertAt(FString *this,int param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *_Src_00;
  int iVar4;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    _Src = (param_2->Data).AllocatorInstance.Data;
    if ((this->Data).ArrayNum == 0) {
      AppendChars(this,(wchar_t *)_Src,iVar4);
    }
    else {
      if ((_Src == (FScriptContainerElement *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x793,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar4,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                         &(this->Data).ArrayMax);
      _Src_00 = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 2;
      memmove(_Src_00 + (longlong)iVar4 * 2,_Src_00,(longlong)(iVar3 - param_1) * 2);
      memcpy((this->Data).AllocatorInstance.Data + (longlong)param_1 * 2,_Src,(longlong)iVar4 * 2);
    }
  }
  return;
}

// InsertAt @ 1415c8a40

void __thiscall FString::InsertAt(FString *this,int param_1,wchar_t param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  wchar_t local_res18 [8];
  
  if (param_2 != L'\0') {
    local_res18[0] = param_2;
    if ((this->Data).ArrayNum == 0) {
      AppendChar(this,param_2);
      return;
    }
    pFVar5 = (this->Data).AllocatorInstance.Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 < pFVar5 + (longlong)(this->Data).ArrayMax * 2)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->Data).ArrayNum;
    piVar1 = &(this->Data).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,(ForAnyElementType *)this,piVar1);
    }
    pFVar5 = (this->Data).AllocatorInstance.Data;
    (this->Data).ArrayNum = iVar4 + 1;
    pFVar5 = pFVar5 + (longlong)param_1 * 2;
    memmove(pFVar5 + 2,pFVar5,(longlong)(iVar4 - param_1) * 2);
    *(wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)param_1 * 2) = local_res18[0];
  }
  return;
}

// IsNumeric @ 1415c9a00

bool __thiscall FString::IsNumeric(FString *this)

{
  bool bVar1;
  wint_t wVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if ((this->Data).ArrayNum < 2) {
    return false;
  }
  pFVar4 = (this->Data).AllocatorInstance.Data;
  wVar2 = *(wint_t *)pFVar4;
  if ((wVar2 == 0x2d) || (wVar2 == 0x2b)) {
    wVar2 = *(wint_t *)(pFVar4 + 2);
    pFVar4 = pFVar4 + 2;
  }
  bVar1 = false;
  if (wVar2 != 0) {
    wVar2 = *(wint_t *)pFVar4;
    do {
      if (wVar2 == 0x2e) {
        if (bVar1) {
          return false;
        }
        bVar1 = true;
      }
      else {
        iVar3 = iswdigit(wVar2);
        if (iVar3 == 0) {
          return false;
        }
      }
      wVar2 = *(wint_t *)(pFVar4 + 2);
      pFVar4 = pFVar4 + 2;
    } while (wVar2 != 0);
  }
  return true;
}

// LeftPad @ 1415d3d30

FString * __thiscall FString::LeftPad(FString *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_1 - iVar3 < 1) {
    FString(__return_storage_ptr__,this);
  }
  else {
    pFVar2 = ChrN(&local_18,param_1 - iVar3,L' ');
    ConcatFF(__return_storage_ptr__,pFVar2,this);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Len @ 1415d3e50

int __thiscall FString::Len(FString *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

// MatchesWildcard @ 1415d4ef0

bool __thiscall FString::MatchesWildcard(FString *this,wchar_t *param_1,int param_2,Type param_3)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  <lambda_1> local_res20;
  
  iVar1 = (this->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (param_3 == CaseSensitive) {
    bVar2 = UE::Core::Private::
            MatchesWildcardRecursive<_FString::MatchesWildcard_::__l5::<lambda_1>_>
                      (pwVar3,iVar4,param_1,param_2,local_res20);
    return bVar2;
  }
  bVar2 = UE::Core::Private::MatchesWildcardRecursive<_FString::MatchesWildcard_::__l7::<lambda_2>_>
                    (pwVar3,iVar4,param_1,param_2,(<lambda_2>)local_res20);
  return bVar2;
}

// Mid @ 1415d55b0

FString * __thiscall
FString::Mid(FString *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  
  if (-1 < param_2) {
    iVar1 = (this->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    iVar2 = iVar6;
    if (param_1 < iVar6) {
      iVar2 = param_1;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    lVar3 = (longlong)iVar6;
    if ((longlong)param_1 + (longlong)param_2 < (longlong)iVar6) {
      lVar3 = (longlong)param_1 + (longlong)param_2;
    }
    iVar6 = iVar5;
    if (iVar5 < lVar3) {
      iVar6 = (int)lVar3;
    }
    if (iVar1 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    ConstructFromPtrSize
              (__return_storage_ptr__,(wchar_t *)((longlong)pwVar4 + (longlong)iVar5 * 2),
               iVar6 - iVar5);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Mid @ 1415d5670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FString::Mid(FString *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  MidInline(this,param_1,param_2,No);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// MidInline @ 1415d5910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::MidInline(FString *this,int param_1,int param_2,EAllowShrinking param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_2 != 0x7fffffff) && ((longlong)param_2 + (longlong)param_1 < 0x7fffffff)) {
    iVar6 = (this->Data).ArrayNum;
    uVar8 = 0;
    uVar7 = iVar6 - 1;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    uVar5 = uVar7;
    if (param_2 + param_1 < (int)uVar7) {
      uVar5 = param_2 + param_1;
    }
    uVar3 = uVar8;
    if (0 < (int)uVar5) {
      uVar3 = uVar5;
    }
    uVar5 = uVar8;
    if (0 < (int)(uVar7 - uVar3)) {
      uVar5 = uVar7 - uVar3;
    }
    if ((int)(uVar5 + uVar3) <= iVar6) {
      uVar8 = ~(uVar5 | uVar3) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar3 * 2;
      iVar6 = ((this->Data).ArrayNum - uVar5) - uVar3;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 2,(longlong)iVar6 * 2);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar5;
    }
  }
  RemoveAt(this,0,param_1,param_3);
  return;
}

// ParseIntoArray @ 1415d6f40

/* WARNING: Removing unreachable block (ram,0x0001415d7265) */

int __thiscall
FString::ParseIntoArray
          (FString *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          int param_3,bool param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  wchar_t **ppwVar14;
  int *piVar15;
  int iVar16;
  ForAnyElementType local_68;
  int local_60 [2];
  FString local_58;
  
  if ((param_2 == (wchar_t **)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelimArray",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x5bc,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar9 = (param_1->AllocatorInstance).Data;
  piVar15 = &param_1->ArrayNum;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar9,*piVar15);
    *piVar15 = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar9,*piVar15);
    *piVar15 = 0;
  }
  iVar13 = 0;
  iVar6 = (this->Data).ArrayNum;
  iVar11 = 0;
  pFVar9 = (this->Data).AllocatorInstance.Data;
  iVar10 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar10 = iVar13;
  }
  iVar6 = iVar13;
  iVar16 = iVar13;
  if (0 < iVar10) {
    do {
      if (0 < param_3) {
        ppwVar14 = param_2;
        iVar11 = iVar13;
        do {
          sVar8 = wcslen(*ppwVar14);
          iVar7 = wcsncmp((wchar_t *)(pFVar9 + (longlong)iVar6 * 2),*ppwVar14,(longlong)(int)sVar8);
          if (iVar7 == 0) {
            if (iVar6 != -1) {
              if ((!param_4) || (iVar6 != iVar16)) {
                iVar11 = iVar6 - iVar16;
                local_68.Data = (FScriptContainerElement *)0x0;
                local_60[0] = 0;
                local_60[1] = 0;
                if (pFVar9 + (longlong)iVar16 * 2 == (FScriptContainerElement *)0x0) {
                  if (iVar11 != 0) {
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InSrc || InCount == 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                                       ,0xba,L"Unable to construct string from a null pointer");
                    if (bVar5) {
                      pcVar3 = (code *)swi(3);
                      iVar6 = (*pcVar3)();
                      return iVar6;
                    }
                    goto LAB_1415d70e1;
                  }
                }
                else {
LAB_1415d70e1:
                  if (iVar11 < 0) {
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                                       ,0xbb,L"Unable to construct string with a negative size");
                    if (bVar5) {
                      pcVar3 = (code *)swi(3);
                      iVar6 = (*pcVar3)();
                      return iVar6;
                    }
                  }
                  else if (0 < iVar11) {
                    uVar1 = iVar11 + 1;
                    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
                    }
                    if (local_60[1] < (int)uVar1) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,uVar1,&local_68,local_60[0],local_60 + 1);
                    }
                    UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,uVar1,&local_68,local_60,local_60 + 1);
                    FVar4.Data = local_68.Data;
                    FGenericPlatformString::Memcpy
                              (local_68.Data,pFVar9 + (longlong)iVar16 * 2,(longlong)iVar11 * 2);
                    *(undefined2 *)(FVar4.Data + (longlong)iVar11 * 2) = 0;
                  }
                }
                pFVar12 = (param_1->AllocatorInstance).Data;
                if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
                    ((FScriptContainerElement *)&local_68 <
                     pFVar12 + (longlong)param_1->ArrayMax * 0x10)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  iVar6 = (*pcVar3)();
                  return iVar6;
                }
                iVar11 = *piVar15;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                *piVar15 = iVar11 + 1;
                pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
                *(undefined8 *)pFVar12 = 0;
                *(FScriptContainerElement **)pFVar12 = local_68.Data;
                local_68.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar12 + 8) = local_60[0];
                *(int *)(pFVar12 + 0xc) = local_60[1];
                local_60[0] = 0;
                local_60[1] = 0;
              }
              iVar11 = (int)sVar8 + iVar6;
              iVar6 = iVar11;
              goto LAB_1415d705e;
            }
            break;
          }
          iVar11 = iVar11 + 1;
          ppwVar14 = ppwVar14 + 1;
        } while (iVar11 < param_3);
      }
      iVar11 = iVar16;
      iVar6 = iVar6 + 1;
LAB_1415d705e:
      iVar16 = iVar11;
    } while (iVar6 < iVar10);
  }
  piVar15 = &param_1->ArrayNum;
  if ((!param_4) || (iVar10 - iVar11 != 0)) {
    iVar6 = *piVar15;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      *piVar15 = iVar6;
    }
    *piVar15 = iVar6 + 1;
    pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar12[8].field_0x0 = 0;
    pFVar9 = (FScriptContainerElement *)
             ConstructFromPtrSize
                       (&local_58,(wchar_t *)(pFVar9 + (longlong)iVar11 * 2),iVar10 - iVar11);
    if (pFVar12 != pFVar9) {
      pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance
             ).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)&pFVar12[8].field_0x0 = *(int *)&pFVar9[8].field_0x0;
      *(int *)&pFVar12[0xc].field_0x0 = *(int *)&pFVar9[0xc].field_0x0;
      *(undefined8 *)&pFVar9[8].field_0x0 = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return param_1->ArrayNum;
}

// ParseIntoArray @ 1415d7370

int __thiscall
FString::ParseIntoArray
          (FString *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  code *local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_40;
  TStringView<wchar_t> local_38;
  undefined4 local_1c;
  
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pchDelim",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x561,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  if (*param_2 != L'\0') {
    local_40 = &local_res10;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>
               ::Call;
    local_res10 = param_1;
    sVar5 = wcslen(param_2);
    local_68._12_4_ = local_1c;
    local_68.Size = (int)sVar5;
    local_58 = (this->Data).AllocatorInstance.Data;
    iVar4 = (this->Data).ArrayNum;
    iStack_50 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_50 = 0;
    }
    local_38._12_4_ = uStack_4c;
    local_38.Size = iStack_50;
    local_68.DataPtr = param_2;
    local_38.DataPtr = (wchar_t *)local_58;
    UE::String::ParseTokens
              (&local_38,&local_68,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_48,
               (uint)param_3 * 2 | IgnoreCase);
  }
  return param_1->ArrayNum;
}

// ParseIntoArrayLines @ 1415d7aa0

int __thiscall
FString::ParseIntoArrayLines
          (FString *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = ParseIntoArray(this,param_1,LineEndings,3,param_2);
  return iVar1;
}

// ParseIntoArrayWS @ 1415d7b80

int __thiscall
FString::ParseIntoArrayWS
          (FString *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          bool param_3)

{
  int iVar1;
  wchar_t *local_38;
  wchar_t *local_30;
  wchar_t *local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  
  local_38 = L" ";
  local_30 = L"\t";
  local_28 = L"\r";
  local_20 = L"\n";
  local_18 = L"";
  iVar1 = 4;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    iVar1 = 5;
    local_18 = param_2;
  }
  iVar1 = ParseIntoArray(this,param_1,&local_38,iVar1,param_3);
  return iVar1;
}

// PathAppend @ 1415d8140

void __thiscall FString::PathAppend(FString *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 local_38;
  undefined2 local_36 [7];
  
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  if (param_2 == 0) {
    if (iVar7 < 2) {
      return;
    }
    uVar9 = iVar7 - 2;
    uVar8 = 0;
    if ((int)uVar9 < iVar7) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(short *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) == 0x2f) {
      return;
    }
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(short *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) == 0x5c) {
      return;
    }
    uVar9 = iVar7 - 1;
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_38 = 0;
    *(undefined2 *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) = 0x2f;
    pFVar4 = (this->Data).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(this->Data).ArrayMax * 2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *piVar1;
    piVar2 = &(this->Data).ArrayMax;
    local_36[0] = local_38;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,(ForAnyElementType *)this,piVar2);
      local_36[0] = local_38;
    }
    goto LAB_1415d85d7;
  }
  if (0 < iVar7) {
    if (1 < iVar7) {
      uVar10 = iVar7 - 2;
      uVar9 = 0;
      uVar8 = uVar9;
      if ((int)uVar10 < iVar7) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(short *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) != 0x2f) {
        uVar8 = uVar9;
        if ((int)uVar10 < *piVar1) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(short *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) != 0x5c) &&
           (*param_1 != L'/')) {
          uVar8 = iVar7 - 1;
          if ((int)uVar8 < *piVar1) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined2 *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) = 0x2f;
          goto LAB_1415d84a6;
        }
      }
    }
    if ((*piVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *piVar1 - 1;
    pFVar4 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 2;
    iVar3 = ~uVar8 + *piVar1;
    if (iVar3 != 0) {
      memmove(pFVar4,pFVar4 + 2,(longlong)iVar3 * 2);
    }
    *piVar1 = *piVar1 + -1;
    iVar7 = iVar7 + -1;
  }
LAB_1415d84a6:
  if (0 < iVar7 + param_2) {
    uVar8 = iVar7 + param_2 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->Data).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,(ForAnyElementType *)this,*piVar1,&(this->Data).ArrayMax);
    }
  }
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar2 = &(this->Data).ArrayMax;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,param_2,(ForAnyElementType *)this,piVar1,piVar2);
  memcpy((this->Data).AllocatorInstance.Data + (longlong)iVar7 * 2,param_1,(longlong)param_2 * 2);
  pFVar4 = (this->Data).AllocatorInstance.Data;
  local_36[0] = 0;
  if (((pFVar4 <= (FScriptContainerElement *)local_36) &&
      ((FScriptContainerElement *)local_36 < pFVar4 + (longlong)*piVar2 * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *piVar1;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,(ForAnyElementType *)this,piVar2);
  }
LAB_1415d85d7:
  *piVar1 = iVar7 + 1;
  *(undefined2 *)((this->Data).AllocatorInstance.Data + (longlong)iVar7 * 2) = local_36[0];
  return;
}

// PrintfImpl @ 1415d9830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FString::PrintfImpl(FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  ulong64 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 local_res18 [16];
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined1 *local_460;
  wchar_t local_448 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  iVar5 = 0x200;
  puVar3 = __local_stdio_printf_options();
  pwVar4 = (wchar_t *)0x0;
  local_468 = 0;
  local_460 = local_res18;
  iVar2 = __stdio_common_vswprintf(*puVar3,local_448,0x200,param_1);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  pwVar1 = local_448;
  if (0x1ff < iVar2) goto LAB_1415d98c0;
  while (iVar2 == -1) {
LAB_1415d98c0:
    do {
      iVar5 = iVar5 * 2;
      pwVar4 = FMemory::Realloc(pwVar4,(longlong)iVar5 * 2,0);
      local_460 = local_res18;
      local_468 = 0;
      iVar2 = __stdio_common_vswprintf(*puVar3,pwVar4,(longlong)iVar5,param_1);
      if (iVar2 < 0) {
        iVar2 = -1;
      }
      pwVar1 = pwVar4;
    } while (iVar5 <= iVar2);
  }
  pwVar1[iVar2] = L'\0';
  FString(__return_storage_ptr__,pwVar1);
  if (iVar5 != 0x200) {
    FMemory::Free(pwVar1);
  }
  return __return_storage_ptr__;
}

// RemoveAt @ 1415e2820

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::RemoveAt(FString *this,int param_1,int param_2,EAllowShrinking param_3)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (this->Data).ArrayNum;
  iVar4 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  uVar5 = iVar4 - param_1;
  if (param_2 < iVar4 - param_1) {
    uVar5 = param_2;
  }
  uVar2 = 0;
  if (0 < (int)uVar5) {
    uVar2 = uVar5;
  }
  uVar5 = 0;
  if ((int)(uVar2 + param_1) <= iVar6) {
    uVar5 = ~(uVar2 | param_1) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (uVar2 != 0) {
    _Dst = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 2;
    iVar6 = ((this->Data).ArrayNum - uVar2) - param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar2 * 2,(longlong)iVar6 * 2);
    }
    iVar6 = (this->Data).ArrayNum - uVar2;
    (this->Data).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(ForAnyElementType *)this,iVar6,&(this->Data).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 1415e2920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::RemoveAt(FString *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (this->Data).ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  iVar2 = iVar6 - param_1;
  if (1 < iVar6 - param_1) {
    iVar2 = 1;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  if (iVar6 == 1) {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = (this->Data).ArrayNum + ~param_1;
    _Dst = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 2;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 2,(longlong)iVar5 * 2);
    }
    iVar5 = (this->Data).ArrayNum + -1;
    (this->Data).ArrayNum = iVar5;
    if (param_2 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(ForAnyElementType *)this,iVar5,&(this->Data).ArrayMax);
    }
  }
  return;
}

// RemoveFromEnd @ 1415e4a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FString::RemoveFromEnd(FString *this,wchar_t *param_1,int param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && (0 < param_2)) {
    iVar5 = (this->Data).ArrayNum;
    iVar4 = iVar5 + -1;
    if (param_3 == IgnoreCase) {
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      if (iVar4 < param_2) {
        return false;
      }
      iVar5 = iVar4 - param_2;
      if (((iVar5 < 0) || (iVar4 <= iVar5)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)iVar5 * 2),
                         param_1);
    }
    else {
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      if (iVar4 < param_2) {
        return false;
      }
      iVar5 = iVar4 - param_2;
      if (((iVar5 < 0) || (iVar4 <= iVar5)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = wcscmp((wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)iVar5 * 2),param_1)
      ;
    }
    if (iVar4 == 0) {
      iVar5 = (this->Data).ArrayNum;
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      RemoveAt(this,iVar4 - param_2,param_2,Default);
      return true;
    }
  }
  return false;
}

// RemoveFromStart @ 1415e4d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FString::RemoveFromStart(FString *this,wchar_t *param_1,int param_2,Type param_3)

{
  int iVar1;
  wchar_t *_Str1;
  ulong64 _MaxCount;
  
  _MaxCount = (ulong64)param_2;
  if (0 < param_2) {
    if (param_3 == IgnoreCase) {
      if ((this->Data).ArrayNum == 0) {
        iVar1 = FGenericPlatformStricmp::Strnicmp(L"",param_1,_MaxCount);
      }
      else {
        iVar1 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)(this->Data).AllocatorInstance.Data,param_1,_MaxCount);
      }
    }
    else {
      if ((this->Data).ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      }
      iVar1 = wcsncmp(_Str1,param_1,_MaxCount);
    }
    if (iVar1 == 0) {
      RemoveAt(this,0,param_2,Default);
      return true;
    }
  }
  return false;
}

// RemoveSpacesInline @ 1415e5300

void __thiscall FString::RemoveSpacesInline(FString *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  
  iVar6 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  uVar7 = 0;
  iVar12 = 0;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = iVar12;
  }
  if (iVar5 != 0) {
    pFVar2 = (this->Data).AllocatorInstance.Data;
    pFVar8 = pFVar2;
    uVar10 = uVar7;
    if (0 < iVar5) {
      do {
        if (*(short *)(pFVar2 + uVar7 * 2) != 0x20) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          *(short *)pFVar8 = *(short *)(pFVar2 + uVar7 * 2);
          pFVar8 = pFVar8 + 2;
        }
        iVar12 = (int)uVar10;
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar5);
    }
    if (iVar12 <= iVar5) {
      uVar9 = iVar12 + 1;
      *(undefined2 *)(pFVar2 + (longlong)iVar12 * 2) = 0;
      iVar6 = *piVar1;
      if (iVar6 < (int)uVar9) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar9 - iVar6,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax
                          );
        memset((this->Data).AllocatorInstance.Data + (longlong)iVar5 * 2,0,
               (longlong)(int)(uVar9 - iVar6) * 2);
        return;
      }
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar6) {
        uVar11 = iVar6 - uVar9;
        if (((int)(uVar11 | uVar9) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar11 != 0) {
          pFVar2 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar9 * 2;
          iVar6 = (*piVar1 - uVar11) - uVar9;
          if (iVar6 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 2,(longlong)iVar6 * 2);
          }
          *piVar1 = *piVar1 - uVar11;
        }
      }
    }
  }
  return;
}

// Replace @ 1415e61b0

FString * __thiscall
FString::Replace(FString *this,FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,
                Type param_3)

{
  wchar_t wVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  FString *pFVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *_Str;
  FString local_50;
  
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("To",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x5f8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  if ((((this->Data).ArrayNum < 2) || (param_1 == (wchar_t *)0x0)) || (*param_1 == L'\0')) {
    FString(__return_storage_ptr__,this);
    return __return_storage_ptr__;
  }
  _Str = (this->Data).AllocatorInstance.Data;
  sVar8 = wcslen(param_1);
  sVar9 = wcslen(param_2);
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  do {
    if (param_3 == IgnoreCase) {
      if (_Str == (FScriptContainerElement *)0x0) {
        pFVar11 = (FScriptContainerElement *)0x0;
      }
      else {
        wVar1 = *param_1;
        wVar5 = -(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20;
        pFVar11 = _Str;
        if (wVar1 != wVar5) {
          sVar10 = wcslen(param_1);
          uVar2 = *(ushort *)_Str;
          while (uVar2 != 0) {
            pFVar12 = pFVar11 + 2;
            if (((wchar_t)(uVar2 - (-(ushort)(uVar2 - 0x61 < 0x1a) & 0x20)) ==
                 (wchar_t)(wVar1 - wVar5)) &&
               (iVar6 = FGenericPlatformStricmp::Strnicmp
                                  ((wchar_t *)pFVar12,param_1 + 1,(longlong)((int)sVar10 + -1)),
               iVar6 == 0)) goto LAB_1415e634d;
            pFVar11 = pFVar12;
            uVar2 = *(ushort *)pFVar12;
          }
          pFVar11 = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      pFVar11 = (FScriptContainerElement *)wcsstr((wchar_t *)_Str,param_1);
    }
LAB_1415e634d:
    if (pFVar11 == (FScriptContainerElement *)0x0) {
      sVar8 = wcslen((wchar_t *)_Str);
      AppendChars(&local_50,(wchar_t *)_Str,(int)sVar8);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_50.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_50.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    AppendChars(&local_50,(wchar_t *)_Str,(int)((longlong)pFVar11 - (longlong)_Str >> 1));
    AppendChars(&local_50,param_2,(int)sVar9);
    _Str = pFVar11 + (longlong)(int)sVar8 * 2;
  } while( true );
}

// Replace @ 1415e6400

FString * __thiscall
FString::Replace(FString *this,FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,
                Type param_3)

{
  ReplaceInline(this,param_1,param_2,param_3);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ReplaceCharInlineCaseSensitive @ 1415e6780

void __thiscall
FString::ReplaceCharInlineCaseSensitive(FString *this,wchar_t param_1,wchar_t param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t wVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Data).AllocatorInstance.Data;
  iVar2 = (this->Data).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar4 == pFVar1) break;
    wVar3 = *(wchar_t *)pFVar4;
    if (*(wchar_t *)pFVar4 == param_1) {
      wVar3 = param_2;
    }
    *(wchar_t *)pFVar4 = wVar3;
    pFVar4 = pFVar4 + 2;
  }
  return;
}

// ReplaceCharInlineIgnoreCase @ 1415e6900

void __thiscall FString::ReplaceCharInlineIgnoreCase(FString *this,wchar_t param_1,wchar_t param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = iswupper(param_1);
  if (iVar1 == 0) {
    uVar2 = -(-(ushort)((ushort)param_1 - 0x61 < 0x1a) & 0x20);
  }
  else {
    uVar2 = -(ushort)((ushort)param_1 - 0x41 < 0x1a) & 0x20;
  }
  ReplaceCharInlineCaseSensitive(this,uVar2 + param_1,param_2);
  ReplaceCharInlineCaseSensitive(this,param_1,param_2);
  return;
}

// ReplaceCharWithEscapedCharInline @ 1415e6c70

void __thiscall
FString::ReplaceCharWithEscapedCharInline
          (FString *this,TArray<wchar_t,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar2 = (this->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 1) {
    return;
  }
  if (param_1 == (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1415e6ce0:
    ReplaceInline(this,CharToEscapeSeqMap_FString[0][0],CharToEscapeSeqMap_FString[0][1],IgnoreCase)
    ;
    if (param_1 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6cfd;
LAB_1415e6d38:
    ReplaceInline(this,CharToEscapeSeqMap_FString[1][0],CharToEscapeSeqMap_FString[1][1],IgnoreCase)
    ;
    if (param_1 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6d55;
LAB_1415e6d91:
    ReplaceInline(this,CharToEscapeSeqMap_FString[2][0],CharToEscapeSeqMap_FString[2][1],IgnoreCase)
    ;
    if (param_1 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6dae;
LAB_1415e6de9:
    ReplaceInline(this,CharToEscapeSeqMap_FString[3][0],CharToEscapeSeqMap_FString[3][1],IgnoreCase)
    ;
    if (param_1 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6e06;
LAB_1415e6e41:
    ReplaceInline(this,CharToEscapeSeqMap_FString[4][0],CharToEscapeSeqMap_FString[4][1],IgnoreCase)
    ;
    if (param_1 == (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6e9d;
  }
  else {
    if (param_1->ArrayNum < 1) {
      return;
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
    if (pFVar3 != pFVar1) {
      do {
        if (*(wchar_t *)pFVar3 == *CharToEscapeSeqMap_FString[0][0]) goto LAB_1415e6ce0;
        pFVar3 = pFVar3 + 2;
      } while (pFVar3 != pFVar1);
    }
LAB_1415e6cfd:
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
    if (pFVar3 != pFVar1) {
      do {
        if (*(wchar_t *)pFVar3 == *CharToEscapeSeqMap_FString[1][0]) goto LAB_1415e6d38;
        pFVar3 = pFVar3 + 2;
      } while (pFVar3 != pFVar1);
    }
LAB_1415e6d55:
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
    if (pFVar3 != pFVar1) {
      do {
        if (*(wchar_t *)pFVar3 == *CharToEscapeSeqMap_FString[2][0]) goto LAB_1415e6d91;
        pFVar3 = pFVar3 + 2;
      } while (pFVar3 != pFVar1);
    }
LAB_1415e6dae:
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
    if (pFVar3 != pFVar1) {
      do {
        if (*(wchar_t *)pFVar3 == *CharToEscapeSeqMap_FString[3][0]) goto LAB_1415e6de9;
        pFVar3 = pFVar3 + 2;
      } while (pFVar3 != pFVar1);
    }
LAB_1415e6e06:
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
    if (pFVar3 != pFVar1) {
      do {
        if (*(wchar_t *)pFVar3 == *CharToEscapeSeqMap_FString[4][0]) goto LAB_1415e6e41;
        pFVar3 = pFVar3 + 2;
      } while (pFVar3 != pFVar1);
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
  if (pFVar3 == pFVar1) {
    return;
  }
  while (*(wchar_t *)pFVar3 != *CharToEscapeSeqMap_FString[5][0]) {
    pFVar3 = pFVar3 + 2;
    if (pFVar3 == pFVar1) {
      return;
    }
  }
LAB_1415e6e9d:
  ReplaceInline(this,CharToEscapeSeqMap_FString[5][0],CharToEscapeSeqMap_FString[5][1],IgnoreCase);
  return;
}

// ReplaceEscapedCharWithCharInline @ 1415e71e0

void __thiscall
FString::ReplaceEscapedCharWithCharInline
          (FString *this,TArray<wchar_t,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  char *pcVar4;
  int iVar6;
  char *pcVar5;
  
  iVar2 = (this->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if ((0 < iVar6) &&
     ((param_1 == (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0 || (0 < param_1->ArrayNum)))) {
    pcVar4 = `public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FManditoryErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
             ::__l2::Replaced;
    do {
      pcVar5 = pcVar4 + -0x10;
      if (param_1 == (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1415e7257:
        ReplaceInline(this,*(wchar_t **)(pcVar4 + -8),*(wchar_t **)pcVar5,IgnoreCase);
      }
      else {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar3 + (longlong)param_1->ArrayNum * 2;
        if (pFVar3 != pFVar1) {
          do {
            if (*(short *)pFVar3 == **(short **)pcVar5) goto LAB_1415e7257;
            pFVar3 = pFVar3 + 2;
          } while (pFVar3 != pFVar1);
        }
      }
      pcVar4 = pcVar5;
    } while (0x154b76480 < (longlong)pcVar5);
  }
  return;
}

// ReplaceInline @ 1415e7610

int __thiscall FString::ReplaceInline(FString *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int iVar1;
  FScriptContainerElement *_Str;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  FScriptContainerElement *_Str_00;
  uint uVar10;
  int iVar11;
  
  iVar1 = (this->Data).ArrayNum;
  iVar11 = 0;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (((((0 < iVar2) && (param_1 != (wchar_t *)0x0)) && (*param_1 != L'\0')) &&
      (param_2 != (wchar_t *)0x0)) &&
     ((param_3 == IgnoreCase || (iVar2 = wcscmp(param_1,param_2), iVar2 != 0)))) {
    sVar4 = wcslen(param_1);
    sVar5 = wcslen(param_2);
    uVar10 = (uint)sVar4;
    uVar3 = (uint)sVar5;
    if (uVar3 == uVar10) {
      pwVar6 = operator[](this,0);
      if (param_3 == IgnoreCase) {
        pwVar6 = TCString<wchar_t>::Stristr(pwVar6,param_1);
      }
      else {
        pwVar6 = wcsstr(pwVar6,param_1);
      }
      lVar9 = (longlong)(int)uVar3;
      if (pwVar6 != (wchar_t *)0x0) {
        do {
          iVar11 = iVar11 + 1;
          if ((((int)uVar3 < 1) || (uVar3 < 8)) ||
             ((pwVar6 <= param_2 + (int)(uVar3 - 1) && (param_2 <= pwVar6 + (int)(uVar3 - 1))))) {
            if (0 < lVar9) {
              pwVar8 = pwVar6;
              lVar7 = lVar9;
              do {
                *pwVar8 = *(wchar_t *)((longlong)pwVar8 + ((longlong)param_2 - (longlong)pwVar6));
                pwVar8 = pwVar8 + 1;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
          }
          else {
            memcpy(pwVar6,param_2,lVar9 * 2);
          }
          iVar1 = (this->Data).ArrayNum;
          iVar2 = iVar1 + -1;
          if (iVar1 == 0) {
            pwVar8 = L"";
            iVar2 = 0;
          }
          else {
            pwVar8 = (wchar_t *)(this->Data).AllocatorInstance.Data;
          }
          if ((longlong)iVar2 <=
              ((longlong)(int)uVar10 * 2 - (longlong)pwVar8) + (longlong)pwVar6 >> 1) {
            return iVar11;
          }
          if (param_3 == IgnoreCase) {
            pwVar6 = TCString<wchar_t>::Stristr(pwVar6 + (int)uVar10,param_1);
          }
          else {
            pwVar6 = wcsstr(pwVar6 + (int)uVar10,param_1);
          }
        } while (pwVar6 != (wchar_t *)0x0);
      }
    }
    else {
      sVar4 = wcslen(param_1);
      iVar2 = Find(this,param_1,(int)sVar4,param_3,FromStart,-1);
      if (iVar2 != -1) {
        _Str = (this->Data).AllocatorInstance.Data;
        (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->Data).ArrayNum = 0;
        (this->Data).ArrayMax = 0;
        if (param_3 == IgnoreCase) {
          pwVar6 = TCString<wchar_t>::Stristr((wchar_t *)_Str,param_1);
        }
        else {
          pwVar6 = wcsstr((wchar_t *)_Str,param_1);
        }
        _Str_00 = _Str;
        if (pwVar6 != (wchar_t *)0x0) {
          do {
            *pwVar6 = L'\0';
            iVar11 = iVar11 + 1;
            sVar4 = wcslen((wchar_t *)_Str_00);
            AppendChars(this,(wchar_t *)_Str_00,(int)sVar4);
            sVar4 = wcslen(param_2);
            AppendChars(this,param_2,(int)sVar4);
            _Str_00 = (FScriptContainerElement *)(pwVar6 + (int)uVar10);
            *pwVar6 = *param_1;
            if (param_3 == IgnoreCase) {
              pwVar6 = TCString<wchar_t>::Stristr((wchar_t *)_Str_00,param_1);
            }
            else {
              pwVar6 = wcsstr((wchar_t *)_Str_00,param_1);
            }
          } while (pwVar6 != (wchar_t *)0x0);
        }
        sVar4 = wcslen((wchar_t *)_Str_00);
        AppendChars(this,(wchar_t *)_Str_00,(int)sVar4);
        if (_Str != (FScriptContainerElement *)0x0) {
          FMemory::Free(_Str);
        }
      }
    }
  }
  return iVar11;
}

// ReplaceQuotesWithEscapedQuotes @ 1415e7cd0

FString * __thiscall
FString::ReplaceQuotesWithEscapedQuotes(FString *this,FString *__return_storage_ptr__)

{
  wchar_t wVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar2 = (this->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar5 = L"";
    iVar7 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Data).AllocatorInstance.Data;
  }
  pwVar5 = TCString<wchar_t>::Strnstr(pwVar5,iVar7,L"\"",1);
  if (pwVar5 != (wchar_t *)0x0) {
    iVar7 = (this->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    if ((int)((longlong)pwVar5 - (longlong)pwVar6 >> 1) != -1) {
      pFVar3 = (this->Data).AllocatorInstance.Data;
      pFVar8 = (FScriptContainerElement *)L"";
      if (iVar7 != 0) {
        pFVar8 = pFVar3;
      }
      (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar4 = false;
      (this->Data).ArrayNum = 0;
      (this->Data).ArrayMax = 0;
      wVar1 = *(wchar_t *)pFVar8;
      while (wVar1 != L'\0') {
        if (bVar4) {
          bVar4 = false;
        }
        else if (*(wchar_t *)pFVar8 == L'\\') {
          bVar4 = true;
        }
        else if (*(wchar_t *)pFVar8 == L'\"') {
          AppendChar(this,L'\\');
        }
        wVar1 = *(wchar_t *)pFVar8;
        pFVar8 = pFVar8 + 2;
        AppendChar(this,wVar1);
        wVar1 = *(wchar_t *)pFVar8;
      }
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Reserve @ 1415ea470

void __thiscall FString::Reserve(FString *this,int param_1)

{
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = param_1 + 1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->Data).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,(ForAnyElementType *)this,(this->Data).ArrayNum,&(this->Data).ArrayMax);
    }
  }
  return;
}

// Reset @ 1415ea580

void __thiscall FString::Reset(FString *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  uVar2 = param_1 + 1;
  if (param_1 < 1) {
    uVar2 = 0;
  }
  if (-1 < (int)uVar2) {
    (this->Data).ArrayNum = 0;
    if ((this->Data).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar2,(ForAnyElementType *)this,0,&(this->Data).ArrayMax);
    }
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      *(undefined2 *)pFVar1 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Reverse @ 1415ebd20

FString * __thiscall FString::Reverse(FString *this,FString *__return_storage_ptr__)

{
  FString(__return_storage_ptr__,this);
  ReverseString(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Reverse @ 1415ebd50

FString * __thiscall FString::Reverse(FString *this,FString *__return_storage_ptr__)

{
  ReverseString(this);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ReverseString @ 1415ebed0

void __thiscall FString::ReverseString(FString *this)

{
  undefined2 uVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  iVar7 = (this->Data).ArrayNum;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    pFVar6 = (this->Data).AllocatorInstance.Data;
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    iVar7 = iVar5 + -1;
    if (((iVar7 < 0) || (iVar5 <= iVar7)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = (this->Data).AllocatorInstance.Data + (longlong)iVar7 * 2;
    do {
      uVar1 = *(undefined2 *)pFVar6;
      *(undefined2 *)pFVar6 = *(undefined2 *)pFVar4;
      pFVar6 = pFVar6 + 2;
      *(undefined2 *)pFVar4 = uVar1;
      pFVar4 = pFVar4 + -2;
    } while (pFVar6 < pFVar4);
  }
  return;
}

// RightChop @ 1415ec090

FString * __thiscall FString::RightChop(FString *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (this->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  iVar2 = iVar4;
  if (param_1 < iVar4) {
    iVar2 = param_1;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->Data).AllocatorInstance.Data;
  }
  ConstructFromPtrSize
            (__return_storage_ptr__,(wchar_t *)((longlong)pwVar3 + (longlong)iVar5 * 2),
             iVar4 - iVar5);
  return __return_storage_ptr__;
}

// RightPad @ 1415ec1e0

FString * __thiscall FString::RightPad(FString *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_1 - iVar3 < 1) {
    FString(__return_storage_ptr__,this);
  }
  else {
    pFVar2 = ChrN(&local_18,param_1 - iVar3,L' ');
    ConcatFF(__return_storage_ptr__,this,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// SanitizeFloat @ 1415f08a0

FString * __cdecl FString::SanitizeFloat(FString *__return_storage_ptr__,double param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  wint_t wVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  double local_res10;
  
  local_res10 = param_1;
  UE::Core::Private::StripNegativeZero(&local_res10);
  PrintfImpl(__return_storage_ptr__,L"%f");
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    return __return_storage_ptr__;
  }
  pFVar12 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  wVar5 = *(wint_t *)pFVar12;
  if ((wVar5 == 0x2d) || (wVar5 == 0x2b)) {
    wVar5 = *(wint_t *)(pFVar12 + 2);
    pFVar12 = pFVar12 + 2;
  }
  bVar4 = false;
  if (wVar5 != 0) {
    wVar5 = *(wint_t *)pFVar12;
    do {
      if (wVar5 == 0x2e) {
        if (bVar4) {
          return __return_storage_ptr__;
        }
        bVar4 = true;
      }
      else {
        iVar8 = iswdigit(wVar5);
        if (iVar8 == 0) {
          return __return_storage_ptr__;
        }
      }
      wVar5 = *(wint_t *)(pFVar12 + 2);
      pFVar12 = pFVar12 + 2;
    } while (wVar5 != 0);
  }
  iVar8 = (__return_storage_ptr__->Data).ArrayNum;
  uVar15 = 0xffffffff;
  uVar14 = 0xffffffff;
  uVar11 = iVar8 - 2;
  if (iVar8 == 0) {
    uVar11 = 0xffffffff;
  }
  uVar10 = uVar15;
  if (-1 < (int)uVar11) {
    lVar16 = (longlong)(int)uVar11 * 2;
    do {
      iVar8 = (__return_storage_ptr__->Data).ArrayNum;
      uVar10 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar10 = 0;
      }
      if (((int)uVar10 <= (int)uVar11) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar3)();
        return pFVar9;
      }
      sVar2 = *(short *)((__return_storage_ptr__->Data).AllocatorInstance.Data + lVar16);
      if (sVar2 == 0x2e) {
        uVar14 = uVar11;
        uVar10 = uVar11;
        if ((int)uVar11 < (int)uVar15) {
          uVar10 = uVar15;
        }
        break;
      }
      if ((uVar15 == 0xffffffff) && (sVar2 != 0x30)) {
        uVar15 = uVar11 + 1;
      }
      lVar16 = lVar16 + -2;
      uVar11 = uVar11 - 1;
      uVar10 = uVar15;
    } while (-1 < (int)uVar11);
    if ((uVar10 != 0xffffffff) && (uVar14 != 0xffffffff)) goto LAB_1415f0a1e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("TrimIndex != INDEX_NONE && DecimalSeparatorIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                     ,0x50a,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar3)();
    return pFVar9;
  }
LAB_1415f0a1e:
  iVar8 = (__return_storage_ptr__->Data).ArrayNum;
  iVar6 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar6 = 0;
  }
  uVar15 = 0;
  uVar11 = uVar15;
  if (0 < (int)(iVar6 - uVar10)) {
    uVar11 = iVar6 - uVar10;
  }
  uVar7 = uVar15;
  if ((int)(uVar11 + uVar10) <= iVar8) {
    uVar7 = ~(uVar11 | uVar10) >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar3)();
    return pFVar9;
  }
  if (uVar11 != 0) {
    pFVar12 = (__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2;
    iVar8 = ((__return_storage_ptr__->Data).ArrayNum - uVar11) - uVar10;
    if (iVar8 != 0) {
      memmove(pFVar12,pFVar12 + (longlong)(int)uVar11 * 2,(longlong)iVar8 * 2);
    }
    piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
    *piVar1 = *piVar1 - uVar11;
  }
  if (0 < param_2) {
    if (uVar10 == uVar14) {
      AppendChar(__return_storage_ptr__,L'.');
    }
    iVar8 = (__return_storage_ptr__->Data).ArrayNum;
    uVar11 = iVar8 - 1U;
    if (iVar8 == 0) {
      uVar11 = uVar15;
    }
    uVar11 = param_2 + 1 + (uVar14 - uVar11);
    uVar13 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      uVar14 = iVar8 - 1U;
      if (iVar8 == 0) {
        uVar14 = 0;
      }
      if (0 < (int)(uVar14 + uVar11)) {
        uVar11 = uVar14 + uVar11 + 1;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if ((__return_storage_ptr__->Data).ArrayMax < (int)uVar11) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar11,(ForAnyElementType *)__return_storage_ptr__,iVar8,
                     &(__return_storage_ptr__->Data).ArrayMax);
        }
      }
      do {
        AppendChar(__return_storage_ptr__,L'0');
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return __return_storage_ptr__;
}

// SerializeAsANSICharArray @ 1415f1280

void __thiscall FString::SerializeAsANSICharArray(FString *this,FArchive *param_1,int param_2)

{
  ushort uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined1 local_res18 [16];
  ulonglong uVar6;
  
  iVar8 = (this->Data).ArrayNum;
  uVar7 = 0;
  plVar2 = *(longlong **)&param_1->field_0x8;
  uVar9 = (ulonglong)(iVar8 - 1);
  if (iVar8 == 0) {
    uVar9 = uVar7;
  }
  local_res10[0] = param_2;
  if (param_2 < (int)(uint)uVar9) {
    local_res10[0] = (uint)uVar9;
  }
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
  uVar9 = uVar7;
  uVar10 = uVar7;
  while( true ) {
    iVar8 = (this->Data).ArrayNum;
    uVar6 = (ulonglong)(iVar8 - 1);
    if (iVar8 == 0) {
      uVar6 = uVar7;
    }
    iVar8 = (int)uVar9;
    if ((int)uVar6 <= iVar8) break;
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(ushort *)((this->Data).AllocatorInstance.Data + uVar10);
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = (char)uVar1;
    if (0x7f < uVar1) {
      local_res18[0] = 0x3f;
    }
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar10 = uVar10 + 2;
    }
    else {
      local_res18[0] = *(undefined1 *)*plVar2;
      uVar9 = (ulonglong)(iVar8 + 1);
      *plVar2 = *plVar2 + 1;
      uVar10 = uVar10 + 2;
    }
  }
  if ((int)uVar6 < (int)local_res10[0]) {
    do {
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0;
      if ((ulonglong)plVar2[1] < *plVar2 + 1U) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        *plVar2 = *plVar2 + 1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)local_res10[0]);
  }
  return;
}

// Shrink @ 1415f5870

void __thiscall FString::Shrink(FString *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,(ForAnyElementType *)this,iVar2,piVar1);
  }
  return;
}

// Split @ 1415f6410

bool __thiscall FString::Split(FString *this,FString *param_1,FString *param_2,FString *param_3)

{
  bool bVar1;
  
  bVar1 = Split(this,param_1,param_2,param_3,IgnoreCase,FromStart);
  return bVar1;
}

// Split @ 1415f6440

bool __thiscall
FString::Split(FString *this,FString *param_1,FString *param_2,FString *param_3,Type param_4,
              Type param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  wchar_t *pwVar13;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pwVar13 = L"";
  if (((param_2 == param_3) && (param_2 != (FString *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LeftStr != RightStr || LeftStr == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x1ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (param_1->Data).ArrayNum;
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if (iVar5 == 0) {
    pwVar10 = L"";
    iVar5 = iVar7;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  iVar5 = Find(this,pwVar10,iVar5,param_4,param_5,-1);
  if (-1 < iVar5) {
    iVar9 = 0;
    if (param_2 == (FString *)0x0) {
      if (param_3 == (FString *)0x0) {
        return true;
      }
      iVar8 = (param_1->Data).ArrayNum;
      if (iVar8 != 0) {
        iVar5 = iVar5 + -1 + iVar8;
      }
      iVar8 = (this->Data).ArrayNum;
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      if (iVar5 < iVar6) {
        iVar7 = iVar5;
      }
      if (0 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar8 != 0) {
        pwVar13 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize
                (&local_38,(wchar_t *)((longlong)pwVar13 + (longlong)iVar9 * 2),iVar6 - iVar9);
      if (param_3 != &local_38) {
        pFVar11 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        (param_3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_38.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    else if (param_2 == this) {
      if (param_3 != (FString *)0x0) {
        iVar7 = (param_1->Data).ArrayNum;
        iVar8 = (this->Data).ArrayNum;
        iVar6 = iVar7 + -1 + iVar5;
        if (iVar7 == 0) {
          iVar6 = iVar5;
        }
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = iVar9;
        }
        iVar12 = iVar7;
        if (iVar6 < iVar7) {
          iVar12 = iVar6;
        }
        iVar6 = iVar9;
        if (0 < iVar12) {
          iVar6 = iVar12;
        }
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(this->Data).AllocatorInstance.Data;
        }
        ConstructFromPtrSize
                  (&local_58,(wchar_t *)((longlong)pwVar10 + (longlong)iVar6 * 2),iVar7 - iVar6);
        if (param_3 != &local_58) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_58.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_58.Data.ArrayMax;
          local_58.Data.AllocatorInstance.Data = pFVar11;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = (this->Data).ArrayNum;
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = iVar9;
      }
      if (iVar5 < iVar8) {
        iVar8 = iVar5;
      }
      if (0 < iVar8) {
        iVar9 = iVar8;
      }
      if (iVar7 != 0) {
        pwVar13 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_48,pwVar13,iVar9);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      if (param_2 != &local_48) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_48.Data.ArrayMax;
        local_38.Data.AllocatorInstance.Data = pFVar11;
      }
    }
    else {
      iVar8 = (this->Data).ArrayNum;
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar7;
      }
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      iVar12 = iVar7;
      if (0 < iVar6) {
        iVar12 = iVar6;
      }
      if (iVar8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_78,pwVar10,iVar12);
      if (param_2 != &local_78) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_78.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_78.Data.ArrayMax;
        local_78.Data.AllocatorInstance.Data = pFVar11;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (param_3 == (FString *)0x0) {
        return true;
      }
      iVar8 = (param_1->Data).ArrayNum;
      iVar6 = (this->Data).ArrayNum;
      iVar12 = iVar8 + -1 + iVar5;
      if (iVar8 == 0) {
        iVar12 = iVar5;
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      if (iVar12 < iVar5) {
        iVar7 = iVar12;
      }
      if (0 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar6 != 0) {
        pwVar13 = (wchar_t *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize
                (&local_68,(wchar_t *)((longlong)pwVar13 + (longlong)iVar9 * 2),iVar5 - iVar9);
      local_38.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (param_3 != &local_68) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_68.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_68.Data.ArrayMax;
        local_38.Data.AllocatorInstance.Data = pFVar11;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// StartsWith @ 1415f6ba0

bool __thiscall FString::StartsWith(FString *this,wchar_t *param_1,int param_2,Type param_3)

{
  int iVar1;
  wchar_t *_Str1;
  
  if (param_3 == IgnoreCase) {
    if (param_2 < 1) {
      return false;
    }
    if ((this->Data).ArrayNum == 0) {
      iVar1 = FGenericPlatformStricmp::Strnicmp(L"",param_1,(longlong)param_2);
    }
    else {
      iVar1 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(this->Data).AllocatorInstance.Data,param_1,(longlong)param_2);
    }
  }
  else {
    if (param_2 < 1) {
      return false;
    }
    if ((this->Data).ArrayNum == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    iVar1 = wcsncmp(_Str1,param_1,(longlong)param_2);
  }
  if (iVar1 != 0) {
    return false;
  }
  return true;
}

// ToBlob @ 1416019b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FString::ToBlob(FString *param_1,uchar *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  wchar_t local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar9 = (param_1->Data).ArrayNum;
  iVar7 = iVar9 + -1;
  iVar4 = iVar7;
  if (iVar9 == 0) {
    iVar4 = 0;
  }
  if ((param_3 < (uint)(iVar4 / 3 + (iVar4 >> 0x1f) +
                       (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f
                            ))) ||
     ((iVar9 != 0 &&
      (iVar7 != (iVar7 / 3 + (iVar7 >> 0x1f) +
                (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)
      ))) {
    bVar2 = false;
  }
  else {
    iVar7 = 0;
    lVar8 = 4;
    iVar9 = 2;
    local_32 = 0;
    while( true ) {
      iVar5 = (param_1->Data).ArrayNum;
      iVar4 = iVar5 + -1;
      iVar6 = iVar4;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (iVar6 <= iVar7) break;
      iVar6 = iVar9 + -2;
      if (((iVar6 < 0) || (iVar5 == 0)) || (iVar4 <= iVar6)) {
        local_40 = 0;
        if (iVar5 != 0) {
          local_40 = iVar4;
        }
        local_48 = iVar6;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      iVar4 = iVar9 + -1;
      local_38 = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + lVar8 + -4);
      if (iVar4 < 0) {
LAB_141601ad3:
        iVar5 = (param_1->Data).ArrayNum;
        local_40 = iVar5 + -1;
        if (iVar5 == 0) {
          local_40 = 0;
        }
        local_48 = iVar4;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      else {
        iVar6 = (param_1->Data).ArrayNum;
        iVar5 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar4) goto LAB_141601ad3;
      }
      local_36 = *(undefined2 *)((param_1->Data).AllocatorInstance.Data + lVar8 + -2);
      if (iVar9 < 0) {
LAB_141601b2e:
        iVar4 = (param_1->Data).ArrayNum;
        local_40 = iVar4 + -1;
        if (iVar4 == 0) {
          local_40 = 0;
        }
        local_48 = iVar9;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      else {
        iVar5 = (param_1->Data).ArrayNum;
        iVar4 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        if (iVar4 <= iVar9) goto LAB_141601b2e;
      }
      local_34 = *(undefined2 *)((param_1->Data).AllocatorInstance.Data + lVar8);
      iVar4 = _wtoi(&local_38);
      *param_2 = (uchar)iVar4;
      iVar9 = iVar9 + 3;
      param_2 = param_2 + 1;
      lVar8 = lVar8 + 6;
      iVar7 = iVar7 + 3;
    }
    bVar2 = true;
  }
  return bVar2;
}

// ToBool @ 141601de0

bool __thiscall FString::ToBool(FString *this)

{
  bool bVar1;
  
  if ((this->Data).ArrayNum != 0) {
    bVar1 = FToBoolHelper::FromCStringWide((wchar_t *)(this->Data).AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = FToBoolHelper::FromCStringWide(L"");
  return bVar1;
}

// ToHexBlob @ 141601f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FString::ToHexBlob(FString *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  wchar_t *local_38;
  wchar_t local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar12 = 0;
  iVar11 = (param_1->Data).ArrayNum;
  uVar13 = 0;
  uVar5 = iVar11 - 1U;
  if (iVar11 == 0) {
    uVar5 = uVar13;
  }
  if ((param_3 < (uint)((int)uVar5 / 2)) || ((iVar11 != 0 && ((iVar11 - 1U & 1) != 0)))) {
    bVar3 = false;
  }
  else {
    local_2c = 0;
    local_38 = (wchar_t *)0x0;
    uVar14 = uVar12;
    while( true ) {
      uVar5 = (param_1->Data).ArrayNum;
      uVar6 = uVar5 - 1;
      if (uVar5 == 0) {
        uVar6 = uVar13;
      }
      iVar11 = (int)uVar12;
      if ((int)uVar6 <= iVar11) break;
      iVar8 = 0;
      uVar6 = uVar5;
      if (((iVar11 < 0) || (uVar6 = uVar13, uVar5 == 0)) ||
         (uVar6 = uVar5, (int)(uVar5 - 1) <= iVar11)) {
        local_40 = uVar6 - 1;
        if (uVar6 == 0) {
          local_40 = iVar8;
        }
        local_48 = iVar11;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      iVar10 = iVar11 + 1;
      local_30 = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + uVar14);
      if (iVar10 < 0) {
LAB_14160207d:
        iVar1 = (param_1->Data).ArrayNum;
        local_40 = iVar1 + -1;
        if (iVar1 == 0) {
          local_40 = iVar8;
        }
        local_48 = iVar10;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      else {
        iVar1 = (param_1->Data).ArrayNum;
        iVar9 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar9 = iVar8;
        }
        if (iVar9 <= iVar10) goto LAB_14160207d;
      }
      local_2e = *(undefined2 *)((param_1->Data).AllocatorInstance.Data + uVar14 + 2);
      uVar7 = wcstoul(&local_30,&local_38,0x10);
      uVar12 = (ulonglong)(iVar11 + 2);
      uVar14 = uVar14 + 4;
      *param_2 = (uchar)uVar7;
      param_2 = param_2 + 1;
    }
    bVar3 = true;
  }
  return bVar3;
}

// ToLower @ 141602370

FString * __thiscall FString::ToLower(FString *this,FString *__return_storage_ptr__)

{
  FString(__return_storage_ptr__,this);
  ToLowerInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToLower @ 1416023a0

FString * __thiscall FString::ToLower(FString *this,FString *__return_storage_ptr__)

{
  ToLowerInline(this);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ToLowerInline @ 1416024c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FString::ToLowerInline(FString *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar20;
  
  iVar14 = _UNK_150631f4c;
  iVar13 = _UNK_150631f48;
  iVar12 = _UNK_150631f44;
  iVar11 = ___xmm_00000041000000410000004100000041;
  uVar10 = _UNK_150631f3c;
  uVar9 = _UNK_150631f38;
  uVar8 = _UNK_150631f34;
  uVar7 = ___xmm_0000001a0000001a0000001a0000001a;
  uVar6 = _UNK_150631dac;
  uVar5 = _UNK_150631da8;
  uVar4 = _UNK_150631da4;
  uVar3 = ___xmm_00000001000000010000000100000001;
  iVar1 = (this->Data).ArrayNum;
  uVar18 = 0;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  uVar19 = 0;
  uVar17 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar17 = uVar19;
  }
  if (((0 < (int)uVar17) && (7 < uVar17)) && (1 < __isa_available)) {
    uVar16 = uVar17 & 0x80000007;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
    }
    uVar20 = uVar18;
    do {
      auVar24 = pmovzxwd(in_XMM2,*(undefined8 *)(pFVar2 + uVar18 * 2));
      uVar19 = (int)uVar20 + 8;
      uVar20 = (ulonglong)uVar19;
      auVar22._0_4_ = auVar24._0_4_ - iVar11;
      auVar22._4_4_ = auVar24._4_4_ - iVar12;
      auVar22._8_4_ = auVar24._8_4_ - iVar13;
      auVar22._12_4_ = auVar24._12_4_ - iVar14;
      auVar21._0_4_ =
           (~-(uint)(((auVar22._0_4_ < uVar7) * uVar7 | (auVar22._0_4_ >= uVar7) * auVar22._0_4_) ==
                    auVar22._0_4_) & uVar3) * 0x20 + auVar24._0_4_;
      auVar21._4_4_ =
           (~-(uint)(((auVar22._4_4_ < uVar8) * uVar8 | (auVar22._4_4_ >= uVar8) * auVar22._4_4_) ==
                    auVar22._4_4_) & uVar4) * 0x20 + auVar24._4_4_;
      auVar21._8_4_ =
           (~-(uint)(((auVar22._8_4_ < uVar9) * uVar9 | (auVar22._8_4_ >= uVar9) * auVar22._8_4_) ==
                    auVar22._8_4_) & uVar5) * 0x20 + auVar24._8_4_;
      auVar21._12_4_ =
           (~-(uint)(((auVar22._12_4_ < uVar10) * uVar10 |
                     (auVar22._12_4_ >= uVar10) * auVar22._12_4_) == auVar22._12_4_) & uVar6) * 0x20
           + auVar24._12_4_;
      auVar21 = pshufhw(auVar21,auVar21,0xd8);
      auVar21 = pshuflw(auVar22,auVar21,0xd8);
      auVar25._0_8_ = CONCAT44(auVar21._8_4_,auVar21._0_4_);
      auVar25._8_4_ = auVar21._4_4_;
      auVar25._12_4_ = auVar21._12_4_;
      *(undefined8 *)(pFVar2 + uVar18 * 2) = auVar25._0_8_;
      auVar21 = pmovzxwd(auVar25,*(undefined8 *)(pFVar2 + uVar18 * 2 + 8));
      auVar23._0_4_ = auVar21._0_4_ - iVar11;
      auVar23._4_4_ = auVar21._4_4_ - iVar12;
      auVar23._8_4_ = auVar21._8_4_ - iVar13;
      auVar23._12_4_ = auVar21._12_4_ - iVar14;
      auVar24._0_4_ =
           (~-(uint)(((auVar23._0_4_ < uVar7) * uVar7 | (auVar23._0_4_ >= uVar7) * auVar23._0_4_) ==
                    auVar23._0_4_) & uVar3) * 0x20 + auVar21._0_4_;
      auVar24._4_4_ =
           (~-(uint)(((auVar23._4_4_ < uVar8) * uVar8 | (auVar23._4_4_ >= uVar8) * auVar23._4_4_) ==
                    auVar23._4_4_) & uVar4) * 0x20 + auVar21._4_4_;
      auVar24._8_4_ =
           (~-(uint)(((auVar23._8_4_ < uVar9) * uVar9 | (auVar23._8_4_ >= uVar9) * auVar23._8_4_) ==
                    auVar23._8_4_) & uVar5) * 0x20 + auVar21._8_4_;
      auVar24._12_4_ =
           (~-(uint)(((auVar23._12_4_ < uVar10) * uVar10 |
                     (auVar23._12_4_ >= uVar10) * auVar23._12_4_) == auVar23._12_4_) & uVar6) * 0x20
           + auVar21._12_4_;
      auVar21 = pshufhw(auVar24,auVar24,0xd8);
      auVar21 = pshuflw(auVar23,auVar21,0xd8);
      in_XMM2._0_8_ = CONCAT44(auVar21._8_4_,auVar21._0_4_);
      in_XMM2._8_4_ = auVar21._4_4_;
      in_XMM2._12_4_ = auVar21._12_4_;
      *(undefined8 *)(pFVar2 + uVar18 * 2 + 8) = in_XMM2._0_8_;
      uVar18 = uVar18 + 8;
    } while ((longlong)uVar18 < (longlong)(int)(uVar17 - uVar16));
  }
  for (lVar15 = (longlong)(int)uVar19; lVar15 < (int)uVar17; lVar15 = lVar15 + 1) {
    *(ushort *)(pFVar2 + lVar15 * 2) =
         (-(ushort)(*(ushort *)(pFVar2 + lVar15 * 2) - 0x41 < 0x1a) & 0x20) +
         *(ushort *)(pFVar2 + lVar15 * 2);
  }
  return;
}

// ToUpper @ 141602900

FString * __thiscall FString::ToUpper(FString *this,FString *__return_storage_ptr__)

{
  FString(__return_storage_ptr__,this);
  ToUpperInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToUpper @ 141602930

FString * __thiscall FString::ToUpper(FString *this,FString *__return_storage_ptr__)

{
  ToUpperInline(this);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ToUpperInline @ 141602a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FString::ToUpperInline(FString *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulonglong uVar20;
  
  iVar14 = _UNK_150631f5c;
  iVar13 = _UNK_150631f58;
  iVar12 = _UNK_150631f54;
  iVar11 = ___xmm_00000061000000610000006100000061;
  uVar10 = _UNK_150631f3c;
  uVar9 = _UNK_150631f38;
  uVar8 = _UNK_150631f34;
  uVar7 = ___xmm_0000001a0000001a0000001a0000001a;
  uVar6 = _UNK_150631dac;
  uVar5 = _UNK_150631da8;
  uVar4 = _UNK_150631da4;
  uVar3 = ___xmm_00000001000000010000000100000001;
  iVar1 = (this->Data).ArrayNum;
  uVar18 = 0;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  uVar19 = 0;
  uVar17 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar17 = uVar19;
  }
  if (((0 < (int)uVar17) && (7 < uVar17)) && (1 < __isa_available)) {
    uVar16 = uVar17 & 0x80000007;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
    }
    uVar20 = uVar18;
    do {
      auVar28 = pmovzxwd(in_XMM2,*(undefined8 *)(pFVar2 + uVar18 * 2));
      uVar19 = (int)uVar20 + 8;
      uVar20 = (ulonglong)uVar19;
      auVar26._0_4_ = auVar28._0_4_ - iVar11;
      auVar26._4_4_ = auVar28._4_4_ - iVar12;
      auVar26._8_4_ = auVar28._8_4_ - iVar13;
      auVar26._12_4_ = auVar28._12_4_ - iVar14;
      uVar21 = ~-(uint)(((auVar26._0_4_ < uVar7) * uVar7 | (auVar26._0_4_ >= uVar7) * auVar26._0_4_)
                       == auVar26._0_4_) & uVar3;
      uVar23 = ~-(uint)(((auVar26._4_4_ < uVar8) * uVar8 | (auVar26._4_4_ >= uVar8) * auVar26._4_4_)
                       == auVar26._4_4_) & uVar4;
      uVar24 = ~-(uint)(((auVar26._8_4_ < uVar9) * uVar9 | (auVar26._8_4_ >= uVar9) * auVar26._8_4_)
                       == auVar26._8_4_) & uVar5;
      uVar25 = ~-(uint)(((auVar26._12_4_ < uVar10) * uVar10 |
                        (auVar26._12_4_ >= uVar10) * auVar26._12_4_) == auVar26._12_4_) & uVar6;
      auVar22._0_4_ = uVar21 * 0x20;
      auVar22._4_4_ = uVar23 * 0x20;
      auVar22._8_4_ = uVar24 * 0x20;
      auVar22._12_4_ = uVar25 * 0x20;
      auVar29._0_4_ = auVar28._0_4_ + uVar21 * -0x20;
      auVar29._4_4_ = auVar28._4_4_ + uVar23 * -0x20;
      auVar29._8_4_ = auVar28._8_4_ + uVar24 * -0x20;
      auVar29._12_4_ = auVar28._12_4_ + uVar25 * -0x20;
      auVar22 = pshufhw(auVar22,auVar29,0xd8);
      auVar22 = pshuflw(auVar26,auVar22,0xd8);
      auVar30._0_8_ = CONCAT44(auVar22._8_4_,auVar22._0_4_);
      auVar30._8_4_ = auVar22._4_4_;
      auVar30._12_4_ = auVar22._12_4_;
      *(undefined8 *)(pFVar2 + uVar18 * 2) = auVar30._0_8_;
      auVar22 = pmovzxwd(auVar30,*(undefined8 *)(pFVar2 + uVar18 * 2 + 8));
      auVar27._0_4_ = auVar22._0_4_ - iVar11;
      auVar27._4_4_ = auVar22._4_4_ - iVar12;
      auVar27._8_4_ = auVar22._8_4_ - iVar13;
      auVar27._12_4_ = auVar22._12_4_ - iVar14;
      uVar21 = ~-(uint)(((auVar27._0_4_ < uVar7) * uVar7 | (auVar27._0_4_ >= uVar7) * auVar27._0_4_)
                       == auVar27._0_4_) & uVar3;
      uVar23 = ~-(uint)(((auVar27._4_4_ < uVar8) * uVar8 | (auVar27._4_4_ >= uVar8) * auVar27._4_4_)
                       == auVar27._4_4_) & uVar4;
      uVar24 = ~-(uint)(((auVar27._8_4_ < uVar9) * uVar9 | (auVar27._8_4_ >= uVar9) * auVar27._8_4_)
                       == auVar27._8_4_) & uVar5;
      uVar25 = ~-(uint)(((auVar27._12_4_ < uVar10) * uVar10 |
                        (auVar27._12_4_ >= uVar10) * auVar27._12_4_) == auVar27._12_4_) & uVar6;
      auVar28._0_4_ = uVar21 * 0x20;
      auVar28._4_4_ = uVar23 * 0x20;
      auVar28._8_4_ = uVar24 * 0x20;
      auVar28._12_4_ = uVar25 * 0x20;
      auVar31._0_4_ = auVar22._0_4_ + uVar21 * -0x20;
      auVar31._4_4_ = auVar22._4_4_ + uVar23 * -0x20;
      auVar31._8_4_ = auVar22._8_4_ + uVar24 * -0x20;
      auVar31._12_4_ = auVar22._12_4_ + uVar25 * -0x20;
      auVar22 = pshufhw(auVar28,auVar31,0xd8);
      auVar22 = pshuflw(auVar27,auVar22,0xd8);
      in_XMM2._0_8_ = CONCAT44(auVar22._8_4_,auVar22._0_4_);
      in_XMM2._8_4_ = auVar22._4_4_;
      in_XMM2._12_4_ = auVar22._12_4_;
      *(undefined8 *)(pFVar2 + uVar18 * 2 + 8) = in_XMM2._0_8_;
      uVar18 = uVar18 + 8;
    } while ((longlong)uVar18 < (longlong)(int)(uVar17 - uVar16));
  }
  for (lVar15 = (longlong)(int)uVar19; lVar15 < (int)uVar17; lVar15 = lVar15 + 1) {
    *(ushort *)(pFVar2 + lVar15 * 2) =
         *(ushort *)(pFVar2 + lVar15 * 2) -
         (-(ushort)(*(ushort *)(pFVar2 + lVar15 * 2) - 0x61 < 0x1a) & 0x20);
  }
  return;
}

// TrimChar @ 141602f00

FString * __thiscall
FString::TrimChar(FString *this,FString *__return_storage_ptr__,wchar_t param_1,bool *param_2)

{
  FString(__return_storage_ptr__,this);
  TrimCharInline(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// TrimChar @ 141602f50

FString * __thiscall
FString::TrimChar(FString *this,FString *__return_storage_ptr__,wchar_t param_1,bool *param_2)

{
  TrimCharInline(this,param_1,param_2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// TrimCharInline @ 141603170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::TrimCharInline(FString *this,wchar_t param_1,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar1 = (this->Data).ArrayNum;
  bVar8 = false;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = 0;
  if (0 < iVar6) {
    bVar8 = *(wchar_t *)(this->Data).AllocatorInstance.Data == param_1;
    if (bVar8) {
      iVar6 = iVar6 + -1;
    }
    iVar1 = (this->Data).ArrayNum;
    uVar5 = (uint)bVar8;
    uVar7 = iVar1 - 1;
    uVar4 = uVar7;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    if (1 < (int)uVar4) {
      uVar4 = 0;
      if ((((iVar1 == 0) || (uVar4 = uVar7, iVar1 + -2 < 0)) || ((int)uVar7 <= iVar1 + -2)) &&
         (uVar7 = uVar4,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                            ,0x107,
                            L"String index out of bounds: Index %i from a string with a length of %i"
                           ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2 + -2) ==
          param_1) {
        iVar6 = iVar6 + -1;
        bVar8 = true;
      }
    }
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = bVar8;
  }
  MidInline(this,uVar5,iVar6,No);
  return;
}

// TrimEnd @ 141603410

FString * __thiscall FString::TrimEnd(FString *this,FString *__return_storage_ptr__)

{
  FString(__return_storage_ptr__,this);
  TrimEndInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimEnd @ 141603440

FString * __thiscall FString::TrimEnd(FString *this,FString *__return_storage_ptr__)

{
  TrimEndInline(this);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// TrimEndInline @ 1416035f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::TrimEndInline(FString *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (this->Data).ArrayNum;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  lVar5 = (longlong)iVar7;
  iVar6 = iVar7;
  if (0 < iVar7) {
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) {
code_r0x000141603654:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar1 = (this->Data).ArrayNum;
        iVar4 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar4 = 0;
        }
        if (iVar4 <= iVar7) goto code_r0x000141603654;
      }
      iVar4 = iswspace(*(wint_t *)((this->Data).AllocatorInstance.Data + lVar5 * 2 + -2));
      if (iVar4 == 0) break;
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
  }
  iVar4 = (this->Data).ArrayNum;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  RemoveAt(this,iVar6,iVar7 - iVar6,Default);
  return;
}

// TrimQuotes @ 141603840

FString * __thiscall
FString::TrimQuotes(FString *this,FString *__return_storage_ptr__,bool *param_1)

{
  FString(__return_storage_ptr__,this);
  TrimCharInline(__return_storage_ptr__,L'\"',param_1);
  return __return_storage_ptr__;
}

// TrimQuotes @ 141603880

FString * __thiscall
FString::TrimQuotes(FString *this,FString *__return_storage_ptr__,bool *param_1)

{
  TrimCharInline(this,L'\"',param_1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// TrimQuotesInline @ 141603970

void __thiscall FString::TrimQuotesInline(FString *this,bool *param_1)

{
  TrimCharInline(this,L'\"',param_1);
  return;
}

// TrimStart @ 141603a20

FString * __thiscall FString::TrimStart(FString *this,FString *__return_storage_ptr__)

{
  FString(__return_storage_ptr__,this);
  TrimStartInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimStart @ 141603a50

FString * __thiscall FString::TrimStart(FString *this,FString *__return_storage_ptr__)

{
  TrimStartInline(this);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// TrimStartAndEnd @ 141603bb0

FString * __thiscall FString::TrimStartAndEnd(FString *this,FString *__return_storage_ptr__)

{
  FString(__return_storage_ptr__,this);
  TrimEndInline(__return_storage_ptr__);
  TrimStartInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimStartAndEnd @ 141603bf0

FString * __thiscall FString::TrimStartAndEnd(FString *this,FString *__return_storage_ptr__)

{
  TrimEndInline(this);
  TrimStartInline(this);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// TrimStartAndEndInline @ 141603d00

void __thiscall FString::TrimStartAndEndInline(FString *this)

{
  TrimEndInline(this);
  TrimStartInline(this);
  return;
}

// TrimStartInline @ 141603e10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::TrimStartInline(FString *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  lVar6 = 0;
  while( true ) {
    iVar1 = (this->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= iVar5) break;
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = iswspace(*(wint_t *)((this->Data).AllocatorInstance.Data + lVar6));
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
    lVar6 = lVar6 + 2;
  }
  RemoveAt(this,0,iVar5,Default);
  return;
}

// TrimToNullTerminator @ 1416040b0

void __thiscall FString::TrimToNullTerminator(FString *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = (this->Data).ArrayNum;
  if (iVar5 != 0) {
    sVar6 = wcslen((wchar_t *)(this->Data).AllocatorInstance.Data);
    iVar4 = (int)sVar6;
    if (((iVar4 != 0) && (iVar5 <= iVar4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataLen == 0 || DataLen < Data.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                           ,0x1a8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = iVar4 + 1;
    if (iVar4 < 1) {
      uVar7 = 0;
    }
    if (((this->Data).ArrayNum < (int)uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Len <= Data.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                           ,0x1ab,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = (this->Data).ArrayNum - uVar7;
    if (((int)(uVar8 | uVar7) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      _Dst = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2;
      iVar5 = ((this->Data).ArrayNum - uVar7) - uVar8;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar8 * 2,(longlong)iVar5 * 2);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(ForAnyElementType *)this,(this->Data).ArrayNum,&(this->Data).ArrayMax);
    }
  }
  return;
}

// operator= @ 1416219e0

FString * __thiscall FString::operator=(FString *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Data).ArrayNum = (param_1->Data).ArrayNum;
    (this->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  return this;
}

// operator= @ 141621a40

FString * __thiscall FString::operator=(FString *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Data).ArrayMax;
    piVar1 = &(this->Data).ArrayMax;
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar3 = (param_1->Data).ArrayNum;
    (this->Data).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
    }
  }
  return this;
}

// operator[] @ 1417aaa50

wchar_t * __thiscall FString::operator[](FString *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (param_1 < iVar4) goto LAB_1417aaab1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x113,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar2)();
    return pwVar5;
  }
LAB_1417aaab1:
  return (wchar_t *)((this->Data).AllocatorInstance.Data + (longlong)param_1 * 2);
}

// Append<wchar_t_const_> @ 141903690

FString * __thiscall FString::Append<wchar_t_const_>(FString *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  AppendChars(this,param_1,(int)sVar1);
  return this;
}

// FindLastCharByPredicate<UE4Paths_Private::IsSlashOrBackslash::<lambda>_> @ 14190dbc0

int __thiscall
FString::FindLastCharByPredicate<UE4Paths_Private::IsSlashOrBackslash::<lambda>_>
          (FString *this,<lambda> param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  if (-1 < param_2) {
    iVar3 = *piVar1;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    if (param_2 <= iVar7) goto LAB_14190dc22;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Count >= 0 && Count <= this->Len()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x50e,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
LAB_14190dc22:
  if (((param_2 < 0) || (*piVar1 < param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  pFVar4 = (this->Data).AllocatorInstance.Data;
  pFVar8 = pFVar4 + (longlong)param_2 * 2;
  do {
    if (pFVar8 == pFVar4) {
      return -1;
    }
    pFVar2 = pFVar8 + -2;
    pFVar8 = pFVar8 + -2;
  } while ((*(short *)pFVar2 != 0x2f) && (*(short *)pFVar2 != 0x5c));
  return (int)((longlong)pFVar8 - (longlong)pFVar4 >> 1);
}

// FormatImpl @ 141940860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FString::FormatImpl(FString *__return_storage_ptr__,wchar_t *param_1,
                   TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringFormatter<wchar_t> *this;
  FString *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  TValueOrError<FString,FExpressionError> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = GetDefaultFormatter<wchar_t>();
  TStringFormatter<wchar_t>::FormatInternal(this,&local_38,param_1,param_2,false);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FExpressionError>::FWrapErrorType,TValueOrError<class_FString,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5752263950234288083>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringFormatter.h"
                       ,0x2d,"Result.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    FString(__return_storage_ptr__,param_1);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FExpressionError>::FWrapErrorType,TValueOrError<class_FString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)local_38.Variant._padding_;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_38.Variant._padding_;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Variant._padding_._4_4_;
    local_38.Variant._padding_ = 0;
    local_38.Variant._padding_ = 0;
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FExpressionError>::FWrapErrorType,TValueOrError<class_FString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}

// FormatImpl @ 141940a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FString::FormatImpl(FString *__return_storage_ptr__,wchar_t *param_1,
                   TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                   *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringFormatter<wchar_t> *this;
  FString *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  TValueOrError<FString,FExpressionError> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = GetDefaultFormatter<wchar_t>();
  TStringFormatter<wchar_t>::FormatInternal(this,&local_38,param_1,param_2,false);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FExpressionError>::FWrapErrorType,TValueOrError<class_FString,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5752263950234288100>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringFormatter.h"
                       ,0x1c,"Result.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    FString(__return_storage_ptr__,param_1);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FExpressionError>::FWrapErrorType,TValueOrError<class_FString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)local_38.Variant._padding_;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_38.Variant._padding_;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Variant._padding_._4_4_;
    local_38.Variant._padding_ = 0;
    local_38.Variant._padding_ = 0;
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FExpressionError>::FWrapErrorType,TValueOrError<class_FString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}

// Equals @ 141b3f9f0

bool __thiscall FString::Equals(FString *this,FString *param_1,Type param_2)

{
  int iVar1;
  FScriptContainerElement *_Str2;
  FScriptContainerElement *_Str1;
  int iVar2;
  
  iVar2 = (this->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    _Str2 = (param_1->Data).AllocatorInstance.Data;
    _Str1 = (this->Data).AllocatorInstance.Data;
    if (param_2 == CaseSensitive) {
      iVar2 = wcscmp((wchar_t *)_Str1,(wchar_t *)_Str2);
      return iVar2 == 0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)_Str1,(wchar_t *)_Str2);
    return iVar2 == 0;
  }
  return true;
}

// Printf<wchar_t_const_*> @ 141bdb980

FString * __cdecl
FString::Printf<wchar_t_const_*>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*> param_1,wchar_t *param_2)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

// Printf<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*> @ 141bdb9a0

FString * __cdecl
FString::Printf<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

// Printf<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*> @ 141bdb9d0

FString * __cdecl
FString::Printf<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}


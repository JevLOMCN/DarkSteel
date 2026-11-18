// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 133

// FAnsiString @ 141582d50

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,FAnsiString *param_1)

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
            (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar2);
  return this;
}

// FAnsiString @ 141582de0

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
        pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar7,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      FGenericPlatformString::Memcpy(pFVar3,param_2,(longlong)param_1);
      pFVar3[param_1] = (FScriptContainerElement)0x0;
    }
  }
  return this;
}

// FAnsiString @ 141582ee0

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,int param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
        pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar7,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      FGenericPlatformString::Convert<unsigned_short,char>((char *)pFVar3,param_1,param_2,param_1);
      pFVar3[param_1] = (FScriptContainerElement)0x0;
    }
  }
  return this;
}

// FAnsiString @ 141582fe0

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,int param_1,uchar *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnsiString *pFVar7;
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
        pFVar7 = (FAnsiString *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = UE::Core::Private::GetConvertedLength((char *)0x0,param_2,param_1);
    if (0 < iVar6) {
      uVar8 = iVar6 + 1;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar8,(ForAnyElementType *)this,*piVar1,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      UE::Core::Private::Convert((char *)pFVar3,iVar6,param_2,param_1);
      pFVar3[iVar6] = (FScriptContainerElement)0x0;
    }
  }
  return this;
}

// FAnsiString @ 141583100

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,int param_1,wchar_t *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
        pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar7,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar3 = (this->Data).AllocatorInstance.Data;
      FGenericPlatformString::Convert<wchar_t,char>((char *)pFVar3,param_1,param_2,param_1);
      pFVar3[param_1] = (FScriptContainerElement)0x0;
    }
  }
  return this;
}

// FAnsiString @ 141583200

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,char *param_1)

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
                (1,1,uVar4,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    FGenericPlatformString::Memcpy((this->Data).AllocatorInstance.Data,param_1,(longlong)(int)uVar4)
    ;
  }
  return this;
}

// FAnsiString @ 1415832c0

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != '\0') {
      sVar6 = strlen(param_1);
      iVar8 = (int)sVar6 + 1;
      uVar7 = iVar8 + param_2;
      if (-1 < (int)uVar7) {
        if (*piVar2 < (int)uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar7,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        FGenericPlatformString::Memcpy((this->Data).AllocatorInstance.Data,param_1,(longlong)iVar8);
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
            (1,1,param_2 + 1,(ForAnyElementType *)this,iVar8,piVar2);
  return this;
}

// FAnsiString @ 141583410

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,ushort *param_1)

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
                (1,1,uVar4,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    FGenericPlatformString::Convert<unsigned_short,char>
              ((char *)(this->Data).AllocatorInstance.Data,uVar4,param_1,uVar4);
  }
  return this;
}

// FAnsiString @ 1415834d0

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != 0) {
      sVar6 = wcslen((wchar_t *)param_1);
      iVar8 = (int)sVar6 + 1;
      uVar7 = iVar8 + param_2;
      if (-1 < (int)uVar7) {
        if (*piVar2 < (int)uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar7,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        FGenericPlatformString::Convert<unsigned_short,char>
                  ((char *)(this->Data).AllocatorInstance.Data,iVar8,param_1,iVar8);
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
            (1,1,param_2 + 1,(ForAnyElementType *)this,iVar8,piVar2);
  return this;
}

// FAnsiString @ 141583620

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,uchar *param_1)

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
    uVar3 = UE::Core::Private::GetConvertedLength((char *)0x0,param_1,iVar5);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,(ForAnyElementType *)this,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,(ForAnyElementType *)this,piVar1,piVar2);
    UE::Core::Private::Convert((char *)(this->Data).AllocatorInstance.Data,uVar3,param_1,iVar5);
  }
  return this;
}

// FAnsiString @ 141583700

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar3)();
      return pFVar6;
    }
    if (*param_1 != '\0') {
      sVar7 = strlen((char *)param_1);
      iVar9 = (int)sVar7 + 1;
      iVar5 = UE::Core::Private::GetConvertedLength((char *)0x0,param_1,iVar9);
      uVar8 = iVar5 + param_2;
      if (-1 < (int)uVar8) {
        if (*piVar2 < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar8,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,(ForAnyElementType *)this,piVar1,piVar2);
        UE::Core::Private::Convert((char *)(this->Data).AllocatorInstance.Data,iVar5,param_1,iVar9);
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
            (1,1,param_2 + 1,(ForAnyElementType *)this,iVar5,piVar2);
  return this;
}

// FAnsiString @ 141583870

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,wchar32 *param_1)

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
                (1,1,uVar1,(ForAnyElementType *)this,*piVar2,piVar3);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,(ForAnyElementType *)this,piVar2,piVar3);
    FGenericPlatformString::Convert<char32_t,char>
              ((char *)(this->Data).AllocatorInstance.Data,uVar1,param_1,uVar1);
  }
  return this;
}

// FAnsiString @ 141583940

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,wchar_t *param_1)

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
                (1,1,uVar4,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    FGenericPlatformString::Convert<wchar_t,char>
              ((char *)(this->Data).AllocatorInstance.Data,uVar4,param_1,uVar4);
  }
  return this;
}

// FAnsiString @ 141583a00

FAnsiString * __thiscall FAnsiString::FAnsiString(FAnsiString *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != L'\0') {
      sVar6 = wcslen(param_1);
      iVar8 = (int)sVar6 + 1;
      uVar7 = iVar8 + param_2;
      if (-1 < (int)uVar7) {
        if (*piVar2 < (int)uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar7,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        FGenericPlatformString::Convert<wchar_t,char>
                  ((char *)(this->Data).AllocatorInstance.Data,iVar8,param_1,iVar8);
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
            (1,1,param_2 + 1,(ForAnyElementType *)this,iVar8,piVar2);
  return this;
}

// operator= @ 14158bbf0

FAnsiString * __thiscall FAnsiString::operator=(FAnsiString *this,char *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  
  if ((this->Data).AllocatorInstance.Data != (FScriptContainerElement *)param_1) {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      uVar4 = 0;
    }
    else {
      sVar3 = strlen(param_1);
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
                (1,1,uVar4,(ForAnyElementType *)this,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)this,piVar2,piVar1);
    if (uVar4 != 0) {
      memcpy((this->Data).AllocatorInstance.Data,param_1,(ulonglong)uVar4);
    }
  }
  return this;
}

// operator[] @ 14158cec0

char * __thiscall FAnsiString::operator[](FAnsiString *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (param_1 < iVar4) goto LAB_14158cf21;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x107,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pcVar5 = (char *)(*pcVar2)();
    return pcVar5;
  }
LAB_14158cf21:
  return (char *)((this->Data).AllocatorInstance.Data + param_1);
}

// AppendChar @ 1415ac4d0

FAnsiString * __thiscall FAnsiString::AppendChar(FAnsiString *this,char param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != '\0') {
    iVar2 = (this->Data).ArrayNum;
    piVar1 = &(this->Data).ArrayNum;
    uVar7 = iVar2 - 1;
    if (iVar2 < 1) {
      uVar7 = 0;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(iVar2 < 1) + 1,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
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
        pFVar5 = (FAnsiString *)(*pcVar3)();
        return pFVar5;
      }
    }
    (this->Data).AllocatorInstance.Data[(int)uVar7] = (FScriptContainerElement)param_1;
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
        pFVar5 = (FAnsiString *)(*pcVar3)();
        return pFVar5;
      }
    }
    (this->Data).AllocatorInstance.Data[(int)uVar7] = (FScriptContainerElement)0x0;
  }
  return this;
}

// AppendChars @ 1415ac870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::AppendChars(FAnsiString *this,char *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar8 = (ulong64)param_2;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(uint)(iVar7 == 0) + param_2,(ForAnyElementType *)this,piVar1,
             &(this->Data).ArrayMax);
  iVar7 = iVar7 - (uint)(iVar7 != 0);
  pFVar9 = (this->Data).AllocatorInstance.Data + iVar7;
  pvVar5 = FGenericPlatformString::Memcpy(pFVar9,param_1,uVar8);
  puVar6 = (undefined1 *)((longlong)pvVar5 + uVar8);
  if (puVar6 == (undefined1 *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    pvVar5 = FGenericPlatformString::Memcpy
                       ((this->Data).AllocatorInstance.Data + iVar7,param_1,uVar8);
    puVar6 = (undefined1 *)((longlong)pvVar5 + uVar8);
  }
  else {
    iVar4 = (int)puVar6 - (int)pFVar9;
    if (iVar4 < param_2) {
      TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar4,No);
    }
  }
  *puVar6 = 0;
  return;
}

// AppendChars @ 1415ac9b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::AppendChars(FAnsiString *this,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(uint)(iVar7 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar7 = iVar7 - (uint)(iVar7 != 0);
  pFVar8 = (this->Data).AllocatorInstance.Data + iVar7;
  pcVar6 = FGenericPlatformString::Convert<unsigned_short,char>
                     ((char *)pFVar8,param_2,param_1,param_2);
  if (pcVar6 == (char *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,piVar1,piVar2);
    pcVar6 = FGenericPlatformString::Convert<unsigned_short,char>
                       ((char *)((this->Data).AllocatorInstance.Data + iVar7),param_2,param_1,
                        param_2);
  }
  else {
    iVar5 = (int)pcVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *pcVar6 = '\0';
  return;
}

// AppendChars @ 1415acaf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::AppendChars(FAnsiString *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  piVar1 = &(this->Data).ArrayNum;
  iVar7 = *piVar1;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(uint)(iVar7 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar7 = iVar7 - (uint)(iVar7 != 0);
  pFVar8 = (this->Data).AllocatorInstance.Data + iVar7;
  pcVar6 = UE::Core::Private::Convert((char *)pFVar8,param_2,param_1,param_2);
  if (pcVar6 == (char *)0x0) {
    iVar5 = UE::Core::Private::GetConvertedLength((char *)0x0,param_1,param_2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5 - param_2,(ForAnyElementType *)this,piVar1,piVar2);
    pcVar6 = UE::Core::Private::Convert
                       ((char *)((this->Data).AllocatorInstance.Data + iVar7),iVar5,param_1,param_2)
    ;
  }
  else {
    iVar5 = (int)pcVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *pcVar6 = '\0';
  return;
}

// AppendChars @ 1415acc40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::AppendChars(FAnsiString *this,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(uint)(iVar7 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar7 = iVar7 - (uint)(iVar7 != 0);
  pFVar8 = (this->Data).AllocatorInstance.Data + iVar7;
  pcVar6 = FGenericPlatformString::Convert<char32_t,char>((char *)pFVar8,param_2,param_1,param_2);
  if (pcVar6 == (char *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,piVar1,piVar2);
    pcVar6 = FGenericPlatformString::Convert<char32_t,char>
                       ((char *)((this->Data).AllocatorInstance.Data + iVar7),param_2,param_1,
                        param_2);
  }
  else {
    iVar5 = (int)pcVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *pcVar6 = '\0';
  return;
}

// AppendChars @ 1415acd80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::AppendChars(FAnsiString *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0x72,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(uint)(iVar7 == 0) + param_2,(ForAnyElementType *)this,piVar1,piVar2);
  iVar7 = iVar7 - (uint)(iVar7 != 0);
  pFVar8 = (this->Data).AllocatorInstance.Data + iVar7;
  pcVar6 = FGenericPlatformString::Convert<wchar_t,char>((char *)pFVar8,param_2,param_1,param_2);
  if (pcVar6 == (char *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,piVar1,piVar2);
    pcVar6 = FGenericPlatformString::Convert<wchar_t,char>
                       ((char *)((this->Data).AllocatorInstance.Data + iVar7),param_2,param_1,
                        param_2);
  }
  else {
    iVar5 = (int)pcVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *pcVar6 = '\0';
  return;
}

// AppendInt64 @ 1415adcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAnsiString::AppendInt64(FAnsiString *this,long64 param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  long64 lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [30];
  char acStack_3a [33];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_58;
  puVar2 = local_18;
  lVar3 = param_1;
  iVar5 = 0x20;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + -1;
    puVar2 = (ulonglong *)((longlong)puVar2 + -1);
    lVar1 = lVar3 / 10;
    *(char *)puVar2 = "0123456789"[lVar3 % 10];
    lVar3 = lVar1;
  } while (lVar1 != 0);
  if (param_1 < 0) {
    iVar5 = iVar4 + -2;
    acStack_3a[iVar4] = '-';
  }
  AppendChars(this,acStack_3a + (longlong)iVar5 + 2,0x20 - iVar5);
  return;
}

// AppendInt @ 1415adf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAnsiString::AppendInt(FAnsiString *this,int param_1)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [30];
  char acStack_2a [17];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_48;
  puVar2 = local_18;
  iVar3 = param_1;
  iVar5 = 0x10;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + -1;
    puVar2 = (ulonglong *)((longlong)puVar2 + -1);
    iVar1 = iVar3 / 10;
    *(undefined *)puVar2 = (&s_9876543210123456789)[iVar3 % 10 + 9];
    iVar3 = iVar1;
  } while (iVar1 != 0);
  if (param_1 < 0) {
    iVar5 = iVar4 + -2;
    acStack_2a[iVar4] = '-';
  }
  AppendChars(this,acStack_2a + (longlong)iVar5 + 2,0x10 - iVar5);
  return;
}

// AppendfImpl @ 1415ae1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FAnsiString::AppendfImpl(FAnsiString *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  char *pcVar3;
  size_t sVar4;
  char *_Str;
  int iVar5;
  undefined1 local_res18 [16];
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 *local_260;
  char local_248 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  iVar5 = 0x200;
  puVar2 = __local_stdio_printf_options();
  pcVar3 = (char *)0x0;
  local_268 = 0;
  local_260 = local_res18;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,local_248,0x200,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if ((iVar1 == -1) || (_Str = local_248, 0x1ff < iVar1)) {
    do {
      iVar5 = iVar5 * 2;
      pcVar3 = FMemory::Realloc(pcVar3,(longlong)iVar5,0);
      local_260 = local_res18;
      local_268 = 0;
      iVar1 = __stdio_common_vsprintf(*puVar2 | 2,pcVar3,(longlong)iVar5,param_2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
    } while ((iVar1 == -1) || (_Str = pcVar3, iVar5 <= iVar1));
  }
  _Str[iVar1] = '\0';
  sVar4 = strlen(_Str);
  AppendChars(param_1,_Str,(int)sVar4);
  if (iVar5 != 0x200) {
    FMemory::Free(_Str);
  }
  return;
}

// AssignRange @ 1415ae570

void __thiscall FAnsiString::AssignRange(FAnsiString *this,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  size_t _Size;
  uint uVar9;
  
  _Size = (size_t)param_2;
  piVar1 = &(this->Data).ArrayNum;
  if (param_2 == 0) {
    piVar2 = &(this->Data).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)this,0,piVar2);
      return;
    }
  }
  else {
    iVar5 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar5 = 0;
    }
    uVar9 = param_2 + 1;
    if (iVar5 < param_2) {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      piVar2 = &(this->Data).ArrayMax;
      *piVar1 = 0;
      if (*piVar2 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar9,(ForAnyElementType *)this,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9,(ForAnyElementType *)this,piVar1,piVar2);
      pFVar6 = (this->Data).AllocatorInstance.Data;
      memcpy(pFVar6,param_1,_Size);
      pFVar6[_Size] = (FScriptContainerElement)0x0;
    }
    else {
      pFVar6 = (this->Data).AllocatorInstance.Data;
      memmove(pFVar6,param_1,_Size);
      uVar7 = iVar5 - param_2;
      pFVar6[_Size] = (FScriptContainerElement)0x0;
      uVar8 = 0;
      if ((int)(uVar9 + uVar7) <= *piVar1) {
        uVar8 = ~(uVar9 | uVar7) >> 0x1f;
      }
      if ((uVar8 == 0) &&
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
      if (uVar7 != 0) {
        pFVar6 = (this->Data).AllocatorInstance.Data + (int)uVar9;
        iVar5 = (*piVar1 - uVar9) - uVar7;
        if (iVar5 != 0) {
          memmove(pFVar6,pFVar6 + (int)uVar7,(longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(ForAnyElementType *)this,*piVar1,&(this->Data).ArrayMax);
      }
    }
  }
  return;
}

// Chr @ 1415b00f0

FAnsiString * __cdecl FAnsiString::Chr(FAnsiString *__return_storage_ptr__,char param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  char local_res10 [8];
  
  local_res10[1] = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 != '\0') {
    local_res10[0] = param_1;
    sVar3 = strlen(local_res10);
    uVar4 = (int)sVar3 + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((__return_storage_ptr__->Data).AllocatorInstance.Data,local_res10,
               (longlong)(int)uVar4);
  }
  return __return_storage_ptr__;
}

// ChrN @ 1415b0330

FAnsiString * __cdecl
FAnsiString::ChrN(FAnsiString *__return_storage_ptr__,int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar8;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCharacters >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x52e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FAnsiString *)(*pcVar3)();
    return pFVar5;
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  uVar8 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_1 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  uVar9 = uVar8;
  if (0 < param_1) {
    do {
      iVar6 = *piVar2 + -1;
      if (*piVar2 == 0) {
        iVar6 = 0;
      }
      if ((iVar6 <= (int)uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FAnsiString *)(*pcVar3)();
        return pFVar5;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      (__return_storage_ptr__->Data).AllocatorInstance.Data[uVar9] =
           (FScriptContainerElement)param_2;
      uVar9 = uVar9 + 1;
    } while ((int)uVar7 < param_1);
  }
  uVar7 = 0;
  if (param_1 < (__return_storage_ptr__->Data).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FAnsiString *)(*pcVar3)();
    return pFVar5;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x0;
  return __return_storage_ptr__;
}

// ConcatCF @ 1415b1f10

FAnsiString * __cdecl
FAnsiString::ConcatCF(FAnsiString *__return_storage_ptr__,char *param_1,FAnsiString *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType local_28;
  int local_20 [2];
  
  if (param_1 == (char *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  else {
    sVar4 = strlen(param_1);
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
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20[0] = 0;
      local_20[1] = 0;
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
                  (1,1,uVar5,&local_28,0,local_20 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar5,&local_28,local_20,local_20 + 1);
      FVar2.Data = local_28.Data;
      sVar4 = (size_t)iVar3;
      memcpy(local_28.Data,param_1,sVar4);
      memcpy(FVar2.Data + sVar4,(param_2->Data).AllocatorInstance.Data,(longlong)iVar6);
      FVar2.Data[(longlong)iVar6 + sVar4] = (FScriptContainerElement)0x0;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_20[0];
      (__return_storage_ptr__->Data).ArrayMax = local_20[1];
    }
  }
  return __return_storage_ptr__;
}

// ConcatCF @ 1415b2070

FAnsiString * __cdecl
FAnsiString::ConcatCF(FAnsiString *__return_storage_ptr__,char *param_1,FAnsiString *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType local_28;
  int local_20 [2];
  
  if (param_1 != (char *)0x0) {
    sVar4 = strlen(param_1);
    iVar3 = (int)sVar4;
    if (iVar3 != 0) {
      iVar1 = (param_2->Data).ArrayNum;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20[0] = 0;
      local_20[1] = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      uVar5 = iVar6 + 1 + iVar3;
      if (-1 < (int)uVar5) {
        if (0 < (int)uVar5) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar5,&local_28,0,local_20 + 1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar5,&local_28,local_20,local_20 + 1);
        FVar2.Data = local_28.Data;
        sVar4 = (size_t)iVar3;
        memcpy(local_28.Data,param_1,sVar4);
        memcpy(FVar2.Data + sVar4,(param_2->Data).AllocatorInstance.Data,(longlong)iVar6);
        FVar2.Data[(longlong)iVar6 + sVar4] = (FScriptContainerElement)0x0;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_20[0];
        (__return_storage_ptr__->Data).ArrayMax = local_20[1];
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  FAnsiString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// ConcatFC @ 1415b26f0

FAnsiString * __cdecl
FAnsiString::ConcatFC(FAnsiString *__return_storage_ptr__,FAnsiString *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  TArray<char,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2 == (char *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  sVar2 = strlen(param_2);
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
    TArray<char,TSizedDefaultAllocator<32>_>::TArray<char,TSizedDefaultAllocator<32>_><char>
              (&local_18,&param_1->Data,(uint)((param_1->Data).ArrayNum == 0) + iVar1);
    AppendChars((FAnsiString *)&local_18,param_2,iVar1);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFC @ 1415b27d0

FAnsiString * __cdecl
FAnsiString::ConcatFC(FAnsiString *__return_storage_ptr__,FAnsiString *param_1,char *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  FAnsiString local_18;
  
  if (param_2 != (char *)0x0) {
    sVar4 = strlen(param_2);
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
                  (1,1,uVar5,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1);
        }
      }
      AppendChars(&local_18,param_2,iVar2);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  FAnsiString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b2cc0

FAnsiString * __cdecl
FAnsiString::ConcatFF(FAnsiString *__return_storage_ptr__,FAnsiString *param_1,FAnsiString *param_2)

{
  int iVar1;
  int iVar2;
  TArray<char,TSizedDefaultAllocator<32>_> local_18;
  
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
  TArray<char,TSizedDefaultAllocator<32>_>::TArray<char,TSizedDefaultAllocator<32>_><char>
            (&local_18,&param_1->Data,iVar2);
  AppendChars((FAnsiString *)&local_18,(char *)(param_2->Data).AllocatorInstance.Data,iVar2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b2d70

FAnsiString * __cdecl
FAnsiString::ConcatFF(FAnsiString *__return_storage_ptr__,FAnsiString *param_1,FAnsiString *param_2)

{
  int iVar1;
  int iVar2;
  TArray<char,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    FAnsiString(__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TArray<char,TSizedDefaultAllocator<32>_>::TArray<char,TSizedDefaultAllocator<32>_><char>
            (&local_18,&param_1->Data,iVar2);
  AppendChars((FAnsiString *)&local_18,(char *)(param_2->Data).AllocatorInstance.Data,iVar2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b2e00

FAnsiString * __cdecl
FAnsiString::ConcatFF(FAnsiString *__return_storage_ptr__,FAnsiString *param_1,FAnsiString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  size_t _Size;
  uint uVar2;
  int iVar3;
  FAnsiString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  _Size = (size_t)local_18.Data.ArrayNum;
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
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    uVar2 = iVar3 + local_18.Data.ArrayNum;
    if ((int)uVar2 < local_18.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,_Size);
    AppendChars(&local_18,(char *)(param_2->Data).AllocatorInstance.Data,iVar3);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b2f00

FAnsiString * __cdecl
FAnsiString::ConcatFF(FAnsiString *__return_storage_ptr__,FAnsiString *param_1,FAnsiString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  size_t _Size;
  uint uVar2;
  int iVar3;
  FAnsiString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  _Size = (size_t)local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum < 2) {
    FAnsiString(__return_storage_ptr__,param_2);
  }
  else {
    iVar1 = (param_2->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    uVar2 = iVar3 + local_18.Data.ArrayNum;
    if ((int)uVar2 < local_18.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,_Size);
    AppendChars(&local_18,(char *)(param_2->Data).AllocatorInstance.Data,iVar3);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFR @ 1415b3650

FAnsiString * __cdecl
FAnsiString::ConcatFR
          (FAnsiString *__return_storage_ptr__,FAnsiString *param_1,char *param_2,int param_3)

{
  TArray<char,TSizedDefaultAllocator<32>_> local_18;
  
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
  TArray<char,TSizedDefaultAllocator<32>_>::TArray<char,TSizedDefaultAllocator<32>_><char>
            (&local_18,&param_1->Data,(uint)((param_1->Data).ArrayNum == 0) + param_3);
  AppendChars((FAnsiString *)&local_18,param_2,param_3);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFR @ 1415b3700

FAnsiString * __cdecl
FAnsiString::ConcatFR
          (FAnsiString *__return_storage_ptr__,FAnsiString *param_1,char *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  uint uVar3;
  FAnsiString local_18;
  
  if (param_3 == 0) {
    FAnsiString(__return_storage_ptr__,param_1);
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
                (1,1,uVar3,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1);
      }
    }
    AppendChars(&local_18,param_2,param_3);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatRF @ 1415b3b40

FAnsiString * __cdecl
FAnsiString::ConcatRF
          (FAnsiString *__return_storage_ptr__,char *param_1,int param_2,FAnsiString *param_3)

{
  int iVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  ForAnyElementType local_28;
  int local_20 [2];
  
  _Size = (size_t)param_2;
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
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
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
                (1,1,uVar3,&local_28,0,local_20 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&local_28,local_20,local_20 + 1);
    FVar2.Data = local_28.Data;
    memcpy(local_28.Data,param_1,_Size);
    memcpy(FVar2.Data + _Size,(param_3->Data).AllocatorInstance.Data,(longlong)iVar4);
    FVar2.Data[(longlong)iVar4 + _Size] = (FScriptContainerElement)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_20[0];
    (__return_storage_ptr__->Data).ArrayMax = local_20[1];
  }
  return __return_storage_ptr__;
}

// ConcatRF @ 1415b3c80

FAnsiString * __cdecl
FAnsiString::ConcatRF
          (FAnsiString *__return_storage_ptr__,char *param_1,int param_2,FAnsiString *param_3)

{
  int iVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  ForAnyElementType local_28;
  int local_20 [2];
  
  _Size = (size_t)param_2;
  if (param_2 == 0) {
    FAnsiString(__return_storage_ptr__,param_3);
  }
  else {
    iVar1 = (param_3->Data).ArrayNum;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
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
                (1,1,uVar3,&local_28,0,local_20 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&local_28,local_20,local_20 + 1);
    FVar2.Data = local_28.Data;
    memcpy(local_28.Data,param_1,_Size);
    memcpy(FVar2.Data + _Size,(param_3->Data).AllocatorInstance.Data,(longlong)iVar4);
    FVar2.Data[(longlong)iVar4 + _Size] = (FScriptContainerElement)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_20[0];
    (__return_storage_ptr__->Data).ArrayMax = local_20[1];
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4470

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSize(FAnsiString *__return_storage_ptr__,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(pFVar3,param_1,(longlong)param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4590

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSize(FAnsiString *__return_storage_ptr__,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<unsigned_short,char>((char *)pFVar3,param_2,param_1,param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b46b0

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSize(FAnsiString *__return_storage_ptr__,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnsiString *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 == 0) goto LAB_1415b4740;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FAnsiString *)(*pcVar4)();
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
      pFVar7 = (FAnsiString *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b4740:
  iVar6 = UE::Core::Private::GetConvertedLength((char *)0x0,param_1,param_2);
  if (0 < iVar6) {
    uVar8 = iVar6 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar2 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    UE::Core::Private::Convert((char *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b47f0

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSize(FAnsiString *__return_storage_ptr__,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<char32_t,char>((char *)pFVar3,param_2,param_1,param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b4910

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSize(FAnsiString *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<wchar_t,char>((char *)pFVar3,param_2,param_1,param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b5630

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSizeWithSlack
          (FAnsiString *__return_storage_ptr__,char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (char *)0x0) {
    if (param_2 == 0) goto LAB_1415b56c1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b56c1:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(pFVar3,param_1,(longlong)param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b57c0

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSizeWithSlack
          (FAnsiString *__return_storage_ptr__,ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    if (param_2 == 0) goto LAB_1415b5851;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b5851:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<unsigned_short,char>((char *)pFVar3,param_2,param_1,param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b5950

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSizeWithSlack
          (FAnsiString *__return_storage_ptr__,uchar *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnsiString *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 == 0) goto LAB_1415b59e7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FAnsiString *)(*pcVar4)();
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
      pFVar7 = (FAnsiString *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b59e7:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FAnsiString *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = UE::Core::Private::GetConvertedLength((char *)0x0,param_1,param_2);
  if (iVar6 < 1) {
    if (0 < param_3) {
      uVar8 = param_3 + 1;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    UE::Core::Private::Convert((char *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b5af0

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSizeWithSlack
          (FAnsiString *__return_storage_ptr__,wchar32 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (wchar32 *)0x0) {
    if (param_2 == 0) goto LAB_1415b5b81;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b5b81:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<char32_t,char>((char *)pFVar3,param_2,param_1,param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b5c80

FAnsiString * __cdecl
FAnsiString::ConstructFromPtrSizeWithSlack
          (FAnsiString *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnsiString *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 == 0) goto LAB_1415b5d11;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
      pFVar6 = (FAnsiString *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b5d11:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnsiString *)(*pcVar4)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2 + 1,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    FGenericPlatformString::Convert<wchar_t,char>((char *)pFVar3,param_2,param_1,param_2);
    pFVar3[param_2] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b79c0

FAnsiString * __cdecl
FAnsiString::ConstructWithSlack(FAnsiString *__return_storage_ptr__,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Memcpy
              ((__return_storage_ptr__->Data).AllocatorInstance.Data,param_1,(longlong)iVar8);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b7b20

FAnsiString * __cdecl
FAnsiString::ConstructWithSlack(FAnsiString *__return_storage_ptr__,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Convert<unsigned_short,char>
              ((char *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar8,param_1,iVar8);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b7c80

FAnsiString * __cdecl
FAnsiString::ConstructWithSlack(FAnsiString *__return_storage_ptr__,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar3)();
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
      pFVar6 = (FAnsiString *)(*pcVar3)();
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
                  (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
      }
    }
  }
  else {
    sVar7 = strlen((char *)param_1);
    iVar9 = (int)sVar7 + 1;
    iVar5 = UE::Core::Private::GetConvertedLength((char *)0x0,param_1,iVar9);
    uVar8 = iVar5 + param_2;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar2 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    UE::Core::Private::Convert
              ((char *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar5,param_1,iVar9);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b7df0

FAnsiString * __cdecl
FAnsiString::ConstructWithSlack(FAnsiString *__return_storage_ptr__,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnsiString *pFVar6;
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
      pFVar6 = (FAnsiString *)(*pcVar3)();
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
      pFVar6 = (FAnsiString *)(*pcVar3)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Convert<char32_t,char>
              ((char *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar5,param_1,iVar5);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b7f50

FAnsiString * __cdecl
FAnsiString::ConstructWithSlack(FAnsiString *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FAnsiString *pFVar5;
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
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
      pFVar5 = (FAnsiString *)(*pcVar3)();
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
                  (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
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
                (1,1,uVar7,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    FGenericPlatformString::Convert<wchar_t,char>
              ((char *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar8,param_1,iVar8);
  }
  return __return_storage_ptr__;
}

// ConvertTabsToSpacesInline @ 1415b8fd0

void __thiscall FAnsiString::ConvertTabsToSpacesInline(FAnsiString *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *_Dst;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  FAnsiString local_28;
  
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
    iVar11 = (this->Data).ArrayNum;
    iVar6 = 0;
    if (iVar11 == 0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)(this->Data).AllocatorInstance.Data;
      iVar6 = iVar11 + -1;
    }
    pcVar8 = TCString<char>::Strnstr(pcVar8,iVar6,"\t",1);
    if (pcVar8 == (char *)0x0) {
      return;
    }
    if ((this->Data).ArrayNum == 0) {
      iVar6 = 0x5060d4b2;
    }
    else {
      iVar6 = (int)(this->Data).AllocatorInstance.Data;
    }
    uVar12 = (int)pcVar8 - iVar6;
    if (uVar12 == 0xffffffff) break;
    iVar11 = (this->Data).ArrayNum;
    iVar6 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar6 = 0;
    }
    iVar7 = iVar6;
    if ((int)(uVar12 + 1) < iVar6) {
      iVar7 = uVar12 + 1;
    }
    iVar9 = 0;
    if (0 < iVar7) {
      iVar9 = iVar7;
    }
    if (iVar11 == 0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)(this->Data).AllocatorInstance.Data;
    }
    ConstructFromPtrSize(&local_28,(char *)(pcVar8 + iVar9),iVar6 - iVar9);
    iVar6 = (this->Data).ArrayNum;
    uVar10 = iVar6 - 1;
    if (iVar6 == 0) {
      uVar10 = 0;
    }
    uVar5 = uVar10;
    if ((int)uVar12 < (int)uVar10) {
      uVar5 = uVar12;
    }
    uVar14 = 0;
    if (0 < (int)uVar5) {
      uVar14 = uVar5;
    }
    uVar5 = 0;
    if (0 < (int)(uVar10 - uVar14)) {
      uVar5 = uVar10 - uVar14;
    }
    uVar10 = 0;
    if ((int)(uVar14 + uVar5) <= iVar6) {
      uVar10 = ~(uVar5 | uVar14) >> 0x1f;
    }
    if ((uVar10 == 0) &&
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
      _Dst = (this->Data).AllocatorInstance.Data + (int)uVar14;
      iVar6 = ((this->Data).ArrayNum - uVar5) - uVar14;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar6);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar5;
    }
    iVar7 = Find(this,"\n",1,CaseSensitive,FromEnd,uVar12);
    iVar11 = (this->Data).ArrayNum;
    iVar6 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar6 = 0;
    }
    iVar11 = 0;
    if (iVar7 != -1) {
      iVar11 = iVar7;
    }
    uVar12 = param_1 - (iVar6 - iVar11) % param_1;
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      do {
        AppendChar(this,' ');
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    AppendChars(this,(char *)local_28.Data.AllocatorInstance.Data,iVar6);
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
  }
  return;
}

// CullArray @ 1415bc250

int __cdecl FAnsiString::CullArray(TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void **local_res8 [4];
  void *local_18;
  undefined8 local_10;
  
  if (param_1 == (TArray<FAnsiString,TSizedDefaultAllocator<32>_> *)0x0) {
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
  local_18 = (void *)0x0;
  local_10 = 0;
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
  local_res8[0] = &local_18;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FAnsiString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (param_1,(<lambda_1> *)local_res8);
  iVar4 = param_1->ArrayNum;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return iVar4;
}

// Empty @ 1415c0530

void __thiscall FAnsiString::Empty(FAnsiString *this,int param_1)

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
                (1,1,uVar2,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Empty @ 1415c0580

void __thiscall FAnsiString::Empty(FAnsiString *this)

{
  int *piVar1;
  
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// EndsWith @ 1415c06e0

bool __thiscall FAnsiString::EndsWith(FAnsiString *this,char *param_1,int param_2,Type param_3)

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
                      ((char *)((this->Data).AllocatorInstance.Data + iVar5),param_1);
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
    iVar4 = strcmp((char *)((this->Data).AllocatorInstance.Data + iVar5),param_1);
  }
  if (iVar4 != 0) {
    return false;
  }
  return true;
}

// Find @ 1415c16d0

int __thiscall
FAnsiString::Find(FAnsiString *this,FAnsiString *param_1,Type param_2,Type param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = Find(this,pcVar3,iVar2,param_2,param_3,param_4);
  return iVar2;
}

// Find @ 1415c1720

int __thiscall
FAnsiString::Find(FAnsiString *this,char *param_1,int param_2,Type param_3,Type param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FAnsiString *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  size_t _Size;
  int iVar14;
  FScriptContainerElement *pFVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FAnsiString local_68;
  FAnsiString local_58;
  FAnsiString local_48;
  
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
    iVar14 = 0x5060d4b2;
    pFVar15 = (FScriptContainerElement *)0x0;
    if (iVar6 == 0) {
      pcVar16 = "";
      iVar6 = 0;
    }
    else {
      pcVar16 = (char *)(this->Data).AllocatorInstance.Data;
      iVar6 = iVar6 + -1;
    }
    pFVar12 = (FScriptContainerElement *)pcVar16;
    if ((param_5 != -1) && (0 < iVar6)) {
      iVar8 = iVar6 + -1;
      if (param_5 < iVar6 + -1) {
        iVar8 = param_5;
      }
      iVar7 = 0;
      if (0 < iVar8) {
        iVar7 = iVar8;
      }
      pFVar12 = (FScriptContainerElement *)(pcVar16 + iVar7);
      iVar6 = iVar6 + ((int)pcVar16 - (int)pFVar12);
    }
    if (param_3 == IgnoreCase) {
      if (param_2 < 1) {
        pFVar9 = pFVar12;
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
        pFVar9 = pFVar15;
        if (iVar6 < param_2) {
          if ((iVar6 < 0) &&
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
          cVar2 = *param_1;
          pFVar13 = pFVar12;
          do {
            pFVar4 = pFVar13;
            pFVar9 = pFVar15;
            if (pFVar12 + ((longlong)iVar6 - uVar17) < pFVar4) break;
            pFVar13 = pFVar4 + 1;
          } while (((byte)((char)*pFVar4 - (-((int)(char)*pFVar4 - 0x61U < 0x1a) & 0x20U)) !=
                    (byte)(cVar2 - (-((int)cVar2 - 0x61U < 0x1a) & 0x20U))) ||
                  (iVar8 = FGenericPlatformStricmp::Strnicmp((char *)pFVar13,param_1 + 1,uVar17 - 1)
                  , pFVar9 = pFVar4, iVar8 != 0));
        }
      }
    }
    else {
      pFVar9 = (FScriptContainerElement *)
               TCString<char>::Strnstr((char *)pFVar12,iVar6,param_1,param_2);
    }
    if (pFVar9 == (FScriptContainerElement *)0x0) {
      return -1;
    }
    if ((this->Data).ArrayNum != 0) {
      iVar14 = (int)(this->Data).AllocatorInstance.Data;
    }
    return (int)pFVar9 - iVar14;
  }
  if (param_3 == IgnoreCase) {
    local_68.Data.ArrayNum = (this->Data).ArrayNum;
    _Size = (size_t)local_68.Data.ArrayNum;
    lVar11 = 0;
    pFVar15 = (this->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar15,_Size);
    }
    iVar6 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      do {
        local_68.Data.AllocatorInstance.Data[lVar11] =
             (FScriptContainerElement)
             ((char)local_68.Data.AllocatorInstance.Data[lVar11] -
             (-((int)(char)local_68.Data.AllocatorInstance.Data[lVar11] - 0x61U < 0x1a) & 0x20U));
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar6);
    }
    pFVar10 = ConstructFromPtrSize(&local_48,param_1,param_2);
    iVar14 = (pFVar10->Data).ArrayNum;
    pFVar15 = (pFVar10->Data).AllocatorInstance.Data;
    iVar6 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar6 = 0;
    }
    lVar11 = (longlong)iVar6;
    if (0 < iVar6) {
      do {
        *pFVar15 = (FScriptContainerElement)
                   ((char)*pFVar15 - (-((int)(char)*pFVar15 - 0x61U < 0x1a) & 0x20U));
        lVar11 = lVar11 + -1;
        pFVar15 = pFVar15 + 1;
      } while (lVar11 != 0);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    iVar6 = Find(&local_68,&local_58,CaseSensitive,param_4,param_5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return iVar6;
    }
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return iVar6;
  }
  piVar1 = &(this->Data).ArrayNum;
  iVar6 = param_2;
  if (param_2 < 1) {
    iVar6 = 1;
  }
  if (param_5 != -1) {
    iVar14 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar14 = 0;
    }
    if (param_5 < iVar14) goto LAB_1415c1ab6;
  }
  param_5 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_5 = 0;
  }
LAB_1415c1ab6:
  iVar6 = param_5 - iVar6;
  lVar11 = (longlong)iVar6;
  uVar18 = uVar17;
  if (-1 < iVar6) {
    do {
      iVar14 = 0;
      if (uVar17 != 0) {
        pcVar16 = param_1;
        iVar8 = iVar6;
        do {
          if (iVar8 < 0) {
code_r0x0001415c1b32:
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
            if (iVar7 <= iVar8) goto code_r0x0001415c1b32;
          }
          if (pcVar16[(longlong)((this->Data).AllocatorInstance.Data + (lVar11 - (longlong)param_1))
                     ] != *pcVar16) break;
          pcVar16 = pcVar16 + 1;
          iVar14 = iVar14 + 1;
          iVar8 = iVar8 + 1;
        } while ((longlong)pcVar16 - (longlong)param_1 != uVar17);
        uVar18 = (ulonglong)(uint)param_2;
      }
      if (iVar14 == (int)uVar18) {
        return iVar6;
      }
      iVar6 = iVar6 + -1;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  return -1;
}

// FormatAsNumber64 @ 1415c34c0

FAnsiString * __cdecl
FAnsiString::FormatAsNumber64(FAnsiString *__return_storage_ptr__,long64 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FAnsiString *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FAnsiString local_58;
  FAnsiString local_48;
  FAnsiString local_38;
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
      FVar5.Data = (FScriptContainerElement *)"";
      if (iVar3 != 0) {
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_38,(char *)(FVar5.Data + (int)uVar10),uVar7 - uVar10);
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
      uVar7 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar7 = 0;
      }
      AppendChars(&local_58,(char *)local_38.Data.AllocatorInstance.Data,uVar7);
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
                  (1,1,(local_58.Data.ArrayNum < 1) + 1,(ForAnyElementType *)&local_58,
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
          pFVar6 = (FAnsiString *)(*pcVar2)();
          return pFVar6;
        }
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
        uVar10 = uVar9 + 1;
        local_58.Data.AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x2c;
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
          pFVar6 = (FAnsiString *)(*pcVar2)();
          return pFVar6;
        }
        FVar5.Data[(int)uVar10] = (FScriptContainerElement)0x0;
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
              (1,1,uVar7,0,(ForAnyElementType *)__return_storage_ptr__,uVar7,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar5.Data,(longlong)(int)uVar7);
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

// FormatAsNumber @ 1415c3cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAnsiString * __cdecl FAnsiString::FormatAsNumber(FAnsiString *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FAnsiString *pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar14;
  ulonglong *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 auStackY_b8 [32];
  FAnsiString local_78;
  FAnsiString local_68;
  FAnsiString local_58;
  char local_48 [15];
  undefined1 local_39;
  ulonglong local_38 [2];
  FScriptContainerElement *pFVar13;
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar17 = (FScriptContainerElement *)0x0;
  puVar15 = local_38;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar14 = param_1;
  iVar8 = 0x10;
  do {
    iVar7 = iVar8;
    iVar8 = iVar7 + -1;
    puVar15 = (ulonglong *)((longlong)puVar15 + -1);
    iVar3 = iVar14 / 10;
    *(undefined *)puVar15 = (&s_9876543210123456789)[iVar14 % 10 + 9];
    iVar14 = iVar3;
  } while (iVar3 != 0);
  if (param_1 < 0) {
    iVar8 = iVar7 + -2;
    local_48[(longlong)iVar7 + -2] = '-';
  }
  AppendChars(&local_68,local_48 + iVar8,0x10 - iVar8);
  iVar14 = local_68.Data.ArrayNum;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar16 = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.ArrayNum = 0;
  uVar18 = local_68.Data.ArrayNum - 2;
  if (local_68.Data.ArrayNum == 0) {
    uVar18 = 0xffffffff;
  }
  pFVar13 = pFVar17;
  FVar5.Data = pFVar17;
  uVar9 = uVar16;
  if (-1 < (int)uVar18) {
    do {
      uVar9 = iVar14 - 1;
      if (iVar14 == 0) {
        uVar9 = 0;
      }
      uVar11 = uVar9;
      if ((int)uVar18 < (int)uVar9) {
        uVar11 = uVar18;
      }
      uVar12 = 0;
      if (0 < (int)uVar11) {
        uVar12 = uVar11;
      }
      lVar10 = (longlong)(int)uVar9;
      if ((longlong)(int)uVar18 + 1 < (longlong)(int)uVar9) {
        lVar10 = (longlong)(int)uVar18 + 1;
      }
      uVar9 = uVar12;
      if ((int)uVar12 < lVar10) {
        uVar9 = (uint)lVar10;
      }
      FVar5.Data = (FScriptContainerElement *)"";
      if (iVar14 != 0) {
        FVar5.Data = local_68.Data.AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_58,(char *)(FVar5.Data + (int)uVar12),uVar9 - uVar12);
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      uVar9 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0) {
        uVar9 = 0;
      }
      AppendChars(&local_78,(char *)local_58.Data.AllocatorInstance.Data,uVar9);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
      uVar11 = (int)pFVar13 + 1;
      pFVar13 = (FScriptContainerElement *)(ulonglong)uVar11;
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
      uVar9 = local_78.Data.ArrayNum;
      if ((uVar11 == 3) && (0 < (int)uVar18)) {
        uVar11 = local_78.Data.ArrayNum - 1;
        if (local_78.Data.ArrayNum < 1) {
          uVar11 = 0;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(local_78.Data.ArrayNum < 1) + 1,(ForAnyElementType *)&local_78,
                   &local_78.Data.ArrayNum,&local_78.Data.ArrayMax);
        uVar9 = local_78.Data.ArrayNum;
        uVar12 = uVar16;
        if ((int)uVar11 < local_78.Data.ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FAnsiString *)(*pcVar2)();
          return pFVar6;
        }
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
        uVar12 = uVar11 + 1;
        local_78.Data.AllocatorInstance.Data[(int)uVar11] = (FScriptContainerElement)0x2c;
        uVar11 = uVar16;
        if ((int)uVar12 < (int)uVar9) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FAnsiString *)(*pcVar2)();
          return pFVar6;
        }
        FVar5.Data[(int)uVar12] = (FScriptContainerElement)0x0;
        pFVar13 = pFVar17;
      }
      uVar18 = uVar18 - 1;
    } while (uVar18 < 0x80000000);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = uVar9;
  if (uVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar9,0,(ForAnyElementType *)__return_storage_ptr__,uVar9,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar5.Data,(longlong)(int)uVar9);
  }
  ReverseString(__return_storage_ptr__);
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromBlob @ 1415c4610

FAnsiString * __cdecl
FAnsiString::FromBlob(FAnsiString *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FAnsiString local_18;
  
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
                (1,1,uVar3,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
    }
  }
  if (param_2 != 0) {
    do {
      PrintfImpl(&local_18,"%03d");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      AppendChars(__return_storage_ptr__,(char *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return __return_storage_ptr__;
}

// FromHexBlob @ 1415c4880

FAnsiString * __cdecl
FAnsiString::FromHexBlob(FAnsiString *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FAnsiString local_18;
  
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
                (1,1,uVar3,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
    }
  }
  if (param_2 != 0) {
    do {
      PrintfImpl(&local_18,"%02X");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      AppendChars(__return_storage_ptr__,(char *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return __return_storage_ptr__;
}

// InsertAt @ 1415c8750

void __thiscall FAnsiString::InsertAt(FAnsiString *this,int param_1,FAnsiString *param_2)

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
      AppendChars(this,(char *)_Src,iVar4);
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
                        (1,1,iVar4,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                         &(this->Data).ArrayMax);
      _Src_00 = (this->Data).AllocatorInstance.Data + param_1;
      memmove(_Src_00 + iVar4,_Src_00,(longlong)(iVar3 - param_1));
      memcpy((this->Data).AllocatorInstance.Data + param_1,_Src,(longlong)iVar4);
    }
  }
  return;
}

// InsertAt @ 1415c8840

void __thiscall FAnsiString::InsertAt(FAnsiString *this,int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement local_res18 [16];
  
  if (param_2 != '\0') {
    local_res18[0] = (FScriptContainerElement)param_2;
    if ((this->Data).ArrayNum == 0) {
      AppendChar(this,param_2);
      return;
    }
    pFVar5 = (this->Data).AllocatorInstance.Data;
    if ((pFVar5 <= local_res18) && (local_res18 < pFVar5 + (this->Data).ArrayMax)) {
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
                        (0x101,(ForAnyElementType *)this,piVar1);
    }
    pFVar5 = (this->Data).AllocatorInstance.Data + param_1;
    (this->Data).ArrayNum = iVar4 + 1;
    memmove(pFVar5 + 1,pFVar5,(longlong)(iVar4 - param_1));
    (this->Data).AllocatorInstance.Data[param_1] = local_res18[0];
  }
  return;
}

// IsNumeric @ 1415c9970

bool __thiscall FAnsiString::IsNumeric(FAnsiString *this)

{
  bool bVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if ((this->Data).ArrayNum < 2) {
    return false;
  }
  pFVar4 = (this->Data).AllocatorInstance.Data;
  FVar2 = *pFVar4;
  if ((FVar2 == (FScriptContainerElement)0x2d) || (FVar2 == (FScriptContainerElement)0x2b)) {
    FVar2 = pFVar4[1];
    pFVar4 = pFVar4 + 1;
  }
  bVar1 = false;
  if (FVar2 != (FScriptContainerElement)0x0) {
    FVar2 = *pFVar4;
    do {
      if (FVar2 == (FScriptContainerElement)0x2e) {
        if (bVar1) {
          return false;
        }
        bVar1 = true;
      }
      else {
        iVar3 = iswdigit((short)(char)FVar2);
        if (iVar3 == 0) {
          return false;
        }
      }
      FVar2 = pFVar4[1];
      pFVar4 = pFVar4 + 1;
    } while (FVar2 != (FScriptContainerElement)0x0);
  }
  return true;
}

// LeftPad @ 1415d3ca0

FAnsiString * __thiscall
FAnsiString::LeftPad(FAnsiString *this,FAnsiString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FAnsiString *pFVar2;
  int iVar3;
  FAnsiString local_18;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_1 - iVar3 < 1) {
    FAnsiString(__return_storage_ptr__,this);
  }
  else {
    pFVar2 = ChrN(&local_18,param_1 - iVar3,' ');
    ConcatFF(__return_storage_ptr__,pFVar2,this);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// MatchesWildcard @ 1415d4e90

bool __thiscall
FAnsiString::MatchesWildcard(FAnsiString *this,char *param_1,int param_2,Type param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  <lambda_1> local_res20;
  
  iVar1 = (this->Data).ArrayNum;
  if (iVar1 == 0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(this->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (param_3 == CaseSensitive) {
    bVar2 = UE::Core::Private::
            MatchesWildcardRecursive<_FAnsiString::MatchesWildcard_::__l5::<lambda_1>_>
                      (pcVar3,iVar4,param_1,param_2,local_res20);
    return bVar2;
  }
  bVar2 = UE::Core::Private::
          MatchesWildcardRecursive<_FAnsiString::MatchesWildcard_::__l7::<lambda_2>_>
                    (pcVar3,iVar4,param_1,param_2,(<lambda_2>)local_res20);
  return bVar2;
}

// Mid @ 1415d5490

FAnsiString * __thiscall
FAnsiString::Mid(FAnsiString *this,FAnsiString *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
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
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)(this->Data).AllocatorInstance.Data;
    }
    ConstructFromPtrSize(__return_storage_ptr__,(char *)(pcVar4 + iVar5),iVar6 - iVar5);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Mid @ 1415d5550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FAnsiString * __thiscall
FAnsiString::Mid(FAnsiString *this,FAnsiString *__return_storage_ptr__,int param_1,int param_2)

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

// MidInline @ 1415d57f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnsiString::MidInline(FAnsiString *this,int param_1,int param_2,EAllowShrinking param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
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
      _Dst = (this->Data).AllocatorInstance.Data + (int)uVar3;
      iVar6 = ((this->Data).ArrayNum - uVar5) - uVar3;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar6);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar5;
    }
  }
  RemoveAt(this,0,param_1,param_3);
  return;
}

// ParseIntoArray @ 1415d69a0

int __thiscall
FAnsiString::ParseIntoArray
          (FAnsiString *this,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_1,char *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> *local_res10;
  TStringView<char> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  code *local_48;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> **local_40;
  TStringView<char> local_38;
  undefined4 local_1c;
  
  if (param_2 == (char *)0x0) {
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
    DestructItems<FAnsiString,int>((FAnsiString *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FAnsiString,int>((FAnsiString *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  if (*param_2 != '\0') {
    local_40 = &local_res10;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnsiString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<char>_>
               ::Call;
    local_res10 = param_1;
    sVar5 = strlen(param_2);
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
    local_38.DataPtr = (char *)local_58;
    UE::String::ParseTokens
              (&local_38,&local_68,(TFunctionRef<void___cdecl(TStringView<char>)> *)&local_48,
               (uint)param_3 * 2 | IgnoreCase);
  }
  return param_1->ArrayNum;
}

// ParseIntoArray @ 1415d6b00

/* WARNING: Removing unreachable block (ram,0x0001415d6f08) */

int __thiscall
FAnsiString::ParseIntoArray
          (FAnsiString *this,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_1,char **param_2
          ,int param_3,bool param_4)

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
  FScriptContainerElement *pFVar11;
  int iVar12;
  char **ppcVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  ForAnyElementType local_68;
  int local_60 [2];
  FAnsiString local_58;
  
  if ((param_2 == (char **)0x0) &&
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
    DestructItems<FAnsiString,int>((FAnsiString *)pFVar9,*piVar15);
    *piVar15 = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FAnsiString,int>((FAnsiString *)pFVar9,*piVar15);
    *piVar15 = 0;
  }
  iVar12 = 0;
  iVar6 = (this->Data).ArrayNum;
  iVar14 = 0;
  pFVar9 = (this->Data).AllocatorInstance.Data;
  iVar10 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar10 = iVar12;
  }
  iVar16 = iVar12;
  iVar6 = iVar12;
  if (0 < iVar10) {
    do {
      if (0 < param_3) {
        ppcVar13 = param_2;
        iVar14 = iVar12;
        do {
          sVar8 = strlen(*ppcVar13);
          iVar7 = strncmp((char *)(pFVar9 + iVar6),*ppcVar13,(longlong)(int)sVar8);
          if (iVar7 == 0) {
            if (iVar6 != -1) {
              if ((!param_4) || (iVar6 != iVar16)) {
                iVar14 = iVar6 - iVar16;
                local_68.Data = (FScriptContainerElement *)0x0;
                local_60[0] = 0;
                local_60[1] = 0;
                if (pFVar9 + iVar16 == (FScriptContainerElement *)0x0) {
                  if (iVar14 != 0) {
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InSrc || InCount == 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                                       ,0xba,L"Unable to construct string from a null pointer");
                    if (bVar5) {
                      pcVar3 = (code *)swi(3);
                      iVar6 = (*pcVar3)();
                      return iVar6;
                    }
                    goto LAB_1415d6d8c;
                  }
                }
                else {
LAB_1415d6d8c:
                  if (iVar14 < 0) {
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
                  else if (0 < iVar14) {
                    uVar1 = iVar14 + 1;
                    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
                    }
                    if (local_60[1] < (int)uVar1) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (1,1,uVar1,&local_68,local_60[0],local_60 + 1);
                    }
                    UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,uVar1,&local_68,local_60,local_60 + 1);
                    FVar4.Data = local_68.Data;
                    FGenericPlatformString::Memcpy(local_68.Data,pFVar9 + iVar16,(longlong)iVar14);
                    FVar4.Data[iVar14] = (FScriptContainerElement)0x0;
                  }
                }
                pFVar11 = (param_1->AllocatorInstance).Data;
                if (((pFVar11 <= (FScriptContainerElement *)&local_68) &&
                    ((FScriptContainerElement *)&local_68 <
                     pFVar11 + (longlong)param_1->ArrayMax * 0x10)) &&
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
                iVar14 = *piVar15;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                *piVar15 = iVar14 + 1;
                pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                *(undefined8 *)pFVar11 = 0;
                *(FScriptContainerElement **)pFVar11 = local_68.Data;
                local_68.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar11 + 8) = local_60[0];
                *(int *)(pFVar11 + 0xc) = local_60[1];
                local_60[0] = 0;
                local_60[1] = 0;
              }
              iVar6 = (int)sVar8 + iVar6;
              iVar14 = iVar6;
              goto LAB_1415d6c34;
            }
            break;
          }
          iVar14 = iVar14 + 1;
          ppcVar13 = ppcVar13 + 1;
        } while (iVar14 < param_3);
      }
      iVar6 = iVar6 + 1;
      iVar14 = iVar16;
LAB_1415d6c34:
      iVar16 = iVar14;
    } while (iVar6 < iVar10);
  }
  piVar15 = &param_1->ArrayNum;
  if ((!param_4) || (iVar10 - iVar14 != 0)) {
    iVar6 = *piVar15;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      *piVar15 = iVar6;
    }
    *piVar15 = iVar6 + 1;
    pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar11[8].field_0x0 = 0;
    pFVar9 = (FScriptContainerElement *)
             ConstructFromPtrSize(&local_58,(char *)(pFVar9 + iVar14),iVar10 - iVar14);
    if (pFVar11 != pFVar9) {
      pFVar2 = (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance
               ).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance).Data =
           (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      *(int *)&pFVar11[8].field_0x0 = *(int *)&pFVar9[8].field_0x0;
      *(int *)&pFVar11[0xc].field_0x0 = *(int *)&pFVar9[0xc].field_0x0;
      *(undefined8 *)&pFVar9[8].field_0x0 = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return param_1->ArrayNum;
}

// ParseIntoArrayLines @ 1415d7a70

int __thiscall
FAnsiString::ParseIntoArrayLines
          (FAnsiString *this,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = ParseIntoArray(this,param_1,LineEndings,3,param_2);
  return iVar1;
}

// ParseIntoArrayWS @ 1415d7b00

int __thiscall
FAnsiString::ParseIntoArrayWS
          (FAnsiString *this,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_1,char *param_2,
          bool param_3)

{
  int iVar1;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_38 = " ";
  local_30 = "\t";
  local_28 = "\r";
  local_20 = "\n";
  local_18 = "";
  iVar1 = 4;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = 5;
    local_18 = param_2;
  }
  iVar1 = ParseIntoArray(this,param_1,&local_38,iVar1,param_3);
  return iVar1;
}

// PathAppend @ 1415d7c80

void __thiscall FAnsiString::PathAppend(FAnsiString *this,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement local_38;
  FScriptContainerElement local_37 [15];
  
  iVar6 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  if (param_2 == 0) {
    if (iVar6 < 2) {
      return;
    }
    uVar9 = iVar6 - 2;
    uVar8 = 0;
    if ((int)uVar9 < iVar6) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->Data).AllocatorInstance.Data[(int)uVar9] == (FScriptContainerElement)0x2f) {
      return;
    }
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->Data).AllocatorInstance.Data[(int)uVar9] == (FScriptContainerElement)0x5c) {
      return;
    }
    uVar9 = iVar6 - 1;
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_38 = (FScriptContainerElement)0x0;
    (this->Data).AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x2f;
    pFVar7 = (this->Data).AllocatorInstance.Data;
    if (((pFVar7 <= &local_38) && (&local_38 < pFVar7 + (this->Data).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar1;
    piVar2 = &(this->Data).ArrayMax;
    local_37[0] = local_38;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,(ForAnyElementType *)this,piVar2);
      local_37[0] = local_38;
    }
    goto LAB_1415d8100;
  }
  if (0 < iVar6) {
    if (1 < iVar6) {
      uVar9 = iVar6 - 2;
      uVar8 = 0;
      if ((int)uVar9 < iVar6) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->Data).AllocatorInstance.Data[(int)uVar9] != (FScriptContainerElement)0x2f) {
        uVar8 = 0;
        if ((int)uVar9 < *piVar1) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((this->Data).AllocatorInstance.Data[(int)uVar9] != (FScriptContainerElement)0x5c) &&
           (*param_1 != '/')) {
          uVar9 = iVar6 - 1;
          uVar8 = 0;
          if ((int)uVar9 < *piVar1) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->Data).AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x2f;
          goto LAB_1415d7fde;
        }
      }
    }
    if ((*piVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = *piVar1 - 1;
    pFVar7 = (this->Data).AllocatorInstance.Data + (int)uVar8;
    iVar3 = ~uVar8 + *piVar1;
    if (iVar3 != 0) {
      memmove(pFVar7,pFVar7 + 1,(longlong)iVar3);
    }
    *piVar1 = *piVar1 + -1;
    iVar6 = iVar6 + -1;
  }
LAB_1415d7fde:
  if (0 < iVar6 + param_2) {
    uVar8 = iVar6 + param_2 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->Data).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)this,*piVar1,&(this->Data).ArrayMax);
    }
  }
  if ((param_1 == (char *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar2 = &(this->Data).ArrayMax;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,(ForAnyElementType *)this,piVar1,piVar2);
  memcpy((this->Data).AllocatorInstance.Data + iVar6,param_1,(longlong)param_2);
  pFVar7 = (this->Data).AllocatorInstance.Data;
  local_37[0] = (FScriptContainerElement)0x0;
  if (((pFVar7 <= local_37) && (local_37 < pFVar7 + *piVar2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *piVar1;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)this,piVar2);
  }
LAB_1415d8100:
  *piVar1 = iVar6 + 1;
  (this->Data).AllocatorInstance.Data[iVar6] = local_37[0];
  return;
}

// PrintfImpl @ 1415d96e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAnsiString * __cdecl FAnsiString::PrintfImpl(FAnsiString *__return_storage_ptr__,char *param_1)

{
  int iVar1;
  ulong64 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 local_res18 [16];
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined1 *local_270;
  char acStack_259 [513];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_298;
  iVar4 = 0x200;
  puVar2 = __local_stdio_printf_options();
  pcVar3 = (char *)0x0;
  local_278 = 0;
  local_270 = local_res18;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,acStack_259 + 1,0x200,param_1);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if ((iVar1 == -1) || (0x1ff < iVar1)) {
    do {
      iVar4 = iVar4 * 2;
      pcVar3 = FMemory::Realloc(pcVar3,(longlong)iVar4,0);
      local_270 = local_res18;
      local_278 = 0;
      iVar1 = __stdio_common_vsprintf(*puVar2 | 2,pcVar3,(longlong)iVar4,param_1);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
    } while ((iVar1 == -1) || (iVar4 <= iVar1));
    pcVar3[iVar1] = '\0';
    FAnsiString(__return_storage_ptr__,pcVar3);
    if (iVar4 != 0x200) {
      FMemory::Free(pcVar3);
    }
  }
  else {
    (acStack_259 + 1)[iVar1] = '\0';
    FAnsiString(__return_storage_ptr__,acStack_259 + 1);
  }
  return __return_storage_ptr__;
}

// RemoveAt @ 1415e2620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnsiString::RemoveAt(FAnsiString *this,int param_1,int param_2,EAllowShrinking param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  
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
    _Dst = (this->Data).AllocatorInstance.Data + param_1;
    iVar6 = ((this->Data).ArrayNum - uVar2) - param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + (int)uVar2,(longlong)iVar6);
    }
    iVar6 = (this->Data).ArrayNum - uVar2;
    (this->Data).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(ForAnyElementType *)this,iVar6,&(this->Data).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 1415e2720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::RemoveAt(FAnsiString *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  int iVar6;
  
  iVar5 = (this->Data).ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  iVar6 = iVar6 - param_1;
  if (1 < iVar6) {
    iVar6 = 1;
  }
  iVar3 = 0;
  if (0 < iVar6) {
    iVar3 = iVar6;
  }
  if (iVar3 == 1) {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    _Dst = (this->Data).AllocatorInstance.Data + param_1;
    iVar5 = (this->Data).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar5);
    }
    iVar5 = (this->Data).ArrayNum + -1;
    (this->Data).ArrayNum = iVar5;
    if (param_2 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(ForAnyElementType *)this,iVar5,&(this->Data).ArrayMax);
    }
  }
  return;
}

// RemoveFromEnd @ 1415e48e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FAnsiString::RemoveFromEnd(FAnsiString *this,char *param_1,int param_2,Type param_3)

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
                        ((char *)((this->Data).AllocatorInstance.Data + iVar5),param_1);
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
      iVar4 = strcmp((char *)((this->Data).AllocatorInstance.Data + iVar5),param_1);
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

// RemoveFromStart @ 1415e4c80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAnsiString::RemoveFromStart(FAnsiString *this,char *param_1,int param_2,Type param_3)

{
  int iVar1;
  char *_Str1;
  ulong64 _MaxCount;
  
  _MaxCount = (ulong64)param_2;
  if (0 < param_2) {
    if (param_3 == IgnoreCase) {
      if ((this->Data).ArrayNum == 0) {
        iVar1 = FGenericPlatformStricmp::Strnicmp("",param_1,_MaxCount);
      }
      else {
        iVar1 = FGenericPlatformStricmp::Strnicmp
                          ((char *)(this->Data).AllocatorInstance.Data,param_1,_MaxCount);
      }
    }
    else {
      if ((this->Data).ArrayNum == 0) {
        _Str1 = "";
      }
      else {
        _Str1 = (char *)(this->Data).AllocatorInstance.Data;
      }
      iVar1 = strncmp(_Str1,param_1,_MaxCount);
    }
    if (iVar1 == 0) {
      RemoveAt(this,0,param_2,Default);
      return true;
    }
  }
  return false;
}

// RemoveSpacesInline @ 1415e51a0

void __thiscall FAnsiString::RemoveSpacesInline(FAnsiString *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar4 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  iVar9 = 0;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    pFVar7 = (this->Data).AllocatorInstance.Data;
    if (0 < iVar5) {
      lVar6 = 0;
      pFVar8 = pFVar7;
      do {
        if (pFVar7[lVar6] != (FScriptContainerElement)0x20) {
          iVar9 = iVar9 + 1;
          *pFVar8 = pFVar7[lVar6];
          pFVar8 = pFVar8 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
    if (iVar9 <= iVar5) {
      uVar10 = iVar9 + 1;
      pFVar7[iVar9] = (FScriptContainerElement)0x0;
      iVar5 = *piVar1;
      if (iVar5 < (int)uVar10) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar10 - iVar5,(ForAnyElementType *)this,piVar1,
                           &(this->Data).ArrayMax);
        memset((this->Data).AllocatorInstance.Data + iVar4,0,(longlong)(int)(uVar10 - iVar5));
        return;
      }
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar5) {
        uVar11 = iVar5 - uVar10;
        if (((int)(uVar11 | uVar10) < 0) &&
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
        if (uVar11 != 0) {
          pFVar7 = (this->Data).AllocatorInstance.Data + (int)uVar10;
          iVar5 = (*piVar1 - uVar11) - uVar10;
          if (iVar5 != 0) {
            memmove(pFVar7,pFVar7 + (int)uVar11,(longlong)iVar5);
          }
          *piVar1 = *piVar1 - uVar11;
        }
      }
    }
  }
  return;
}

// Replace @ 1415e5f10

FAnsiString * __thiscall
FAnsiString::Replace
          (FAnsiString *this,FAnsiString *__return_storage_ptr__,char *param_1,char *param_2,
          Type param_3)

{
  byte bVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  FAnsiString *pFVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *_Str;
  FAnsiString local_50;
  
  if ((param_2 == (char *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("To",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x5f8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FAnsiString *)(*pcVar3)();
    return pFVar7;
  }
  if ((((this->Data).ArrayNum < 2) || (param_1 == (char *)0x0)) || (*param_1 == '\0')) {
    FAnsiString(__return_storage_ptr__,this);
    return __return_storage_ptr__;
  }
  _Str = (this->Data).AllocatorInstance.Data;
  sVar8 = strlen(param_1);
  sVar9 = strlen(param_2);
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  do {
    if (param_3 == IgnoreCase) {
      if (_Str == (FScriptContainerElement *)0x0) {
        pFVar11 = (FScriptContainerElement *)0x0;
      }
      else {
        bVar1 = *param_1;
        bVar5 = -((int)(char)bVar1 - 0x61U < 0x1a) & 0x20;
        pFVar11 = _Str;
        if (bVar1 != bVar5) {
          sVar10 = strlen(param_1);
          FVar2 = *_Str;
          while (FVar2 != (FScriptContainerElement)0x0) {
            pFVar12 = pFVar11 + 1;
            if (((byte)((char)FVar2 - (-((int)(char)FVar2 - 0x61U < 0x1a) & 0x20U)) ==
                 (byte)(bVar1 - bVar5)) &&
               (iVar6 = FGenericPlatformStricmp::Strnicmp
                                  ((char *)pFVar12,param_1 + 1,(longlong)((int)sVar10 + -1)),
               iVar6 == 0)) goto LAB_1415e6097;
            pFVar11 = pFVar12;
            FVar2 = *pFVar12;
          }
          pFVar11 = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      pFVar11 = (FScriptContainerElement *)strstr((char *)_Str,param_1);
    }
LAB_1415e6097:
    if (pFVar11 == (FScriptContainerElement *)0x0) {
      sVar8 = strlen((char *)_Str);
      AppendChars(&local_50,(char *)_Str,(int)sVar8);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_50.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_50.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    AppendChars(&local_50,(char *)_Str,(int)pFVar11 - (int)_Str);
    AppendChars(&local_50,param_2,(int)sVar9);
    _Str = pFVar11 + (int)sVar8;
  } while( true );
}

// Replace @ 1415e6150

FAnsiString * __thiscall
FAnsiString::Replace
          (FAnsiString *this,FAnsiString *__return_storage_ptr__,char *param_1,char *param_2,
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

// ReplaceCharInlineCaseSensitive @ 1415e6700

void __thiscall
FAnsiString::ReplaceCharInlineCaseSensitive(FAnsiString *this,char param_1,char param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Data).AllocatorInstance.Data;
  iVar2 = (this->Data).ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((this->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<char,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FVar3 = *pFVar4;
    if (*pFVar4 == (FScriptContainerElement)param_1) {
      FVar3 = (FScriptContainerElement)param_2;
    }
    *pFVar4 = FVar3;
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// ReplaceCharInlineIgnoreCase @ 1415e6880

void __thiscall
FAnsiString::ReplaceCharInlineIgnoreCase(FAnsiString *this,char param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = isupper((uint)(byte)param_1);
  if (iVar1 == 0) {
    bVar2 = -(-((int)param_1 - 0x61U < 0x1a) & 0x20U);
  }
  else {
    bVar2 = -((int)param_1 - 0x41U < 0x1a) & 0x20;
  }
  ReplaceCharInlineCaseSensitive(this,bVar2 + param_1,param_2);
  ReplaceCharInlineCaseSensitive(this,param_1,param_2);
  return;
}

// ReplaceCharWithEscapedCharInline @ 1415e6a10

void __thiscall
FAnsiString::ReplaceCharWithEscapedCharInline
          (FAnsiString *this,TArray<char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar1 = (this->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 1) {
    return;
  }
  if (param_1 == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1415e6a7d:
    ReplaceInline(this,CharToEscapeSeqMap_FAnsiString[0][0],CharToEscapeSeqMap_FAnsiString[0][1],
                  IgnoreCase);
    if (param_1 != (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6a9a;
LAB_1415e6ad2:
    ReplaceInline(this,CharToEscapeSeqMap_FAnsiString[1][0],CharToEscapeSeqMap_FAnsiString[1][1],
                  IgnoreCase);
    if (param_1 != (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6aef;
LAB_1415e6b27:
    ReplaceInline(this,CharToEscapeSeqMap_FAnsiString[2][0],CharToEscapeSeqMap_FAnsiString[2][1],
                  IgnoreCase);
    if (param_1 != (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6b44;
LAB_1415e6b7f:
    ReplaceInline(this,CharToEscapeSeqMap_FAnsiString[3][0],CharToEscapeSeqMap_FAnsiString[3][1],
                  IgnoreCase);
    if (param_1 != (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6b9c;
LAB_1415e6bd4:
    ReplaceInline(this,CharToEscapeSeqMap_FAnsiString[4][0],CharToEscapeSeqMap_FAnsiString[4][1],
                  IgnoreCase);
    if (param_1 == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6c33;
  }
  else {
    if (param_1->ArrayNum < 1) {
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FAnsiString[0][0])
        goto LAB_1415e6a7d;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e6a9a:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FAnsiString[1][0])
        goto LAB_1415e6ad2;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e6aef:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FAnsiString[2][0])
        goto LAB_1415e6b27;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e6b44:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FAnsiString[3][0])
        goto LAB_1415e6b7f;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e6b9c:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FAnsiString[4][0])
        goto LAB_1415e6bd4;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 == pFVar3) {
    return;
  }
  while (*pFVar2 != (FScriptContainerElement)*CharToEscapeSeqMap_FAnsiString[5][0]) {
    pFVar2 = pFVar2 + 1;
    if (pFVar2 == pFVar3) {
      return;
    }
  }
LAB_1415e6c33:
  ReplaceInline(this,CharToEscapeSeqMap_FAnsiString[5][0],CharToEscapeSeqMap_FAnsiString[5][1],
                IgnoreCase);
  return;
}

// ReplaceEscapedCharWithCharInline @ 1415e7130

void __thiscall
FAnsiString::ReplaceEscapedCharWithCharInline
          (FAnsiString *this,TArray<char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  wchar_t *(*papwVar4) [2];
  int iVar6;
  wchar_t *(*papwVar5) [2];
  
  iVar1 = (this->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((0 < iVar6) &&
     ((param_1 == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0 || (0 < param_1->ArrayNum)))) {
    papwVar4 = CharToEscapeSeqMap_FString;
    do {
      papwVar5 = papwVar4 + -1;
      if (param_1 == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1415e71a4:
        ReplaceInline(this,(char *)papwVar4[-1][1],(char *)(*papwVar5)[0],IgnoreCase);
      }
      else {
        pFVar2 = (param_1->AllocatorInstance).Data;
        pFVar3 = pFVar2 + param_1->ArrayNum;
        if (pFVar2 != pFVar3) {
          do {
            if (*pFVar2 == *(FScriptContainerElement *)(*papwVar5)[0]) goto LAB_1415e71a4;
            pFVar2 = pFVar2 + 1;
          } while (pFVar2 != pFVar3);
        }
      }
      papwVar4 = papwVar5;
    } while (0x154b76420 < (longlong)papwVar5);
  }
  return;
}

// ReplaceInline @ 1415e7340

int __thiscall
FAnsiString::ReplaceInline(FAnsiString *this,char *param_1,char *param_2,Type param_3)

{
  int iVar1;
  FScriptContainerElement *_Str;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  FScriptContainerElement *_Str_00;
  uint uVar8;
  int iVar9;
  
  iVar1 = (this->Data).ArrayNum;
  iVar9 = 0;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (((((0 < iVar2) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) && (param_2 != (char *)0x0)
      ) && ((param_3 == IgnoreCase || (iVar2 = strcmp(param_1,param_2), iVar2 != 0)))) {
    sVar4 = strlen(param_1);
    sVar5 = strlen(param_2);
    uVar8 = (uint)sVar4;
    uVar3 = (uint)sVar5;
    if (uVar3 == uVar8) {
      pcVar6 = operator[](this,0);
      if (param_3 == IgnoreCase) {
        pcVar6 = TCString<char>::Stristr(pcVar6,param_1);
      }
      else {
        pcVar6 = strstr(pcVar6,param_1);
      }
      sVar4 = (size_t)(int)uVar3;
      if (pcVar6 != (char *)0x0) {
        do {
          iVar9 = iVar9 + 1;
          if ((((int)uVar3 < 1) || (uVar3 < 0x10)) ||
             ((pcVar6 <= param_2 + (int)(uVar3 - 1) && (param_2 <= pcVar6 + (int)(uVar3 - 1))))) {
            if (0 < (longlong)sVar4) {
              pcVar7 = pcVar6;
              sVar5 = sVar4;
              do {
                *pcVar7 = pcVar7[(longlong)param_2 - (longlong)pcVar6];
                pcVar7 = pcVar7 + 1;
                sVar5 = sVar5 - 1;
              } while (sVar5 != 0);
            }
          }
          else {
            memcpy(pcVar6,param_2,sVar4);
          }
          iVar1 = (this->Data).ArrayNum;
          iVar2 = iVar1 + -1;
          if (iVar1 == 0) {
            pcVar7 = "";
            iVar2 = 0;
          }
          else {
            pcVar7 = (char *)(this->Data).AllocatorInstance.Data;
          }
          if ((longlong)iVar2 <= (longlong)(pcVar6 + ((longlong)(int)uVar8 - (longlong)pcVar7))) {
            return iVar9;
          }
          if (param_3 == IgnoreCase) {
            pcVar6 = TCString<char>::Stristr(pcVar6 + (int)uVar8,param_1);
          }
          else {
            pcVar6 = strstr(pcVar6 + (int)uVar8,param_1);
          }
        } while (pcVar6 != (char *)0x0);
      }
    }
    else {
      sVar4 = strlen(param_1);
      iVar2 = Find(this,param_1,(int)sVar4,param_3,FromStart,-1);
      if (iVar2 != -1) {
        _Str = (this->Data).AllocatorInstance.Data;
        (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->Data).ArrayNum = 0;
        (this->Data).ArrayMax = 0;
        if (param_3 == IgnoreCase) {
          pcVar6 = TCString<char>::Stristr((char *)_Str,param_1);
        }
        else {
          pcVar6 = strstr((char *)_Str,param_1);
        }
        _Str_00 = _Str;
        if (pcVar6 != (char *)0x0) {
          do {
            *pcVar6 = '\0';
            iVar9 = iVar9 + 1;
            sVar4 = strlen((char *)_Str_00);
            AppendChars(this,(char *)_Str_00,(int)sVar4);
            sVar4 = strlen(param_2);
            AppendChars(this,param_2,(int)sVar4);
            _Str_00 = (FScriptContainerElement *)(pcVar6 + (int)uVar8);
            *pcVar6 = *param_1;
            if (param_3 == IgnoreCase) {
              pcVar6 = TCString<char>::Stristr((char *)_Str_00,param_1);
            }
            else {
              pcVar6 = strstr((char *)_Str_00,param_1);
            }
          } while (pcVar6 != (char *)0x0);
        }
        sVar4 = strlen((char *)_Str_00);
        AppendChars(this,(char *)_Str_00,(int)sVar4);
        if (_Str != (FScriptContainerElement *)0x0) {
          FMemory::Free(_Str);
        }
      }
    }
  }
  return iVar9;
}

// ReplaceQuotesWithEscapedQuotes @ 1415e7bb0

FAnsiString * __thiscall
FAnsiString::ReplaceQuotesWithEscapedQuotes(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  iVar5 = (this->Data).ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    pcVar4 = "";
    iVar6 = 0;
  }
  else {
    pcVar4 = (char *)(this->Data).AllocatorInstance.Data;
  }
  pcVar4 = TCString<char>::Strnstr(pcVar4,iVar6,"\"",1);
  if (pcVar4 != (char *)0x0) {
    iVar6 = (this->Data).ArrayNum;
    if (iVar6 == 0) {
      iVar5 = 0x5060d4b2;
    }
    else {
      iVar5 = (int)(this->Data).AllocatorInstance.Data;
    }
    if ((int)pcVar4 - iVar5 != -1) {
      pFVar2 = (this->Data).AllocatorInstance.Data;
      pFVar7 = (FScriptContainerElement *)"";
      if (iVar6 != 0) {
        pFVar7 = pFVar2;
      }
      (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar3 = false;
      (this->Data).ArrayNum = 0;
      (this->Data).ArrayMax = 0;
      FVar1 = *pFVar7;
      while (FVar1 != (FScriptContainerElement)0x0) {
        if (bVar3) {
          bVar3 = false;
        }
        else if (*pFVar7 == (FScriptContainerElement)0x5c) {
          bVar3 = true;
        }
        else if (*pFVar7 == (FScriptContainerElement)0x22) {
          AppendChar(this,'\\');
        }
        FVar1 = *pFVar7;
        pFVar7 = pFVar7 + 1;
        AppendChar(this,(char)FVar1);
        FVar1 = *pFVar7;
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
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

// Reserve @ 1415ea420

void __thiscall FAnsiString::Reserve(FAnsiString *this,int param_1)

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
                (1,1,uVar1,(ForAnyElementType *)this,(this->Data).ArrayNum,&(this->Data).ArrayMax);
    }
  }
  return;
}

// Reset @ 1415ea510

void __thiscall FAnsiString::Reset(FAnsiString *this,int param_1)

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
                (1,1,uVar2,(ForAnyElementType *)this,0,&(this->Data).ArrayMax);
    }
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      *pFVar1 = (FScriptContainerElement)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Reverse @ 1415ebca0

FAnsiString * __thiscall FAnsiString::Reverse(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  FAnsiString(__return_storage_ptr__,this);
  ReverseString(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Reverse @ 1415ebcd0

FAnsiString * __thiscall FAnsiString::Reverse(FAnsiString *this,FAnsiString *__return_storage_ptr__)

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

// ReverseString @ 1415ebe20

void __thiscall FAnsiString::ReverseString(FAnsiString *this)

{
  FScriptContainerElement FVar1;
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
    pFVar4 = (this->Data).AllocatorInstance.Data + iVar7;
    do {
      FVar1 = *pFVar6;
      *pFVar6 = *pFVar4;
      pFVar6 = pFVar6 + 1;
      *pFVar4 = FVar1;
      pFVar4 = pFVar4 + -1;
    } while (pFVar6 < pFVar4);
  }
  return;
}

// RightChop @ 1415ec030

FAnsiString * __thiscall
FAnsiString::RightChop(FAnsiString *this,FAnsiString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
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
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(this->Data).AllocatorInstance.Data;
  }
  ConstructFromPtrSize(__return_storage_ptr__,(char *)(pcVar3 + iVar5),iVar4 - iVar5);
  return __return_storage_ptr__;
}

// RightPad @ 1415ec150

FAnsiString * __thiscall
FAnsiString::RightPad(FAnsiString *this,FAnsiString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FAnsiString *pFVar2;
  int iVar3;
  FAnsiString local_18;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_1 - iVar3 < 1) {
    FAnsiString(__return_storage_ptr__,this);
  }
  else {
    pFVar2 = ChrN(&local_18,param_1 - iVar3,' ');
    ConcatFF(__return_storage_ptr__,this,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// SanitizeFloat @ 1415f05f0

FAnsiString * __cdecl
FAnsiString::SanitizeFloat(FAnsiString *__return_storage_ptr__,double param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FAnsiString *pFVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  double local_res10;
  
  local_res10 = param_1;
  UE::Core::Private::StripNegativeZero(&local_res10);
  PrintfImpl(__return_storage_ptr__,"%f");
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    return __return_storage_ptr__;
  }
  pFVar11 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  FVar3 = *pFVar11;
  if ((FVar3 == (FScriptContainerElement)0x2d) || (FVar3 == (FScriptContainerElement)0x2b)) {
    FVar3 = pFVar11[1];
    pFVar11 = pFVar11 + 1;
  }
  bVar4 = false;
  if (FVar3 != (FScriptContainerElement)0x0) {
    FVar3 = *pFVar11;
    do {
      if (FVar3 == (FScriptContainerElement)0x2e) {
        if (bVar4) {
          return __return_storage_ptr__;
        }
        bVar4 = true;
      }
      else {
        iVar7 = iswdigit((short)(char)FVar3);
        if (iVar7 == 0) {
          return __return_storage_ptr__;
        }
      }
      FVar3 = pFVar11[1];
      pFVar11 = pFVar11 + 1;
    } while (FVar3 != (FScriptContainerElement)0x0);
  }
  iVar7 = (__return_storage_ptr__->Data).ArrayNum;
  uVar14 = 0xffffffff;
  uVar13 = 0xffffffff;
  uVar10 = iVar7 - 2;
  if (iVar7 == 0) {
    uVar10 = 0xffffffff;
  }
  uVar9 = uVar14;
  if (-1 < (int)uVar10) {
    lVar15 = (longlong)(int)uVar10;
    do {
      iVar7 = (__return_storage_ptr__->Data).ArrayNum;
      uVar9 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar9 = 0;
      }
      if (((int)uVar9 <= (int)uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAnsiString *)(*pcVar2)();
        return pFVar8;
      }
      FVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data[lVar15];
      if (FVar3 == (FScriptContainerElement)0x2e) {
        uVar13 = uVar10;
        uVar9 = uVar10;
        if ((int)uVar10 < (int)uVar14) {
          uVar9 = uVar14;
        }
        break;
      }
      if ((uVar14 == 0xffffffff) && (FVar3 != (FScriptContainerElement)0x30)) {
        uVar14 = uVar10 + 1;
      }
      lVar15 = lVar15 + -1;
      uVar10 = uVar10 - 1;
      uVar9 = uVar14;
    } while (-1 < (int)uVar10);
    if ((uVar9 != 0xffffffff) && (uVar13 != 0xffffffff)) goto LAB_1415f076b;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("TrimIndex != INDEX_NONE && DecimalSeparatorIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                     ,0x50a,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FAnsiString *)(*pcVar2)();
    return pFVar8;
  }
LAB_1415f076b:
  iVar7 = (__return_storage_ptr__->Data).ArrayNum;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  uVar14 = 0;
  uVar10 = uVar14;
  if (0 < (int)(iVar5 - uVar9)) {
    uVar10 = iVar5 - uVar9;
  }
  uVar6 = uVar14;
  if ((int)(uVar10 + uVar9) <= iVar7) {
    uVar6 = ~(uVar10 | uVar9) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FAnsiString *)(*pcVar2)();
    return pFVar8;
  }
  if (uVar10 != 0) {
    pFVar11 = (__return_storage_ptr__->Data).AllocatorInstance.Data + (int)uVar9;
    iVar7 = ((__return_storage_ptr__->Data).ArrayNum - uVar10) - uVar9;
    if (iVar7 != 0) {
      memmove(pFVar11,pFVar11 + (int)uVar10,(longlong)iVar7);
    }
    piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
    *piVar1 = *piVar1 - uVar10;
  }
  if (0 < param_2) {
    if (uVar9 == uVar13) {
      AppendChar(__return_storage_ptr__,'.');
    }
    iVar7 = (__return_storage_ptr__->Data).ArrayNum;
    uVar10 = iVar7 - 1U;
    if (iVar7 == 0) {
      uVar10 = uVar14;
    }
    uVar10 = param_2 + 1 + (uVar13 - uVar10);
    uVar12 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      uVar13 = iVar7 - 1U;
      if (iVar7 == 0) {
        uVar13 = 0;
      }
      if (0 < (int)(uVar13 + uVar10)) {
        uVar10 = uVar13 + uVar10 + 1;
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if ((__return_storage_ptr__->Data).ArrayMax < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar10,(ForAnyElementType *)__return_storage_ptr__,iVar7,
                     &(__return_storage_ptr__->Data).ArrayMax);
        }
      }
      do {
        AppendChar(__return_storage_ptr__,'0');
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return __return_storage_ptr__;
}

// SerializeAsANSICharArray @ 1415f10d0

void __thiscall
FAnsiString::SerializeAsANSICharArray(FAnsiString *this,FArchive *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_48 [6];
  ulonglong uVar5;
  
  iVar7 = (this->Data).ArrayNum;
  uVar6 = 0;
  plVar1 = *(longlong **)&param_1->field_0x8;
  uVar8 = (ulonglong)(iVar7 - 1);
  if (iVar7 == 0) {
    uVar8 = uVar6;
  }
  local_48[0] = param_2;
  if (param_2 < (int)(uint)uVar8) {
    local_48[0] = (uint)uVar8;
  }
  uVar8 = uVar6;
  uVar9 = uVar6;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_48,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_48);
    }
  }
  else {
    local_48[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  while( true ) {
    iVar7 = (this->Data).ArrayNum;
    uVar5 = (ulonglong)(iVar7 - 1);
    if (iVar7 == 0) {
      uVar5 = uVar6;
    }
    iVar7 = (int)uVar8;
    if ((int)uVar5 <= iVar7) break;
    if ((iVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10[0] = (this->Data).AllocatorInstance.Data[uVar9];
    FGenericPlatformString::Memcpy(local_res20,local_res10,1);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = local_res20[0];
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 + 1;
    }
    else {
      local_res18[0] = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 + 1;
    }
  }
  if ((int)uVar5 < (int)local_48[0]) {
    do {
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0;
      if ((ulonglong)plVar1[1] < *plVar1 + 1U) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        *plVar1 = *plVar1 + 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)local_48[0]);
  }
  return;
}

// Shrink @ 1415f5830

void __thiscall FAnsiString::Shrink(FAnsiString *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,(ForAnyElementType *)this,iVar2,piVar1);
  }
  return;
}

// Split @ 1415f6080

bool __thiscall
FAnsiString::Split(FAnsiString *this,FAnsiString *param_1,FAnsiString *param_2,FAnsiString *param_3)

{
  bool bVar1;
  
  bVar1 = Split(this,param_1,param_2,param_3,IgnoreCase,FromStart);
  return bVar1;
}

// Split @ 1415f60b0

bool __thiscall
FAnsiString::Split(FAnsiString *this,FAnsiString *param_1,FAnsiString *param_2,FAnsiString *param_3,
                  Type param_4,Type param_5)

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
  char *pcVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  char *pcVar13;
  FAnsiString local_78;
  FAnsiString local_68;
  FAnsiString local_58;
  FAnsiString local_48;
  FAnsiString local_38;
  
  if (((param_2 == param_3) && (param_2 != (FAnsiString *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LeftStr != RightStr || LeftStr == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x1ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (param_1->Data).ArrayNum;
  pcVar13 = "";
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if (iVar5 == 0) {
    pcVar10 = "";
    iVar5 = iVar7;
  }
  else {
    pcVar10 = (char *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  iVar5 = Find(this,pcVar10,iVar5,param_4,param_5,-1);
  if (-1 < iVar5) {
    iVar9 = 0;
    if (param_2 == (FAnsiString *)0x0) {
      if (param_3 == (FAnsiString *)0x0) {
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
        pcVar13 = (char *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_38,(char *)(pcVar13 + iVar9),iVar6 - iVar9);
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
      if (param_3 != (FAnsiString *)0x0) {
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
          pcVar10 = "";
        }
        else {
          pcVar10 = (char *)(this->Data).AllocatorInstance.Data;
        }
        ConstructFromPtrSize(&local_58,(char *)(pcVar10 + iVar6),iVar7 - iVar6);
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
        pcVar13 = (char *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_48,pcVar13,iVar9);
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
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_78,pcVar10,iVar12);
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
      if (param_3 == (FAnsiString *)0x0) {
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
        pcVar13 = (char *)(this->Data).AllocatorInstance.Data;
      }
      ConstructFromPtrSize(&local_68,(char *)(pcVar13 + iVar9),iVar5 - iVar9);
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

// StartsWith @ 1415f6b30

bool __thiscall FAnsiString::StartsWith(FAnsiString *this,char *param_1,int param_2,Type param_3)

{
  int iVar1;
  char *_Str1;
  
  if (param_3 == IgnoreCase) {
    if (param_2 < 1) {
      return false;
    }
    if ((this->Data).ArrayNum == 0) {
      iVar1 = FGenericPlatformStricmp::Strnicmp("",param_1,(longlong)param_2);
    }
    else {
      iVar1 = FGenericPlatformStricmp::Strnicmp
                        ((char *)(this->Data).AllocatorInstance.Data,param_1,(longlong)param_2);
    }
  }
  else {
    if (param_2 < 1) {
      return false;
    }
    if ((this->Data).ArrayNum == 0) {
      _Str1 = "";
    }
    else {
      _Str1 = (char *)(this->Data).AllocatorInstance.Data;
    }
    iVar1 = strncmp(_Str1,param_1,(longlong)param_2);
  }
  if (iVar1 != 0) {
    return false;
  }
  return true;
}

// ToBlob @ 1416017c0

bool __cdecl FAnsiString::ToBlob(FAnsiString *param_1,uchar *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement local_res18;
  FScriptContainerElement local_res19;
  FScriptContainerElement local_res1a;
  undefined1 local_res1b;
  
  iVar4 = (param_1->Data).ArrayNum;
  uVar5 = 0;
  iVar7 = iVar4 + -1;
  iVar8 = iVar7;
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  if ((param_3 < (uint)(iVar8 / 3 + (iVar8 >> 0x1f) +
                       (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f
                            ))) ||
     ((iVar4 != 0 &&
      (iVar7 != (iVar7 / 3 + (iVar7 >> 0x1f) +
                (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)
      ))) {
    return false;
  }
  iVar7 = 2;
  local_res1b = 0;
  uVar6 = uVar5;
  do {
    iVar4 = (param_1->Data).ArrayNum;
    iVar8 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    if (iVar8 <= (int)uVar5) {
      return true;
    }
    if ((((iVar7 + -2 < 0) || (iVar4 == 0)) || (iVar4 + -1 <= iVar7 + -2)) &&
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
    local_res18 = (param_1->Data).AllocatorInstance.Data[uVar6];
    if (iVar7 + -1 < 0) {
code_r0x0001416018da:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      iVar4 = (param_1->Data).ArrayNum;
      iVar8 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar8 = 0;
      }
      if (iVar8 <= iVar7 + -1) goto code_r0x0001416018da;
    }
    local_res19 = (param_1->Data).AllocatorInstance.Data[uVar6 + 1];
    if (iVar7 < 0) {
code_r0x00014160193b:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      iVar4 = (param_1->Data).ArrayNum;
      iVar8 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar8 = 0;
      }
      if (iVar8 <= iVar7) goto code_r0x00014160193b;
    }
    local_res1a = (param_1->Data).AllocatorInstance.Data[uVar6 + 2];
    iVar4 = atoi((char *)&local_res18);
    *param_2 = (uchar)iVar4;
    iVar7 = iVar7 + 3;
    param_2 = param_2 + 1;
    uVar6 = uVar6 + 3;
    uVar5 = (ulonglong)((int)uVar5 + 3);
  } while( true );
}

// ToBool @ 141601dc0

bool __thiscall FAnsiString::ToBool(FAnsiString *this)

{
  bool bVar1;
  
  if ((this->Data).ArrayNum != 0) {
    bVar1 = FToBoolHelper::FromCStringAnsi((char *)(this->Data).AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = FToBoolHelper::FromCStringAnsi("");
  return bVar1;
}

// ToHexBlob @ 141601e20

bool __cdecl FAnsiString::ToHexBlob(FAnsiString *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *local_res8;
  FScriptContainerElement local_res18;
  FScriptContainerElement local_res19;
  undefined1 local_res1a;
  
  uVar9 = 0;
  iVar1 = (param_1->Data).ArrayNum;
  uVar5 = iVar1 - 1U;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  if ((param_3 < (uint)((int)uVar5 / 2)) || ((iVar1 != 0 && ((iVar1 - 1U & 1) != 0)))) {
    return false;
  }
  local_res1a = 0;
  local_res8 = (char *)0x0;
  uVar10 = uVar9;
  do {
    iVar1 = (param_1->Data).ArrayNum;
    uVar5 = iVar1 - 1U;
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    iVar8 = (int)uVar9;
    if ((int)uVar5 <= iVar8) {
      return true;
    }
    if ((((iVar8 < 0) || (iVar1 == 0)) || ((int)(iVar1 - 1U) <= iVar8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res18 = (param_1->Data).AllocatorInstance.Data[uVar10];
    if (iVar8 + 1 < 0) {
code_r0x000141601f14:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar1 = (param_1->Data).ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= iVar8 + 1) goto code_r0x000141601f14;
    }
    local_res19 = (param_1->Data).AllocatorInstance.Data[uVar10 + 1];
    lVar6 = strtol((char *)&local_res18,&local_res8,0x10);
    uVar9 = (ulonglong)(iVar8 + 2);
    uVar10 = uVar10 + 2;
    *param_2 = (uchar)lVar6;
    param_2 = param_2 + 1;
  } while( true );
}

// ToLower @ 141602290

FAnsiString * __thiscall FAnsiString::ToLower(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  FAnsiString(__return_storage_ptr__,this);
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  lVar4 = (longlong)iVar3;
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  if (0 < iVar3) {
    do {
      *pFVar2 = (FScriptContainerElement)
                ((-((int)(char)*pFVar2 - 0x41U < 0x1a) & 0x20U) + (char)*pFVar2);
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar2 + 1;
    } while (lVar4 != 0);
  }
  return __return_storage_ptr__;
}

// ToLower @ 1416022f0

FAnsiString * __thiscall FAnsiString::ToLower(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (this->Data).ArrayNum;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  lVar4 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      *pFVar2 = (FScriptContainerElement)
                ((-((int)(char)*pFVar2 - 0x41U < 0x1a) & 0x20U) + (char)*pFVar2);
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar2 + 1;
    } while (lVar4 != 0);
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

// ToLowerInline @ 141602470

void __thiscall FAnsiString::ToLowerInline(FAnsiString *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  lVar4 = (longlong)iVar3;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  if (0 < iVar3) {
    do {
      *pFVar2 = (FScriptContainerElement)
                ((-((int)(char)*pFVar2 - 0x41U < 0x1a) & 0x20U) + (char)*pFVar2);
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar2 + 1;
    } while (lVar4 != 0);
  }
  return;
}

// ToUpper @ 141602820

FAnsiString * __thiscall FAnsiString::ToUpper(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  FAnsiString(__return_storage_ptr__,this);
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  lVar4 = (longlong)iVar3;
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  if (0 < iVar3) {
    do {
      *pFVar2 = (FScriptContainerElement)
                ((char)*pFVar2 - (-((int)(char)*pFVar2 - 0x61U < 0x1a) & 0x20U));
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar2 + 1;
    } while (lVar4 != 0);
  }
  return __return_storage_ptr__;
}

// ToUpper @ 141602880

FAnsiString * __thiscall FAnsiString::ToUpper(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (this->Data).ArrayNum;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  lVar4 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      *pFVar2 = (FScriptContainerElement)
                ((char)*pFVar2 - (-((int)(char)*pFVar2 - 0x61U < 0x1a) & 0x20U));
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar2 + 1;
    } while (lVar4 != 0);
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

// ToUpperInline @ 141602a00

void __thiscall FAnsiString::ToUpperInline(FAnsiString *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  lVar4 = (longlong)iVar3;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  if (0 < iVar3) {
    do {
      *pFVar2 = (FScriptContainerElement)
                ((char)*pFVar2 - (-((int)(char)*pFVar2 - 0x61U < 0x1a) & 0x20U));
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar2 + 1;
    } while (lVar4 != 0);
  }
  return;
}

// TrimChar @ 141602e50

FAnsiString * __thiscall
FAnsiString::TrimChar
          (FAnsiString *this,FAnsiString *__return_storage_ptr__,char param_1,bool *param_2)

{
  FAnsiString(__return_storage_ptr__,this);
  TrimCharInline(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// TrimChar @ 141602ea0

FAnsiString * __thiscall
FAnsiString::TrimChar
          (FAnsiString *this,FAnsiString *__return_storage_ptr__,char param_1,bool *param_2)

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

// TrimCharInline @ 141603060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::TrimCharInline(FAnsiString *this,char param_1,bool *param_2)

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
    bVar8 = *(this->Data).AllocatorInstance.Data == (FScriptContainerElement)param_1;
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
      if ((this->Data).AllocatorInstance.Data[(longlong)(int)uVar7 + -1] ==
          (FScriptContainerElement)param_1) {
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

// TrimEnd @ 141603390

FAnsiString * __thiscall FAnsiString::TrimEnd(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  FAnsiString(__return_storage_ptr__,this);
  TrimEndInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimEnd @ 1416033c0

FAnsiString * __thiscall FAnsiString::TrimEnd(FAnsiString *this,FAnsiString *__return_storage_ptr__)

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

// TrimEndInline @ 141603510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::TrimEndInline(FAnsiString *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = (this->Data).ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  lVar7 = (longlong)iVar5;
  iVar6 = iVar5;
  if (0 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
code_r0x000141603578:
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
        if (iVar4 <= iVar5) goto code_r0x000141603578;
      }
      iVar4 = isspace((uint)(byte)(this->Data).AllocatorInstance.Data[lVar7 + -1]);
      if (iVar4 == 0) break;
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (0 < lVar7);
  }
  iVar4 = (this->Data).ArrayNum;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  RemoveAt(this,iVar6,iVar5 - iVar6,Default);
  return;
}

// TrimQuotes @ 1416037b0

FAnsiString * __thiscall
FAnsiString::TrimQuotes(FAnsiString *this,FAnsiString *__return_storage_ptr__,bool *param_1)

{
  FAnsiString(__return_storage_ptr__,this);
  TrimCharInline(__return_storage_ptr__,'\"',param_1);
  return __return_storage_ptr__;
}

// TrimQuotes @ 1416037f0

FAnsiString * __thiscall
FAnsiString::TrimQuotes(FAnsiString *this,FAnsiString *__return_storage_ptr__,bool *param_1)

{
  TrimCharInline(this,'\"',param_1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// TrimQuotesInline @ 141603960

void __thiscall FAnsiString::TrimQuotesInline(FAnsiString *this,bool *param_1)

{
  TrimCharInline(this,'\"',param_1);
  return;
}

// TrimStart @ 1416039a0

FAnsiString * __thiscall
FAnsiString::TrimStart(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  FAnsiString(__return_storage_ptr__,this);
  TrimStartInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimStart @ 1416039d0

FAnsiString * __thiscall
FAnsiString::TrimStart(FAnsiString *this,FAnsiString *__return_storage_ptr__)

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

// TrimStartAndEnd @ 141603b20

FAnsiString * __thiscall
FAnsiString::TrimStartAndEnd(FAnsiString *this,FAnsiString *__return_storage_ptr__)

{
  FAnsiString(__return_storage_ptr__,this);
  TrimEndInline(__return_storage_ptr__);
  TrimStartInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimStartAndEnd @ 141603b60

FAnsiString * __thiscall
FAnsiString::TrimStartAndEnd(FAnsiString *this,FAnsiString *__return_storage_ptr__)

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

// TrimStartAndEndInline @ 141603cd0

void __thiscall FAnsiString::TrimStartAndEndInline(FAnsiString *this)

{
  TrimEndInline(this);
  TrimStartInline(this);
  return;
}

// TrimStartInline @ 141603d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnsiString::TrimStartInline(FAnsiString *this)

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
    iVar4 = isspace((uint)(byte)(this->Data).AllocatorInstance.Data[lVar6]);
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
    lVar6 = lVar6 + 1;
  }
  RemoveAt(this,0,iVar5,Default);
  return;
}

// TrimToNullTerminator @ 141603f70

void __thiscall FAnsiString::TrimToNullTerminator(FAnsiString *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  uint uVar8;
  
  iVar5 = (this->Data).ArrayNum;
  if (iVar5 != 0) {
    sVar6 = strlen((char *)(this->Data).AllocatorInstance.Data);
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
      _Dst = (this->Data).AllocatorInstance.Data + (int)uVar7;
      iVar5 = ((this->Data).ArrayNum - uVar7) - uVar8;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar5);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(ForAnyElementType *)this,(this->Data).ArrayNum,&(this->Data).ArrayMax);
    }
  }
  return;
}

// FormatImpl @ 1419404e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAnsiString * __cdecl
FAnsiString::FormatImpl
          (FAnsiString *__return_storage_ptr__,char *param_1,
          TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringFormatter<char> *this;
  FAnsiString *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  TValueOrError<FAnsiString,FExpressionError> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = GetDefaultFormatter<char>();
  TStringFormatter<char>::FormatInternal(this,&local_38,param_1,param_2,false);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnsiString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FAnsiString,FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5752263950234288083>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringFormatter.h"
                       ,0x2d,"Result.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnsiString *)(*pcVar1)();
      return pFVar3;
    }
    FAnsiString(__return_storage_ptr__,param_1);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAnsiString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
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
        pFVar3 = (FAnsiString *)(*pcVar1)();
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
        pFVar3 = (FAnsiString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}

// FormatImpl @ 1419406a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAnsiString * __cdecl
FAnsiString::FormatImpl
          (FAnsiString *__return_storage_ptr__,char *param_1,
          TMap<FAnsiString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnsiString,FStringFormatArg,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringFormatter<char> *this;
  FAnsiString *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  TValueOrError<FAnsiString,FExpressionError> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = GetDefaultFormatter<char>();
  TStringFormatter<char>::FormatInternal(this,&local_38,param_1,param_2,false);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnsiString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FAnsiString,FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5752263950234288100>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringFormatter.h"
                       ,0x1c,"Result.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnsiString *)(*pcVar1)();
      return pFVar3;
    }
    FAnsiString(__return_storage_ptr__,param_1);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAnsiString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
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
        pFVar3 = (FAnsiString *)(*pcVar1)();
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
        pFVar3 = (FAnsiString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}


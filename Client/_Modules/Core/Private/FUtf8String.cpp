// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 132

// FUtf8String @ 141585ab0

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,FUtf8String *param_1)

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

// FUtf8String @ 141585b40

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FUtf8String *pFVar6;
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
        pFVar6 = (FUtf8String *)(*pcVar4)();
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

// FUtf8String @ 141585c40

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,int param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_2 != (ushort *)0x0) && (*param_2 != 0)) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FUtf8String *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,param_1);
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
      UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_2,param_1);
      pFVar3[iVar6] = (FScriptContainerElement)0x0;
    }
  }
  return this;
}

// FUtf8String @ 141585d60

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,int param_1,uchar *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FUtf8String *pFVar6;
  uint uVar7;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar2 = 0;
  if ((param_2 != (uchar *)0x0) && (*param_2 != '\0')) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FUtf8String *)(*pcVar4)();
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

// FUtf8String @ 141585e60

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,int param_1,wchar_t *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0xbb,L"Unable to construct string with a negative size");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FUtf8String *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,param_1);
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
      UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_2,param_1);
      pFVar3[iVar6] = (FScriptContainerElement)0x0;
    }
  }
  return this;
}

// FUtf8String @ 141585f80

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,char *param_1)

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

// FUtf8String @ 141586040

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FUtf8String *pFVar5;
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
      pFVar5 = (FUtf8String *)(*pcVar3)();
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

// FUtf8String @ 141586190

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,ushort *param_1)

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
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    sVar4 = wcslen((wchar_t *)param_1);
    iVar5 = (int)sVar4 + 1;
    uVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar5);
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
    UE::Core::Private::Convert((uchar *)(this->Data).AllocatorInstance.Data,uVar3,param_1,iVar5);
  }
  return this;
}

// FUtf8String @ 141586270

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUtf8String *pFVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar5 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
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
      pFVar6 = (FUtf8String *)(*pcVar3)();
      return pFVar6;
    }
    if (*param_1 != 0) {
      sVar7 = wcslen((wchar_t *)param_1);
      iVar9 = (int)sVar7 + 1;
      iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar9);
      uVar8 = iVar5 + param_2;
      if (-1 < (int)uVar8) {
        if (*piVar2 < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar8,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,(ForAnyElementType *)this,piVar1,piVar2);
        UE::Core::Private::Convert((uchar *)(this->Data).AllocatorInstance.Data,iVar5,param_1,iVar9)
        ;
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

// FUtf8String @ 1415863e0

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,uchar *param_1)

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
  if ((param_1 != (uchar *)0x0) && (*param_1 != '\0')) {
    sVar3 = strlen((char *)param_1);
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

// FUtf8String @ 1415864a0

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FUtf8String *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar8 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
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
      pFVar5 = (FUtf8String *)(*pcVar3)();
      return pFVar5;
    }
    if (*param_1 != '\0') {
      sVar6 = strlen((char *)param_1);
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

// FUtf8String @ 1415865f0

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,wchar32 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_1 != (wchar32 *)0x0) && (*param_1 != L'\0')) {
    iVar3 = UE::Core::Private::Strlen32(param_1);
    uVar4 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar3 + 1);
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar2 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,(ForAnyElementType *)this,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
    UE::Core::Private::Convert((uchar *)(this->Data).AllocatorInstance.Data,uVar4,param_1,iVar3 + 1)
    ;
  }
  return this;
}

// FUtf8String @ 1415866d0

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,wchar_t *param_1)

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
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar4 = wcslen(param_1);
    iVar5 = (int)sVar4 + 1;
    uVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar5);
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
    UE::Core::Private::Convert((uchar *)(this->Data).AllocatorInstance.Data,uVar3,param_1,iVar5);
  }
  return this;
}

// FUtf8String @ 1415867b0

FUtf8String * __thiscall FUtf8String::FUtf8String(FUtf8String *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUtf8String *pFVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar5 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
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
      pFVar6 = (FUtf8String *)(*pcVar3)();
      return pFVar6;
    }
    if (*param_1 != L'\0') {
      sVar7 = wcslen(param_1);
      iVar9 = (int)sVar7 + 1;
      iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar9);
      uVar8 = iVar5 + param_2;
      if (-1 < (int)uVar8) {
        if (*piVar2 < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar8,(ForAnyElementType *)this,*piVar1,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,(ForAnyElementType *)this,piVar1,piVar2);
        UE::Core::Private::Convert((uchar *)(this->Data).AllocatorInstance.Data,iVar5,param_1,iVar9)
        ;
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

// operator= @ 14158bdb0

FUtf8String * __thiscall FUtf8String::operator=(FUtf8String *this,uchar *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  
  if ((this->Data).AllocatorInstance.Data != (FScriptContainerElement *)param_1) {
    if ((param_1 == (uchar *)0x0) || (*param_1 == '\0')) {
      uVar4 = 0;
    }
    else {
      sVar3 = strlen((char *)param_1);
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

// operator[] @ 14158cfc0

uchar * __thiscall FUtf8String::operator[](FUtf8String *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (param_1 < iVar4) goto LAB_14158d021;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x107,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
LAB_14158d021:
  return (uchar *)((this->Data).AllocatorInstance.Data + param_1);
}

// AppendChar @ 1415ac740

FUtf8String * __thiscall FUtf8String::AppendChar(FUtf8String *this,uchar param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FUtf8String *pFVar5;
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
        pFVar5 = (FUtf8String *)(*pcVar3)();
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
        pFVar5 = (FUtf8String *)(*pcVar3)();
        return pFVar5;
      }
    }
    (this->Data).AllocatorInstance.Data[(int)uVar7] = (FScriptContainerElement)0x0;
  }
  return this;
}

// AppendChars @ 1415ad560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::AppendChars(FUtf8String *this,char *param_1,int param_2)

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
      TArray<char8_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar4,No);
    }
  }
  *puVar6 = 0;
  return;
}

// AppendChars @ 1415ad6a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::AppendChars(FUtf8String *this,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
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
  puVar6 = UE::Core::Private::Convert((uchar *)pFVar8,param_2,param_1,param_2);
  if (puVar6 == (uchar *)0x0) {
    iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5 - param_2,(ForAnyElementType *)this,piVar1,piVar2);
    puVar6 = UE::Core::Private::Convert
                       ((uchar *)((this->Data).AllocatorInstance.Data + iVar7),iVar5,param_1,param_2
                       );
  }
  else {
    iVar5 = (int)puVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char8_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *puVar6 = '\0';
  return;
}

// AppendChars @ 1415ad7f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::AppendChars(FUtf8String *this,uchar *param_1,int param_2)

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
      TArray<char8_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar4,No);
    }
  }
  *puVar6 = 0;
  return;
}

// AppendChars @ 1415ad930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::AppendChars(FUtf8String *this,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
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
  puVar6 = UE::Core::Private::Convert((uchar *)pFVar8,param_2,param_1,param_2);
  if (puVar6 == (uchar *)0x0) {
    iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5 - param_2,(ForAnyElementType *)this,piVar1,piVar2);
    puVar6 = UE::Core::Private::Convert
                       ((uchar *)((this->Data).AllocatorInstance.Data + iVar7),iVar5,param_1,param_2
                       );
  }
  else {
    iVar5 = (int)puVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char8_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *puVar6 = '\0';
  return;
}

// AppendChars @ 1415ada80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::AppendChars(FUtf8String *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
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
  puVar6 = UE::Core::Private::Convert((uchar *)pFVar8,param_2,param_1,param_2);
  if (puVar6 == (uchar *)0x0) {
    iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5 - param_2,(ForAnyElementType *)this,piVar1,piVar2);
    puVar6 = UE::Core::Private::Convert
                       ((uchar *)((this->Data).AllocatorInstance.Data + iVar7),iVar5,param_1,param_2
                       );
  }
  else {
    iVar5 = (int)puVar6 - (int)pFVar8;
    if (iVar5 < param_2) {
      TArray<char8_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Data,iVar7 + 1 + iVar5,No);
    }
  }
  *puVar6 = '\0';
  return;
}

// AppendInt64 @ 1415ade80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUtf8String::AppendInt64(FUtf8String *this,long64 param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  long64 lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [30];
  uchar auStack_3a [33];
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
    auStack_3a[iVar4] = '-';
  }
  AppendChars(this,auStack_3a + (longlong)iVar5 + 2,0x20 - iVar5);
  return;
}

// AppendInt @ 1415ae0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUtf8String::AppendInt(FUtf8String *this,int param_1)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [30];
  uchar auStack_2a [17];
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
    auStack_2a[iVar4] = '-';
  }
  AppendChars(this,auStack_2a + (longlong)iVar5 + 2,0x10 - iVar5);
  return;
}

// AppendfImpl @ 1415ae430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUtf8String::AppendfImpl(FUtf8String *param_1,uchar *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  uchar *puVar3;
  size_t sVar4;
  uchar *_Str;
  int iVar5;
  undefined1 local_res18 [16];
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 *local_260;
  uchar local_248 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  iVar5 = 0x200;
  puVar2 = __local_stdio_printf_options();
  puVar3 = (uchar *)0x0;
  local_268 = 0;
  local_260 = local_res18;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,local_248,0x200,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if ((iVar1 == -1) || (_Str = local_248, 0x1ff < iVar1)) {
    do {
      iVar5 = iVar5 * 2;
      puVar3 = FMemory::Realloc(puVar3,(longlong)iVar5,0);
      local_260 = local_res18;
      local_268 = 0;
      iVar1 = __stdio_common_vsprintf(*puVar2 | 2,puVar3,(longlong)iVar5,param_2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
    } while ((iVar1 == -1) || (_Str = puVar3, iVar5 <= iVar1));
  }
  _Str[iVar1] = '\0';
  sVar4 = strlen((char *)_Str);
  AppendChars(param_1,_Str,(int)sVar4);
  if (iVar5 != 0x200) {
    FMemory::Free(_Str);
  }
  return;
}

// AssignRange @ 1415ae950

void __thiscall FUtf8String::AssignRange(FUtf8String *this,uchar *param_1,int param_2)

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

// Chr @ 1415b0270

FUtf8String * __cdecl FUtf8String::Chr(FUtf8String *__return_storage_ptr__,uchar param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  uchar local_res10 [8];
  
  local_res10[1] = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 != '\0') {
    local_res10[0] = param_1;
    sVar3 = strlen((char *)local_res10);
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

// ChrN @ 1415b0600

FUtf8String * __cdecl
FUtf8String::ChrN(FUtf8String *__return_storage_ptr__,int param_1,uchar param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FUtf8String *pFVar5;
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
    pFVar5 = (FUtf8String *)(*pcVar3)();
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
        pFVar5 = (FUtf8String *)(*pcVar3)();
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
    pFVar5 = (FUtf8String *)(*pcVar3)();
    return pFVar5;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x0;
  return __return_storage_ptr__;
}

// ConcatCF @ 1415b2460

FUtf8String * __cdecl
FUtf8String::ConcatCF(FUtf8String *__return_storage_ptr__,uchar *param_1,FUtf8String *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType local_28;
  int local_20 [2];
  
  if (param_1 == (uchar *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  else {
    sVar4 = strlen((char *)param_1);
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

// ConcatCF @ 1415b25c0

FUtf8String * __cdecl
FUtf8String::ConcatCF(FUtf8String *__return_storage_ptr__,uchar *param_1,FUtf8String *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType local_28;
  int local_20 [2];
  
  if (param_1 != (uchar *)0x0) {
    sVar4 = strlen((char *)param_1);
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
  FUtf8String(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// ConcatFC @ 1415b2ad0

FUtf8String * __cdecl
FUtf8String::ConcatFC(FUtf8String *__return_storage_ptr__,FUtf8String *param_1,uchar *param_2)

{
  int iVar1;
  size_t sVar2;
  TArray<char8_t,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2 == (uchar *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  sVar2 = strlen((char *)param_2);
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
    TArray<char8_t,TSizedDefaultAllocator<32>_>::
    TArray<char8_t,TSizedDefaultAllocator<32>_><char8_t>
              (&local_18,&param_1->Data,(uint)((param_1->Data).ArrayNum == 0) + iVar1);
    AppendChars((FUtf8String *)&local_18,param_2,iVar1);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFC @ 1415b2bb0

FUtf8String * __cdecl
FUtf8String::ConcatFC(FUtf8String *__return_storage_ptr__,FUtf8String *param_1,uchar *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  FUtf8String local_18;
  
  if (param_2 != (uchar *)0x0) {
    sVar4 = strlen((char *)param_2);
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
  FUtf8String(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b3320

FUtf8String * __cdecl
FUtf8String::ConcatFF(FUtf8String *__return_storage_ptr__,FUtf8String *param_1,FUtf8String *param_2)

{
  int iVar1;
  int iVar2;
  TArray<char8_t,TSizedDefaultAllocator<32>_> local_18;
  
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
  TArray<char8_t,TSizedDefaultAllocator<32>_>::TArray<char8_t,TSizedDefaultAllocator<32>_><char8_t>
            (&local_18,&param_1->Data,iVar2);
  AppendChars((FUtf8String *)&local_18,(uchar *)(param_2->Data).AllocatorInstance.Data,iVar2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b33d0

FUtf8String * __cdecl
FUtf8String::ConcatFF(FUtf8String *__return_storage_ptr__,FUtf8String *param_1,FUtf8String *param_2)

{
  int iVar1;
  int iVar2;
  TArray<char8_t,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    FUtf8String(__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TArray<char8_t,TSizedDefaultAllocator<32>_>::TArray<char8_t,TSizedDefaultAllocator<32>_><char8_t>
            (&local_18,&param_1->Data,iVar2);
  AppendChars((FUtf8String *)&local_18,(uchar *)(param_2->Data).AllocatorInstance.Data,iVar2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b3460

FUtf8String * __cdecl
FUtf8String::ConcatFF(FUtf8String *__return_storage_ptr__,FUtf8String *param_1,FUtf8String *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  size_t _Size;
  uint uVar2;
  int iVar3;
  FUtf8String local_18;
  
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
    AppendChars(&local_18,(uchar *)(param_2->Data).AllocatorInstance.Data,iVar3);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFF @ 1415b3560

FUtf8String * __cdecl
FUtf8String::ConcatFF(FUtf8String *__return_storage_ptr__,FUtf8String *param_1,FUtf8String *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  size_t _Size;
  uint uVar2;
  int iVar3;
  FUtf8String local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  _Size = (size_t)local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum < 2) {
    FUtf8String(__return_storage_ptr__,param_2);
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
    AppendChars(&local_18,(uchar *)(param_2->Data).AllocatorInstance.Data,iVar3);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ConcatFR @ 1415b39a0

FUtf8String * __cdecl
FUtf8String::ConcatFR
          (FUtf8String *__return_storage_ptr__,FUtf8String *param_1,uchar *param_2,int param_3)

{
  TArray<char8_t,TSizedDefaultAllocator<32>_> local_18;
  
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
  TArray<char8_t,TSizedDefaultAllocator<32>_>::TArray<char8_t,TSizedDefaultAllocator<32>_><char8_t>
            (&local_18,&param_1->Data,(uint)((param_1->Data).ArrayNum == 0) + param_3);
  AppendChars((FUtf8String *)&local_18,param_2,param_3);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// ConcatFR @ 1415b3a50

FUtf8String * __cdecl
FUtf8String::ConcatFR
          (FUtf8String *__return_storage_ptr__,FUtf8String *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  uint uVar3;
  FUtf8String local_18;
  
  if (param_3 == 0) {
    FUtf8String(__return_storage_ptr__,param_1);
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

// ConcatRF @ 1415b4010

FUtf8String * __cdecl
FUtf8String::ConcatRF
          (FUtf8String *__return_storage_ptr__,uchar *param_1,int param_2,FUtf8String *param_3)

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

// ConcatRF @ 1415b4150

FUtf8String * __cdecl
FUtf8String::ConcatRF
          (FUtf8String *__return_storage_ptr__,uchar *param_1,int param_2,FUtf8String *param_3)

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
    FUtf8String(__return_storage_ptr__,param_3);
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

// ConstructFromPtrSize @ 1415b5030

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSize(FUtf8String *__return_storage_ptr__,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FUtf8String *pFVar6;
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
      pFVar6 = (FUtf8String *)(*pcVar4)();
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
      pFVar6 = (FUtf8String *)(*pcVar4)();
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

// ConstructFromPtrSize @ 1415b5150

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSize(FUtf8String *__return_storage_ptr__,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    if (param_2 == 0) goto LAB_1415b51e0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
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
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b51e0:
  iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
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
    UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b5290

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSize(FUtf8String *__return_storage_ptr__,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FUtf8String *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 == 0) {
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FUtf8String *)(*pcVar4)();
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
      pFVar6 = (FUtf8String *)(*pcVar4)();
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

// ConstructFromPtrSize @ 1415b53b0

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSize(FUtf8String *__return_storage_ptr__,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar32 *)0x0) {
    if (param_2 == 0) goto LAB_1415b5440;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
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
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b5440:
  iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
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
    UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSize @ 1415b54f0

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSize(FUtf8String *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 == 0) goto LAB_1415b5580;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
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
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b5580:
  iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
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
    UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b6630

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSizeWithSlack
          (FUtf8String *__return_storage_ptr__,char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FUtf8String *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (char *)0x0) {
    if (param_2 == 0) goto LAB_1415b66c1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FUtf8String *)(*pcVar4)();
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
      pFVar6 = (FUtf8String *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b66c1:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FUtf8String *)(*pcVar4)();
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

// ConstructFromPtrSizeWithSlack @ 1415b67c0

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSizeWithSlack
          (FUtf8String *__return_storage_ptr__,ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    if (param_2 == 0) goto LAB_1415b6857;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
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
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b6857:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
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
    UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b6960

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSizeWithSlack
          (FUtf8String *__return_storage_ptr__,uchar *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FUtf8String *pFVar6;
  uint uVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar2 = 0;
  if (param_1 == (uchar *)0x0) {
    if (param_2 == 0) goto LAB_1415b69f1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FUtf8String *)(*pcVar4)();
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
      pFVar6 = (FUtf8String *)(*pcVar4)();
      return pFVar6;
    }
  }
LAB_1415b69f1:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FUtf8String *)(*pcVar4)();
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

// ConstructFromPtrSizeWithSlack @ 1415b6af0

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSizeWithSlack
          (FUtf8String *__return_storage_ptr__,wchar32 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar32 *)0x0) {
    if (param_2 == 0) goto LAB_1415b6b87;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
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
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b6b87:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
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
    UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructFromPtrSizeWithSlack @ 1415b6c90

FUtf8String * __cdecl
FUtf8String::ConstructFromPtrSizeWithSlack
          (FUtf8String *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 == 0) goto LAB_1415b6d27;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSrc || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xba,L"Unable to construct string from a null pointer");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
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
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
LAB_1415b6d27:
  if (param_3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xbc,L"Unable to construct string with negative slack");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
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
    UE::Core::Private::Convert((uchar *)pFVar3,iVar6,param_1,param_2);
    pFVar3[iVar6] = (FScriptContainerElement)0x0;
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b87a0

FUtf8String * __cdecl
FUtf8String::ConstructWithSlack(FUtf8String *__return_storage_ptr__,char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FUtf8String *pFVar5;
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
      pFVar5 = (FUtf8String *)(*pcVar3)();
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
      pFVar5 = (FUtf8String *)(*pcVar3)();
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

// ConstructWithSlack @ 1415b8900

FUtf8String * __cdecl
FUtf8String::ConstructWithSlack(FUtf8String *__return_storage_ptr__,ushort *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUtf8String *pFVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
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
      pFVar6 = (FUtf8String *)(*pcVar3)();
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
      pFVar6 = (FUtf8String *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*param_1 == 0) {
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
    sVar7 = wcslen((wchar_t *)param_1);
    iVar9 = (int)sVar7 + 1;
    iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar9);
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
              ((uchar *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar5,param_1,iVar9);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b8a70

FUtf8String * __cdecl
FUtf8String::ConstructWithSlack(FUtf8String *__return_storage_ptr__,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FUtf8String *pFVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
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
      pFVar5 = (FUtf8String *)(*pcVar3)();
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
      pFVar5 = (FUtf8String *)(*pcVar3)();
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
    sVar6 = strlen((char *)param_1);
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

// ConstructWithSlack @ 1415b8bd0

FUtf8String * __cdecl
FUtf8String::ConstructWithSlack(FUtf8String *__return_storage_ptr__,wchar32 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FUtf8String *pFVar7;
  uint uVar8;
  
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
      pFVar7 = (FUtf8String *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtraSlack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                       ,0xa6,L"Unable to construct string with negative slack");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUtf8String *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (*param_1 == L'\0') {
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
    iVar5 = UE::Core::Private::Strlen32(param_1);
    iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar5 + 1);
    uVar8 = iVar6 + param_2;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar2 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    UE::Core::Private::Convert
              ((uchar *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar6,param_1,
               iVar5 + 1);
  }
  return __return_storage_ptr__;
}

// ConstructWithSlack @ 1415b8d40

FUtf8String * __cdecl
FUtf8String::ConstructWithSlack(FUtf8String *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUtf8String *pFVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
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
      pFVar6 = (FUtf8String *)(*pcVar3)();
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
      pFVar6 = (FUtf8String *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*param_1 == L'\0') {
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
    sVar7 = wcslen(param_1);
    iVar9 = (int)sVar7 + 1;
    iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar9);
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
              ((uchar *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar5,param_1,iVar9);
  }
  return __return_storage_ptr__;
}

// ConvertTabsToSpacesInline @ 1415b9470

void __thiscall FUtf8String::ConvertTabsToSpacesInline(FUtf8String *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  char *pcVar10;
  uint uVar11;
  FScriptContainerElement *_Dst;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FUtf8String local_28;
  
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
      pcVar10 = "";
      uVar14 = uVar8;
    }
    else {
      pcVar10 = (char *)(this->Data).AllocatorInstance.Data;
      uVar14 = iVar6 - 1;
    }
    puVar9 = TCString<char8_t>::Strnstr((uchar *)pcVar10,uVar14,(uchar *)"\t",1);
    if (puVar9 == (uchar *)0x0) {
      return;
    }
    if ((this->Data).ArrayNum == 0) {
      iVar6 = 0x5060d4b2;
    }
    else {
      iVar6 = (int)(this->Data).AllocatorInstance.Data;
    }
    uVar14 = (int)puVar9 - iVar6;
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
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)(this->Data).AllocatorInstance.Data;
    }
    ConstructFromPtrSize(&local_28,(uchar *)(pcVar10 + (int)uVar11),uVar16 - uVar11);
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
      _Dst = (this->Data).AllocatorInstance.Data + (int)uVar5;
      iVar6 = ((this->Data).ArrayNum - uVar8) - uVar5;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar6);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
    }
    iVar7 = Find(this,(uchar *)"\n",1,CaseSensitive,FromEnd,uVar14);
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
        AppendChar(this,' ');
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = iVar12;
    }
    AppendChars(this,(uchar *)local_28.Data.AllocatorInstance.Data,iVar6);
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
  }
  return;
}

// CullArray @ 1415bc430

int __cdecl FUtf8String::CullArray(TArray<FUtf8String,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void **local_res8 [4];
  void *local_18;
  undefined8 local_10;
  
  if (param_1 == (TArray<FUtf8String,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<FUtf8String,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FUtf8String,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (param_1,(<lambda_1> *)local_res8);
  iVar4 = param_1->ArrayNum;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return iVar4;
}

// Empty @ 1415c0650

void __thiscall FUtf8String::Empty(FUtf8String *this,int param_1)

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

// Empty @ 1415c06a0

void __thiscall FUtf8String::Empty(FUtf8String *this)

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

// EndsWith @ 1415c0920

bool __thiscall FUtf8String::EndsWith(FUtf8String *this,uchar *param_1,int param_2,Type param_3)

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
                      ((uchar *)((this->Data).AllocatorInstance.Data + iVar5),param_1);
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
    iVar4 = strcmp((char *)((this->Data).AllocatorInstance.Data + iVar5),(char *)param_1);
  }
  if (iVar4 != 0) {
    return false;
  }
  return true;
}

// Find @ 1415c2080

int __thiscall
FUtf8String::Find(FUtf8String *this,uchar *param_1,int param_2,Type param_3,Type param_4,int param_5
                 )

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FUtf8String *this_00;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  size_t _Size;
  uchar *puVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FUtf8String local_58;
  FUtf8String local_48;
  
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
    pFVar11 = (FScriptContainerElement *)pcVar16;
    if ((param_5 != -1) && (0 < iVar6)) {
      iVar8 = iVar6 + -1;
      if (param_5 < iVar6 + -1) {
        iVar8 = param_5;
      }
      iVar7 = 0;
      if (0 < iVar8) {
        iVar7 = iVar8;
      }
      pFVar11 = (FScriptContainerElement *)(pcVar16 + iVar7);
      iVar6 = iVar6 + ((int)pcVar16 - (int)pFVar11);
    }
    if (param_3 == IgnoreCase) {
      if (param_2 < 1) {
        pFVar9 = pFVar11;
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
          bVar2 = *param_1;
          pFVar12 = pFVar11;
          do {
            pFVar4 = pFVar12;
            pFVar9 = pFVar15;
            if (pFVar11 + ((longlong)iVar6 - uVar17) < pFVar4) break;
            pFVar12 = pFVar4 + 1;
          } while (((byte)((char)*pFVar4 - (-((byte)*pFVar4 - 0x61 < 0x1a) & 0x20U)) !=
                    (byte)(bVar2 - (-(bVar2 - 0x61 < 0x1a) & 0x20U))) ||
                  (iVar8 = FGenericPlatformStricmp::Strnicmp
                                     ((uchar *)pFVar12,param_1 + 1,uVar17 - 1), pFVar9 = pFVar4,
                  iVar8 != 0));
        }
      }
    }
    else {
      pFVar9 = (FScriptContainerElement *)
               TCString<char8_t>::Strnstr((uchar *)pFVar11,iVar6,param_1,param_2);
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
    local_58.Data.ArrayNum = (this->Data).ArrayNum;
    _Size = (size_t)local_58.Data.ArrayNum;
    pFVar15 = (this->Data).AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,pFVar15,_Size);
    }
    ToUpperInline(&local_58);
    this_00 = ConstructFromPtrSize(&local_48,param_1,param_2);
    ToUpperInline(this_00);
    pFVar15 = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (this_00->Data).ArrayNum;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    iVar6 = iVar14 + -1;
    pFVar11 = pFVar15;
    if (iVar14 == 0) {
      iVar6 = 0;
      pFVar11 = (FScriptContainerElement *)"";
    }
    iVar6 = Find(&local_58,(uchar *)pFVar11,iVar6,CaseSensitive,param_4,param_5);
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
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
  if (param_5 != -1) {
    iVar14 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar14 = 0;
    }
    if (param_5 < iVar14) goto LAB_1415c23ad;
  }
  param_5 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_5 = 0;
  }
LAB_1415c23ad:
  iVar6 = param_5 - iVar6;
  lVar10 = (longlong)iVar6;
  uVar18 = uVar17;
  if (-1 < iVar6) {
    do {
      iVar14 = 0;
      if (uVar17 != 0) {
        puVar13 = param_1;
        iVar8 = iVar6;
        do {
          if (iVar8 < 0) {
code_r0x0001415c2422:
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
            if (iVar7 <= iVar8) goto code_r0x0001415c2422;
          }
          if (puVar13[(longlong)((this->Data).AllocatorInstance.Data + (lVar10 - (longlong)param_1))
                     ] != *puVar13) break;
          puVar13 = puVar13 + 1;
          iVar14 = iVar14 + 1;
          iVar8 = iVar8 + 1;
        } while ((longlong)puVar13 - (longlong)param_1 != uVar17);
        uVar18 = (ulonglong)(uint)param_2;
      }
      if (iVar14 == (int)uVar18) {
        return iVar6;
      }
      iVar6 = iVar6 + -1;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  return -1;
}

// FormatAsNumber64 @ 1415c3a20

FUtf8String * __cdecl
FUtf8String::FormatAsNumber64(FUtf8String *__return_storage_ptr__,long64 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FUtf8String *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FUtf8String local_58;
  FUtf8String local_48;
  FUtf8String local_38;
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
      ConstructFromPtrSize(&local_38,(uchar *)(FVar5.Data + (int)uVar10),uVar7 - uVar10);
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
      uVar7 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar7 = 0;
      }
      AppendChars(&local_58,(uchar *)local_38.Data.AllocatorInstance.Data,uVar7);
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
          pFVar6 = (FUtf8String *)(*pcVar2)();
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
          pFVar6 = (FUtf8String *)(*pcVar2)();
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

// FormatAsNumber @ 1415c42b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl FUtf8String::FormatAsNumber(FUtf8String *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FUtf8String *pFVar6;
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
  FUtf8String local_78;
  FUtf8String local_68;
  FUtf8String local_58;
  uchar local_48 [15];
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
      ConstructFromPtrSize(&local_58,(uchar *)(FVar5.Data + (int)uVar12),uVar9 - uVar12);
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      uVar9 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0) {
        uVar9 = 0;
      }
      AppendChars(&local_78,(uchar *)local_58.Data.AllocatorInstance.Data,uVar9);
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
          pFVar6 = (FUtf8String *)(*pcVar2)();
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
          pFVar6 = (FUtf8String *)(*pcVar2)();
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

// FromBlob @ 1415c47b0

FUtf8String * __cdecl
FUtf8String::FromBlob(FUtf8String *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FUtf8String local_18;
  
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
      PrintfImpl(&local_18,(uchar *)"%03d");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      AppendChars(__return_storage_ptr__,(uchar *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return __return_storage_ptr__;
}

// FromHexBlob @ 1415c4a20

FUtf8String * __cdecl
FUtf8String::FromHexBlob(FUtf8String *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FUtf8String local_18;
  
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
      PrintfImpl(&local_18,(uchar *)"%02X");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      AppendChars(__return_storage_ptr__,(uchar *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return __return_storage_ptr__;
}

// InsertAt @ 1415c8b50

void __thiscall FUtf8String::InsertAt(FUtf8String *this,int param_1,FUtf8String *param_2)

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
      AppendChars(this,(uchar *)_Src,iVar4);
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

// InsertAt @ 1415c8c40

void __thiscall FUtf8String::InsertAt(FUtf8String *this,int param_1,uchar param_2)

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

// IsNumeric @ 1415c9aa0

bool __thiscall FUtf8String::IsNumeric(FUtf8String *this)

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
        iVar3 = iswdigit((ushort)(byte)FVar2);
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

// LeftPad @ 1415d3dc0

FUtf8String * __thiscall
FUtf8String::LeftPad(FUtf8String *this,FUtf8String *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FUtf8String *pFVar2;
  int iVar3;
  FUtf8String local_18;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_1 - iVar3 < 1) {
    FUtf8String(__return_storage_ptr__,this);
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

// MatchesWildcard @ 1415d4f50

bool __thiscall
FUtf8String::MatchesWildcard(FUtf8String *this,uchar *param_1,int param_2,Type param_3)

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
            MatchesWildcardRecursive<_FUtf8String::MatchesWildcard_::__l5::<lambda_1>_>
                      ((uchar *)pcVar3,iVar4,param_1,param_2,local_res20);
    return bVar2;
  }
  bVar2 = UE::Core::Private::
          MatchesWildcardRecursive<_FUtf8String::MatchesWildcard_::__l7::<lambda_2>_>
                    ((uchar *)pcVar3,iVar4,param_1,param_2,(<lambda_2>)local_res20);
  return bVar2;
}

// Mid @ 1415d56d0

FUtf8String * __thiscall
FUtf8String::Mid(FUtf8String *this,FUtf8String *__return_storage_ptr__,int param_1,int param_2)

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
    ConstructFromPtrSize(__return_storage_ptr__,(uchar *)(pcVar4 + iVar5),iVar6 - iVar5);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Mid @ 1415d5790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FUtf8String * __thiscall
FUtf8String::Mid(FUtf8String *this,FUtf8String *__return_storage_ptr__,int param_1,int param_2)

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

// MidInline @ 1415d5a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FUtf8String::MidInline(FUtf8String *this,int param_1,int param_2,EAllowShrinking param_3)

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

// ParseIntoArray @ 1415d74d0

/* WARNING: Removing unreachable block (ram,0x0001415d78d8) */

int __thiscall
FUtf8String::ParseIntoArray
          (FUtf8String *this,TArray<FUtf8String,TSizedDefaultAllocator<32>_> *param_1,
          uchar **param_2,int param_3,bool param_4)

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
  uchar **ppuVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  ForAnyElementType local_68;
  int local_60 [2];
  FUtf8String local_58;
  
  if ((param_2 == (uchar **)0x0) &&
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
    DestructItems<FUtf8String,int>((FUtf8String *)pFVar9,*piVar15);
    *piVar15 = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FUtf8String,int>((FUtf8String *)pFVar9,*piVar15);
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
        ppuVar13 = param_2;
        iVar14 = iVar12;
        do {
          sVar8 = strlen((char *)*ppuVar13);
          iVar7 = strncmp((char *)(pFVar9 + iVar6),(char *)*ppuVar13,(longlong)(int)sVar8);
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
                    goto LAB_1415d775c;
                  }
                }
                else {
LAB_1415d775c:
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
              goto LAB_1415d7604;
            }
            break;
          }
          iVar14 = iVar14 + 1;
          ppuVar13 = ppuVar13 + 1;
        } while (iVar14 < param_3);
      }
      iVar6 = iVar6 + 1;
      iVar14 = iVar16;
LAB_1415d7604:
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
    (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar11[8].field_0x0 = 0;
    pFVar9 = (FScriptContainerElement *)
             ConstructFromPtrSize(&local_58,(uchar *)(pFVar9 + iVar14),iVar10 - iVar14);
    if (pFVar11 != pFVar9) {
      pFVar2 = (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance).Data
           = (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance
             ).Data;
      (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
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

// ParseIntoArray @ 1415d7910

int __thiscall
FUtf8String::ParseIntoArray
          (FUtf8String *this,TArray<FUtf8String,TSizedDefaultAllocator<32>_> *param_1,uchar *param_2
          ,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  TArray<FUtf8String,TSizedDefaultAllocator<32>_> *local_res10;
  TStringView<char8_t> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  code *local_48;
  TArray<FUtf8String,TSizedDefaultAllocator<32>_> **local_40;
  TStringView<char8_t> local_38;
  undefined4 local_1c;
  
  if (param_2 == (uchar *)0x0) {
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
    DestructItems<FUtf8String,int>((FUtf8String *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FUtf8String,int>((FUtf8String *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  if (*param_2 != '\0') {
    local_40 = &local_res10;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FUtf8String::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<char8_t>_>
               ::Call;
    local_res10 = param_1;
    sVar5 = strlen((char *)param_2);
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
    local_38.DataPtr = (uchar *)local_58;
    UE::String::ParseTokens
              (&local_38,&local_68,(TFunctionRef<void___cdecl(TStringView<char8_t>)> *)&local_48,
               (uint)param_3 * 2 | IgnoreCase);
  }
  return param_1->ArrayNum;
}

// ParseIntoArrayLines @ 1415d7ad0

int __thiscall
FUtf8String::ParseIntoArrayLines
          (FUtf8String *this,TArray<FUtf8String,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = ParseIntoArray(this,param_1,LineEndings,3,param_2);
  return iVar1;
}

// ParseIntoArrayWS @ 1415d7c00

int __thiscall
FUtf8String::ParseIntoArrayWS
          (FUtf8String *this,TArray<FUtf8String,TSizedDefaultAllocator<32>_> *param_1,uchar *param_2
          ,bool param_3)

{
  int iVar1;
  uchar *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  uchar *local_18;
  
  local_38 = " ";
  local_30 = "\t";
  local_28 = "\r";
  local_20 = "\n";
  local_18 = "";
  iVar1 = 4;
  if ((param_2 != (uchar *)0x0) && (*param_2 != '\0')) {
    iVar1 = 5;
    local_18 = param_2;
  }
  iVar1 = ParseIntoArray(this,param_1,&local_38,iVar1,param_3);
  return iVar1;
}

// PathAppend @ 1415d8610

void __thiscall FUtf8String::PathAppend(FUtf8String *this,uchar *param_1,int param_2)

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
    goto LAB_1415d8a90;
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
          goto LAB_1415d896e;
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
LAB_1415d896e:
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
  if ((param_1 == (uchar *)0x0) &&
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
LAB_1415d8a90:
  *piVar1 = iVar6 + 1;
  (this->Data).AllocatorInstance.Data[iVar6] = local_37[0];
  return;
}

// PrintfImpl @ 1415d9960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl FUtf8String::PrintfImpl(FUtf8String *__return_storage_ptr__,uchar *param_1)

{
  int iVar1;
  ulong64 *puVar2;
  uchar *puVar3;
  int iVar4;
  undefined1 local_res18 [16];
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined1 *local_270;
  uchar auStack_259 [513];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_298;
  iVar4 = 0x200;
  puVar2 = __local_stdio_printf_options();
  puVar3 = (uchar *)0x0;
  local_278 = 0;
  local_270 = local_res18;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,auStack_259 + 1,0x200,param_1);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if ((iVar1 == -1) || (0x1ff < iVar1)) {
    do {
      iVar4 = iVar4 * 2;
      puVar3 = FMemory::Realloc(puVar3,(longlong)iVar4,0);
      local_270 = local_res18;
      local_278 = 0;
      iVar1 = __stdio_common_vsprintf(*puVar2 | 2,puVar3,(longlong)iVar4,param_1);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
    } while ((iVar1 == -1) || (iVar4 <= iVar1));
    puVar3[iVar1] = '\0';
    FUtf8String(__return_storage_ptr__,puVar3);
    if (iVar4 != 0x200) {
      FMemory::Free(puVar3);
    }
  }
  else {
    (auStack_259 + 1)[iVar1] = '\0';
    FUtf8String(__return_storage_ptr__,auStack_259 + 1);
  }
  return __return_storage_ptr__;
}

// RemoveAt @ 1415e2a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FUtf8String::RemoveAt(FUtf8String *this,int param_1,int param_2,EAllowShrinking param_3)

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

// RemoveAt @ 1415e2b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::RemoveAt(FUtf8String *this,int param_1,EAllowShrinking param_2)

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

// RemoveFromEnd @ 1415e4b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FUtf8String::RemoveFromEnd(FUtf8String *this,uchar *param_1,int param_2,Type param_3)

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
                        ((uchar *)((this->Data).AllocatorInstance.Data + iVar5),param_1);
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
      iVar4 = strcmp((char *)((this->Data).AllocatorInstance.Data + iVar5),(char *)param_1);
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

// RemoveFromStart @ 1415e4da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FUtf8String::RemoveFromStart(FUtf8String *this,uchar *param_1,int param_2,Type param_3)

{
  int iVar1;
  char *_Str1;
  ulong64 _MaxCount;
  
  _MaxCount = (ulong64)param_2;
  if (0 < param_2) {
    if (param_3 == IgnoreCase) {
      if ((this->Data).ArrayNum == 0) {
        iVar1 = FGenericPlatformStricmp::Strnicmp((uchar *)"",param_1,_MaxCount);
      }
      else {
        iVar1 = FGenericPlatformStricmp::Strnicmp
                          ((uchar *)(this->Data).AllocatorInstance.Data,param_1,_MaxCount);
      }
    }
    else {
      if ((this->Data).ArrayNum == 0) {
        _Str1 = "";
      }
      else {
        _Str1 = (char *)(this->Data).AllocatorInstance.Data;
      }
      iVar1 = strncmp(_Str1,(char *)param_1,_MaxCount);
    }
    if (iVar1 == 0) {
      RemoveAt(this,0,param_2,Default);
      return true;
    }
  }
  return false;
}

// RemoveSpacesInline @ 1415e5470

void __thiscall FUtf8String::RemoveSpacesInline(FUtf8String *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar2 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayNum;
  iVar9 = 0;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
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
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar10 - iVar5,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
        return;
      }
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar5) {
        uVar11 = iVar5 - uVar10;
        if (((int)(uVar11 | uVar10) < 0) &&
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

// Replace @ 1415e6460

FUtf8String * __thiscall
FUtf8String::Replace
          (FUtf8String *this,FUtf8String *__return_storage_ptr__,uchar *param_1,uchar *param_2,
          Type param_3)

{
  byte bVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  FUtf8String *pFVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *_Str;
  FUtf8String local_50;
  
  if ((param_2 == (uchar *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("To",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x5f8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUtf8String *)(*pcVar3)();
    return pFVar7;
  }
  if ((((this->Data).ArrayNum < 2) || (param_1 == (uchar *)0x0)) || (*param_1 == '\0')) {
    FUtf8String(__return_storage_ptr__,this);
    return __return_storage_ptr__;
  }
  _Str = (this->Data).AllocatorInstance.Data;
  sVar8 = strlen((char *)param_1);
  sVar9 = strlen((char *)param_2);
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
        bVar5 = -(bVar1 - 0x61 < 0x1a) & 0x20;
        pFVar11 = _Str;
        if (bVar1 != bVar5) {
          sVar10 = strlen((char *)param_1);
          FVar2 = *_Str;
          while (FVar2 != (FScriptContainerElement)0x0) {
            pFVar12 = pFVar11 + 1;
            if (((byte)((char)FVar2 - (-((byte)FVar2 - 0x61 < 0x1a) & 0x20U)) ==
                 (byte)(bVar1 - bVar5)) &&
               (iVar6 = FGenericPlatformStricmp::Strnicmp
                                  ((uchar *)pFVar12,param_1 + 1,(longlong)((int)sVar10 + -1)),
               iVar6 == 0)) goto LAB_1415e65e7;
            pFVar11 = pFVar12;
            FVar2 = *pFVar12;
          }
          pFVar11 = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      pFVar11 = (FScriptContainerElement *)strstr((char *)_Str,(char *)param_1);
    }
LAB_1415e65e7:
    if (pFVar11 == (FScriptContainerElement *)0x0) {
      sVar8 = strlen((char *)_Str);
      AppendChars(&local_50,(uchar *)_Str,(int)sVar8);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_50.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_50.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    AppendChars(&local_50,(uchar *)_Str,(int)pFVar11 - (int)_Str);
    AppendChars(&local_50,param_2,(int)sVar9);
    _Str = pFVar11 + (int)sVar8;
  } while( true );
}

// Replace @ 1415e66a0

FUtf8String * __thiscall
FUtf8String::Replace
          (FUtf8String *this,FUtf8String *__return_storage_ptr__,uchar *param_1,uchar *param_2,
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

// ReplaceCharInlineCaseSensitive @ 1415e6800

void __thiscall
FUtf8String::ReplaceCharInlineCaseSensitive(FUtf8String *this,uchar param_1,uchar param_2)

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
      `TCheckedPointerIterator<char8_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
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

// ReplaceCharInlineIgnoreCase @ 1415e6990

void __thiscall
FUtf8String::ReplaceCharInlineIgnoreCase(FUtf8String *this,uchar param_1,uchar param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = isupper((uint)param_1);
  if (iVar1 == 0) {
    bVar2 = -(-(param_1 - 0x61 < 0x1a) & 0x20U);
  }
  else {
    bVar2 = -(param_1 - 0x41 < 0x1a) & 0x20;
  }
  ReplaceCharInlineCaseSensitive(this,bVar2 + param_1,param_2);
  ReplaceCharInlineCaseSensitive(this,param_1,param_2);
  return;
}

// ReplaceCharWithEscapedCharInline @ 1415e6ed0

void __thiscall
FUtf8String::ReplaceCharWithEscapedCharInline
          (FUtf8String *this,TArray<char8_t,TSizedDefaultAllocator<32>_> *param_1)

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
  if (param_1 == (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1415e6f3d:
    ReplaceInline(this,CharToEscapeSeqMap_FUtf8String[0][0],CharToEscapeSeqMap_FUtf8String[0][1],
                  IgnoreCase);
    if (param_1 != (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6f5a;
LAB_1415e6f92:
    ReplaceInline(this,CharToEscapeSeqMap_FUtf8String[1][0],CharToEscapeSeqMap_FUtf8String[1][1],
                  IgnoreCase);
    if (param_1 != (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e6faf;
LAB_1415e6fe7:
    ReplaceInline(this,CharToEscapeSeqMap_FUtf8String[2][0],CharToEscapeSeqMap_FUtf8String[2][1],
                  IgnoreCase);
    if (param_1 != (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e7004;
LAB_1415e703f:
    ReplaceInline(this,CharToEscapeSeqMap_FUtf8String[3][0],CharToEscapeSeqMap_FUtf8String[3][1],
                  IgnoreCase);
    if (param_1 != (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e705c;
LAB_1415e7094:
    ReplaceInline(this,CharToEscapeSeqMap_FUtf8String[4][0],CharToEscapeSeqMap_FUtf8String[4][1],
                  IgnoreCase);
    if (param_1 == (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_1415e70f3;
  }
  else {
    if (param_1->ArrayNum < 1) {
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FUtf8String[0][0])
        goto LAB_1415e6f3d;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e6f5a:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FUtf8String[1][0])
        goto LAB_1415e6f92;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e6faf:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FUtf8String[2][0])
        goto LAB_1415e6fe7;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e7004:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FUtf8String[3][0])
        goto LAB_1415e703f;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
LAB_1415e705c:
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_1->ArrayNum;
    if (pFVar2 != pFVar3) {
      do {
        if (*pFVar2 == (FScriptContainerElement)*CharToEscapeSeqMap_FUtf8String[4][0])
        goto LAB_1415e7094;
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 == pFVar3) {
    return;
  }
  while (*pFVar2 != (FScriptContainerElement)*CharToEscapeSeqMap_FUtf8String[5][0]) {
    pFVar2 = pFVar2 + 1;
    if (pFVar2 == pFVar3) {
      return;
    }
  }
LAB_1415e70f3:
  ReplaceInline(this,CharToEscapeSeqMap_FUtf8String[5][0],CharToEscapeSeqMap_FUtf8String[5][1],
                IgnoreCase);
  return;
}

// ReplaceEscapedCharWithCharInline @ 1415e7290

void __thiscall
FUtf8String::ReplaceEscapedCharWithCharInline
          (FUtf8String *this,TArray<char8_t,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  int iVar6;
  int *piVar5;
  
  iVar1 = (this->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((0 < iVar6) &&
     ((param_1 == (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0 || (0 < param_1->ArrayNum)))) {
    piVar4 = &GFileCacheBlockSizeKB;
    do {
      piVar5 = piVar4 + -4;
      if (param_1 == (TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1415e7304:
        ReplaceInline(this,*(uchar **)(piVar4 + -2),*(uchar **)piVar5,IgnoreCase);
      }
      else {
        pFVar2 = (param_1->AllocatorInstance).Data;
        pFVar3 = pFVar2 + param_1->ArrayNum;
        if (pFVar2 != pFVar3) {
          do {
            if (*pFVar2 == **(FScriptContainerElement **)piVar5) goto LAB_1415e7304;
            pFVar2 = pFVar2 + 1;
          } while (pFVar2 != pFVar3);
        }
      }
      piVar4 = piVar5;
    } while (0x154b76270 < (longlong)piVar5);
  }
  return;
}

// ReplaceInline @ 1415e78e0

int __thiscall
FUtf8String::ReplaceInline(FUtf8String *this,uchar *param_1,uchar *param_2,Type param_3)

{
  int iVar1;
  FScriptContainerElement *_Str;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  uchar *puVar6;
  uchar *puVar7;
  char *pcVar8;
  FScriptContainerElement *_Str_00;
  uint uVar9;
  int iVar10;
  
  iVar1 = (this->Data).ArrayNum;
  iVar10 = 0;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (((((0 < iVar2) && (param_1 != (uchar *)0x0)) && (*param_1 != '\0')) &&
      (param_2 != (uchar *)0x0)) &&
     ((param_3 == IgnoreCase || (iVar2 = strcmp((char *)param_1,(char *)param_2), iVar2 != 0)))) {
    sVar4 = strlen((char *)param_1);
    sVar5 = strlen((char *)param_2);
    uVar9 = (uint)sVar4;
    uVar3 = (uint)sVar5;
    if (uVar3 == uVar9) {
      puVar6 = operator[](this,0);
      if (param_3 == IgnoreCase) {
        puVar6 = TCString<char8_t>::Stristr(puVar6,param_1);
      }
      else {
        puVar6 = (uchar *)strstr((char *)puVar6,(char *)param_1);
      }
      sVar4 = (size_t)(int)uVar3;
      if (puVar6 != (uchar *)0x0) {
        do {
          iVar10 = iVar10 + 1;
          if ((((int)uVar3 < 1) || (uVar3 < 0x10)) ||
             ((puVar6 <= param_2 + (int)(uVar3 - 1) && (param_2 <= puVar6 + (int)(uVar3 - 1))))) {
            if (0 < (longlong)sVar4) {
              puVar7 = puVar6;
              sVar5 = sVar4;
              do {
                *puVar7 = puVar7[(longlong)param_2 - (longlong)puVar6];
                puVar7 = puVar7 + 1;
                sVar5 = sVar5 - 1;
              } while (sVar5 != 0);
            }
          }
          else {
            memcpy(puVar6,param_2,sVar4);
          }
          iVar1 = (this->Data).ArrayNum;
          iVar2 = iVar1 + -1;
          if (iVar1 == 0) {
            pcVar8 = "";
            iVar2 = 0;
          }
          else {
            pcVar8 = (char *)(this->Data).AllocatorInstance.Data;
          }
          if ((longlong)iVar2 <= (longlong)(puVar6 + ((longlong)(int)uVar9 - (longlong)pcVar8))) {
            return iVar10;
          }
          if (param_3 == IgnoreCase) {
            puVar6 = TCString<char8_t>::Stristr(puVar6 + (int)uVar9,param_1);
          }
          else {
            puVar6 = (uchar *)strstr((char *)(puVar6 + (int)uVar9),(char *)param_1);
          }
        } while (puVar6 != (uchar *)0x0);
      }
    }
    else {
      sVar4 = strlen((char *)param_1);
      iVar2 = Find(this,param_1,(int)sVar4,param_3,FromStart,-1);
      if (iVar2 != -1) {
        _Str = (this->Data).AllocatorInstance.Data;
        (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->Data).ArrayNum = 0;
        (this->Data).ArrayMax = 0;
        if (param_3 == IgnoreCase) {
          puVar6 = TCString<char8_t>::Stristr((uchar *)_Str,param_1);
        }
        else {
          puVar6 = (uchar *)strstr((char *)_Str,(char *)param_1);
        }
        _Str_00 = _Str;
        if (puVar6 != (uchar *)0x0) {
          do {
            *puVar6 = '\0';
            iVar10 = iVar10 + 1;
            sVar4 = strlen((char *)_Str_00);
            AppendChars(this,(uchar *)_Str_00,(int)sVar4);
            sVar4 = strlen((char *)param_2);
            AppendChars(this,param_2,(int)sVar4);
            _Str_00 = (FScriptContainerElement *)(puVar6 + (int)uVar9);
            *puVar6 = *param_1;
            if (param_3 == IgnoreCase) {
              puVar6 = TCString<char8_t>::Stristr((uchar *)_Str_00,param_1);
            }
            else {
              puVar6 = (uchar *)strstr((char *)_Str_00,(char *)param_1);
            }
          } while (puVar6 != (uchar *)0x0);
        }
        sVar4 = strlen((char *)_Str_00);
        AppendChars(this,(uchar *)_Str_00,(int)sVar4);
        if (_Str != (FScriptContainerElement *)0x0) {
          FMemory::Free(_Str);
        }
      }
    }
  }
  return iVar10;
}

// ReplaceQuotesWithEscapedQuotes @ 1415e7df0

FUtf8String * __thiscall
FUtf8String::ReplaceQuotesWithEscapedQuotes(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  uchar *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar5 = (this->Data).ArrayNum;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    pcVar6 = "";
    iVar7 = 0;
  }
  else {
    pcVar6 = (char *)(this->Data).AllocatorInstance.Data;
  }
  puVar4 = TCString<char8_t>::Strnstr((uchar *)pcVar6,iVar7,(uchar *)"\"",1);
  if (puVar4 != (uchar *)0x0) {
    iVar7 = (this->Data).ArrayNum;
    if (iVar7 == 0) {
      iVar5 = 0x5060d4b2;
    }
    else {
      iVar5 = (int)(this->Data).AllocatorInstance.Data;
    }
    if ((int)puVar4 - iVar5 != -1) {
      pFVar2 = (this->Data).AllocatorInstance.Data;
      pFVar8 = (FScriptContainerElement *)"";
      if (iVar7 != 0) {
        pFVar8 = pFVar2;
      }
      (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar3 = false;
      (this->Data).ArrayNum = 0;
      (this->Data).ArrayMax = 0;
      FVar1 = *pFVar8;
      while (FVar1 != (FScriptContainerElement)0x0) {
        if (bVar3) {
          bVar3 = false;
        }
        else if (*pFVar8 == (FScriptContainerElement)0x5c) {
          bVar3 = true;
        }
        else if (*pFVar8 == (FScriptContainerElement)0x22) {
          AppendChar(this,'\\');
        }
        FVar1 = *pFVar8;
        pFVar8 = pFVar8 + 1;
        AppendChar(this,(uchar)FVar1);
        FVar1 = *pFVar8;
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

// Reserve @ 1415ea4c0

void __thiscall FUtf8String::Reserve(FUtf8String *this,int param_1)

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

// Reset @ 1415ea730

void __thiscall FUtf8String::Reset(FUtf8String *this,int param_1)

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

// Reverse @ 1415ebda0

FUtf8String * __thiscall FUtf8String::Reverse(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FUtf8String(__return_storage_ptr__,this);
  ReverseString(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Reverse @ 1415ebdd0

FUtf8String * __thiscall FUtf8String::Reverse(FUtf8String *this,FUtf8String *__return_storage_ptr__)

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

// ReverseString @ 1415ebf80

void __thiscall FUtf8String::ReverseString(FUtf8String *this)

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

// RightChop @ 1415ec0f0

FUtf8String * __thiscall
FUtf8String::RightChop(FUtf8String *this,FUtf8String *__return_storage_ptr__,int param_1)

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
  ConstructFromPtrSize(__return_storage_ptr__,(uchar *)(pcVar3 + iVar5),iVar4 - iVar5);
  return __return_storage_ptr__;
}

// RightPad @ 1415ec270

FUtf8String * __thiscall
FUtf8String::RightPad(FUtf8String *this,FUtf8String *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FUtf8String *pFVar2;
  int iVar3;
  FUtf8String local_18;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_1 - iVar3 < 1) {
    FUtf8String(__return_storage_ptr__,this);
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

// SanitizeFloat @ 1415f0b60

FUtf8String * __cdecl
FUtf8String::SanitizeFloat(FUtf8String *__return_storage_ptr__,double param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FUtf8String *pFVar8;
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
  PrintfImpl(__return_storage_ptr__,(uchar *)"%f");
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
        iVar7 = iswdigit((ushort)(byte)FVar3);
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
        pFVar8 = (FUtf8String *)(*pcVar2)();
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
    if ((uVar9 != 0xffffffff) && (uVar13 != 0xffffffff)) goto LAB_1415f0cdb;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("TrimIndex != INDEX_NONE && DecimalSeparatorIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                     ,0x50a,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FUtf8String *)(*pcVar2)();
    return pFVar8;
  }
LAB_1415f0cdb:
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
    pFVar8 = (FUtf8String *)(*pcVar2)();
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

// SerializeAsANSICharArray @ 1415f1420

void __thiscall
FUtf8String::SerializeAsANSICharArray(FUtf8String *this,FArchive *param_1,int param_2)

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
  char local_res18 [8];
  char local_res20 [8];
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
    UE::Core::Private::Convert(local_res20,1,(uchar *)local_res10,1);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = local_res20[0];
    if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 + 1;
    }
    else {
      local_res18[0] = *(char *)*plVar1;
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

// Shrink @ 1415f58b0

void __thiscall FUtf8String::Shrink(FUtf8String *this)

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

// Split @ 1415f67a0

bool __thiscall
FUtf8String::Split(FUtf8String *this,FUtf8String *param_1,FUtf8String *param_2,FUtf8String *param_3)

{
  bool bVar1;
  
  bVar1 = Split(this,param_1,param_2,param_3,IgnoreCase,FromStart);
  return bVar1;
}

// Split @ 1415f67d0

bool __thiscall
FUtf8String::Split(FUtf8String *this,FUtf8String *param_1,FUtf8String *param_2,FUtf8String *param_3,
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
  FUtf8String local_78;
  FUtf8String local_68;
  FUtf8String local_58;
  FUtf8String local_48;
  FUtf8String local_38;
  
  if (((param_2 == param_3) && (param_2 != (FUtf8String *)0x0)) &&
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
  iVar5 = Find(this,(uchar *)pcVar10,iVar5,param_4,param_5,-1);
  if (-1 < iVar5) {
    iVar9 = 0;
    if (param_2 == (FUtf8String *)0x0) {
      if (param_3 == (FUtf8String *)0x0) {
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
      ConstructFromPtrSize(&local_38,(uchar *)(pcVar13 + iVar9),iVar6 - iVar9);
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
      if (param_3 != (FUtf8String *)0x0) {
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
        ConstructFromPtrSize(&local_58,(uchar *)(pcVar10 + iVar6),iVar7 - iVar6);
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
      ConstructFromPtrSize(&local_48,(uchar *)pcVar13,iVar9);
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
      ConstructFromPtrSize(&local_78,(uchar *)pcVar10,iVar12);
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
      if (param_3 == (FUtf8String *)0x0) {
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
      ConstructFromPtrSize(&local_68,(uchar *)(pcVar13 + iVar9),iVar5 - iVar9);
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

// StartsWith @ 1415f6c10

bool __thiscall FUtf8String::StartsWith(FUtf8String *this,uchar *param_1,int param_2,Type param_3)

{
  int iVar1;
  char *_Str1;
  
  if (param_3 == IgnoreCase) {
    if (param_2 < 1) {
      return false;
    }
    if ((this->Data).ArrayNum == 0) {
      iVar1 = FGenericPlatformStricmp::Strnicmp((uchar *)"",param_1,(longlong)param_2);
    }
    else {
      iVar1 = FGenericPlatformStricmp::Strnicmp
                        ((uchar *)(this->Data).AllocatorInstance.Data,param_1,(longlong)param_2);
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
    iVar1 = strncmp(_Str1,(char *)param_1,(longlong)param_2);
  }
  if (iVar1 != 0) {
    return false;
  }
  return true;
}

// ToBlob @ 141601bd0

bool __cdecl FUtf8String::ToBlob(FUtf8String *param_1,uchar *param_2,uint param_3)

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
code_r0x000141601cea:
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
      if (iVar8 <= iVar7 + -1) goto code_r0x000141601cea;
    }
    local_res19 = (param_1->Data).AllocatorInstance.Data[uVar6 + 1];
    if (iVar7 < 0) {
code_r0x000141601d4b:
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
      if (iVar8 <= iVar7) goto code_r0x000141601d4b;
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

// ToBool @ 141601e00

bool __thiscall FUtf8String::ToBool(FUtf8String *this)

{
  bool bVar1;
  
  if ((this->Data).ArrayNum != 0) {
    bVar1 = FToBoolHelper::FromCStringUtf8((uchar *)(this->Data).AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = FToBoolHelper::FromCStringUtf8((uchar *)"");
  return bVar1;
}

// ToHexBlob @ 141602120

bool __cdecl FUtf8String::ToHexBlob(FUtf8String *param_1,uchar *param_2,uint param_3)

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
code_r0x000141602214:
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
      if (iVar7 <= iVar8 + 1) goto code_r0x000141602214;
    }
    local_res19 = (param_1->Data).AllocatorInstance.Data[uVar10 + 1];
    lVar6 = strtol((char *)&local_res18,&local_res8,0x10);
    uVar9 = (ulonglong)(iVar8 + 2);
    uVar10 = uVar10 + 2;
    *param_2 = (uchar)lVar6;
    param_2 = param_2 + 1;
  } while( true );
}

// ToLower @ 1416023f0

FUtf8String * __thiscall FUtf8String::ToLower(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FUtf8String(__return_storage_ptr__,this);
  ToLowerInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToLower @ 141602420

FUtf8String * __thiscall FUtf8String::ToLower(FUtf8String *this,FUtf8String *__return_storage_ptr__)

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

// ToLowerInline @ 141602600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUtf8String::ToLowerInline(FUtf8String *this)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  short sVar33;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 in_XMM2 [16];
  undefined1 auVar40 [16];
  char cVar6;
  char cVar7;
  char cVar8;
  ulonglong uVar32;
  undefined4 uVar34;
  undefined6 uVar35;
  
  uVar24 = _UNK_150631f6c;
  uVar23 = _UNK_150631f68;
  uVar22 = _UNK_150631f64;
  uVar21 = ___xmm_000000ff000000ff000000ff000000ff;
  iVar20 = _UNK_150631f4c;
  iVar19 = _UNK_150631f48;
  iVar18 = _UNK_150631f44;
  iVar17 = ___xmm_00000041000000410000004100000041;
  uVar16 = _UNK_150631f3c;
  uVar15 = _UNK_150631f38;
  uVar14 = _UNK_150631f34;
  uVar13 = ___xmm_0000001a0000001a0000001a0000001a;
  uVar12 = _UNK_150631dac;
  uVar11 = _UNK_150631da8;
  uVar10 = _UNK_150631da4;
  uVar9 = ___xmm_00000001000000010000000100000001;
  iVar1 = (this->Data).ArrayNum;
  uVar29 = 0;
  pFVar25 = (this->Data).AllocatorInstance.Data;
  uVar31 = 0;
  uVar28 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar28 = uVar31;
  }
  if (((0 < (int)uVar28) && (7 < uVar28)) && (1 < __isa_available)) {
    uVar26 = uVar28 & 0x80000007;
    if ((int)uVar26 < 0) {
      uVar26 = (uVar26 - 1 | 0xfffffff8) + 1;
    }
    uVar32 = uVar29;
    do {
      auVar40 = pmovzxbd(in_XMM2,*(undefined4 *)(pFVar25 + uVar29));
      uVar31 = (int)uVar32 + 8;
      uVar32 = (ulonglong)uVar31;
      uVar36 = auVar40._0_4_ - iVar17;
      uVar37 = auVar40._4_4_ - iVar18;
      uVar38 = auVar40._8_4_ - iVar19;
      uVar39 = auVar40._12_4_ - iVar20;
      uVar36 = (~-(uint)(((uVar36 < uVar13) * uVar13 | (uVar36 >= uVar13) * uVar36) == uVar36) &
               uVar9) * 0x20 + auVar40._0_4_ & uVar21;
      uVar37 = (~-(uint)(((uVar37 < uVar14) * uVar14 | (uVar37 >= uVar14) * uVar37) == uVar37) &
               uVar10) * 0x20 + auVar40._4_4_ & uVar22;
      uVar38 = (~-(uint)(((uVar38 < uVar15) * uVar15 | (uVar38 >= uVar15) * uVar38) == uVar38) &
               uVar11) * 0x20 + auVar40._8_4_ & uVar23;
      uVar39 = (~-(uint)(((uVar39 < uVar16) * uVar16 | (uVar39 >= uVar16) * uVar39) == uVar39) &
               uVar12) * 0x20 + auVar40._12_4_ & uVar24;
      sVar2 = (short)uVar36;
      cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar36 - (0xff < sVar2);
      sVar2 = (short)(uVar36 >> 0x10);
      sVar33 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar36 >> 0x10) - (0xff < sVar2),
                        cVar5);
      sVar2 = (short)uVar37;
      cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar37 - (0xff < sVar2);
      sVar2 = (short)(uVar37 >> 0x10);
      uVar34 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar37 >> 0x10) - (0xff < sVar2),
                        CONCAT12(cVar6,sVar33));
      sVar2 = (short)uVar38;
      cVar7 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar38 - (0xff < sVar2);
      sVar2 = (short)(uVar38 >> 0x10);
      uVar35 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar38 >> 0x10) - (0xff < sVar2),
                        CONCAT14(cVar7,uVar34));
      sVar2 = (short)uVar39;
      cVar8 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar39 - (0xff < sVar2);
      sVar4 = (short)(uVar39 >> 0x10);
      sVar2 = (short)((uint)uVar34 >> 0x10);
      sVar3 = (short)((uint6)uVar35 >> 0x20);
      sVar4 = (short)(CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar39 >> 0x10) -
                               (0xff < sVar4),CONCAT16(cVar8,uVar35)) >> 0x30);
      *(uint *)(pFVar25 + uVar29) =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * cVar7 - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                                      (0 < sVar33) * (sVar33 < 0x100) * cVar5 - (0xff < sVar33))));
      in_XMM2 = pmovzxbd(auVar40,*(undefined4 *)(pFVar25 + uVar29 + 4));
      uVar36 = in_XMM2._0_4_ - iVar17;
      uVar37 = in_XMM2._4_4_ - iVar18;
      uVar38 = in_XMM2._8_4_ - iVar19;
      uVar39 = in_XMM2._12_4_ - iVar20;
      uVar36 = (~-(uint)(((uVar36 < uVar13) * uVar13 | (uVar36 >= uVar13) * uVar36) == uVar36) &
               uVar9) * 0x20 + in_XMM2._0_4_ & uVar21;
      uVar37 = (~-(uint)(((uVar37 < uVar14) * uVar14 | (uVar37 >= uVar14) * uVar37) == uVar37) &
               uVar10) * 0x20 + in_XMM2._4_4_ & uVar22;
      uVar38 = (~-(uint)(((uVar38 < uVar15) * uVar15 | (uVar38 >= uVar15) * uVar38) == uVar38) &
               uVar11) * 0x20 + in_XMM2._8_4_ & uVar23;
      uVar39 = (~-(uint)(((uVar39 < uVar16) * uVar16 | (uVar39 >= uVar16) * uVar39) == uVar39) &
               uVar12) * 0x20 + in_XMM2._12_4_ & uVar24;
      sVar2 = (short)uVar36;
      cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar36 - (0xff < sVar2);
      sVar2 = (short)(uVar36 >> 0x10);
      sVar33 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar36 >> 0x10) - (0xff < sVar2),
                        cVar5);
      sVar2 = (short)uVar37;
      cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar37 - (0xff < sVar2);
      sVar2 = (short)(uVar37 >> 0x10);
      uVar34 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar37 >> 0x10) - (0xff < sVar2),
                        CONCAT12(cVar6,sVar33));
      sVar2 = (short)uVar38;
      cVar7 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar38 - (0xff < sVar2);
      sVar2 = (short)(uVar38 >> 0x10);
      uVar35 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar38 >> 0x10) - (0xff < sVar2),
                        CONCAT14(cVar7,uVar34));
      sVar2 = (short)uVar39;
      cVar8 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar39 - (0xff < sVar2);
      sVar4 = (short)(uVar39 >> 0x10);
      sVar2 = (short)((uint)uVar34 >> 0x10);
      sVar3 = (short)((uint6)uVar35 >> 0x20);
      sVar4 = (short)(CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar39 >> 0x10) -
                               (0xff < sVar4),CONCAT16(cVar8,uVar35)) >> 0x30);
      *(uint *)(pFVar25 + uVar29 + 4) =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * cVar7 - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                                      (0 < sVar33) * (sVar33 < 0x100) * cVar5 - (0xff < sVar33))));
      uVar29 = uVar29 + 8;
    } while ((longlong)uVar29 < (longlong)(int)(uVar28 - uVar26));
  }
  lVar27 = (longlong)(int)uVar31;
  if (lVar27 < (int)uVar28) {
    lVar30 = (int)uVar28 - lVar27;
    pFVar25 = pFVar25 + lVar27;
    do {
      *pFVar25 = (FScriptContainerElement)
                 ((-((byte)*pFVar25 - 0x41 < 0x1a) & 0x20U) + (char)*pFVar25);
      lVar30 = lVar30 + -1;
      pFVar25 = pFVar25 + 1;
    } while (lVar30 != 0);
  }
  return;
}

// ToUpper @ 141602980

FUtf8String * __thiscall FUtf8String::ToUpper(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FUtf8String(__return_storage_ptr__,this);
  ToUpperInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToUpper @ 1416029b0

FUtf8String * __thiscall FUtf8String::ToUpper(FUtf8String *this,FUtf8String *__return_storage_ptr__)

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

// ToUpperInline @ 141602b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUtf8String::ToUpperInline(FUtf8String *this)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  char cVar10;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  short sVar47;
  undefined1 auVar52 [12];
  undefined1 in_XMM2 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  ulonglong uVar42;
  undefined4 uVar48;
  undefined6 uVar49;
  undefined8 uVar50;
  undefined1 auVar51 [12];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar57 [16];
  
  uVar34 = _UNK_150631f6c;
  uVar33 = _UNK_150631f68;
  uVar32 = _UNK_150631f64;
  uVar31 = ___xmm_000000ff000000ff000000ff000000ff;
  iVar30 = _UNK_150631f5c;
  iVar29 = _UNK_150631f58;
  iVar28 = _UNK_150631f54;
  iVar27 = ___xmm_00000061000000610000006100000061;
  uVar26 = _UNK_150631f3c;
  uVar25 = _UNK_150631f38;
  uVar24 = _UNK_150631f34;
  uVar23 = ___xmm_0000001a0000001a0000001a0000001a;
  uVar22 = _UNK_150631dac;
  uVar21 = _UNK_150631da8;
  uVar20 = _UNK_150631da4;
  uVar19 = ___xmm_00000001000000010000000100000001;
  iVar1 = (this->Data).ArrayNum;
  uVar39 = 0;
  pFVar35 = (this->Data).AllocatorInstance.Data;
  uVar41 = 0;
  uVar38 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar38 = uVar41;
  }
  if (((0 < (int)uVar38) && (7 < uVar38)) && (1 < __isa_available)) {
    uVar36 = uVar38 & 0x80000007;
    if ((int)uVar36 < 0) {
      uVar36 = (uVar36 - 1 | 0xfffffff8) + 1;
    }
    uVar42 = uVar39;
    do {
      auVar55 = pmovzxbd(in_XMM2,*(undefined4 *)(pFVar35 + uVar39));
      uVar41 = (int)uVar42 + 8;
      uVar42 = (ulonglong)uVar41;
      uVar43 = auVar55._0_4_ - iVar27;
      uVar44 = auVar55._4_4_ - iVar28;
      uVar45 = auVar55._8_4_ - iVar29;
      uVar46 = auVar55._12_4_ - iVar30;
      uVar43 = auVar55._0_4_ +
               (~-(uint)(((uVar43 < uVar23) * uVar23 | (uVar43 >= uVar23) * uVar43) == uVar43) &
               uVar19) * -0x20 & uVar31;
      uVar44 = auVar55._4_4_ +
               (~-(uint)(((uVar44 < uVar24) * uVar24 | (uVar44 >= uVar24) * uVar44) == uVar44) &
               uVar20) * -0x20 & uVar32;
      uVar45 = auVar55._8_4_ +
               (~-(uint)(((uVar45 < uVar25) * uVar25 | (uVar45 >= uVar25) * uVar45) == uVar45) &
               uVar21) * -0x20 & uVar33;
      uVar46 = auVar55._12_4_ +
               (~-(uint)(((uVar46 < uVar26) * uVar26 | (uVar46 >= uVar26) * uVar46) == uVar46) &
               uVar22) * -0x20 & uVar34;
      sVar2 = (short)uVar43;
      cVar10 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar43 - (0xff < sVar2);
      sVar3 = (short)(uVar43 >> 0x10);
      cVar15 = (char)(uVar43 >> 0x10);
      sVar47 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar15 - (0xff < sVar3),cVar10);
      sVar4 = (short)uVar44;
      cVar11 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar44 - (0xff < sVar4);
      sVar5 = (short)(uVar44 >> 0x10);
      cVar16 = (char)(uVar44 >> 0x10);
      uVar48 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar16 - (0xff < sVar5),
                        CONCAT12(cVar11,sVar47));
      sVar6 = (short)uVar45;
      cVar12 = (0 < sVar6) * (sVar6 < 0x100) * (char)uVar45 - (0xff < sVar6);
      sVar7 = (short)(uVar45 >> 0x10);
      cVar17 = (char)(uVar45 >> 0x10);
      uVar49 = CONCAT15((0 < sVar7) * (sVar7 < 0x100) * cVar17 - (0xff < sVar7),
                        CONCAT14(cVar12,uVar48));
      sVar8 = (short)uVar46;
      cVar13 = (0 < sVar8) * (sVar8 < 0x100) * (char)uVar46 - (0xff < sVar8);
      sVar9 = (short)(uVar46 >> 0x10);
      cVar18 = (char)(uVar46 >> 0x10);
      uVar50 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * cVar18 - (0xff < sVar9),
                        CONCAT16(cVar13,uVar49));
      cVar14 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar43 - (0xff < sVar2);
      auVar51._0_10_ =
           CONCAT19((0 < sVar3) * (sVar3 < 0x100) * cVar15 - (0xff < sVar3),CONCAT18(cVar14,uVar50))
      ;
      cVar15 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar44 - (0xff < sVar4);
      auVar51[10] = cVar15;
      auVar51[0xb] = (0 < sVar5) * (sVar5 < 0x100) * cVar16 - (0xff < sVar5);
      cVar16 = (0 < sVar6) * (sVar6 < 0x100) * (char)uVar45 - (0xff < sVar6);
      auVar53[0xc] = cVar16;
      auVar53._0_12_ = auVar51;
      auVar53[0xd] = (0 < sVar7) * (sVar7 < 0x100) * cVar17 - (0xff < sVar7);
      cVar17 = (0 < sVar8) * (sVar8 < 0x100) * (char)uVar46 - (0xff < sVar8);
      auVar55[0xe] = cVar17;
      auVar55._0_14_ = auVar53;
      auVar55[0xf] = (0 < sVar9) * (sVar9 < 0x100) * cVar18 - (0xff < sVar9);
      sVar2 = (short)((uint)uVar48 >> 0x10);
      sVar3 = (short)((uint6)uVar49 >> 0x20);
      sVar4 = (short)((ulonglong)uVar50 >> 0x30);
      auVar56._0_4_ =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar11 - (0xff < sVar2),
                                      (0 < sVar47) * (sVar47 < 0x100) * cVar10 - (0xff < sVar47))));
      sVar5 = (short)((unkuint10)auVar51._0_10_ >> 0x40);
      auVar56[4] = (0 < sVar5) * (sVar5 < 0x100) * cVar14 - (0xff < sVar5);
      sVar6 = auVar51._10_2_;
      auVar56[5] = (0 < sVar6) * (sVar6 < 0x100) * cVar15 - (0xff < sVar6);
      sVar7 = auVar53._12_2_;
      auVar56[6] = (0 < sVar7) * (sVar7 < 0x100) * cVar16 - (0xff < sVar7);
      sVar8 = auVar55._14_2_;
      auVar56[7] = (0 < sVar8) * (sVar8 < 0x100) * cVar17 - (0xff < sVar8);
      auVar56[8] = (0 < sVar47) * (sVar47 < 0x100) * cVar10 - (0xff < sVar47);
      auVar56[9] = (0 < sVar2) * (sVar2 < 0x100) * cVar11 - (0xff < sVar2);
      auVar56[10] = (0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3);
      auVar56[0xb] = (0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4);
      auVar56[0xc] = (0 < sVar5) * (sVar5 < 0x100) * cVar14 - (0xff < sVar5);
      auVar56[0xd] = (0 < sVar6) * (sVar6 < 0x100) * cVar15 - (0xff < sVar6);
      auVar56[0xe] = (0 < sVar7) * (sVar7 < 0x100) * cVar16 - (0xff < sVar7);
      auVar56[0xf] = (0 < sVar8) * (sVar8 < 0x100) * cVar17 - (0xff < sVar8);
      *(undefined4 *)(pFVar35 + uVar39) = auVar56._0_4_;
      auVar55 = pmovzxbd(auVar56,*(undefined4 *)(pFVar35 + uVar39 + 4));
      uVar43 = auVar55._0_4_ - iVar27;
      uVar44 = auVar55._4_4_ - iVar28;
      uVar45 = auVar55._8_4_ - iVar29;
      uVar46 = auVar55._12_4_ - iVar30;
      uVar43 = auVar55._0_4_ +
               (~-(uint)(((uVar43 < uVar23) * uVar23 | (uVar43 >= uVar23) * uVar43) == uVar43) &
               uVar19) * -0x20 & uVar31;
      uVar44 = auVar55._4_4_ +
               (~-(uint)(((uVar44 < uVar24) * uVar24 | (uVar44 >= uVar24) * uVar44) == uVar44) &
               uVar20) * -0x20 & uVar32;
      uVar45 = auVar55._8_4_ +
               (~-(uint)(((uVar45 < uVar25) * uVar25 | (uVar45 >= uVar25) * uVar45) == uVar45) &
               uVar21) * -0x20 & uVar33;
      uVar46 = auVar55._12_4_ +
               (~-(uint)(((uVar46 < uVar26) * uVar26 | (uVar46 >= uVar26) * uVar46) == uVar46) &
               uVar22) * -0x20 & uVar34;
      sVar2 = (short)uVar43;
      cVar10 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar43 - (0xff < sVar2);
      sVar3 = (short)(uVar43 >> 0x10);
      cVar15 = (char)(uVar43 >> 0x10);
      sVar47 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar15 - (0xff < sVar3),cVar10);
      sVar4 = (short)uVar44;
      cVar11 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar44 - (0xff < sVar4);
      sVar5 = (short)(uVar44 >> 0x10);
      cVar16 = (char)(uVar44 >> 0x10);
      uVar48 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar16 - (0xff < sVar5),
                        CONCAT12(cVar11,sVar47));
      sVar6 = (short)uVar45;
      cVar12 = (0 < sVar6) * (sVar6 < 0x100) * (char)uVar45 - (0xff < sVar6);
      sVar7 = (short)(uVar45 >> 0x10);
      cVar17 = (char)(uVar45 >> 0x10);
      uVar49 = CONCAT15((0 < sVar7) * (sVar7 < 0x100) * cVar17 - (0xff < sVar7),
                        CONCAT14(cVar12,uVar48));
      sVar8 = (short)uVar46;
      cVar13 = (0 < sVar8) * (sVar8 < 0x100) * (char)uVar46 - (0xff < sVar8);
      sVar9 = (short)(uVar46 >> 0x10);
      cVar18 = (char)(uVar46 >> 0x10);
      uVar50 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * cVar18 - (0xff < sVar9),
                        CONCAT16(cVar13,uVar49));
      cVar14 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar43 - (0xff < sVar2);
      auVar52._0_10_ =
           CONCAT19((0 < sVar3) * (sVar3 < 0x100) * cVar15 - (0xff < sVar3),CONCAT18(cVar14,uVar50))
      ;
      cVar15 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar44 - (0xff < sVar4);
      auVar52[10] = cVar15;
      auVar52[0xb] = (0 < sVar5) * (sVar5 < 0x100) * cVar16 - (0xff < sVar5);
      cVar16 = (0 < sVar6) * (sVar6 < 0x100) * (char)uVar45 - (0xff < sVar6);
      auVar54[0xc] = cVar16;
      auVar54._0_12_ = auVar52;
      auVar54[0xd] = (0 < sVar7) * (sVar7 < 0x100) * cVar17 - (0xff < sVar7);
      cVar17 = (0 < sVar8) * (sVar8 < 0x100) * (char)uVar46 - (0xff < sVar8);
      auVar57[0xe] = cVar17;
      auVar57._0_14_ = auVar54;
      auVar57[0xf] = (0 < sVar9) * (sVar9 < 0x100) * cVar18 - (0xff < sVar9);
      sVar2 = (short)((uint)uVar48 >> 0x10);
      sVar3 = (short)((uint6)uVar49 >> 0x20);
      sVar4 = (short)((ulonglong)uVar50 >> 0x30);
      in_XMM2._0_4_ =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar11 - (0xff < sVar2),
                                      (0 < sVar47) * (sVar47 < 0x100) * cVar10 - (0xff < sVar47))));
      sVar5 = (short)((unkuint10)auVar52._0_10_ >> 0x40);
      in_XMM2[4] = (0 < sVar5) * (sVar5 < 0x100) * cVar14 - (0xff < sVar5);
      sVar6 = auVar52._10_2_;
      in_XMM2[5] = (0 < sVar6) * (sVar6 < 0x100) * cVar15 - (0xff < sVar6);
      sVar7 = auVar54._12_2_;
      in_XMM2[6] = (0 < sVar7) * (sVar7 < 0x100) * cVar16 - (0xff < sVar7);
      sVar8 = auVar57._14_2_;
      in_XMM2[7] = (0 < sVar8) * (sVar8 < 0x100) * cVar17 - (0xff < sVar8);
      in_XMM2[8] = (0 < sVar47) * (sVar47 < 0x100) * cVar10 - (0xff < sVar47);
      in_XMM2[9] = (0 < sVar2) * (sVar2 < 0x100) * cVar11 - (0xff < sVar2);
      in_XMM2[10] = (0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3);
      in_XMM2[0xb] = (0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4);
      in_XMM2[0xc] = (0 < sVar5) * (sVar5 < 0x100) * cVar14 - (0xff < sVar5);
      in_XMM2[0xd] = (0 < sVar6) * (sVar6 < 0x100) * cVar15 - (0xff < sVar6);
      in_XMM2[0xe] = (0 < sVar7) * (sVar7 < 0x100) * cVar16 - (0xff < sVar7);
      in_XMM2[0xf] = (0 < sVar8) * (sVar8 < 0x100) * cVar17 - (0xff < sVar8);
      *(undefined4 *)(pFVar35 + uVar39 + 4) = in_XMM2._0_4_;
      uVar39 = uVar39 + 8;
    } while ((longlong)uVar39 < (longlong)(int)(uVar38 - uVar36));
  }
  lVar37 = (longlong)(int)uVar41;
  if (lVar37 < (int)uVar38) {
    lVar40 = (int)uVar38 - lVar37;
    pFVar35 = pFVar35 + lVar37;
    do {
      *pFVar35 = (FScriptContainerElement)
                 ((char)*pFVar35 - (-((byte)*pFVar35 - 0x61 < 0x1a) & 0x20U));
      lVar40 = lVar40 + -1;
      pFVar35 = pFVar35 + 1;
    } while (lVar40 != 0);
  }
  return;
}

// TrimChar @ 141602fb0

FUtf8String * __thiscall
FUtf8String::TrimChar
          (FUtf8String *this,FUtf8String *__return_storage_ptr__,uchar param_1,bool *param_2)

{
  FUtf8String(__return_storage_ptr__,this);
  TrimCharInline(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// TrimChar @ 141603000

FUtf8String * __thiscall
FUtf8String::TrimChar
          (FUtf8String *this,FUtf8String *__return_storage_ptr__,uchar param_1,bool *param_2)

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

// TrimCharInline @ 141603280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::TrimCharInline(FUtf8String *this,uchar param_1,bool *param_2)

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

// TrimEnd @ 141603490

FUtf8String * __thiscall FUtf8String::TrimEnd(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FUtf8String(__return_storage_ptr__,this);
  TrimEndInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimEnd @ 1416034c0

FUtf8String * __thiscall FUtf8String::TrimEnd(FUtf8String *this,FUtf8String *__return_storage_ptr__)

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

// TrimEndInline @ 1416036d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::TrimEndInline(FUtf8String *this)

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
code_r0x000141603738:
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
        if (iVar4 <= iVar5) goto code_r0x000141603738;
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

// TrimQuotes @ 1416038d0

FUtf8String * __thiscall
FUtf8String::TrimQuotes(FUtf8String *this,FUtf8String *__return_storage_ptr__,bool *param_1)

{
  FUtf8String(__return_storage_ptr__,this);
  TrimCharInline(__return_storage_ptr__,'\"',param_1);
  return __return_storage_ptr__;
}

// TrimQuotes @ 141603910

FUtf8String * __thiscall
FUtf8String::TrimQuotes(FUtf8String *this,FUtf8String *__return_storage_ptr__,bool *param_1)

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

// TrimQuotesInline @ 141603990

void __thiscall FUtf8String::TrimQuotesInline(FUtf8String *this,bool *param_1)

{
  TrimCharInline(this,'\"',param_1);
  return;
}

// TrimStart @ 141603aa0

FUtf8String * __thiscall
FUtf8String::TrimStart(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FUtf8String(__return_storage_ptr__,this);
  TrimStartInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimStart @ 141603ad0

FUtf8String * __thiscall
FUtf8String::TrimStart(FUtf8String *this,FUtf8String *__return_storage_ptr__)

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

// TrimStartAndEnd @ 141603c40

FUtf8String * __thiscall
FUtf8String::TrimStartAndEnd(FUtf8String *this,FUtf8String *__return_storage_ptr__)

{
  FUtf8String(__return_storage_ptr__,this);
  TrimEndInline(__return_storage_ptr__);
  TrimStartInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimStartAndEnd @ 141603c80

FUtf8String * __thiscall
FUtf8String::TrimStartAndEnd(FUtf8String *this,FUtf8String *__return_storage_ptr__)

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

// TrimStartAndEndInline @ 141603d30

void __thiscall FUtf8String::TrimStartAndEndInline(FUtf8String *this)

{
  TrimEndInline(this);
  TrimStartInline(this);
  return;
}

// TrimStartInline @ 141603ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUtf8String::TrimStartInline(FUtf8String *this)

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

// TrimToNullTerminator @ 1416041f0

void __thiscall FUtf8String::TrimToNullTerminator(FUtf8String *this)

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

// FormatImpl @ 141940be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl
FUtf8String::FormatImpl
          (FUtf8String *__return_storage_ptr__,uchar *param_1,
          TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringFormatter<char8_t> *this;
  FUtf8String *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  TValueOrError<FUtf8String,FExpressionError> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = GetDefaultFormatter<char8_t>();
  TStringFormatter<char8_t>::FormatInternal(this,&local_38,param_1,param_2,false);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FAnsiString,FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5752263950234288083>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringFormatter.h"
                       ,0x2d,"Result.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
    FUtf8String(__return_storage_ptr__,param_1);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUtf8String *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FUtf8String,TValueOrError<FUtf8String,FExpressionError>::FWrapErrorType,TValueOrError<class_FUtf8String,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
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
        pFVar3 = (FUtf8String *)(*pcVar1)();
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
        pFVar3 = (FUtf8String *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FUtf8String,TValueOrError<FUtf8String,FExpressionError>::FWrapErrorType,TValueOrError<class_FUtf8String,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}

// FormatImpl @ 141940da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl
FUtf8String::FormatImpl
          (FUtf8String *__return_storage_ptr__,uchar *param_1,
          TMap<FUtf8String,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FStringFormatArg,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TStringFormatter<char8_t> *this;
  FUtf8String *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  TValueOrError<FUtf8String,FExpressionError> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = GetDefaultFormatter<char8_t>();
  TStringFormatter<char8_t>::FormatInternal(this,&local_38,param_1,param_2,false);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FAnsiString,FAnsiString,TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType,TValueOrError<class_FAnsiString,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5752263950234288100>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringFormatter.h"
                       ,0x1c,"Result.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
    FUtf8String(__return_storage_ptr__,param_1);
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUtf8String *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FUtf8String,TValueOrError<FUtf8String,FExpressionError>::FWrapErrorType,TValueOrError<class_FUtf8String,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
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
        pFVar3 = (FUtf8String *)(*pcVar1)();
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
        pFVar3 = (FUtf8String *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FUtf8String,TValueOrError<FUtf8String,FExpressionError>::FWrapErrorType,TValueOrError<class_FUtf8String,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}


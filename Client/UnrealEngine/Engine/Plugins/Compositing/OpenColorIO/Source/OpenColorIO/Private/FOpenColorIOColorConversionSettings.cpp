// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 12

// StaticStruct @ 14d7646b0

UScriptStruct * __cdecl FOpenColorIOColorConversionSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenColorIO();
    Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings,
                         (UObject *)pUVar1,L"OpenColorIOColorConversionSettings");
  }
  return Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.OuterSingleton;
}

// FOpenColorIOColorConversionSettings @ 14d768b80

FOpenColorIOColorConversionSettings * __thiscall
FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
          (FOpenColorIOColorConversionSettings *this)

{
  (this->ConfigurationSource).field0_0x0.DebugPtr = (UOpenColorIOConfiguration *)0x0;
  (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum = 0;
  (this->SourceColorSpace).ColorSpaceName.Data.ArrayMax = 0;
  (this->SourceColorSpace).FamilyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).FamilyName.Data.ArrayNum = 0;
  (this->SourceColorSpace).FamilyName.Data.ArrayMax = 0;
  (this->SourceColorSpace).Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).Description.Data.ArrayNum = 0;
  (this->SourceColorSpace).Description.Data.ArrayMax = 0;
  (this->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).ColorSpaceName.Data.ArrayNum = 0;
  (this->DestinationColorSpace).ColorSpaceName.Data.ArrayMax = 0;
  (this->DestinationColorSpace).FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).FamilyName.Data.ArrayNum = 0;
  (this->DestinationColorSpace).FamilyName.Data.ArrayMax = 0;
  (this->DestinationColorSpace).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).Description.Data.ArrayNum = 0;
  (this->DestinationColorSpace).Description.Data.ArrayMax = 0;
  (this->DestinationDisplayView).Display.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).Display.Data.ArrayNum = 0;
  (this->DestinationDisplayView).Display.Data.ArrayMax = 0;
  (this->DestinationDisplayView).View.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).View.Data.ArrayNum = 0;
  (this->DestinationDisplayView).View.Data.ArrayMax = 0;
  (this->DestinationDisplayView).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).Description.Data.ArrayNum = 0;
  (this->DestinationDisplayView).Description.Data.ArrayMax = 0;
  this->DisplayViewDirection = Forward;
  return this;
}

// ~FOpenColorIOColorConversionSettings @ 14d769a90

void __thiscall
FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
          (FOpenColorIOColorConversionSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DestinationDisplayView).Description.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationDisplayView).View.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationDisplayView).Display.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationColorSpace).Description.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationColorSpace).FamilyName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceColorSpace).Description.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceColorSpace).FamilyName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d769fb0

FOpenColorIOColorConversionSettings * __thiscall
FOpenColorIOColorConversionSettings::operator=
          (FOpenColorIOColorConversionSettings *this,FOpenColorIOColorConversionSettings *param_1)

{
  UOpenColorIOConfiguration *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ConfigurationSource).field0_0x0.DebugPtr,
     pUVar1 != (UOpenColorIOConfiguration *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ConfigurationSource).field0_0x0 = (param_1->ConfigurationSource).field0_0x0;
  ::FString::operator=
            (&(this->SourceColorSpace).ColorSpaceName,&(param_1->SourceColorSpace).ColorSpaceName);
  ::FString::operator=(&(this->SourceColorSpace).FamilyName,&(param_1->SourceColorSpace).FamilyName)
  ;
  ::FString::operator=
            (&(this->SourceColorSpace).Description,&(param_1->SourceColorSpace).Description);
  ::FString::operator=
            (&(this->DestinationColorSpace).ColorSpaceName,
             &(param_1->DestinationColorSpace).ColorSpaceName);
  ::FString::operator=
            (&(this->DestinationColorSpace).FamilyName,&(param_1->DestinationColorSpace).FamilyName)
  ;
  ::FString::operator=
            (&(this->DestinationColorSpace).Description,
             &(param_1->DestinationColorSpace).Description);
  ::FString::operator=
            (&(this->DestinationDisplayView).Display,&(param_1->DestinationDisplayView).Display);
  ::FString::operator=(&(this->DestinationDisplayView).View,&(param_1->DestinationDisplayView).View)
  ;
  ::FString::operator=
            (&(this->DestinationDisplayView).Description,
             &(param_1->DestinationDisplayView).Description);
  this->DisplayViewDirection = param_1->DisplayViewDirection;
  return this;
}

// GetDestinationString @ 14d770d10

FString * __thiscall
FOpenColorIOColorConversionSettings::GetDestinationString
          (FOpenColorIOColorConversionSettings *this,FString *__return_storage_ptr__)

{
  if ((1 < (this->DestinationDisplayView).Display.Data.ArrayNum) &&
     (1 < (this->DestinationDisplayView).View.Data.ArrayNum)) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s - %s");
    return __return_storage_ptr__;
  }
  if (1 < (this->DestinationColorSpace).ColorSpaceName.Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&(this->DestinationColorSpace).ColorSpaceName);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSourceString @ 14d772480

FString * __thiscall
FOpenColorIOColorConversionSettings::GetSourceString
          (FOpenColorIOColorConversionSettings *this,FString *__return_storage_ptr__)

{
  if (1 < (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&(this->SourceColorSpace).ColorSpaceName);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsDisplayView @ 14d7735e0

bool __thiscall
FOpenColorIOColorConversionSettings::IsDisplayView(FOpenColorIOColorConversionSettings *this)

{
  if ((1 < (this->DestinationDisplayView).Display.Data.ArrayNum) &&
     (1 < (this->DestinationDisplayView).View.Data.ArrayNum)) {
    return true;
  }
  return false;
}

// IsValid @ 14d7739f0

bool __thiscall
FOpenColorIOColorConversionSettings::IsValid(FOpenColorIOColorConversionSettings *this)

{
  UOpenColorIOConfiguration *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->ConfigurationSource).field0_0x0.DebugPtr;
  if ((pUVar1 != (UOpenColorIOConfiguration *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0))
  {
    if (((this->DestinationDisplayView).Display.Data.ArrayNum < 2) ||
       ((this->DestinationDisplayView).View.Data.ArrayNum < 2)) {
      if ((1 < (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum) &&
         (1 < (this->DestinationColorSpace).ColorSpaceName.Data.ArrayNum)) {
        bVar2 = UOpenColorIOConfiguration::HasTransform
                          ((this->ConfigurationSource).field0_0x0.DebugPtr,
                           &(this->SourceColorSpace).ColorSpaceName,
                           &(this->DestinationColorSpace).ColorSpaceName);
        return bVar2;
      }
    }
    else if (1 < (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum) {
      bVar2 = UOpenColorIOConfiguration::HasTransform
                        ((this->ConfigurationSource).field0_0x0.DebugPtr,
                         &(this->SourceColorSpace).ColorSpaceName,
                         &(this->DestinationDisplayView).Display,
                         &(this->DestinationDisplayView).View,this->DisplayViewDirection);
      return bVar2;
    }
  }
  return false;
}

// PostSerialize @ 14d774540

void __thiscall
FOpenColorIOColorConversionSettings::PostSerialize
          (FOpenColorIOColorConversionSettings *this,FArchive *param_1)

{
  return;
}

// Reset @ 14d776180

void __thiscall
FOpenColorIOColorConversionSettings::Reset(FOpenColorIOColorConversionSettings *this,bool param_1)

{
  if (param_1) {
    (this->ConfigurationSource).field0_0x0.DebugPtr = (UOpenColorIOConfiguration *)0x0;
  }
  ::FString::Reset(&(this->SourceColorSpace).ColorSpaceName,0);
  ::FString::Reset(&(this->SourceColorSpace).FamilyName,0);
  ::FString::Reset(&(this->SourceColorSpace).Description,0);
  ::FString::Reset(&(this->DestinationColorSpace).ColorSpaceName,0);
  ::FString::Reset(&(this->DestinationColorSpace).FamilyName,0);
  ::FString::Reset(&(this->DestinationColorSpace).Description,0);
  ::FString::Reset(&(this->DestinationDisplayView).Display,0);
  ::FString::Reset(&(this->DestinationDisplayView).View,0);
  ::FString::Reset(&(this->DestinationDisplayView).Description,0);
  this->DisplayViewDirection = Forward;
  return;
}

// ToString @ 14d7787a0

/* WARNING: Type propagation algorithm not settling */

FString * __thiscall
FOpenColorIOColorConversionSettings::ToString
          (FOpenColorIOColorConversionSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UOpenColorIOConfiguration *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pUVar2 = (this->ConfigurationSource).field0_0x0.DebugPtr;
  if ((pUVar2 == (UOpenColorIOConfiguration *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0))
  {
    ::FString::FString(__return_storage_ptr__,L"<Invalid Conversion>");
    return __return_storage_ptr__;
  }
  if ((1 < (this->DestinationDisplayView).Display.Data.ArrayNum) &&
     (1 < (this->DestinationDisplayView).View.Data.ArrayNum)) {
    if (this->DisplayViewDirection != Forward) {
      if (this->DisplayViewDirection != Inverse) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorSpace.cpp"
                           ,0x8c,L"");
        if (!bVar5) {
          (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = 0;
          (__return_storage_ptr__->Data).ArrayMax = 0;
          return __return_storage_ptr__;
        }
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
      iVar1 = (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum;
      local_c8.Data = (FScriptContainerElement *)0x0;
      if (iVar1 < 2) {
        local_c0 = 0;
      }
      else {
        pFVar3 = (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
        local_c0 = CONCAT44(local_c0._4_4_,iVar1);
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_c8,iVar1,(int *)((longlong)&local_c0 + 4));
        memcpy(local_c8.Data,pFVar3,(longlong)iVar1 * 2);
      }
      if (((this->DestinationDisplayView).Display.Data.ArrayNum < 2) ||
         ((this->DestinationDisplayView).View.Data.ArrayNum < 2)) {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
      }
      else {
        ::FString::PrintfImpl(&local_88,L"%s - %s");
      }
      local_res8 = (FName)((this->ConfigurationSource).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res8,&local_68);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s config - %s to %s");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FVar7.Data = local_c8.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        FVar7.Data = local_c8.Data;
      }
      goto LAB_14d778bda;
    }
    if ((this->DestinationDisplayView).View.Data.ArrayNum < 2) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
LAB_14d7789e6:
    }
    else {
      ::FString::PrintfImpl(&local_78,L"%s - %s");
      if (local_78.Data.ArrayNum == 0) goto LAB_14d7789e6;
    }
    iVar1 = (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum;
    local_b8.Data = (FScriptContainerElement *)0x0;
    if (iVar1 < 2) {
      local_b0 = 0;
    }
    else {
      pFVar3 = (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
      local_b0 = CONCAT44(local_b0._4_4_,iVar1);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_b8,iVar1,(int *)((longlong)&local_b0 + 4));
      memcpy(local_b8.Data,pFVar3,(longlong)iVar1 * 2);
    }
    local_res18 = (FName)((this->ConfigurationSource).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res18,&local_58);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s config - %s to %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar7.Data = local_78.Data.AllocatorInstance.Data;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
    goto LAB_14d778bda;
  }
  iVar1 = (this->DestinationColorSpace).ColorSpaceName.Data.ArrayNum;
  local_98.Data = (FScriptContainerElement *)0x0;
  if (iVar1 < 2) {
    local_90 = 0;
LAB_14d778b14:
  }
  else {
    pFVar3 = (this->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
    local_90 = CONCAT44(local_90._4_4_,iVar1);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
    memcpy(local_98.Data,pFVar3,(longlong)iVar1 * 2);
    if ((int)local_90 == 0) goto LAB_14d778b14;
  }
  iVar1 = (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (iVar1 < 2) {
    local_a0 = 0;
  }
  else {
    pFVar3 = (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
    local_a0 = CONCAT44(local_a0._4_4_,iVar1);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_a8,iVar1,(int *)((longlong)&local_a0 + 4));
    memcpy(local_a8.Data,pFVar3,(longlong)iVar1 * 2);
  }
  local_res20 = (FName)((this->ConfigurationSource).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_res20,&local_48);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s config - %s to %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar7.Data = local_98.Data;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
    FVar7.Data = local_98.Data;
  }
LAB_14d778bda:
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// ValidateColorSpaces @ 14d779870

void __thiscall
FOpenColorIOColorConversionSettings::ValidateColorSpaces(FOpenColorIOColorConversionSettings *this)

{
  UOpenColorIOConfiguration *pUVar1;
  TObjectPtr<UOpenColorIOConfiguration>_u_0 TVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  pUVar1 = (this->ConfigurationSource).field0_0x0.DebugPtr;
  if ((pUVar1 == (UOpenColorIOConfiguration *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0))
  {
    ::FString::Reset(&(this->SourceColorSpace).ColorSpaceName,0);
    ::FString::Reset(&(this->SourceColorSpace).FamilyName,0);
    ::FString::Reset(&(this->SourceColorSpace).Description,0);
    ::FString::Reset(&(this->DestinationColorSpace).ColorSpaceName,0);
    ::FString::Reset(&(this->DestinationColorSpace).FamilyName,0);
    ::FString::Reset(&(this->DestinationColorSpace).Description,0);
    ::FString::Reset(&(this->DestinationDisplayView).Display,0);
    ::FString::Reset(&(this->DestinationDisplayView).View,0);
    ::FString::Reset(&(this->DestinationDisplayView).Description,0);
    this->DisplayViewDirection = Forward;
    return;
  }
  bVar4 = UOpenColorIOConfiguration::HasDesiredColorSpace
                    ((this->ConfigurationSource).field0_0x0.DebugPtr,&this->SourceColorSpace);
  if (!bVar4) {
    ::FString::Reset(&(this->SourceColorSpace).ColorSpaceName,0);
    ::FString::Reset(&(this->SourceColorSpace).FamilyName,0);
    ::FString::Reset(&(this->SourceColorSpace).Description,0);
  }
  bVar4 = UOpenColorIOConfiguration::HasDesiredColorSpace
                    ((this->ConfigurationSource).field0_0x0.DebugPtr,&this->DestinationColorSpace);
  if (!bVar4) {
    ::FString::Reset(&(this->DestinationColorSpace).ColorSpaceName,0);
    ::FString::Reset(&(this->DestinationColorSpace).FamilyName,0);
    ::FString::Reset(&(this->DestinationColorSpace).Description,0);
  }
  TVar2 = (this->ConfigurationSource).field0_0x0;
  if ((1 < (this->DestinationDisplayView).Display.Data.ArrayNum) &&
     (1 < (this->DestinationDisplayView).View.Data.ArrayNum)) {
    puVar3 = *(undefined8 **)((longlong)TVar2 + 0x48);
    iVar6 = ((TVar2.DebugPtr)->DesiredDisplayViews).ArrayNum;
    for (puVar7 = puVar3; puVar7 != puVar3 + (longlong)iVar6 * 6; puVar7 = puVar7 + 6) {
      iVar5 = (this->DestinationDisplayView).Display.Data.ArrayNum;
      if (iVar5 == *(int *)(puVar7 + 1)) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (this->DestinationDisplayView).Display.Data.AllocatorInstance.Data,
                             (wchar_t *)*puVar7);
          bVar4 = iVar5 == 0;
          goto LAB_14d779963;
        }
LAB_14d77996a:
        iVar5 = (this->DestinationDisplayView).View.Data.ArrayNum;
        if (iVar5 == *(int *)(puVar7 + 3)) {
          if (1 < iVar5) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)
                               (this->DestinationDisplayView).View.Data.AllocatorInstance.Data,
                               (wchar_t *)puVar7[2]);
            bVar4 = iVar5 == 0;
            goto LAB_14d77998f;
          }
        }
        else {
          bVar4 = iVar5 + *(int *)(puVar7 + 3) == 1;
LAB_14d77998f:
          if (!bVar4) goto LAB_14d779996;
        }
        iVar6 = (int)(((longlong)puVar7 - (longlong)puVar3) / 0x30);
        goto LAB_14d7799a8;
      }
      bVar4 = iVar5 + *(int *)(puVar7 + 1) == 1;
LAB_14d779963:
      if (bVar4) goto LAB_14d77996a;
LAB_14d779996:
    }
    iVar6 = -1;
LAB_14d7799a8:
    if (iVar6 != -1) {
      return;
    }
  }
  ::FString::Reset(&(this->DestinationDisplayView).Display,0);
  ::FString::Reset(&(this->DestinationDisplayView).View,0);
  ::FString::Reset(&(this->DestinationDisplayView).Description,0);
  return;
}


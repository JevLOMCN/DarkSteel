// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// PossiblySerializeObjectGuid @ 1420cb9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FLazyObjectPtr::PossiblySerializeObjectGuid(UObject *param_1,FStructuredArchiveRecord param_2)

{
  code *pcVar1;
  FSlotBase FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FArchive *pFVar6;
  UPackage *pUVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  FGuid *pFVar10;
  uint *puVar11;
  UObjectBase *this;
  longlong lVar12;
  FSlotBase local_res10;
  FArchiveFieldName local_res18;
  FArchiveFieldName local_res20;
  FGuid local_88;
  FGuid local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FGuid local_38;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_2;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((pFVar6->field_0x28 & 4) != 0) || ((pFVar6->field_0x2b & 4) != 0)) {
    FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAnnotation
              ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)&GuidAnnotation,
               (FUniqueObjectGuid *)&local_78,(UObjectBase *)param_1);
    bVar3 = FBinaryArchiveFormatter::TryEnterField
                      ((local_res10.StructuredArchive)->Formatter,local_res20,
                       ((local_78.D != 0 || local_78.C != 0) || local_78.B != 0) || local_78.A != 0)
    ;
    FVar2.StructuredArchive = local_res10.StructuredArchive;
    if (!bVar3) {
      return;
    }
    if ((*(uint *)&pFVar6->field_0x34 & 0x400000) != 0) {
      iVar5 = UE::GetPlayInEditorID();
      pFVar10 = RemapGuid(&local_38,(FUniqueObjectGuid *)&local_78,iVar5);
      local_78.A = pFVar10->A;
      local_78.B = pFVar10->B;
      local_78.C = pFVar10->C;
      local_78.D = pFVar10->D;
    }
    ::operator<<((FStructuredArchiveSlot)FVar2.StructuredArchive,&local_78);
    return;
  }
  if ((pFVar6->field_0x28 & 1) == 0) {
    return;
  }
  bVar3 = FBinaryArchiveFormatter::TryEnterField
                    ((local_res10.StructuredArchive)->Formatter,local_res18,false);
  if (!bVar3) {
    return;
  }
  this = (UObjectBase *)0x0;
  local_88.A = 0;
  local_88.B = 0;
  local_88.C = 0;
  local_88.D = 0;
  ::operator<<((FStructuredArchiveSlot)local_res10.StructuredArchive,&local_88);
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  if (((uint)pUVar7->PackageFlagsPrivate & 0x20) != 0) {
    return;
  }
  if ((*(uint *)&pFVar6->field_0x34 & 0x401000) == 0x1000) {
    return;
  }
  if ((((local_88.D == 0 && local_88.C == 0) && local_88.B == 0) && local_88.A == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Guid.IsDefault()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LazyObjectPtr.cpp"
                         ,0x8c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GuidAnnotation.InverseAnnotationMapCritical);
  uVar8 = CityHash64((char *)&local_88,0x10);
  if (GuidAnnotation.InverseAnnotationMap._8_4_ != GuidAnnotation.InverseAnnotationMap._52_4_) {
    lVar12 = 0x154b8e030;
    if (GuidAnnotation.InverseAnnotationMap._64_8_ != 0) {
      lVar12 = GuidAnnotation.InverseAnnotationMap._64_8_;
    }
    uVar4 = *(uint *)(lVar12 + ((ulonglong)(GuidAnnotation.InverseAnnotationMap._72_4_ - 1) &
                               uVar8 & 0xffffffff) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar4 * 0x20 + GuidAnnotation.InverseAnnotationMap._0_8_);
        if (((local_88.D == puVar11[3] && local_88.C == puVar11[2]) && local_88.B == puVar11[1]) &&
            local_88.A == *puVar11) {
          if (puVar11 != (uint *)0x0) {
            this = *(UObjectBase **)(puVar11 + 4);
          }
          break;
        }
        uVar4 = puVar11[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GuidAnnotation.InverseAnnotationMapCritical);
  if (this == (UObjectBase *)param_1) {
    return;
  }
  pwVar9 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar9,L"AssignNewMapGuids");
  if (bVar3) {
    if ((byte)LogUObjectGlobals._0_1_ < 3) {
      return;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
LAB_1420cbc88:
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (this != (UObjectBase *)0x0) {
      if ((this->ObjectFlags >> 0xe & 1) == 0) {
        if ((((uint)pUVar7->PackageFlagsPrivate >> 0x11 & 1) == 0) &&
           (((uint)pUVar7->PackageFlagsPrivate >> 0xe & 1) == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((byte)LogUObjectGlobals._0_1_ < 3) {
          return;
        }
        if (bVar3) {
          return;
        }
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_68,(UObject *)0x0,None)
        ;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
        goto LAB_1420cbc88;
      }
      FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::RemoveAnnotation
                (&GuidAnnotation,this);
    }
    FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::
    AddAnnotationInternal<FUniqueObjectGuid_const_&>
              (&GuidAnnotation,(UObjectBase *)param_1,(FUniqueObjectGuid *)&local_88);
  }
  return;
}

// ResetPIEFixups @ 1420d4080

void __cdecl FLazyObjectPtr::ResetPIEFixups(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = UE::GetPlayInEditorID();
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayInEditorID != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LazyObjectPtr.cpp"
                       ,199,L"");
    if (bVar2) {
code_r0x0001420d40e3:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((9 < iVar3) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("PlayInEditorID < 10",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LazyObjectPtr.cpp"
                              ,200,L""), bVar2)) goto code_r0x0001420d40e3;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)(PIEGuidMap + iVar3));
  return;
}


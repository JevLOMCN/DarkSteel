// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Dev @ 148b05dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FCDODump::Exec_Dev(FCDODump *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor local_178 [8];
  ForAnyElementType local_170;
  undefined8 local_168;
  UClass *local_160;
  TObjectIterator<UClass> local_158;
  FString local_140;
  FString local_130;
  FName local_120;
  FOutputDevice local_118;
  FString local_108;
  wchar_t *local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [72];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar13 = 0;
  local_120 = (FName)((ulonglong)local_120 & 0xffffffff00000000);
  local_f8 = param_2;
  bVar3 = FParse::Command(&local_f8,L"CDODump",true);
  if (bVar3) {
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    local_158.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ObjectArray.ArrayNum = 0;
    local_158.ObjectArray.ArrayMax = 0;
    local_158.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    GetObjectsOfClass(pUVar8,&local_158.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    uVar15 = uVar13;
    while( true ) {
      TObjectIterator<UClass>::Advance(&local_158);
      lVar12 = (longlong)local_158.Index;
      if ((local_158.Index < 0) || (local_158.ObjectArray.ArrayNum <= local_158.Index)) break;
      uVar6 = 0;
      if (local_158.Index < local_158.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_158.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_160 = *(UClass **)(local_158.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      if (pUVar8 == (UClass *)0x0) {
LAB_148b05f10:
        pUVar8 = Z_Construct_UClass_UObject_NoRegister();
        if (local_160 == pUVar8) goto LAB_148b05f98;
        local_120 = (FName)local_160->_padding_;
        uVar15 = (ulonglong)((uint)uVar15 | 1);
        ::FName::ToString(&local_120,&local_d8);
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar11.Data = local_d8.Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"World");
        if (iVar7 == 0) goto LAB_148b05f98;
        uVar15 = 3;
        local_f0 = (FName)local_160->_padding_;
        ::FName::ToString(&local_f0,&local_e8);
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar11.Data = local_e8.Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"Level");
        if (iVar7 == 0) goto LAB_148b05f98;
        bVar3 = true;
      }
      else {
        iVar7 = (int)pUVar8->_padding_;
        if (((int)local_160->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(local_160->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_148b05f10;
LAB_148b05f98:
        bVar3 = false;
      }
      if (((uVar15 & 2) != 0) &&
         (uVar15 = (ulonglong)((uint)uVar15 & 0xfffffffd),
         local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (((uVar15 & 1) != 0) &&
         (uVar15 = (ulonglong)((uint)uVar15 & 0xfffffffe),
         local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        if (((local_170.Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 < local_170.Data + (longlong)local_168._4_4_ * 8)
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar7 = (int)local_168;
        if ((int)local_168 == local_168._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_170,(int *)((longlong)&local_168 + 4));
        }
        local_168 = CONCAT44(local_168._4_4_,iVar7 + 1);
        *(UClass **)(local_170.Data + (longlong)iVar7 * 8) = local_160;
      }
    }
    if (local_158.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.ObjectArray.AllocatorInstance.Data);
    }
    AlgoImpl::
    IntroSortInternal<UClass_*,int,FIdentityFunctor,TDereferenceWrapper<UClass_*,TLess<void>_>_>
              ((UClass **)local_170.Data,(int)local_168,local_178[0],(TLess<void> *)local_178);
    uVar15 = uVar13;
    if (0 < (int)local_168) {
      do {
        uVar14 = (uint)uVar15;
        uVar6 = 0;
        if ((int)uVar14 < (int)local_168) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar8 = *(UClass **)(local_170.Data + uVar13);
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar1 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        UnMarkAllObjects(OBJECTMARK_TagExp|OBJECTMARK_TagImp);
        ::FString::FString(&local_108,L"");
        FOutputDevice::FOutputDevice(&local_118);
        local_118._padding_ = (longlong)&___7FStringOutputDevice__6B_;
        local_118.bAutoEmitLineTerminator = false;
        FExportObjectInnerContext::FExportObjectInnerContext((FExportObjectInnerContext *)local_98);
        UExporter::ExportToOutputDevice
                  ((FExportObjectInnerContext *)local_98,pUVar1,(UExporter *)0x0,&local_118,L"copy",
                   0,0x200800,false,(UObject *)0x0);
        FOutputDevice::Log(&local_118,L"\r\n\r\n");
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        iVar7 = local_108.Data.ArrayNum + -1;
        if (local_108.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange(&local_140,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar7);
        local_48 = 0;
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_98 + 8));
        FOutputDevice::~FOutputDevice(&local_118);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        iVar7 = local_140.Data.ArrayNum + -1;
        if (local_140.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_130,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar7);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        uVar13 = uVar13 + 8;
        uVar15 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (int)local_168);
    }
    pFVar9 = FPaths::ProjectSavedDir();
    ::operator/(&local_c8,pFVar9,L"CDO.txt");
    pIVar10 = IFileManager::Get();
    local_b8 = local_130.Data.AllocatorInstance.Data;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar11.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iStack_b0 = local_130.Data.ArrayNum + -1;
    if (local_130.Data.ArrayNum == 0) {
      iStack_b0 = 0;
    }
    local_a8._12_4_ = uStack_ac;
    local_a8.Size = iStack_b0;
    local_a8.DataPtr = (wchar_t *)local_130.Data.AllocatorInstance.Data;
    bVar3 = FFileHelper::SaveStringToFile(&local_a8,(wchar_t *)FVar11.Data,AutoDetect,pIVar10,0);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FFileHelper::SaveStringToFile(All, *Filename)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                           ,0x37dc,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 2

// StaticStruct @ 146cea930

UScriptStruct * __cdecl FGameplayResourceSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayResourceSet.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UScriptStruct_FGameplayResourceSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayResourceSet,(UObject *)pUVar1,
                         L"GameplayResourceSet");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayResourceSet.OuterSingleton;
}

// GetDebugDescription @ 146cf2260

FString * __thiscall
FGameplayResourceSet::GetDebugDescription
          (FGameplayResourceSet *this,FString *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ForAnyElementType *pFVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  ForAnyElementType local_38;
  undefined4 local_30;
  FScriptContainerElement *pFVar7;
  
  uVar8 = (uint)this->Flags;
  pFVar14 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = pFVar14;
  pFVar12 = pFVar14;
  do {
    if ((short)uVar8 == 0) {
      return __return_storage_ptr__;
    }
    uVar11 = (uint)pFVar12;
    if ((uVar8 >> (uVar11 & 0x1f) & 1) != 0) {
      uVar9 = (ulonglong)pFVar12 & 0xff;
      if ((uVar11 != (uint)uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      if ((int)(uint)uVar9 < UGameplayTaskResource::ResourceDescriptions.ArrayNum) {
        local_48.Data = (FScriptContainerElement *)0x0;
        uVar6 = (uint)pFVar7 | 1;
        iVar1 = *(int *)(UGameplayTaskResource::ResourceDescriptions.AllocatorInstance.Data +
                        uVar9 * 0x10 + 8);
        _Src = *(void **)(UGameplayTaskResource::ResourceDescriptions.AllocatorInstance.Data +
                         uVar9 * 0x10);
        local_40 = iVar1;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,0,&local_48,iVar1,&iStack_3c);
          memcpy(local_48.Data,_Src,(longlong)iVar1 * 2);
        }
        pFVar5 = &local_48;
        FVar10.Data = local_48.Data;
      }
      else {
        uVar6 = (uint)pFVar7 | 2;
        local_30 = 0;
        pFVar5 = &local_38;
        FVar10.Data = pFVar14;
      }
      pFVar7 = (FScriptContainerElement *)(ulonglong)uVar6;
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)&pFVar5[1].Data;
      pFVar5[1].Data = (FScriptContainerElement *)0x0;
      if (((uVar6 & 2) != 0) &&
         (pFVar7 = (FScriptContainerElement *)(ulonglong)(uVar6 & 0xfffffffd),
         local_38.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data);
      }
      if ((((ulonglong)pFVar7 & 1) != 0) &&
         (pFVar7 = (FScriptContainerElement *)(ulonglong)((uint)pFVar7 & 0xfffffffe),
         local_48.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data);
      }
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar10.Data,iVar13);
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      ::FString::AppendChar(__return_storage_ptr__,L' ');
    }
    uVar8 = uVar8 & ~(1 << (uVar11 & 0x1f));
    pFVar12 = (FScriptContainerElement *)(ulonglong)(uVar11 + 1);
    if (0xf < (int)(uVar11 + 1)) {
      return __return_storage_ptr__;
    }
  } while( true );
}


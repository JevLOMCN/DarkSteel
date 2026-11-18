// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f0c180

UScriptStruct * __cdecl FMaterialInstanceCachedData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceCachedData,(UObject *)pUVar1,
                         L"MaterialInstanceCachedData");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton;
}

// InitializeForDynamic @ 147f4a310

void __thiscall
FMaterialInstanceCachedData::InitializeForDynamic
          (FMaterialInstanceCachedData *this,FMaterialLayersFunctions *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int local_18 [4];
  
  if (param_1 == (FMaterialLayersFunctions *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)param_1->_padding_;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  piVar1 = &(this->ParentLayerIndexRemap).ArrayMax;
  (this->ParentLayerIndexRemap).ArrayNum = 0;
  if (*piVar1 != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,(ForAnyElementType *)this,0,piVar1);
  }
  local_18[0] = 0;
  if (uVar6 != 0) {
    do {
      pFVar2 = (this->ParentLayerIndexRemap).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->ParentLayerIndexRemap).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,piVar1);
      }
      (this->ParentLayerIndexRemap).ArrayNum = iVar5 + 1;
      *(int *)((this->ParentLayerIndexRemap).AllocatorInstance.Data + (longlong)iVar5 * 4) =
           local_18[0];
      local_18[0] = local_18[0] + 1;
    } while (local_18[0] < (int)uVar6);
  }
  return;
}


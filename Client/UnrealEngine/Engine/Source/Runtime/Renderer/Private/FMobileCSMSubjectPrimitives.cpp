// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddSubjectPrimitive @ 145613980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FMobileCSMSubjectPrimitives::AddSubjectPrimitive
          (FMobileCSMSubjectPrimitives *this,FPrimitiveSceneInfo *param_1,int param_2)

{
  int *piVar1;
  uchar *puVar2;
  longlong lVar3;
  FMobileCSMSubjectPrimitives *pFVar4;
  FPrimitiveSceneInfo **ppFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FMobileCSMSubjectPrimitives *pFVar10;
  FPrimitiveSceneInfo *local_res10;
  
  local_res10 = param_1;
  if ((param_2 < 0) || ((this->ShadowSubjectPrimitivesEncountered).NumBits <= param_2)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (FMobileCSMSubjectPrimitives *)
           (this->ShadowSubjectPrimitivesEncountered).AllocatorInstance.SecondaryData.Data;
  pFVar10 = this;
  if (pFVar4 != (FMobileCSMSubjectPrimitives *)0x0) {
    pFVar10 = pFVar4;
  }
  uVar9 = 1 << ((byte)param_2 & 0x1f);
  lVar3 = (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4;
  if ((*(uint *)((pFVar10->ShadowSubjectPrimitivesEncountered).AllocatorInstance.InlineData + lVar3)
      & uVar9) == 0) {
    ppFVar5 = (this->ShadowSubjectPrimitives).AllocatorInstance.Data;
    if ((ppFVar5 <= &local_res10) &&
       (&local_res10 < ppFVar5 + (this->ShadowSubjectPrimitives).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->ShadowSubjectPrimitives).ArrayNum;
    piVar1 = &(this->ShadowSubjectPrimitives).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                        (0x808,&(this->ShadowSubjectPrimitives).AllocatorInstance,piVar1);
    }
    ppFVar5 = (this->ShadowSubjectPrimitives).AllocatorInstance.Data;
    (this->ShadowSubjectPrimitives).ArrayNum = iVar8 + 1;
    ppFVar5[iVar8] = local_res10;
    if ((param_2 < 0) || ((this->ShadowSubjectPrimitivesEncountered).NumBits <= param_2)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (FMobileCSMSubjectPrimitives *)
             (this->ShadowSubjectPrimitivesEncountered).AllocatorInstance.SecondaryData.Data;
    if (pFVar4 != (FMobileCSMSubjectPrimitives *)0x0) {
      this = pFVar4;
    }
    puVar2 = (this->ShadowSubjectPrimitivesEncountered).AllocatorInstance.InlineData + lVar3;
    *(uint *)puVar2 = *(uint *)puVar2 | uVar9;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// StaticStruct @ 146f83660

UScriptStruct * __cdecl FCrowdAvoidanceSamplingPattern::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern,(UObject *)pUVar1,
                         L"CrowdAvoidanceSamplingPattern");
  }
  return Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.OuterSingleton;
}

// AddSample @ 146f9acc0

void __thiscall
FCrowdAvoidanceSamplingPattern::AddSample
          (FCrowdAvoidanceSamplingPattern *this,float param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_res18 [4];
  float local_18 [4];
  
  local_18[0] = param_1 * __real_3c8efa35;
  pFVar2 = (this->Angles).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Angles).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Angles).ArrayNum;
  piVar1 = &(this->Angles).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->Angles).ArrayNum = iVar5 + 1;
  *(float *)((this->Angles).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_18[0];
  pFVar2 = (this->Radii).AllocatorInstance.Data;
  if (pFVar2 <= (FScriptContainerElement *)local_res18) {
    if ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->Radii).ArrayMax * 4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  iVar5 = (this->Radii).ArrayNum;
  piVar1 = &(this->Radii).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Radii).AllocatorInstance,piVar1);
  }
  (this->Radii).ArrayNum = iVar5 + 1;
  *(float *)((this->Radii).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res18[0];
  return;
}

// AddSampleWithMirror @ 146f9ae40

void __thiscall
FCrowdAvoidanceSamplingPattern::AddSampleWithMirror
          (FCrowdAvoidanceSamplingPattern *this,float param_1,float param_2)

{
  AddSample(this,param_1,param_2);
  AddSample(this,(float)((uint)param_1 ^ __xmm_80000000800000008000000080000000),param_2);
  return;
}


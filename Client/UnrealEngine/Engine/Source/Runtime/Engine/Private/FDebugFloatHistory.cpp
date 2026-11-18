// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba56b0

UScriptStruct * __cdecl FDebugFloatHistory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDebugFloatHistory.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDebugFloatHistory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDebugFloatHistory,(UObject *)pUVar1,
                         L"DebugFloatHistory");
  }
  return Z_Registration_Info_UScriptStruct_FDebugFloatHistory.OuterSingleton;
}

// AddSample @ 147d842f0

void __thiscall FDebugFloatHistory::AddSample(FDebugFloatHistory *this,float *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float local_18 [4];
  
  fVar8 = *param_1;
  if (this->bAutoAdjustMinMax == false) {
    if (this->MaxValue <= fVar8) {
      fVar8 = this->MaxValue;
    }
    local_18[0] = fVar8;
    if (fVar8 <= this->MinValue) {
      local_18[0] = this->MinValue;
    }
    pFVar3 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Samples).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,piVar1);
    }
    pFVar3 = (this->Samples).AllocatorInstance.Data;
    (this->Samples).ArrayNum = iVar6 + 1;
    memmove(pFVar3 + 4,pFVar3,(longlong)iVar6 << 2);
    *(float *)(this->Samples).AllocatorInstance.Data = local_18[0];
  }
  else {
    if (this->MinValue <= fVar8) {
      fVar8 = this->MinValue;
    }
    this->MinValue = fVar8;
    fVar8 = this->MaxValue;
    if (this->MaxValue <= *param_1) {
      fVar8 = *param_1;
    }
    this->MaxValue = fVar8;
    pFVar3 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Samples).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,piVar1);
    }
    pFVar3 = (this->Samples).AllocatorInstance.Data;
    (this->Samples).ArrayNum = iVar6 + 1;
    memmove(pFVar3 + 4,pFVar3,(longlong)iVar6 << 2);
    *(float *)(this->Samples).AllocatorInstance.Data = *param_1;
  }
  uVar2 = this->MaxSamples;
  iVar6 = (this->Samples).ArrayNum;
  if ((int)uVar2 < iVar6) {
    uVar7 = iVar6 - uVar2;
    if ((int)(uVar7 | uVar2) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar7 != 0) {
      pFVar3 = (this->Samples).AllocatorInstance.Data + (longlong)(int)uVar2 * 4;
      iVar6 = ((this->Samples).ArrayNum - uVar2) - uVar7;
      if (iVar6 != 0) {
        memmove(pFVar3,pFVar3 + (longlong)(int)uVar7 * 4,(longlong)iVar6 << 2);
      }
      piVar1 = &(this->Samples).ArrayNum;
      *piVar1 = *piVar1 - uVar7;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)this,(this->Samples).ArrayNum,&(this->Samples).ArrayMax);
    }
  }
  return;
}


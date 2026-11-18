// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Insert @ 14477c650

void __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
          (TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *this,FRDGView *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                      (0x808,(ForElementType<FRDGView_*> *)this,piVar1);
  }
  (this->Array).ArrayNum = iVar2 + 1;
  (this->Array).AllocatorInstance.Data[iVar2] = param_1;
  (param_1->Handle).Index = (this->Array).ArrayNum - 1;
  return;
}

// operator[] @ 1447f9f60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGPass * __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::operator[]
          (TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *this,
          TRDGHandle<FRDGPass,unsigned_int> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGPass *pFVar4;
  
  if (param_1.Index == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1.Index < (this->Array).ArrayNum) {
    uVar3 = ~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (this->Array).AllocatorInstance.Data[(int)param_1.Index];
}

// Insert @ 144a9a990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::Insert
          (TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *this,FRDGBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                      (0x808,(ForElementType<FRDGBuffer_*> *)this,piVar1);
  }
  (this->Array).ArrayNum = iVar2 + 1;
  (this->Array).AllocatorInstance.Data[iVar2] = param_1;
  (param_1->Handle).Index = (this->Array).ArrayNum - 1;
  return;
}

// Insert @ 144a9a9f0

void __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0>::Insert
          (TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0> *this,
          FRDGUniformBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                      (0x808,(ForElementType<FRDGUniformBuffer_*> *)this,piVar1);
  }
  (this->Array).ArrayNum = iVar2 + 1;
  (this->Array).AllocatorInstance.Data[iVar2] = param_1;
  (param_1->Handle).Index = (this->Array).ArrayNum - 1;
  return;
}

// Insert @ 144b30250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert
          (TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *this,FRDGPass *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)this,piVar1);
  }
  (this->Array).ArrayNum = iVar2 + 1;
  (this->Array).AllocatorInstance.Data[iVar2] = param_1;
  (param_1->Handle).Index = (this->Array).ArrayNum - 1;
  return;
}


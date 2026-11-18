// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 3

// StaticStruct @ 14cd941c0

UScriptStruct * __cdecl FGeometryScriptBakeOutputType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptBakeOutputType.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptBakeOutputType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType,(UObject *)pUVar1,
                         L"GeometryScriptBakeOutputType");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptBakeOutputType.OuterSingleton;
}

// FGeometryScriptBakeOutputType @ 14cda50a0

FGeometryScriptBakeOutputType * __thiscall
FGeometryScriptBakeOutputType::FGeometryScriptBakeOutputType
          (FGeometryScriptBakeOutputType *this,FGeometryScriptBakeOutputType *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->OutputMode = param_1->OutputMode;
  (this->RGBA).BakeType = (param_1->RGBA).BakeType;
  (this->RGBA).Options.Object = (param_1->RGBA).Options.Object;
  pTVar1 = (param_1->RGBA).Options.SharedReferenceCount.ReferenceController;
  (this->RGBA).Options.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->R).BakeType = (param_1->R).BakeType;
  (this->R).Options.Object = (param_1->R).Options.Object;
  pTVar1 = (param_1->R).Options.SharedReferenceCount.ReferenceController;
  (this->R).Options.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->G).BakeType = (param_1->G).BakeType;
  (this->G).Options.Object = (param_1->G).Options.Object;
  pTVar1 = (param_1->G).Options.SharedReferenceCount.ReferenceController;
  (this->G).Options.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->B).BakeType = (param_1->B).BakeType;
  (this->B).Options.Object = (param_1->B).Options.Object;
  pTVar1 = (param_1->B).Options.SharedReferenceCount.ReferenceController;
  (this->B).Options.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->A).BakeType = (param_1->A).BakeType;
  (this->A).Options.Object = (param_1->A).Options.Object;
  pTVar1 = (param_1->A).Options.SharedReferenceCount.ReferenceController;
  (this->A).Options.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FGeometryScriptBakeOutputType @ 14cda65f0

void __thiscall
FGeometryScriptBakeOutputType::~FGeometryScriptBakeOutputType(FGeometryScriptBakeOutputType *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->A).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->B).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->G).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->R).Options.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RGBA).Options.SharedReferenceCount.ReferenceController);
  return;
}


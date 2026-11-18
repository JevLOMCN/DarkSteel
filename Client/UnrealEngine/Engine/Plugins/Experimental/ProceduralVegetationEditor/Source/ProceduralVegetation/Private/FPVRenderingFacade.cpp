// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 5

// FPVRenderingFacade @ 14da63700

FPVRenderingFacade * __thiscall
PV::Facades::FPVRenderingFacade::FPVRenderingFacade
          (FPVRenderingFacade *this,FManagedArrayCollection *param_1)

{
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade((FRenderingFacade *)this,param_1);
  this->ConstProceduralVegetationCollection = param_1;
  this->ProceduralVegetationCollection = param_1;
  FFoliageFacade::FFoliageFacade(&this->FoliageFacade,param_1,0);
  return this;
}

// FPVRenderingFacade @ 14da63750

FPVRenderingFacade * __thiscall
PV::Facades::FPVRenderingFacade::FPVRenderingFacade
          (FPVRenderingFacade *this,FManagedArrayCollection *param_1)

{
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade((FRenderingFacade *)this,param_1);
  this->ConstProceduralVegetationCollection = param_1;
  this->ProceduralVegetationCollection = (FManagedArrayCollection *)0x0;
  FFoliageFacade::FFoliageFacade(&this->FoliageFacade,param_1);
  return this;
}

// CopyFrom @ 14da77650

void __thiscall
PV::Facades::FPVRenderingFacade::CopyFrom(FPVRenderingFacade *this,FManagedArrayCollection *param_1)

{
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FManagedArrayCollection::CopyTo(param_1,this->ProceduralVegetationCollection,&local_18,&local_28);
  return;
}

// DefineSchema @ 14da7afb0

void __thiscall PV::Facades::FPVRenderingFacade::DefineSchema(FPVRenderingFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            ((TManagedArrayAccessor<UE::Math::TVector<float>_> *)&this->_padding_,MakePersistent,
             (FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            ((TManagedArrayAccessor<UE::Math::TVector<float>_> *)&this->_padding_,MakePersistent,
             (FName)0x0);
  TManagedArrayAccessor<FLinearColor>::Add
            ((TManagedArrayAccessor<FLinearColor> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Add
            ((TManagedArrayAccessor<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
              *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Add
            ((TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *)&this->_padding_,MakePersistent,
             (FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FGeometryCollectionSection>::Add
            ((TManagedArrayAccessor<FGeometryCollectionSection> *)&this->_padding_,MakePersistent,
             (FName)0x0);
  TManagedArrayAccessor<FString>::Add
            ((TManagedArrayAccessor<FString> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add
            ((TManagedArrayAccessor<FString> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TTransform<double>_>::Add
            ((TManagedArrayAccessor<UE::Math::TTransform<double>_> *)&this->_padding_,MakePersistent
             ,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add
            ((TManagedArrayAccessor<int> *)&this->_padding_,MakePersistent,(FName)0x0);
  return;
}

// GetFoliageFacade @ 14da951c0

FFoliageFacade * __thiscall
PV::Facades::FPVRenderingFacade::GetFoliageFacade(FPVRenderingFacade *this)

{
  return &this->FoliageFacade;
}


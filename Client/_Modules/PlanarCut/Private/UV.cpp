// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 2

// FindActiveUVLayers @ 14c9cf7e0

TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> * __cdecl
GeometryCollection::UV::FindActiveUVLayers
          (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8>
           *__return_storage_ptr__,FManagedArrayCollection *param_1)

{
  uchar auVar1 [8];
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> *pTVar6;
  char *pcVar7;
  FName *pFVar8;
  undefined1 local_38 [16];
  FName local_28;
  
  (__return_storage_ptr__->Attributes).ArrayMax = 8;
  (__return_storage_ptr__->Attributes).ArrayNum = 0;
  pFVar8 = UVLayerNames;
  while( true ) {
    local_38._8_8_ = *pFVar8;
    local_28 = VerticesGroupName;
    pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&param_1->Map,(TTuple<FName,FName> *)(local_38 + 8));
    pcVar7 = &pTVar5->field_0x10;
    if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar7 = (char *)0x0;
    }
    if (pcVar7 == (char *)0x0) {
      return __return_storage_ptr__;
    }
    if (*pcVar7 != '\x03') {
      return __return_storage_ptr__;
    }
    auVar1 = *(uchar (*) [8])(pcVar7 + 0x20);
    if ((auVar1 == (uchar  [8])0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x306,L""), bVar3)) break;
    if (auVar1 == (uchar  [8])0x0) {
      return __return_storage_ptr__;
    }
    local_38._0_8_ = auVar1;
    if (((__return_storage_ptr__ <=
          (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> *)local_38
         ) && (local_38 <
               (__return_storage_ptr__->Attributes).AllocatorInstance.InlineData +
               (__return_storage_ptr__->Attributes).ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar4 = (__return_storage_ptr__->Attributes).ArrayNum;
    if (iVar4 == (__return_storage_ptr__->Attributes).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*>_>
                        (0x808,(ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*> *)
                               __return_storage_ptr__,&(__return_storage_ptr__->Attributes).ArrayMax
                        );
    }
    pFVar8 = pFVar8 + 1;
    (__return_storage_ptr__->Attributes).ArrayNum = iVar4 + 1;
    *(undefined8 *)(__return_storage_ptr__->Attributes).AllocatorInstance.InlineData[iVar4].Pad =
         local_38._0_8_;
    if (0x155073a3f < (longlong)pFVar8) {
      return __return_storage_ptr__;
    }
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> *)
           (*pcVar2)();
  return pTVar6;
}

// FindActiveUVLayers @ 14c9cf980

TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> * __cdecl
GeometryCollection::UV::FindActiveUVLayers
          (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8>
           *__return_storage_ptr__,FManagedArrayCollection *param_1)

{
  uchar auVar1 [8];
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> *pTVar6;
  FValueType *this;
  FName *pFVar7;
  undefined1 local_38 [16];
  FName local_28;
  
  (__return_storage_ptr__->Attributes).ArrayMax = 8;
  (__return_storage_ptr__->Attributes).ArrayNum = 0;
  pFVar7 = UVLayerNames;
  while( true ) {
    local_38._8_8_ = *pFVar7;
    local_28 = VerticesGroupName;
    pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&param_1->Map,(TTuple<FName,FName> *)(local_38 + 8));
    this = (FValueType *)&pTVar5->field_0x10;
    if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      this = (FValueType *)0x0;
    }
    if (this == (FValueType *)0x0) {
      return __return_storage_ptr__;
    }
    if (this->ArrayType != FVector2DType) {
      return __return_storage_ptr__;
    }
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this);
    auVar1 = (uchar  [8])this->ManagedArray;
    if ((auVar1 == (uchar  [8])0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar3)) break;
    *(bool *)((longlong)auVar1 + 8) = true;
    if (auVar1 == (uchar  [8])0x0) {
      return __return_storage_ptr__;
    }
    local_38._0_8_ = auVar1;
    if (((__return_storage_ptr__ <=
          (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> *)local_38) &&
        (local_38 <
         (__return_storage_ptr__->Attributes).AllocatorInstance.InlineData +
         (__return_storage_ptr__->Attributes).ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar4 = (__return_storage_ptr__->Attributes).ArrayNum;
    if (iVar4 == (__return_storage_ptr__->Attributes).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*>_>
                        (0x808,(ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                               __return_storage_ptr__,&(__return_storage_ptr__->Attributes).ArrayMax
                        );
    }
    pFVar7 = pFVar7 + 1;
    (__return_storage_ptr__->Attributes).ArrayNum = iVar4 + 1;
    *(undefined8 *)(__return_storage_ptr__->Attributes).AllocatorInstance.InlineData[iVar4].Pad =
         local_38._0_8_;
    if (0x155073a3f < (longlong)pFVar7) {
      return __return_storage_ptr__;
    }
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> *)(*pcVar2)();
  return pTVar6;
}


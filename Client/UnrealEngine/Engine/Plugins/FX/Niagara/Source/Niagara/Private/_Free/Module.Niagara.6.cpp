// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 446

// AnonymousAttributeString'' @ 14117b710

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::AnonymousAttributeString__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid2DCollection::AnonymousAttributeString,
                     "Attribute At Index");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::
         AnonymousAttributeString__);
  return;
}

// AnonymousAttributeString'' @ 14117b740

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::AnonymousAttributeString__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::AnonymousAttributeString,
                     "Attribute At Index");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::
         AnonymousAttributeString__);
  return;
}

// AttributeIndicesBaseName'' @ 14117b770

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::AttributeIndicesBaseName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid2DCollection::AttributeIndicesBaseName,
                     L"AttributeIndices");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::
         AttributeIndicesBaseName__);
  return;
}

// AttributeIndicesBaseName'' @ 14117b7a0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::AttributeIndicesBaseName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::AttributeIndicesBaseName,
                     L"AttributeIndices");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::
         AttributeIndicesBaseName__);
  return;
}

// Channels'' @ 14117b7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl `dynamic_initializer_for_'FGrid3DCollectionAttributeHlslWriter::Channels__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_98 [32];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_98;
  ::FString::FString(&local_58,"r");
  ::FString::FString(&local_48,"g");
  ::FString::FString(&local_38,"b");
  ::FString::FString(&local_28,"a");
  lVar2 = 4;
  FGrid3DCollectionAttributeHlslWriter::Channels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FGrid3DCollectionAttributeHlslWriter::Channels.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&FGrid3DCollectionAttributeHlslWriter::Channels.AllocatorInstance,4,
             &FGrid3DCollectionAttributeHlslWriter::Channels.ArrayMax);
  ConstructItems<FString,FString,int>
            (FGrid3DCollectionAttributeHlslWriter::Channels.AllocatorInstance.Data,&local_58,4);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(`dynamic_atexit_destructor_for_'FGrid3DCollectionAttributeHlslWriter::Channels__);
  return;
}

// ClearCellFunctionName'' @ 14117b8f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::ClearCellFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::ClearCellFunctionName,"ClearCell");
  return;
}

// ClearCellFunctionName'' @ 14117b910

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::ClearCellFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::ClearCellFunctionName,"ClearCell");
  return;
}

// CopyMaskedPreviousToCurrentForCellFunctionName'' @ 14117b930

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CopyMaskedPreviousToCurrentForCellFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  CopyMaskedPreviousToCurrentForCellFunctionName,
                 "CopyMaskedPreviousToCurrentForCell");
  return;
}

// CopyPreviousToCurrentForCellFunctionName'' @ 14117b950

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
CopyPreviousToCurrentForCellFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::CopyPreviousToCurrentForCellFunctionName,
                 "CopyPreviousToCurrentForCell");
  return;
}

// CopyPreviousToCurrentForCellFunctionName'' @ 14117b970

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CopyPreviousToCurrentForCellFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CopyPreviousToCurrentForCellFunctionName,
                 "CopyPreviousToCurrentForCell");
  return;
}

// CubicSampleGridFunctionName'' @ 14117b990

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::CubicSampleGridFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSampleGridFunctionName,
                 "CubicSampleGrid");
  return;
}

// CubicSamplePreviousFullGridFunctionName'' @ 14117b9b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousFullGridFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSamplePreviousFullGridFunctionName,
                 "CubicSamplePreviousFullGrid");
  return;
}

// CubicSamplePreviousGridAtIndexFunctionName'' @ 14117b9d0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
CubicSamplePreviousGridAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::CubicSamplePreviousGridAtIndexFunctionName,
                 "CubicSamplePreviousGridAtIndex");
  return;
}

// CubicSamplePreviousGridAtIndexFunctionName'' @ 14117b9f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSamplePreviousGridAtIndexFunctionName,
                 "CubicSamplePreviousGridAtIndex");
  return;
}

// CubicSamplePreviousGridFloatAtIndexFunctionName'' @ 14117ba10

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridFloatAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  CubicSamplePreviousGridFloatAtIndexFunctionName,
                 "CubicSamplePreviousGridFloatAtIndex");
  return;
}

// CubicSamplePreviousGridFloatFunctionName'' @ 14117ba30

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
CubicSamplePreviousGridFloatFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::CubicSamplePreviousGridFloatFunctionName,
                 "CubicSamplePreviousGridFloatValue");
  return;
}

// CubicSamplePreviousGridFloatFunctionName'' @ 14117ba50

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridFloatFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSamplePreviousGridFloatFunctionName,
                 "CubicSamplePreviousGridFloatValue");
  return;
}

// CubicSamplePreviousGridVector2AtIndexFunctionName'' @ 14117ba70

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridVector2AtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  CubicSamplePreviousGridVector2AtIndexFunctionName,
                 "CubicSamplePreviousGridVector2AtIndex");
  return;
}

// CubicSamplePreviousGridVector2DFunctionName'' @ 14117ba90

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
CubicSamplePreviousGridVector2DFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::CubicSamplePreviousGridVector2DFunctionName
                 ,"CubicSamplePreviousGridVector2DValue");
  return;
}

// CubicSamplePreviousGridVector2DFunctionName'' @ 14117bab0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridVector2DFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSamplePreviousGridVector2DFunctionName
                 ,"CubicSamplePreviousGridVector2DValue");
  return;
}

// CubicSamplePreviousGridVector3AtIndexFunctionName'' @ 14117bad0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridVector3AtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  CubicSamplePreviousGridVector3AtIndexFunctionName,
                 "CubicSamplePreviousGridVector3AtIndex");
  return;
}

// CubicSamplePreviousGridVector4AtIndexFunctionName'' @ 14117baf0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridVector4AtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  CubicSamplePreviousGridVector4AtIndexFunctionName,
                 "CubicSamplePreviousGridVector4AtIndex");
  return;
}

// CubicSamplePreviousGridVector4FunctionName'' @ 14117bb10

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
CubicSamplePreviousGridVector4FunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::CubicSamplePreviousGridVector4FunctionName,
                 "CubicSamplePreviousGridVector4Value");
  return;
}

// CubicSamplePreviousGridVector4FunctionName'' @ 14117bb30

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridVector4FunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSamplePreviousGridVector4FunctionName,
                 "CubicSamplePreviousGridVector4Value");
  return;
}

// CubicSamplePreviousGridVectorFunctionName'' @ 14117bb50

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
CubicSamplePreviousGridVectorFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::CubicSamplePreviousGridVectorFunctionName,
                 "CubicSamplePreviousGridVector3Value");
  return;
}

// CubicSamplePreviousGridVectorFunctionName'' @ 14117bb70

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
CubicSamplePreviousGridVectorFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::CubicSamplePreviousGridVectorFunctionName,
                 "CubicSamplePreviousGridVector3Value");
  return;
}

// ExposedRTVar'' @ 14117bb90

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceGrid2DCollection::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceGrid2DCollection::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// ExposedRTVar'' @ 14117bbc0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceGrid3DCollection::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceGrid3DCollection::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// ExposedRTVar'' @ 14117bbf0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceIntRenderTarget2D::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceIntRenderTarget2D::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceIntRenderTarget2D::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// GetFloatAttributeIndexFunctionName'' @ 14117bc20

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetFloatAttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetFloatAttributeIndexFunctionName,
                 "GetFloatAttributeIndex");
  return;
}

// GetFloatAttributeIndexFunctionName'' @ 14117bc40

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetFloatAttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetFloatAttributeIndexFunctionName,
                 "GetFloatAttributeIndex");
  return;
}

// GetFloatValueFunctionName'' @ 14117bc60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GetFloatValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetFloatValueFunctionName,"GetFloatValue");
  return;
}

// GetFullGridPreviousValueFunctionName'' @ 14117bc80

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetFullGridPreviousValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetFullGridPreviousValueFunctionName,
                 "GetFullGridPreviousValue");
  return;
}

// GetPreviousFloatValueAtIndexFunctionName'' @ 14117bca0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousFloatValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousFloatValueAtIndexFunctionName,
                 "GetPreviousFloatValueAtIndex");
  return;
}

// GetPreviousFloatValueFunctionName'' @ 14117bcc0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GetPreviousFloatValueFunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetPreviousFloatValueFunctionName,
                 "GetPreviousFloatValue");
  return;
}

// GetPreviousFloatValueFunctionName'' @ 14117bce0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::GetPreviousFloatValueFunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousFloatValueFunctionName,
                 "GetPreviousFloatValue");
  return;
}

// GetPreviousValueAtIndexFunctionName'' @ 14117bd00

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetPreviousValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetPreviousValueAtIndexFunctionName,
                 "GetPreviousValueAtIndex");
  return;
}

// GetPreviousValueAtIndexFunctionName'' @ 14117bd20

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousValueAtIndexFunctionName,
                 "GetPreviousValueAtIndex");
  return;
}

// GetPreviousVector2DValueFunctionName'' @ 14117bd40

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetPreviousVector2DValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetPreviousVector2DValueFunctionName,
                 "GetPreviousVector2DValue");
  return;
}

// GetPreviousVector2DValueFunctionName'' @ 14117bd60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousVector2DValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousVector2DValueFunctionName,
                 "GetPreviousVector2DValue");
  return;
}

// GetPreviousVector2ValueAtIndexFunctionName'' @ 14117bd80

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousVector2ValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousVector2ValueAtIndexFunctionName,
                 "GetPreviousVector2ValueAtIndex");
  return;
}

// GetPreviousVector3ValueAtIndexFunctionName'' @ 14117bda0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousVector3ValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousVector3ValueAtIndexFunctionName,
                 "GetPreviousVector3ValueAtIndex");
  return;
}

// GetPreviousVector4ValueAtIndexFunctionName'' @ 14117bdc0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousVector4ValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousVector4ValueAtIndexFunctionName,
                 "GetPreviousVector4ValueAtIndex");
  return;
}

// GetPreviousVector4ValueFunctionName'' @ 14117bde0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetPreviousVector4ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetPreviousVector4ValueFunctionName,
                 "GetPreviousVector4Value");
  return;
}

// GetPreviousVector4ValueFunctionName'' @ 14117be00

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousVector4ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousVector4ValueFunctionName,
                 "GetPreviousVector4Value");
  return;
}

// GetPreviousVectorValueFunctionName'' @ 14117be20

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetPreviousVectorValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetPreviousVectorValueFunctionName,
                 "GetPreviousVectorValue");
  return;
}

// GetPreviousVectorValueFunctionName'' @ 14117be40

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetPreviousVectorValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetPreviousVectorValueFunctionName,
                 "GetPreviousVectorValue");
  return;
}

// GetValueFunctionName'' @ 14117be60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GetValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetValueFunctionName,"GetGridValue");
  return;
}

// GetValueFunctionName'' @ 14117be80

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::GetValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetValueFunctionName,"GetGridValue");
  return;
}

// GetVector2DAttributeIndexFunctionName'' @ 14117bea0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetVector2DAttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetVector2DAttributeIndexFunctionName,
                 "GetVector2DAttributeIndex");
  return;
}

// GetVector2DAttributeIndexFunctionName'' @ 14117bec0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetVector2DAttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetVector2DAttributeIndexFunctionName,
                 "GetVector2DAttributeIndex");
  return;
}

// GetVector2ValueFunctionName'' @ 14117bee0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GetVector2ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetVector2ValueFunctionName,
                 "GetVector2Value");
  return;
}

// GetVector2ValueFunctionName'' @ 14117bf00

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::GetVector2ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetVector2ValueFunctionName,
                 "GetVector2Value");
  return;
}

// GetVector3ValueFunctionName'' @ 14117bf20

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GetVector3ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetVector3ValueFunctionName,
                 "GetVector3Value");
  return;
}

// GetVector4AttributeIndexFunctionName'' @ 14117bf40

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetVector4AttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetVector4AttributeIndexFunctionName,
                 "GetVector4AttributeIndex");
  return;
}

// GetVector4AttributeIndexFunctionName'' @ 14117bf60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetVector4AttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetVector4AttributeIndexFunctionName,
                 "GetVector4AttributeIndex");
  return;
}

// GetVector4ValueFunctionName'' @ 14117bf80

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GetVector4ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetVector4ValueFunctionName,
                 "GetVector4Value");
  return;
}

// GetVectorAttributeIndexFunctionName'' @ 14117bfa0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
GetVectorAttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::GetVectorAttributeIndexFunctionName,
                 "GetVectorAttributeIndex");
  return;
}

// GetVectorAttributeIndexFunctionName'' @ 14117bfc0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
GetVectorAttributeIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::GetVectorAttributeIndexFunctionName,
                 "GetVectorAttributeIndex");
  return;
}

// GridName'' @ 14117bfe0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::GridName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid2DCollection::GridName,L"_Grid");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::GridName__);
  return;
}

// GridName'' @ 14117c010

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::GridName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::GridName,L"_Grid");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::GridName__);
  return;
}

// NumTilesName'' @ 14117c040

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::NumTilesName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::NumTilesName,L"_NumTiles");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::NumTilesName__);
  return;
}

// OneOverNumTilesName'' @ 14117c070

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::OneOverNumTilesName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::OneOverNumTilesName,L"_OneOverNumTiles"
                    );
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::
         OneOverNumTilesName__);
  return;
}

// OutputGridName'' @ 14117c0a0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::OutputGridName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid2DCollection::OutputGridName,L"_OutputGrid");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::OutputGridName__);
  return;
}

// OutputGridName'' @ 14117c0d0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::OutputGridName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::OutputGridName,L"_OutputGrid");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::OutputGridName__);
  return;
}

// PerAttributeDataName'' @ 14117c100

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::PerAttributeDataName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::PerAttributeDataName,
                     L"PerAttributeData");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::
         PerAttributeDataName__);
  return;
}

// SampleGridFloatFunctionName'' @ 14117c130

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SampleGridFloatFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SampleGridFloatFunctionName,
                 "SampleGridFloatValue");
  return;
}

// SampleGridFunctionName'' @ 14117c150

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SampleGridFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SampleGridFunctionName,"SampleGrid");
  return;
}

// SampleGridFunctionName'' @ 14117c170

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SampleGridFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SampleGridFunctionName,"SampleGrid");
  return;
}

// SampleGridVector2FunctionName'' @ 14117c190

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SampleGridVector2FunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SampleGridVector2FunctionName,
                 "SampleGridVector2Value");
  return;
}

// SampleGridVector3FunctionName'' @ 14117c1b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SampleGridVector3FunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SampleGridVector3FunctionName,
                 "SampleGridVector3Value");
  return;
}

// SampleGridVector4FunctionName'' @ 14117c1d0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SampleGridVector4FunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SampleGridVector4FunctionName,
                 "SampleGridVector4Value");
  return;
}

// SamplePreviousFullGridFunctionName'' @ 14117c1f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousFullGridFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousFullGridFunctionName,
                 "SamplePreviousFullGrid");
  return;
}

// SamplePreviousGridAtIndexFunctionName'' @ 14117c210

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
SamplePreviousGridAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SamplePreviousGridAtIndexFunctionName,
                 "SamplePreviousGridAtIndex");
  return;
}

// SamplePreviousGridAtIndexFunctionName'' @ 14117c230

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousGridAtIndexFunctionName,
                 "SamplePreviousGridAtIndex");
  return;
}

// SamplePreviousGridFloatAtIndexFunctionName'' @ 14117c250

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridFloatAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousGridFloatAtIndexFunctionName,
                 "SamplePreviousGridFloatAtIndex");
  return;
}

// SamplePreviousGridFloatFunctionName'' @ 14117c270

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
SamplePreviousGridFloatFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SamplePreviousGridFloatFunctionName,
                 "SamplePreviousGridFloatValue");
  return;
}

// SamplePreviousGridFloatFunctionName'' @ 14117c290

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridFloatFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousGridFloatFunctionName,
                 "SamplePreviousGridFloatValue");
  return;
}

// SamplePreviousGridVector2AtIndexFunctionName'' @ 14117c2b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridVector2AtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  SamplePreviousGridVector2AtIndexFunctionName,"SamplePreviousGridVector2AtIndex");
  return;
}

// SamplePreviousGridVector2DFunctionName'' @ 14117c2d0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
SamplePreviousGridVector2DFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SamplePreviousGridVector2DFunctionName,
                 "SamplePreviousGridVector2DValue");
  return;
}

// SamplePreviousGridVector2DFunctionName'' @ 14117c2f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridVector2DFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousGridVector2DFunctionName,
                 "SamplePreviousGridVector2DValue");
  return;
}

// SamplePreviousGridVector3AtIndexFunctionName'' @ 14117c310

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridVector3AtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  SamplePreviousGridVector3AtIndexFunctionName,"SamplePreviousGridVector3AtIndex");
  return;
}

// SamplePreviousGridVector4AtIndexFunctionName'' @ 14117c330

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridVector4AtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::
                  SamplePreviousGridVector4AtIndexFunctionName,"SamplePreviousGridVector4AtIndex");
  return;
}

// SamplePreviousGridVector4FunctionName'' @ 14117c350

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
SamplePreviousGridVector4FunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SamplePreviousGridVector4FunctionName,
                 "SamplePreviousGridVector4Value");
  return;
}

// SamplePreviousGridVector4FunctionName'' @ 14117c370

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridVector4FunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousGridVector4FunctionName,
                 "SamplePreviousGridVector4Value");
  return;
}

// SamplePreviousGridVectorFunctionName'' @ 14117c390

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::
SamplePreviousGridVectorFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SamplePreviousGridVectorFunctionName,
                 "SamplePreviousGridVector3Value");
  return;
}

// SamplePreviousGridVectorFunctionName'' @ 14117c3b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SamplePreviousGridVectorFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SamplePreviousGridVectorFunctionName,
                 "SamplePreviousGridVector3Value");
  return;
}

// SamplerName'' @ 14117c3d0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SamplerName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid2DCollection::SamplerName,L"_GridSampler");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::SamplerName__);
  return;
}

// SamplerName'' @ 14117c400

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SamplerName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::SamplerName,L"_GridSampler");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::SamplerName__);
  return;
}

// SetFloatValueAtIndexFunctionName'' @ 14117c430

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetFloatValueAtIndexFunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetFloatValueAtIndexFunctionName,
                 "SetFloatValueAtIndex");
  return;
}

// SetFloatValueFunctionName'' @ 14117c450

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetFloatValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetFloatValueFunctionName,"SetFloatValue");
  return;
}

// SetFloatValueFunctionName'' @ 14117c470

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetFloatValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetFloatValueFunctionName,"SetFloatValue");
  return;
}

// SetFullGridValueFunctionName'' @ 14117c490

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetFullGridValueFunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetFullGridValueFunctionName,
                 "SetFullGridValue");
  return;
}

// SetNumCellsFunctionName'' @ 14117c4b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetNumCellsFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetNumCellsFunctionName,"SetNumCells");
  return;
}

// SetNumCellsFunctionName'' @ 14117c4d0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetNumCellsFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetNumCellsFunctionName,"SetNumCells");
  return;
}

// SetValueAtIndexFunctionName'' @ 14117c4f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetValueAtIndexFunctionName,
                 "SetValueAtIndex");
  return;
}

// SetValueFunctionName'' @ 14117c510

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetValueFunctionName,"SetGridValue");
  return;
}

// SetValueFunctionName'' @ 14117c530

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetValueFunctionName,"SetGridValue");
  return;
}

// SetVector2DValueFunctionName'' @ 14117c550

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetVector2DValueFunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetVector2DValueFunctionName,
                 "SetVector2DValue");
  return;
}

// SetVector2DValueFunctionName'' @ 14117c570

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetVector2DValueFunctionName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector2DValueFunctionName,
                 "SetVector2DValue");
  return;
}

// SetVector2ValueAtIndexFunctionName'' @ 14117c590

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SetVector2ValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector2ValueAtIndexFunctionName,
                 "SetVector2ValueAtIndex");
  return;
}

// SetVector2ValueFunctionName'' @ 14117c5b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetVector2ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetVector2ValueFunctionName,
                 "SetVector2Value");
  return;
}

// SetVector2ValueFunctionName'' @ 14117c5d0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetVector2ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector2ValueFunctionName,
                 "SetVector2Value");
  return;
}

// SetVector3ValueAtIndexFunctionName'' @ 14117c5f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SetVector3ValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector3ValueAtIndexFunctionName,
                 "SetVector3ValueAtIndex");
  return;
}

// SetVector3ValueFunctionName'' @ 14117c610

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetVector3ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetVector3ValueFunctionName,
                 "SetVector3Value");
  return;
}

// SetVector3ValueFunctionName'' @ 14117c630

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetVector3ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector3ValueFunctionName,
                 "SetVector3Value");
  return;
}

// SetVector4ValueAtIndexFunctionName'' @ 14117c650

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::
SetVector4ValueAtIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector4ValueAtIndexFunctionName,
                 "SetVector4ValueAtIndex");
  return;
}

// SetVector4ValueFunctionName'' @ 14117c670

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetVector4ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetVector4ValueFunctionName,
                 "SetVector4Value");
  return;
}

// SetVector4ValueFunctionName'' @ 14117c690

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetVector4ValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVector4ValueFunctionName,
                 "SetVector4Value");
  return;
}

// SetVectorValueFunctionName'' @ 14117c6b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid2DCollection::SetVectorValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid2DCollection::SetVectorValueFunctionName,"SetVectorValue"
                );
  return;
}

// SetVectorValueFunctionName'' @ 14117c6d0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::SetVectorValueFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceGrid3DCollection::SetVectorValueFunctionName,"SetVectorValue"
                );
  return;
}

// StaticResource'' @ 14117c6f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010101;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    local_10 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14117c890

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010100;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    local_10 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// UnitClampMaxName'' @ 14117ca30

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName,L"_UnitClampMax");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName__);
  return;
}

// UnitClampMinName'' @ 14117ca60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName,L"_UnitClampMin");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName__);
  return;
}

// `dynamic_initializer_for_'AtomicAddFunctionName'' @ 14117ca90

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__AtomicAddFunctionName__(void)

{
  ::FName::FName(&AtomicAddFunctionName,"AtomicAdd");
  return;
}

// `dynamic_initializer_for_'AtomicCASFunctionName'' @ 14117cab0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__AtomicCASFunctionName__(void)

{
  ::FName::FName(&AtomicCASFunctionName,"AtomicCompareAndExchange");
  return;
}

// `dynamic_initializer_for_'AtomicMaxFunctionName'' @ 14117cad0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__AtomicMaxFunctionName__(void)

{
  ::FName::FName(&AtomicMaxFunctionName,"AtomicMax");
  return;
}

// `dynamic_initializer_for_'AtomicMinFunctionName'' @ 14117caf0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__AtomicMinFunctionName__(void)

{
  ::FName::FName(&AtomicMinFunctionName,"AtomicMin");
  return;
}

// `dynamic_initializer_for_'CVarGPUMaxReadbackCount'' @ 14117cb10

void __cdecl NDIExportLocal::_dynamic_initializer_for__CVarGPUMaxReadbackCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUMaxReadbackCount,L"fx.Niagara.NDIExport.GPUMaxReadbackCount",
             &GGPUMaxReadbackCount,
             L"Maximum buffer instance count for the GPU readback when in PerParticleMode, where <= 0 means ignore."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGPUMaxReadbackCount__);
  return;
}

// `dynamic_initializer_for_'CVarMaxRegionCaptureCount'' @ 14117cb60

void __cdecl
NiagaraDataInterfaceLandscape::_dynamic_initializer_for__CVarMaxRegionCaptureCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxRegionCaptureCount,L"fx.Niagara.Landscape.MaxRegionCaptureCount",
             &GMaxRegionCaptureCount,
             L"The maximum number of collision components that will be captured by the Landscape DI."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxRegionCaptureCount__);
  return;
}

// `dynamic_initializer_for_'CVarMaxRegionSearchCount'' @ 14117cbb0

void __cdecl
NiagaraDataInterfaceLandscape::_dynamic_initializer_for__CVarMaxRegionSearchCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxRegionSearchCount,L"fx.Niagara.Landscape.MaxRegionSearchCount",
             &GMaxRegionSearchCount,
             L"The maximum number of collision components that will be evaluated for capture by the Landscape DI."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxRegionSearchCount__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGrid2DCubicInterpMethod'' @ 14117cc00

void __cdecl _dynamic_initializer_for__CVarNiagaraGrid2DCubicInterpMethod__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGrid2DCubicInterpMethod,L"fx.Niagara.Grid2D.CubicInterpMethod",
             &GNiagaraGrid2DCubicInterpMethod,L"0=Bridson, 1=monotonic/Fedkiw.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGrid2DCubicInterpMethod__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGrid2DOverrideFormat'' @ 14117cc50

void __cdecl _dynamic_initializer_for__CVarNiagaraGrid2DOverrideFormat__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGrid2DOverrideFormat,L"fx.Niagara.Grid2D.OverrideFormat",
             &GNiagaraGrid2DOverrideFormat,L"Optional override for all grids to use this format.\n",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGrid2DOverrideFormat__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGrid2DResolutionMultiplier'' @ 14117cca0

void __cdecl _dynamic_initializer_for__CVarNiagaraGrid2DResolutionMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGrid2DResolutionMultiplier,L"fx.Niagara.Grid2D.ResolutionMultiplier",
             &GNiagaraGrid2DResolutionMultiplier,L"Optional global modifier to grid resolution\n",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGrid2DResolutionMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGrid3DOverrideFormat'' @ 14117ccf0

void __cdecl _dynamic_initializer_for__CVarNiagaraGrid3DOverrideFormat__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGrid3DOverrideFormat,L"fx.Niagara.Grid3D.OverrideFormat",
             &GNiagaraGrid3DOverrideFormat,L"Optional override for all grids to use this format.\n",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGrid3DOverrideFormat__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGrid3DResolutionMultiplier'' @ 14117cd40

void __cdecl _dynamic_initializer_for__CVarNiagaraGrid3DResolutionMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGrid3DResolutionMultiplier,L"fx.Niagara.Grid3D.ResolutionMultiplier",
             &GNiagaraGrid3DResolutionMultiplier,L"Optional global modifier to grid resolution\n",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGrid3DResolutionMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGrid3DUseRGBAGrid'' @ 14117cd90

void __cdecl _dynamic_initializer_for__CVarNiagaraGrid3DUseRGBAGrid__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGrid3DUseRGBAGrid,L"fx.Niagara.Grid3D.UseRGBAGrid",
             &GNiagaraGrid3DUseRGBAGrid,L"Use RGBA textures when possible\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGrid3DUseRGBAGrid__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper287'' @ 14117cde0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper287__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_24>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper287,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper291'' @ 14117ce40

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper291__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_25>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper291,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'ExecToIndexFunctionName'' @ 14117cea0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__ExecToIndexFunctionName__(void)

{
  ::FName::FName(&ExecToIndexFunctionName,"ExecToIndex");
  return;
}

// `dynamic_initializer_for_'ExecToUVFunctionName'' @ 14117cec0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__ExecToUVFunctionName__(void)

{
  ::FName::FName(&ExecToUVFunctionName,"ExecToUV");
  return;
}

// `dynamic_initializer_for_'ExportDataName'' @ 14117cee0

void __cdecl NDIExportLocal::_dynamic_initializer_for__ExportDataName__(void)

{
  ::FName::FName(&ExportDataName,L"ExportParticleData");
  return;
}

// `dynamic_initializer_for_'GetSizeFunctionName'' @ 14117cf00

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__GetSizeFunctionName__(void)

{
  ::FName::FName(&GetSizeFunctionName,"GetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'GetValueFunctionName'' @ 14117cf20

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__GetValueFunctionName__(void)

{
  ::FName::FName(&GetValueFunctionName,"GetValue");
  return;
}

// `dynamic_initializer_for_'LinearToIndexFunctionName'' @ 14117cf40

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__LinearToIndexFunctionName__(void)

{
  ::FName::FName(&LinearToIndexFunctionName,"LinearToIndex");
  return;
}

// `dynamic_initializer_for_'LinearToUVFunctionName'' @ 14117cf60

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__LinearToUVFunctionName__(void)

{
  ::FName::FName(&LinearToUVFunctionName,"LinearToUV");
  return;
}

// `dynamic_initializer_for_'NAME_GenerateRvtFeedback'' @ 14117cf80

void __cdecl
NiagaraDataInterfaceLandscape::_dynamic_initializer_for__NAME_GenerateRvtFeedback__(void)

{
  ::FName::FName(&NAME_GenerateRvtFeedback,"GenerateVirtualTextureFeedback");
  return;
}

// `dynamic_initializer_for_'NAME_GetBaseColor'' @ 14117cfa0

void __cdecl NiagaraDataInterfaceLandscape::_dynamic_initializer_for__NAME_GetBaseColor__(void)

{
  ::FName::FName(&NAME_GetBaseColor,"GetBaseColor");
  return;
}

// `dynamic_initializer_for_'NAME_GetHeight'' @ 14117cfc0

void __cdecl NiagaraDataInterfaceLandscape::_dynamic_initializer_for__NAME_GetHeight__(void)

{
  ::FName::FName(&NAME_GetHeight,"GetHeight");
  return;
}

// `dynamic_initializer_for_'NAME_GetPhysicalMaterialIndex'' @ 14117cfe0

void __cdecl
NiagaraDataInterfaceLandscape::_dynamic_initializer_for__NAME_GetPhysicalMaterialIndex__(void)

{
  ::FName::FName(&NAME_GetPhysicalMaterialIndex,"GetPhysicalMaterialIndex");
  return;
}

// `dynamic_initializer_for_'NAME_GetWorldNormal'' @ 14117d000

void __cdecl NiagaraDataInterfaceLandscape::_dynamic_initializer_for__NAME_GetWorldNormal__(void)

{
  ::FName::FName(&NAME_GetWorldNormal,"GetWorldNormal");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData'' @ 14117d020

void __cdecl
_dynamic_initializer_for__NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData__(void)

{
  FName::FName(&NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData,L"ReceiveParticleData");
  return;
}

// `dynamic_initializer_for_'SetSizeFunctionName'' @ 14117d040

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__SetSizeFunctionName__(void)

{
  ::FName::FName(&SetSizeFunctionName,"SetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'SetValueFunctionName'' @ 14117d060

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__SetValueFunctionName__(void)

{
  ::FName::FName(&SetValueFunctionName,"SetValue");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 14117d080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar1,L"Collision",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 14117d110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraConstants == (FThreadSafeStaticStat<FStat_STAT_NiagaraConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraConstants,*pFVar1,
               L"Constant Setup [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 14117d1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDataInterfaceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,*pFVar1,
               L"Niagara GPU data interface memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 14117d230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar1,
               L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 14117d2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumParticles == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumParticles,*pFVar1,
               L"# CPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 14117d350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSystems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSystems == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSystems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSystems,*pFVar1,L"NumSystems",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 14117d3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar1,L"GT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 14117d470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar1,
               L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 14117d500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT,*pFVar1,L"RT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 14117d590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT_CNC,*pFVar1,
               L"RT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 14117d620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar1,
               L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 14117d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderTargetMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderTargetMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderTargetMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,*pFVar1,
               L"Niagara RenderTarget memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 14117d740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraTick,*pFVar1,L"Emitter Tick [CNC]",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 14117d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraVBMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraVBMemory == (FThreadSafeStaticStat<FStat_STAT_NiagaraVBMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraVBMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraVBMemory,*pFVar1,
               L"Niagara vertex buffer memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 14117d860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstances,*pFVar1,
               L"Total System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 14117d8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstancesSolo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstancesSolo ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstancesSolo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstancesSolo,*pFVar1,
               L"Total Solo System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StoreDataName_DEPRECATED'' @ 14117d980

void __cdecl NDIExportLocal::_dynamic_initializer_for__StoreDataName_DEPRECATED__(void)

{
  ::FName::FName(&StoreDataName_DEPRECATED,L"StoreParticleData");
  return;
}

// `dynamic_initializer_for_'TextureSizeAndInvSizeName'' @ 14117d9a0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__TextureSizeAndInvSizeName__(void)

{
  ::FString::FString(&TextureSizeAndInvSizeName,L"TextureSizeAndInvSize_");
  atexit(_dynamic_atexit_destructor_for__TextureSizeAndInvSizeName__);
  return;
}

// `dynamic_initializer_for_'TextureUAVName'' @ 14117d9d0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_initializer_for__TextureUAVName__(void)

{
  ::FString::FString(&TextureUAVName,L"TextureUAV_");
  atexit(_dynamic_atexit_destructor_for__TextureUAVName__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h__Script_Niagara_1225174002'' @ 14117da00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h__Script_Niagara_1225174002__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h__Script_Niagara_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h__Script_Niagara_1248993999'' @ 14117da50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h__Script_Niagara_1248993999__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h__Script_Niagara_296175945'' @ 14117da90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h__Script_Niagara_296175945__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollectionReader_h__Script_Niagara_3424445097'' @ 14117dad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollectionReader_h__Script_Niagara_3424445097__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollectionReader_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h__Script_Niagara_3175692850'' @ 14117db10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h__Script_Niagara_3175692850__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h__Script_Niagara_1261088817'' @ 14117db50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h__Script_Niagara_1261088817__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h__Script_Niagara_2230031874'' @ 14117db90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h__Script_Niagara_2230031874__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h__Script_Niagara_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h__Script_Niagara_518524896'' @ 14117dbe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h__Script_Niagara_518524896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize @ 14915bc90

UFunction * __cdecl Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideFormat_SetBit @ 14915bcd0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) | 1;
  return;
}

// ENDIExport_GPUAllocationMode_StaticEnum @ 14915bd20

UEnum * __cdecl ENDIExport_GPUAllocationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode,(UObject *)pUVar1,
                       L"ENDIExport_GPUAllocationMode");
  }
  return Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader @ 14915bfa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.OuterSingleton;
}

// Z_Construct_UClass_UNDILandscapeSimCacheData @ 14915c190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNDILandscapeSimCacheData(void)

{
  if (Z_Registration_Info_UClass_UNDILandscapeSimCacheData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNDILandscapeSimCacheData.OuterSingleton,
               &Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNDILandscapeSimCacheData.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceLandscape @ 14915c1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceLandscape(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode @ 14915c210

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode(void)

{
  if (Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton;
}

// ENDILandscape_SourceMode_StaticEnum @ 14915c250

UEnum * __cdecl ENDILandscape_SourceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode,(UObject *)pUVar1,
                       L"ENDILandscape_SourceMode");
  }
  return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton;
}

// NewProp_bVirtualTexturesSupported_SetBit @ 14915c350

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_bVirtualTexturesSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection @ 14915c360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14915c3a0

void __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D @ 14915c3b0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14915c3f0

void __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillTexture2D @ 14915c400

UFunction * __cdecl Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillTexture2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize @ 14915c440

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_GetTextureSize @ 14915c480

UFunction * __cdecl Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_GetTextureSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideFormat_SetBit @ 14915c4c0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection_Statics::NewProp_bOverrideFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x81) = *(byte *)((longlong)param_1 + 0x81) | 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollectionReader @ 14915c590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollectionReader(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollectionReader_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D @ 14915c750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode @ 14915c790

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton;
}

// ENiagaraDataInterfaceEmitterBindingMode_StaticEnum @ 14915c7d0

UEnum * __cdecl ENiagaraDataInterfaceEmitterBindingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode,
                       (UObject *)pUVar1,L"ENiagaraDataInterfaceEmitterBindingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton;
}

// NewStructOps @ 14915c810

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDataInterfaceEmitterBinding,&UE::CoreUObject::Private::Construct<FNiagaraDataInterfaceEmitterBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDataInterfaceEmitterBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraDataInterfaceEmitterBinding>,&UE::CoreUObject::Private::Copy<FNiagaraDataInterfaceEmitterBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceExport @ 14915c8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceExport(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraParticleCallbackHandler @ 14915c8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraParticleCallbackHandler(void)

{
  if (Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.OuterSingleton,
               &Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode @ 14915c920

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode(void)

{
  if (Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBasicParticleData @ 14915c960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBasicParticleData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBasicParticleData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBasicParticleData.InnerSingleton,
               &Z_Construct_UScriptStruct_FBasicParticleData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBasicParticleData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBasicParticleData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14915c9e0

void * __cdecl Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBasicParticleData,&UE::CoreUObject::Private::Construct<FBasicParticleData>,&UE::CoreUObject::Private::ConstructForTests<FBasicParticleData>,&UE::CoreUObject::Private::Destruct<FBasicParticleData>,&UE::CoreUObject::Private::Copy<FBasicParticleData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData @ 14915ca60

UFunction * __cdecl Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection @ 14915cb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14915cba0

void __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture @ 14915cbb0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14915cbf0

void __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture @ 14915cc00

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize @ 14915cc40

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 14915cc80

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FNiagaraDataInterfaceParametersCS_Grid2DCollection::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 14915cca0

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FNiagaraDataInterfaceParametersCS_Grid3DCollection::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// CastChecked<UNiagaraDataInterfaceExport_const_,UNiagaraDataInterface_const_> @ 14915d650

UNiagaraDataInterfaceExport * __cdecl
CastChecked<UNiagaraDataInterfaceExport_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceExport_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceExport::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceExport *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceExport_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid2DCollection_const_,UNiagaraDataInterface_const_> @ 14915d710

UNiagaraDataInterfaceGrid2DCollection * __cdecl
CastChecked<UNiagaraDataInterfaceGrid2DCollection_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid2DCollection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid2DCollection *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid2DCollectionReader_const_,UNiagaraDataInterface_const_> @ 14915d7d0

UNiagaraDataInterfaceGrid2DCollectionReader * __cdecl
CastChecked<UNiagaraDataInterfaceGrid2DCollectionReader_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid2DCollectionReader *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid3DCollection_const_,UNiagaraDataInterface_const_> @ 14915d890

UNiagaraDataInterfaceGrid3DCollection * __cdecl
CastChecked<UNiagaraDataInterfaceGrid3DCollection_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid3DCollection *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid3DCollectionReader_const_,UNiagaraDataInterface_const_> @ 14915d950

UNiagaraDataInterfaceGrid3DCollectionReader * __cdecl
CastChecked<UNiagaraDataInterfaceGrid3DCollectionReader_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid3DCollectionReader *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceIntRenderTarget2D_const_,UNiagaraDataInterface_const_> @ 14915da10

UNiagaraDataInterfaceIntRenderTarget2D * __cdecl
CastChecked<UNiagaraDataInterfaceIntRenderTarget2D_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceIntRenderTarget2D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceIntRenderTarget2D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceLandscape_const_,UNiagaraDataInterface_const_> @ 14915dad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceLandscape * __cdecl
CastChecked<UNiagaraDataInterfaceLandscape_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceLandscape_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceLandscape::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceLandscape *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceLandscape_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ALandscape,AActor> @ 14915db90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscape * __cdecl CastChecked<ALandscape,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ALandscape>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ALandscape_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALandscape *)param_1;
  }
  pFVar3 = GetTypeName<ALandscape>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceExport,UNiagaraDataInterface> @ 14915dc50

UNiagaraDataInterfaceExport * __cdecl
CastChecked<UNiagaraDataInterfaceExport,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceExport>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceExport::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceExport *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceExport>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid2DCollection,UNiagaraDataInterface> @ 14915dd10

UNiagaraDataInterfaceGrid2DCollection * __cdecl
CastChecked<UNiagaraDataInterfaceGrid2DCollection,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid2DCollection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid2DCollection *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid2DCollectionReader,UNiagaraDataInterface> @ 14915ddd0

UNiagaraDataInterfaceGrid2DCollectionReader * __cdecl
CastChecked<UNiagaraDataInterfaceGrid2DCollectionReader,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid2DCollectionReader *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid3DCollection,UNiagaraDataInterface> @ 14915de90

UNiagaraDataInterfaceGrid3DCollection * __cdecl
CastChecked<UNiagaraDataInterfaceGrid3DCollection,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid3DCollection *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid3DCollectionReader,UNiagaraDataInterface> @ 14915df50

UNiagaraDataInterfaceGrid3DCollectionReader * __cdecl
CastChecked<UNiagaraDataInterfaceGrid3DCollectionReader,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid3DCollectionReader *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceIntRenderTarget2D,UNiagaraDataInterface> @ 14915e010

UNiagaraDataInterfaceIntRenderTarget2D * __cdecl
CastChecked<UNiagaraDataInterfaceIntRenderTarget2D,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceIntRenderTarget2D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceIntRenderTarget2D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceLandscape,UNiagaraDataInterface> @ 14915e0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceLandscape * __cdecl
CastChecked<UNiagaraDataInterfaceLandscape,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceLandscape>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceLandscape::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceLandscape *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceLandscape>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UTextureRenderTarget2D,UObject> @ 14915e190

UTextureRenderTarget2D * __cdecl CastChecked<UTextureRenderTarget2D,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTextureRenderTarget2D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTextureRenderTarget2D *)param_1;
  }
  pFVar3 = GetTypeName<UTextureRenderTarget2D>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UTextureRenderTarget,UObject> @ 14915e250

UTextureRenderTarget * __cdecl CastChecked<UTextureRenderTarget,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTextureRenderTarget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTextureRenderTarget *)param_1;
  }
  pFVar3 = GetTypeName<UTextureRenderTarget>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<TObjectPtr<UPhysicalMaterial>,int> @ 14915e310

bool __cdecl
CompareItems<TObjectPtr<UPhysicalMaterial>,int>
          (TObjectPtr<UPhysicalMaterial> *param_1,TObjectPtr<UPhysicalMaterial> *param_2,int param_3
          )

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<UPhysicalMaterial>_u_0 *)(lVar1 + (longlong)param_2))->DebugPtr !=
          param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CreateRenderTarget<UTextureRenderTarget2D,FNDIIntRenderTarget2DInstanceData_GameThread> @ 14915e340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __cdecl
NiagaraDataInterfaceRenderTargetCommon::
CreateRenderTarget<UTextureRenderTarget2D,FNDIIntRenderTarget2DInstanceData_GameThread>
          (FNiagaraSystemInstance *param_1,FNDIIntRenderTarget2DInstanceData_GameThread *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  FNiagaraWorldManager *this;
  UClass *pUVar6;
  UTextureRenderTarget2D *pUVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  UTextureRenderTarget2D *local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  this = FNiagaraSystemInstance::GetWorldManager(param_1);
  if (this == (FNiagaraWorldManager *)0x0) {
    return false;
  }
  param_2->bManagedTexture = true;
  pUVar6 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  pUVar7 = (UTextureRenderTarget2D *)FNiagaraWorldManager::ObjectPoolGetOrCreate(this,pUVar6);
  if (pUVar7 == (UTextureRenderTarget2D *)0x0) {
    pFVar8 = GetTypeName<UTextureRenderTarget2D>(&local_40);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar6 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  iVar5 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar6->_padding_)) {
    pFVar8 = GetTypeName<UTextureRenderTarget2D>(&local_30);
    pwVar12 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UObject>(&local_20,(UObject *)pUVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar11);
  }
  pTVar10 = &this->ReferencedObjects;
  param_2->TargetTexture = pUVar7;
  pFVar9 = (pTVar10->AllocatorInstance).Data;
  pFVar2 = pFVar9 + (longlong)(this->ReferencedObjects).ArrayNum * 8;
  do {
    if (pFVar9 == pFVar2) {
LAB_14915e418:
      local_48 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar2 + (longlong)(this->ReferencedObjects).ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar4 = (*pcVar3)();
        return (bool)uVar4;
      }
      iVar5 = (this->ReferencedObjects).ArrayNum;
      piVar1 = &(this->ReferencedObjects).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar10->AllocatorInstance,piVar1);
      }
      (this->ReferencedObjects).ArrayNum = iVar5 + 1;
      *(UTextureRenderTarget2D **)((pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_48 != (UTextureRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_48);
      }
      return true;
    }
    if (*(UTextureRenderTarget2D **)pFVar9 == (UTextureRenderTarget2D *)0x0) {
      bVar13 = pUVar7 == (UTextureRenderTarget2D *)0x0;
    }
    else {
      bVar13 = *(UTextureRenderTarget2D **)pFVar9 == pUVar7;
    }
    if (bVar13) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ReferencedObjects.Contains(InObject)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraWorldManager.h"
                          ,0x130,L"");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        uVar4 = (*pcVar3)();
        return (bool)uVar4;
      }
      goto LAB_14915e418;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// DefaultConstructItems<FRegionRequest,int> @ 14915e580

void __cdecl DefaultConstructItems<FRegionRequest,int>(void *param_1,int param_2)

{
  TVector2<double> TVar1;
  TVector2<double> TVar2;
  undefined1 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined1 *)((longlong)param_1 + 0x20);
    do {
      TVar2.field0_0x0 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
      TVar1.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      *puVar3 = 1;
      ((TVector2<double>_u_0 *)(puVar3 + -0x10))->_s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar3 + -0x20))->_s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined2 *)(puVar3 + 0xc) = 0x101;
      puVar3[0xe] = 1;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 0x30;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int> @ 14915e5d0

void __cdecl
DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int>
          (TSharedPtr<FNDI_Landscape_SharedResource,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int> @ 14915e610

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
          (TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *param_1,
          int param_2)

{
  FNiagaraPooledRWTexture *this;
  IPooledRenderTarget *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FNiagaraPooledRWTexture *)0x0) {
      FNiagaraPooledRWTexture::Release(this);
      pIVar1 = (this->Texture).Reference;
      if (pIVar1 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar1->_padding_ + 0x38))();
      }
      operator_delete(this,0x28);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNDI_Landscape_SharedResource::Release'::__l5::TSTR_BeginDestroyCommand991>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14915ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNDI_Landscape_SharedResource::Release_::__l5::TSTR_BeginDestroyCommand991>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNDI_Landscape_SharedResource::Release'::__l5::TSTR_BeginDestroyCommand991>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149160061;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149160255;
  }
LAB_149160061:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916013f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916013f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149160255:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::TSTR_FNDIExport_AddProxy187>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149160290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceExport::InitPerInstanceData_::__l2::TSTR_FNDIExport_AddProxy187>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::TSTR_FNDIExport_AddProxy187>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491603e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491605d5;
  }
LAB_1491603e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491604bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491604bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491605d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::TSTR_FNDIExport_RemoveProxy209>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149160610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceExport::DestroyPerInstanceData_::__l2::TSTR_FNDIExport_RemoveProxy209>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::TSTR_FNDIExport_RemoveProxy209>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149160761;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149160955;
  }
LAB_149160761:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916083f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916083f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149160955:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::TSTR_FNDIExport_UpdateHandler247>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149160990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceExport::PerInstanceTick_::__l20::TSTR_FNDIExport_UpdateHandler247>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::TSTR_FNDIExport_UpdateHandler247>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149160ae1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149160cd5;
  }
LAB_149160ae1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149160bbf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149160bbf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149160cd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::TSTR_FNiagaraDICreateProxy1725>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149160d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceLandscape::InitPerInstanceData_::__l2::TSTR_FNiagaraDICreateProxy1725>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::TSTR_FNiagaraDICreateProxy1725>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149160e61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149161055;
  }
LAB_149160e61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149160f3f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149160f3f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149161055:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData2099>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149161090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData2099>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData2099>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491611e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491613d5;
  }
LAB_1491611e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491612bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491612bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491613d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData3416>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149161410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData3416>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData3416>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149161561;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149161755;
  }
LAB_149161561:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916163f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916163f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149161755:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData630>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149161790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData630>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData630>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491618e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149161ad5;
  }
LAB_1491618e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491619bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491619bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149161ad5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::TSTR_FNiagaraDIDestroyProxy1742>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149161b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceLandscape::DestroyPerInstanceData_::__l5::TSTR_FNiagaraDIDestroyProxy1742>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::TSTR_FNiagaraDIDestroyProxy1742>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149161c61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149161e55;
  }
LAB_149161c61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149161d3f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149161d3f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149161e55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::TSTR_FNiagaraDIUpdateProxy1796>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149161e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceLandscape::PerInstanceTick_::__l5::TSTR_FNiagaraDIUpdateProxy1796>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::TSTR_FNiagaraDIUpdateProxy1796>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149161fe1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491621d5;
  }
LAB_149161fe1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491620bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491620bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491621d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::TSTR_FUpdateDIColorCurve2309>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149162210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::FillTexture2D_::__l2::TSTR_FUpdateDIColorCurve2309>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::TSTR_FUpdateDIColorCurve2309>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149162361;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149162555;
  }
LAB_149162361:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916243f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916243f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149162555:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::TSTR_FUpdateDIColorCurve2365>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149162590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D_::__l2::TSTR_FUpdateDIColorCurve2365>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::TSTR_FUpdateDIColorCurve2365>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491626e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491628d5;
  }
LAB_1491626e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491627bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491627bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491628d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::TSTR_FUpdateData123>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149162910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData_::__l35::TSTR_FUpdateData123>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::TSTR_FUpdateData123>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149162a61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149162c55;
  }
LAB_149162a61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149162b3f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149162b3f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149162c55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::TSTR_FUpdateData126>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149162c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData_::__l35::TSTR_FUpdateData126>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::TSTR_FUpdateData126>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149162de1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149162fd5;
  }
LAB_149162de1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149162ebf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149162ebf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149162fd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::TSTR_FUpdateData146>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149163010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData_::__l2::TSTR_FUpdateData146>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::TSTR_FUpdateData146>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149163161;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149163355;
  }
LAB_149163161:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916323f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916323f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149163355:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::TSTR_FUpdateData157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149163390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData_::__l2::TSTR_FUpdateData157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::TSTR_FUpdateData157>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491634e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491636d5;
  }
LAB_1491634e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491635bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491635bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491636d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::TSTR_FUpdateData2049>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149163710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData_::__l2::TSTR_FUpdateData2049>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::TSTR_FUpdateData2049>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149163861;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149163a55;
  }
LAB_149163861:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916393f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916393f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149163a55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::TSTR_FUpdateData2125>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149163a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick_::__l2::TSTR_FUpdateData2125>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::TSTR_FUpdateData2125>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149163be1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149163dd5;
  }
LAB_149163be1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149163cbf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149163cbf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149163dd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData2544>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149163e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData2544>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData2544>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149163f61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149164155;
  }
LAB_149163f61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916403f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916403f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149164155:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::TSTR_FUpdateData3242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149164190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData_::__l100::TSTR_FUpdateData3242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::TSTR_FUpdateData3242>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491642e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491644d5;
  }
LAB_1491642e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491643bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491643bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491644d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::TSTR_FUpdateData3363>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149164510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData_::__l2::TSTR_FUpdateData3363>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::TSTR_FUpdateData3363>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149164661;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149164855;
  }
LAB_149164661:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916473f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916473f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149164855:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::TSTR_FUpdateData3438>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149164890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick_::__l2::TSTR_FUpdateData3438>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::TSTR_FUpdateData3438>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491649e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149164bd5;
  }
LAB_1491649e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149164abf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149164abf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149164bd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData3812>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149164c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData3812>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData3812>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149164d61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149164f55;
  }
LAB_149164d61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149164e3f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149164e3f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149164f55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::TSTR_FUpdateData599>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149164f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData_::__l2::TSTR_FUpdateData599>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::TSTR_FUpdateData599>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1491650e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1491652d5;
  }
LAB_1491650e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1491651bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491651bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1491652d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::TSTR_FUpdateData676>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149165310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate_::__l9::TSTR_FUpdateData676>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::TSTR_FUpdateData676>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149165461;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149165655;
  }
LAB_149165461:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14916553f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14916553f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149165655:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDefault<UNiagaraSettings> @ 149165710

UNiagaraSettings * __cdecl GetDefault<UNiagaraSettings>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UNiagaraSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UNiagaraSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<UNiagaraDataInterfaceExport_const_> @ 1491657f0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceExport_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceExport::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_> @ 149165830

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid2DCollection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader_const_> @ 149165870

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_> @ 1491658b0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader_const_> @ 1491658f0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D_const_> @ 149165930

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceIntRenderTarget2D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceLandscape_const_> @ 149165970

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceLandscape_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceLandscape::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ALandscape> @ 1491659b0

FString * __cdecl GetTypeName<ALandscape>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ALandscape_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceExport> @ 1491659f0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceExport>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceExport::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid2DCollection> @ 149165a30

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid2DCollection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader> @ 149165a70

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid3DCollection> @ 149165ab0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader> @ 149165af0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D> @ 149165b30

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceIntRenderTarget2D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceIntRenderTarget2D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceLandscape> @ 149165b70

FString * __cdecl GetTypeName<UNiagaraDataInterfaceLandscape>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceLandscape::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTextureRenderTarget2D> @ 149165bb0

FString * __cdecl GetTypeName<UTextureRenderTarget2D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTextureRenderTarget> @ 149165bf0

FString * __cdecl GetTypeName<UTextureRenderTarget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UTextureRenderTarget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UNDILandscapeSimCacheData> @ 149165c30

void __cdecl InternalConstructor<UNDILandscapeSimCacheData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNDILandscapeSimCacheData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceExport> @ 149165c70

void __cdecl InternalConstructor<UNiagaraDataInterfaceExport>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceExport__6B_;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)(this + 1));
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40;
    *(undefined4 *)&this[1].Proxy.Ptr = 0x3f800000;
    pFVar2 = operator_new(0x60);
    pFVar3 = (FNiagaraDataInterfaceProxy *)0x0;
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNDIExportProxy__6B_;
      pFVar2[1]._padding_ = 0;
      pFVar2[1].SourceDIName.ComparisonIndex = 0;
      pFVar2[1].SourceDIName.Number = 0;
      pFVar2[3]._padding_ = 0;
      pFVar2[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar2[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar2[4]._padding_ + 4) = 0;
      pFVar2[5]._padding_ = 0;
      pFVar2[5].SourceDIName.ComparisonIndex.Value = 0;
      pFVar3 = pFVar2;
    }
    pFVar2 = (this->Proxy).Ptr;
    if ((pFVar2 != pFVar3) &&
       ((this->Proxy).Ptr = pFVar3, pFVar2 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceGrid2DCollection> @ 149165da0

void __cdecl InternalConstructor<UNiagaraDataInterfaceGrid2DCollection>(FObjectInitializer *param_1)

{
  if ((UNiagaraDataInterfaceGrid2DCollection *)param_1->Obj !=
      (UNiagaraDataInterfaceGrid2DCollection *)0x0) {
    UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection
              ((UNiagaraDataInterfaceGrid2DCollection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceGrid2DCollectionReader> @ 149165dc0

void __cdecl
InternalConstructor<UNiagaraDataInterfaceGrid2DCollectionReader>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceGrid2DCollection *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceGrid2DCollection *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceGrid2DCollection *)0x0) {
    UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection(this,param_1);
    puVar3 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollectionReader__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    puVar2 = operator_new(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyGrid2DCollectionProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    puVar2 = (undefined8 *)this->_padding_;
    if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&(this->RenderTargetUserParameter).Parameter._padding_ = iVar1;
    this->bUseIndirection = true;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceGrid3DCollection> @ 149165ef0

void __cdecl InternalConstructor<UNiagaraDataInterfaceGrid3DCollection>(FObjectInitializer *param_1)

{
  if ((UNiagaraDataInterfaceGrid3DCollection *)param_1->Obj !=
      (UNiagaraDataInterfaceGrid3DCollection *)0x0) {
    UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection
              ((UNiagaraDataInterfaceGrid3DCollection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceGrid3DCollectionReader> @ 149165f10

void __cdecl
InternalConstructor<UNiagaraDataInterfaceGrid3DCollectionReader>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceGrid3DCollection *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceGrid3DCollection *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceGrid3DCollection *)0x0) {
    UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection(this,param_1);
    puVar3 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollectionReader__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    puVar2 = operator_new(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyGrid3DCollectionProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    puVar2 = (undefined8 *)this->_padding_;
    if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&(this->RenderTargetUserParameter).Parameter._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceIntRenderTarget2D> @ 149166040

void __cdecl
InternalConstructor<UNiagaraDataInterfaceIntRenderTarget2D>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceIntRenderTarget2D__6B_;
    ((TIntPoint<int>_u_0 *)(this + 1))->_s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x8);
    puVar2 = operator_new(0x60);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &___7FNDIIntRenderTarget2DProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    puVar2 = *(undefined8 **)&this->field_0x28;
    if ((puVar2 != puVar3) &&
       (*(undefined8 **)&this->field_0x28 = puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1].field_0x10 = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceLandscape> @ 149166160

void __cdecl InternalConstructor<UNiagaraDataInterfaceLandscape>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceLandscape__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar1 = operator_new(0x60);
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1[2]._padding_ = 0;
      pFVar1[2].SourceDIName.ComparisonIndex = 0;
      pFVar1[2].SourceDIName.Number = 0;
      pFVar1[4].SourceDIName.ComparisonIndex = 0;
      pFVar1[4].SourceDIName.Number = 0;
      pFVar1[5].SourceDIName.ComparisonIndex = 0;
      pFVar1[5].SourceDIName.Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyLandscape__6B_;
      (pFVar1->SourceDIName).ComparisonIndex = 0;
      (pFVar1->SourceDIName).Number = 0;
      pFVar1[1]._padding_ = 0;
      pFVar1[1].SourceDIName.ComparisonIndex = 0;
      pFVar1[1].SourceDIName.Number = 0;
      pFVar1[3]._padding_ = 0;
      pFVar1[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar1[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar1[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
      pFVar1[5]._padding_ = 0;
      pFVar2 = pFVar1;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014916621d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraParticleCallbackHandler> @ 149166230

void __cdecl InternalConstructor<UNiagaraParticleCallbackHandler>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNiagaraParticleCallbackHandler__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNDILandscapeSimCacheData> @ 149166260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNDILandscapeSimCacheData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNDILandscapeSimCacheData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNDILandscapeSimCacheData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceExport> @ 149166320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceExport>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceExport::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceExport__6B_;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)(this + 1));
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40;
    *(undefined4 *)&this[1].Proxy.Ptr = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollection> @ 1491663f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceGrid2DCollection *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceGrid2DCollection::GetPrivateStaticClass();
  pUVar3 = (UNiagaraDataInterfaceGrid2DCollection *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraDataInterfaceGrid2DCollection *)0x0) {
    pUVar3 = UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollectionReader> @ 149166490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollectionReader>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceGrid2DCollection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceGrid2DCollectionReader::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceGrid2DCollection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceGrid2DCollection *)0x0) {
    UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollectionReader__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollection> @ 149166560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceGrid3DCollection *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceGrid3DCollection::GetPrivateStaticClass();
  pUVar3 = (UNiagaraDataInterfaceGrid3DCollection *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraDataInterfaceGrid3DCollection *)0x0) {
    pUVar3 = UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollectionReader> @ 149166600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollectionReader>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceGrid3DCollection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceGrid3DCollectionReader::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceGrid3DCollection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceGrid3DCollection *)0x0) {
    UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollectionReader__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceIntRenderTarget2D> @ 1491666d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceIntRenderTarget2D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceIntRenderTarget2D::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceIntRenderTarget2D__6B_;
    ((TIntPoint<int>_u_0 *)(this + 1))->_s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x8);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceLandscape> @ 149166790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceLandscape>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceLandscape::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceLandscape__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraParticleCallbackHandler> @ 149166850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraParticleCallbackHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraParticleCallbackHandler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraParticleCallbackHandler__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UNiagaraDataInterface,UNiagaraDataInterface_const_*,0> @ 149166900

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraDataInterface,UNiagaraDataInterface_const_*,0>
          (TObjectPtr<UNiagaraDataInterface> *param_1,UNiagaraDataInterface **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraDataInterface *)0x0) {
    return *param_2 == (UNiagaraDataInterface *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UNiagaraEmitter,UNiagaraEmitter_*,0> @ 149166920

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraEmitter,UNiagaraEmitter_*,0>
          (TObjectPtr<UNiagaraEmitter> *param_1,UNiagaraEmitter **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraEmitter *)0x0) {
    return *param_2 == (UNiagaraEmitter *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewIntrusiveReferenceController<1,FNDI_Landscape_SharedResource,FNDI_Landscape_SharedResource::FResourceKey_&> @ 149166940

TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,FNDI_Landscape_SharedResource,FNDI_Landscape_SharedResource::FResourceKey_&>
          (FResourceKey *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *pTVar6;
  
  pTVar6 = ::operator_new(0x1b0);
  if (pTVar6 != (TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNDI_Landscape_SharedResource___00_SharedPointerInternals__6B_
    ;
    (pTVar6->ObjectStorage).Pad[0] = '\0';
    (pTVar6->ObjectStorage).Pad[1] = '\0';
    (pTVar6->ObjectStorage).Pad[2] = '\0';
    (pTVar6->ObjectStorage).Pad[3] = '\0';
    (pTVar6->ObjectStorage).Pad[4] = '\0';
    (pTVar6->ObjectStorage).Pad[5] = '\0';
    (pTVar6->ObjectStorage).Pad[6] = '\0';
    (pTVar6->ObjectStorage).Pad[7] = '\0';
    *(undefined8 *)((pTVar6->ObjectStorage).Pad + 8) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)((pTVar6->ObjectStorage).Pad + 0x10) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[0][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x20) = UE::Math::TMatrix<double>::Identity.M[0][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x28) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[0][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x30) = UE::Math::TMatrix<double>::Identity.M[0][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x38) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[1][1];
    puVar2 = (pTVar6->ObjectStorage).Pad + 0x160;
    *(double *)((pTVar6->ObjectStorage).Pad + 0x40) = UE::Math::TMatrix<double>::Identity.M[1][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x48) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[1][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x50) = UE::Math::TMatrix<double>::Identity.M[1][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x58) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[2][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x60) = UE::Math::TMatrix<double>::Identity.M[2][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x68) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[2][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x70) = UE::Math::TMatrix<double>::Identity.M[2][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x78) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[3][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x80) = UE::Math::TMatrix<double>::Identity.M[3][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x88) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[3][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x90) = UE::Math::TMatrix<double>::Identity.M[3][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x98) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[0][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xa0) = UE::Math::TMatrix<double>::Identity.M[0][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xa8) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[0][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xb0) = UE::Math::TMatrix<double>::Identity.M[0][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xb8) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[1][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xc0) = UE::Math::TMatrix<double>::Identity.M[1][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 200) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[1][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xd0) = UE::Math::TMatrix<double>::Identity.M[1][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xd8) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[2][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xe0) = UE::Math::TMatrix<double>::Identity.M[2][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xe8) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[2][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xf0) = UE::Math::TMatrix<double>::Identity.M[2][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0xf8) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[3][1];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x100) = UE::Math::TMatrix<double>::Identity.M[3][0];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x108) = dVar5;
    dVar5 = UE::Math::TMatrix<double>::Identity.M[3][3];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x110) = UE::Math::TMatrix<double>::Identity.M[3][2];
    *(double *)((pTVar6->ObjectStorage).Pad + 0x118) = dVar5;
    (pTVar6->ObjectStorage).Pad[0x120] = '\0';
    (pTVar6->ObjectStorage).Pad[0x121] = '\0';
    (pTVar6->ObjectStorage).Pad[0x122] = '\0';
    (pTVar6->ObjectStorage).Pad[0x123] = '\0';
    (pTVar6->ObjectStorage).Pad[0x124] = '\0';
    (pTVar6->ObjectStorage).Pad[0x125] = '\0';
    (pTVar6->ObjectStorage).Pad[0x126] = 0xf0;
    (pTVar6->ObjectStorage).Pad[0x127] = '?';
    (pTVar6->ObjectStorage).Pad[0x128] = '\0';
    (pTVar6->ObjectStorage).Pad[0x129] = '\0';
    (pTVar6->ObjectStorage).Pad[0x12a] = '\0';
    (pTVar6->ObjectStorage).Pad[299] = '\0';
    (pTVar6->ObjectStorage).Pad[300] = '\0';
    (pTVar6->ObjectStorage).Pad[0x12d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x12e] = 0xf0;
    (pTVar6->ObjectStorage).Pad[0x12f] = '?';
    (pTVar6->ObjectStorage).Pad[0x140] = '\0';
    (pTVar6->ObjectStorage).Pad[0x141] = '\0';
    (pTVar6->ObjectStorage).Pad[0x142] = '\0';
    (pTVar6->ObjectStorage).Pad[0x143] = '\0';
    (pTVar6->ObjectStorage).Pad[0x144] = '\0';
    (pTVar6->ObjectStorage).Pad[0x145] = '\0';
    (pTVar6->ObjectStorage).Pad[0x146] = '\0';
    (pTVar6->ObjectStorage).Pad[0x147] = '\0';
    (pTVar6->ObjectStorage).Pad[0x148] = '\0';
    (pTVar6->ObjectStorage).Pad[0x149] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14e] = 0xf0;
    (pTVar6->ObjectStorage).Pad[0x14f] = '?';
    (pTVar6->ObjectStorage).Pad[0x150] = '\0';
    (pTVar6->ObjectStorage).Pad[0x151] = '\0';
    (pTVar6->ObjectStorage).Pad[0x152] = '\0';
    (pTVar6->ObjectStorage).Pad[0x153] = '\0';
    (pTVar6->ObjectStorage).Pad[0x154] = '\0';
    (pTVar6->ObjectStorage).Pad[0x155] = '\0';
    (pTVar6->ObjectStorage).Pad[0x156] = 0xf0;
    (pTVar6->ObjectStorage).Pad[0x157] = '?';
    (pTVar6->ObjectStorage).Pad[0x130] = '\0';
    (pTVar6->ObjectStorage).Pad[0x131] = '\0';
    (pTVar6->ObjectStorage).Pad[0x132] = '\0';
    (pTVar6->ObjectStorage).Pad[0x133] = '\0';
    (pTVar6->ObjectStorage).Pad[0x134] = '\0';
    (pTVar6->ObjectStorage).Pad[0x135] = '\0';
    (pTVar6->ObjectStorage).Pad[0x136] = '\0';
    (pTVar6->ObjectStorage).Pad[0x137] = '\0';
    (pTVar6->ObjectStorage).Pad[0x138] = '\0';
    (pTVar6->ObjectStorage).Pad[0x139] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13f] = '\0';
    *(FWeakObjectPtr *)((pTVar6->ObjectStorage).Pad + 0x158) = (param_1->Source).WeakPtr;
    puVar1 = (pTVar6->ObjectStorage).Pad + 0x16c;
    *(FScriptContainerElement **)puVar2 = (FScriptContainerElement *)0x0;
    iVar3 = (param_1->PhysicalMaterials).ArrayNum;
    pFVar4 = (param_1->PhysicalMaterials).AllocatorInstance.Data;
    *(int *)((pTVar6->ObjectStorage).Pad + 0x168) = iVar3;
    if (iVar3 == 0) {
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,0,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
      memcpy(*(FScriptContainerElement **)puVar2,pFVar4,(longlong)iVar3 << 3);
    }
    puVar2 = (pTVar6->ObjectStorage).Pad + 0x170;
    *(FScriptContainerElement **)puVar2 = (FScriptContainerElement *)0x0;
    puVar1 = (pTVar6->ObjectStorage).Pad + 0x17c;
    iVar3 = (param_1->CapturedRegions).ArrayNum;
    pFVar4 = (param_1->CapturedRegions).AllocatorInstance.Data;
    *(int *)((pTVar6->ObjectStorage).Pad + 0x178) = iVar3;
    if (iVar3 == 0) {
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,0,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
      memcpy(*(FScriptContainerElement **)puVar2,pFVar4,(longlong)iVar3 << 3);
    }
    *(TIntPoint<int>_u_0 *)((pTVar6->ObjectStorage).Pad + 0x180) =
         (param_1->MinCaptureRegion).field0_0x0;
    *(TIntPoint<int>_u_0 *)((pTVar6->ObjectStorage).Pad + 0x188) =
         (param_1->MaxCaptureRegion).field0_0x0;
    (pTVar6->ObjectStorage).Pad[400] = param_1->IncludesCachedHeight;
    (pTVar6->ObjectStorage).Pad[0x191] = param_1->IncludesCachedPhysMat;
    (pTVar6->ObjectStorage).Pad[0x198] = '\0';
    (pTVar6->ObjectStorage).Pad[0x199] = '\0';
    (pTVar6->ObjectStorage).Pad[0x19a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x19b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x19c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x19d] = '\0';
    return pTVar6;
  }
  return (TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *)0x0;
}

// ReleaseRenderTarget<FNDIIntRenderTarget2DInstanceData_GameThread> @ 149166d20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
ReleaseRenderTarget<FNDIIntRenderTarget2DInstanceData_GameThread>
          (FNiagaraSystemInstance *param_1,FNDIIntRenderTarget2DInstanceData_GameThread *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FNiagaraWorldManager *this;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TObjectPtr<UObject>_u_0 local_res10;
  
  if (((param_2->bManagedTexture != false) &&
      (param_2->TargetTexture != (UTextureRenderTarget2D *)0x0)) &&
     (this = FNiagaraSystemInstance::GetWorldManager(param_1), this != (FNiagaraWorldManager *)0x0))
  {
    (param_2->TargetTexture->OverrideFormat).Value = '\0';
    FNiagaraWorldManager::ObjectPoolReturn(this,(UObject *)param_2->TargetTexture);
    pFVar3 = (this->ReferencedObjects).AllocatorInstance.Data;
    local_res10 = (TObjectPtr<UObject>_u_0)param_2->TargetTexture;
    pFVar1 = pFVar3 + (longlong)(this->ReferencedObjects).ArrayNum * 8;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
      if (*(UTextureRenderTarget2D **)pFVar3 == (UTextureRenderTarget2D *)0x0) {
        bVar4 = (UTextureRenderTarget2D *)local_res10.DebugPtr == (UTextureRenderTarget2D *)0x0;
      }
      else {
        bVar4 = *(UTextureRenderTarget2D **)pFVar3 == (UTextureRenderTarget2D *)local_res10.DebugPtr
        ;
      }
      if (bVar4) goto LAB_149166dd6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedObjects.Contains(InObject)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraWorldManager.h"
                       ,0x135,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_149166dd6:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UTextureRenderTarget2D *)local_res10.DebugPtr != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable(local_res10.DebugPtr);
    }
    TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->ReferencedObjects,(TObjectPtr<UObject> *)&local_res10.ObjectPtr,Default);
    param_2->TargetTexture = (UTextureRenderTarget2D *)0x0;
    param_2->bManagedTexture = false;
  }
  return;
}

// StaticEnum<enum_ENDIExport_GPUAllocationMode> @ 149167ab0

UEnum * __cdecl StaticEnum<enum_ENDIExport_GPUAllocationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode,(UObject *)pUVar1,
                       L"ENDIExport_GPUAllocationMode");
  }
  return Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton;
}

// StaticEnum<enum_ENDILandscape_SourceMode> @ 149167af0

UEnum * __cdecl StaticEnum<enum_ENDILandscape_SourceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode,(UObject *)pUVar1,
                       L"ENDILandscape_SourceMode");
  }
  return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDataInterfaceEmitterBindingMode> @ 149167b30

UEnum * __cdecl StaticEnum<enum_ENiagaraDataInterfaceEmitterBindingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode,
                       (UObject *)pUVar1,L"ENiagaraDataInterfaceEmitterBindingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton;
}

// StaticGetTypeLayoutDesc<TArray<unsigned_int,TMemoryImageAllocator<0>_>_> @ 149167b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
StaticGetTypeLayoutDesc<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>(void)

{
  if ((DAT_155168bff & 2) == 0) {
    DAT_155168bff = DAT_155168bff | 3;
    _DAT_155168bf0 = 0x10;
    _DAT_155168ba0 = L"(TArray<T, AllocatorType>)";
    _DAT_155168bb8 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155168bc0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155168bc8 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallAppendHash
    ;
    _DAT_155168bd0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155168bd8 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155168bb0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_155168bf8 = 8;
    DAT_155168bfc = 0;
    _DAT_155168bf4 = 0x10;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
}

// <lambda_1> @ 149167d70

<lambda_1> * __thiscall
`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  *(FWeakObjectPtr *)this = (param_1->WeakCallbackHandler).WeakPtr;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->ParticleData).ArrayNum;
  _Src = (param_1->ParticleData).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x14));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x38);
  }
  *(FWeakObjectPtr *)((longlong)this + 0x18) = (param_1->WeakSystem).WeakPtr;
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&(param_1->SystemTileOffset).field0_0x0;
  *(float *)((longlong)this + 0x28) = (param_1->SystemTileOffset).field0_0x0._s_0.Z;
  return this;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a3d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceExport::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a3f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,0,1> @ 14916a490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_NDIExportLocal::EnqueueGameThreadCallback_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::`2'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,1,1> @ 14916a4b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,1,1> @ 14916a4d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::FillTexture2D_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,1,1> @ 14916a4f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceExport::InitPerInstanceData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,1,1> @ 14916a510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,1,1> @ 14916a570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x50);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,1,0> @ 14916a590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceLandscape::InitPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1> @ 14916a5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1> @ 14916a5d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,1,0> @ 14916a5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceLandscape::DestroyPerInstanceData_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,1,1> @ 14916a610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceLandscape::PerInstanceTick_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1> @ 14916a630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1> @ 14916a690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 200));
  }
  if (*(void **)((longlong)this + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,0,1> @ 14916a6f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNDIExportProxy::PostStage_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__PostStage_FNDIExportProxy__UEAAXAEBUFNDIGpuComputePostStageContext___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,1,0> @ 14916a710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNDI_Landscape_SharedResource::Release_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,1,1> @ 14916a730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate_::__l9::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::`9'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x50);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,1,1> @ 14916a750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceExport::PerInstanceTick_::__l20::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::`20'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1> @ 14916a770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData_::__l35::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::`35'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1> @ 14916a790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData_::__l35::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::`35'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,1,0> @ 14916a7b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData_::__l100::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::`100'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,1,1> @ 14916a7d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData_::__l2::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa0));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,0,0> @ 14916a830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 14916c200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UObject *this_00;
  UClass *pUVar6;
  UFunction *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  UObject *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId50,"NiagaraExportGTCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
               ,0x32);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId50);
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar5 == (UObject *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  else {
    this_00 = FWeakObjectPtr::Get(this);
    if (this_00 == (UObject *)0x0) {
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    }
    else {
      pFVar1 = (ForAnyElementType *)((longlong)this + 8);
      local_68 = (double)*(float *)((longlong)this + 0x20) * __real_4140000000000000;
      local_58 = (double)*(float *)((longlong)this + 0x28) * __real_4140000000000000;
      pUVar8 = *(UClass **)&this_00->field_0x10;
      uStack_60 = (double)*(float *)((longlong)this + 0x24) * __real_4140000000000000;
      pUVar6 = UNiagaraParticleCallbackHandler::StaticClass();
      bVar4 = UClass::ImplementsInterface(pUVar8,pUVar6);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("O->GetClass()->ImplementsInterface(UNiagaraParticleCallbackHandler::StaticClass())"
                             ,
                             "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Niagara\\UHT\\NiagaraDataInterfaceExport.gen.cpp"
                             ,0x7e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      pUVar7 = UObject::FindFunction
                         (this_00,NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData);
      if (pUVar7 == (UFunction *)0x0) {
        pUVar8 = UNiagaraParticleCallbackHandler::StaticClass();
        puVar9 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)this_00,pUVar8)
        ;
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,pFVar1,pUVar5,&local_68);
        }
      }
      else {
        if (&local_50 != pFVar1) {
          iVar2 = *(int *)((longlong)this + 0x10);
          _Src = pFVar1->Data;
          local_48 = CONCAT44(local_48._4_4_,iVar2);
          if (((iVar2 != 0) || (local_48._4_4_ != 0)) &&
             (UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,iVar2,local_48._4_4_,&local_50,iVar2,
                         (int *)((longlong)&local_48 + 4)), iVar2 != 0)) {
            memcpy(local_50.Data,_Src,(longlong)iVar2 * 0x38);
          }
        }
        local_38 = (undefined4)local_68;
        uStack_34 = local_68._4_4_;
        uStack_30 = (undefined4)uStack_60;
        uStack_2c = uStack_60._4_4_;
        local_28 = local_58;
        local_40 = pUVar5;
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar7,&local_50);
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// `scalar_deleting_destructor' @ 14916ecb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid2DCollection_VMGetAttributeIndexBinder::Bind<FName,int>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ece0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid3DCollection_VMGetAttributeIndexBinder::Bind<FName,int>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ed10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceExport_ExportDataBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ed40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceExport_StoreDataBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ed70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid2DCollection_VMGetCellSizeBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916eda0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid2DCollection_VMGetNumCellsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916edd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid2DCollection_VMGetWorldBBoxSizeBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ee00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid2DCollection_VMSetNumCellsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ee30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid3DCollection_VMGetCellSizeBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ee60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid3DCollection_VMGetNumCellsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ee90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid3DCollection_VMGetWorldBBoxSizeBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916eec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid3DCollection_VMSetNumCellsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916eef0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceGrid3DCollection_VMUnitToFloatIndexBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ef20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ef50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceLandscape::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ef80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceIntRenderTarget2D::GetVMExternalFunction'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916efb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916eff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f0f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f3c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 200));
  }
  if (*(void **)((longlong)this + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__PostStage_FNDIExportProxy__UEAAXAEBUFNDIGpuComputePostStageContext___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::`9'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::`20'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::`35'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::`35'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f6c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::`100'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa0));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f7c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f800

void * __thiscall
FBatchedElementNiagara2DArrayAttribute::_scalar_deleting_destructor_
          (FBatchedElementNiagara2DArrayAttribute *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->GetTextureAndSampler != 0) {
    plVar1 = *(longlong **)&(this->GetTextureAndSampler).field_0x28;
    plVar5 = (longlong *)&(this->GetTextureAndSampler).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f890

void * __thiscall
FLandscapeTextureResource::_scalar_deleting_destructor_
          (FLandscapeTextureResource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PhysMatValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HeightValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTextureReadBuffer2D::~FTextureReadBuffer2D(&this->PhysMatTexture);
  FTextureReadBuffer2D::~FTextureReadBuffer2D(&this->HeightTexture);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f900

void * __thiscall FNDIExportProxy::_scalar_deleting_destructor_(FNDIExportProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f970

void * __thiscall
FNDIIntRenderTarget2DProxy::_scalar_deleting_destructor_
          (FNDIIntRenderTarget2DProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916f9e0

void * __thiscall
FNDI_Landscape_GeneratedData::_scalar_deleting_destructor_
          (FNDI_Landscape_GeneratedData *this,uint param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNDI_Landscape_SharedResource *this_00;
  code *pcVar3;
  bool bVar4;
  BOOLEAN BVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FNDI_Landscape_GeneratedData__6B_;
  AcquireSRWLockExclusive((PSRWLOCK)&this->LandscapeDataGuard);
  iVar1 = (this->LandscapeData).ArrayNum;
  pFVar7 = (this->LandscapeData).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LandscapeData).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FNDI_Landscape_SharedResource,1>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    this_00 = *(FNDI_Landscape_SharedResource **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FNDI_Landscape_SharedResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar3)();
        return pvVar6;
      }
    }
    FNDI_Landscape_SharedResource::Release(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->LandscapeDataGuard);
  DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int>
            ((TSharedPtr<FNDI_Landscape_SharedResource,1> *)
             (this->ReleasedLandscapeData).AllocatorInstance.Data,
             (this->ReleasedLandscapeData).ArrayNum);
  pFVar7 = (this->ReleasedLandscapeData).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int>
            ((TSharedPtr<FNDI_Landscape_SharedResource,1> *)
             (this->LandscapeData).AllocatorInstance.Data,(this->LandscapeData).ArrayNum);
  pFVar7 = (this->LandscapeData).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->LandscapeDataGuard);
  if (BVar5 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LandscapeDataGuard);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fb70

void * __thiscall
FNiagaraDataInterfaceProxyGrid2DCollectionProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fbe0

void * __thiscall
FNiagaraDataInterfaceProxyGrid3DCollectionProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fc50

void * __thiscall
FNiagaraDataInterfaceProxyLandscape::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyLandscape *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fcc0

void * __thiscall
UNDILandscapeSimCacheData::_scalar_deleting_destructor_
          (UNDILandscapeSimCacheData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDILandscapeSimCacheData__6B_;
  pFVar1 = (this->HeightFieldTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fd30

void * __thiscall
UNiagaraDataInterfaceExport::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceExport *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceExport__6B_;
  pFVar1 = (this->CallbackHandlerParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fda0

void * __thiscall
UNiagaraDataInterfaceGrid2DCollection::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceGrid2DCollection *this,uint param_1)

{
  ~UNiagaraDataInterfaceGrid2DCollection(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fe00

void * __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollectionReader__6B_;
  pFVar1 = (this->DIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceGrid2DCollection::~UNiagaraDataInterfaceGrid2DCollection
            ((UNiagaraDataInterfaceGrid2DCollection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fe90

void * __thiscall
UNiagaraDataInterfaceGrid3DCollection::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceGrid3DCollection *this,uint param_1)

{
  ~UNiagaraDataInterfaceGrid3DCollection(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fef0

void * __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollectionReader__6B_;
  pFVar1 = (this->DIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceGrid3DCollection::~UNiagaraDataInterfaceGrid3DCollection
            ((UNiagaraDataInterfaceGrid3DCollection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916ff80

void * __thiscall
UNiagaraDataInterfaceIntRenderTarget2D::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceIntRenderTarget2D *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceIntRenderTarget2D__6B_;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14916fff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UNiagaraDataInterfaceLandscape::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceLandscape *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceLandscape__6B_;
  pFVar1 = (this->PhysicalMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149170060

void * __thiscall
UNiagaraParticleCallbackHandler::_scalar_deleting_destructor_
          (UNiagaraParticleCallbackHandler *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceEmitterBinding @ 1491788b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceEmitterBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceExport @ 1491788c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceExport(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid2DCollection @ 1491788d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid2DCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid2DCollectionReader @ 1491788e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid2DCollectionReader(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollection @ 1491788f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollectionReader @ 149178900

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollectionReader(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceIntRenderTarget2D @ 149178910

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceIntRenderTarget2D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceLandscape @ 149178920

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceLandscape(void)

{
  return;
}

// EnqueueGameThreadCallback @ 149178970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
NDIExportLocal::EnqueueGameThreadCallback
          (TWeakObjectPtr<UObject,FWeakObjectPtr> param_1,
          TArray<FBasicParticleData,TSizedDefaultAllocator<32>_> *param_2,
          TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> param_3,TVector<float> *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code **ppcVar6;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar5 = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = param_2->ArrayNum;
  iVar3 = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x38,8);
  pcVar1 = *(code **)&param_4->field0_0x0;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  fVar4 = (param_4->field0_0x0)._s_0.Z;
  *(FWeakObjectPtr *)(local_40 + 1) = param_1.WeakPtr;
  local_40[2] = (code *)pFVar5;
  *(int *)(local_40 + 3) = iVar2;
  *(int *)((longlong)local_40 + 0x1c) = iVar3;
  local_40[5] = pcVar1;
  *(float *)(local_40 + 6) = fVar4;
  *(FWeakObjectPtr *)(local_40 + 4) = param_3.WeakPtr;
  if ((FWeakObjectPtr *)(local_40 + 1) != (FWeakObjectPtr *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FNiagaraWorldManager::EnqueueGlobalDeferredCallback((TFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar6 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar6 = local_40;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  pFVar5 = (param_2->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// Z_Construct_UClass_UNDILandscapeSimCacheData_NoRegister @ 1491921d0

UClass * __cdecl Z_Construct_UClass_UNDILandscapeSimCacheData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDILandscapeSimCacheData",
               &Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton,
               UNDILandscapeSimCacheData::StaticRegisterNativesUNDILandscapeSimCacheData,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNDILandscapeSimCacheData>,
               InternalVTableHelperCtorCaller<UNDILandscapeSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister @ 149192280

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceExport",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton,
               UNiagaraDataInterfaceExport::StaticRegisterNativesUNiagaraDataInterfaceExport,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceExport>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceExport>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_NoRegister @ 149192340

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2DCollectionReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.
                InnerSingleton,
               UNiagaraDataInterfaceGrid2DCollectionReader::
               StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid2DCollectionReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollectionReader>,
               local_res8,UNiagaraDataInterfaceGrid2DCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection_NoRegister @ 149192400

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2DCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton,
               UNiagaraDataInterfaceGrid2DCollection::
               StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollection,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGrid2DCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollection>,local_res8,
               UNiagaraDataInterfaceGrid2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollectionReader_NoRegister @ 1491924c0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollectionReader_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3DCollectionReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.
                InnerSingleton,
               UNiagaraDataInterfaceGrid3DCollectionReader::
               StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollectionReader,0x110,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid3DCollectionReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollectionReader>,
               local_res8,UNiagaraDataInterfaceGrid3DCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister @ 149192580

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3DCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton,
               UNiagaraDataInterfaceGrid3DCollection::
               StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGrid3DCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollection>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_NoRegister @ 149192640

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceIntRenderTarget2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton,
               UNiagaraDataInterfaceIntRenderTarget2D::
               StaticRegisterNativesUNiagaraDataInterfaceIntRenderTarget2D,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceIntRenderTarget2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceIntRenderTarget2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister @ 149192700

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceLandscape",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton,
               UNiagaraDataInterfaceLandscape::StaticRegisterNativesUNiagaraDataInterfaceLandscape,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceLandscape>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceLandscape>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister @ 1491927c0

UClass * __cdecl Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParticleCallbackHandler",
               &Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton,
               UNiagaraParticleCallbackHandler::StaticRegisterNativesUNiagaraParticleCallbackHandler
               ,0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParticleCallbackHandler>,
               InternalVTableHelperCtorCaller<UNiagaraParticleCallbackHandler>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding @ 149192880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// AnonymousAttributeString'' @ 150410fb0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::AnonymousAttributeString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid2DCollection::AnonymousAttributeString.Data.
               AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid2DCollection::AnonymousAttributeString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid2DCollection::AnonymousAttributeString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// AnonymousAttributeString'' @ 150410fd0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::AnonymousAttributeString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::AnonymousAttributeString.Data.
               AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::AnonymousAttributeString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::AnonymousAttributeString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// AttributeIndicesBaseName'' @ 150410ff0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::AttributeIndicesBaseName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid2DCollection::AttributeIndicesBaseName.Data.
               AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid2DCollection::AttributeIndicesBaseName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid2DCollection::AttributeIndicesBaseName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// AttributeIndicesBaseName'' @ 150411010

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::AttributeIndicesBaseName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::AttributeIndicesBaseName.Data.
               AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::AttributeIndicesBaseName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::AttributeIndicesBaseName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Channels'' @ 150411030

void __cdecl `dynamic_atexit_destructor_for_'FGrid3DCollectionAttributeHlslWriter::Channels__(void)

{
  DestructItems<FString,int>
            ((FString *)FGrid3DCollectionAttributeHlslWriter::Channels.AllocatorInstance.Data,
             FGrid3DCollectionAttributeHlslWriter::Channels.ArrayNum);
  if (FGrid3DCollectionAttributeHlslWriter::Channels.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGrid3DCollectionAttributeHlslWriter::Channels.AllocatorInstance.Data);
    return;
  }
  return;
}

// GridName'' @ 150411070

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::GridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid2DCollection::GridName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid2DCollection::GridName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid2DCollection::GridName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// GridName'' @ 150411090

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::GridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::GridName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::GridName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::GridName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// NumTilesName'' @ 1504110b0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::NumTilesName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::NumTilesName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::NumTilesName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::NumTilesName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// OneOverNumTilesName'' @ 1504110d0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::OneOverNumTilesName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::OneOverNumTilesName.Data.AllocatorInstance.
               Data;
  if (UNiagaraDataInterfaceGrid3DCollection::OneOverNumTilesName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::OneOverNumTilesName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// OutputGridName'' @ 1504110f0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::OutputGridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid2DCollection::OutputGridName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid2DCollection::OutputGridName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid2DCollection::OutputGridName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// OutputGridName'' @ 150411110

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::OutputGridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::OutputGridName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::OutputGridName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::OutputGridName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// PerAttributeDataName'' @ 150411130

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::PerAttributeDataName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::PerAttributeDataName.Data.AllocatorInstance.
               Data;
  if (UNiagaraDataInterfaceGrid3DCollection::PerAttributeDataName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::PerAttributeDataName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// SamplerName'' @ 150411150

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid2DCollection::SamplerName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid2DCollection::SamplerName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid2DCollection::SamplerName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid2DCollection::SamplerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// SamplerName'' @ 150411170

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::SamplerName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::SamplerName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::SamplerName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::SamplerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// StaticResource'' @ 150411190

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150411210

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// UnitClampMaxName'' @ 150411290

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::UnitClampMaxName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// UnitClampMinName'' @ 1504112b0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceGrid3DCollection::UnitClampMinName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUMaxReadbackCount'' @ 1504112d0

void __cdecl NDIExportLocal::_dynamic_atexit_destructor_for__CVarGPUMaxReadbackCount__(void)

{
  CVarGPUMaxReadbackCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUMaxReadbackCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxRegionCaptureCount'' @ 1504112f0

void __cdecl
NiagaraDataInterfaceLandscape::_dynamic_atexit_destructor_for__CVarMaxRegionCaptureCount__(void)

{
  CVarMaxRegionCaptureCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxRegionCaptureCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxRegionSearchCount'' @ 150411310

void __cdecl
NiagaraDataInterfaceLandscape::_dynamic_atexit_destructor_for__CVarMaxRegionSearchCount__(void)

{
  CVarMaxRegionSearchCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxRegionSearchCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGrid2DCubicInterpMethod'' @ 150411330

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGrid2DCubicInterpMethod__(void)

{
  CVarNiagaraGrid2DCubicInterpMethod._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGrid2DCubicInterpMethod)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGrid2DOverrideFormat'' @ 150411350

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGrid2DOverrideFormat__(void)

{
  CVarNiagaraGrid2DOverrideFormat._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGrid2DOverrideFormat);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGrid2DResolutionMultiplier'' @ 150411370

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGrid2DResolutionMultiplier__(void)

{
  CVarNiagaraGrid2DResolutionMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGrid2DResolutionMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGrid3DOverrideFormat'' @ 150411390

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGrid3DOverrideFormat__(void)

{
  CVarNiagaraGrid3DOverrideFormat._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGrid3DOverrideFormat);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGrid3DResolutionMultiplier'' @ 1504113b0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGrid3DResolutionMultiplier__(void)

{
  CVarNiagaraGrid3DResolutionMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGrid3DResolutionMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGrid3DUseRGBAGrid'' @ 1504113d0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGrid3DUseRGBAGrid__(void)

{
  CVarNiagaraGrid3DUseRGBAGrid._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGrid3DUseRGBAGrid);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1504113f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<UE::Math::TVector4<float>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_155198f40)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411420

void __cdecl
`FNDIGrid2DShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGrid2DShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411440

void __cdecl
`FNDIGrid3DShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGrid3DShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411460

void __cdecl
`NDIExportLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIExportLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411480

void __cdecl
`NiagaraDataInterfaceLandscape::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraDataInterfaceLandscape::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504114a0

void __cdecl
`UNiagaraDataInterfaceIntRenderTarget2D::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceIntRenderTarget2D::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'TextureSizeAndInvSizeName'' @ 1504114c0

void __cdecl
NDIIntRenderTarget2DLocal::_dynamic_atexit_destructor_for__TextureSizeAndInvSizeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TextureSizeAndInvSizeName.Data.AllocatorInstance.Data;
  if (TextureSizeAndInvSizeName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TextureSizeAndInvSizeName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TextureUAVName'' @ 1504114e0

void __cdecl NDIIntRenderTarget2DLocal::_dynamic_atexit_destructor_for__TextureUAVName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TextureUAVName.Data.AllocatorInstance.Data;
  if (TextureUAVName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TextureUAVName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 15053e2e0

bool __thiscall
``UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2486864975818130089>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2486864975818130089>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 19

// WriteArray @ 14e617d10

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonAccessor,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonAccessor,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e617dc0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonAnimation,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonAnimation,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e617e70

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonAnimationSampler,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonAnimationSampler,void> *this,
          IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e617f20

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonBuffer,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonBuffer,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e617fd0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonBufferView,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonBufferView,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618080

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonCamera,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonCamera,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618130

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonImage,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonImage,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e6181e0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLight,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLight,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618290

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLightIES,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLightIES,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618340

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLightIESInstance,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLightIESInstance,void> *this,
          IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e6183f0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLightMap,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLightMap,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e6184a0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonMaterial,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonMaterial,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618550

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonMaterialVariant,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonMaterialVariant,void> *this,IGLTFJsonWriter *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618600

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonMesh,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonMesh,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e6186b0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonNode,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonNode,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618760

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonSampler,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonSampler,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618810

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonScene,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonScene,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e6188c0

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonSkin,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonSkin,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WriteArray @ 14e618970

void __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonTexture,void>::WriteArray
          (TGLTFJsonIndexedObjectArray<FGLTFJsonTexture,void> *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  iVar2 = (this->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}


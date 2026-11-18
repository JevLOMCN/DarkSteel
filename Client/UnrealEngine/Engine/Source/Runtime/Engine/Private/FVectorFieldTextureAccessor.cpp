// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FVectorFieldTextureAccessor @ 148909f20

FVectorFieldTextureAccessor * __thiscall
FVectorFieldTextureAccessor::FVectorFieldTextureAccessor
          (FVectorFieldTextureAccessor *this,FVectorFieldTextureAccessor *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldResource *pFVar3;
  FVectorFieldTextureAccessorImpl *pFVar4;
  FVectorFieldTextureAccessorImpl *pFVar5;
  FVectorFieldTextureAccessor local_18 [2];
  
  (this->Impl).Ptr = (FVectorFieldTextureAccessorImpl *)0x0;
  pFVar5 = (param_1->Impl).Ptr;
  if (pFVar5 != (FVectorFieldTextureAccessorImpl *)0x0) {
    pFVar4 = ::operator_new(8);
    if (pFVar4 == (FVectorFieldTextureAccessorImpl *)0x0) {
      pFVar4 = (FVectorFieldTextureAccessorImpl *)0x0;
    }
    else {
      pFVar3 = (pFVar5->Resource).Reference;
      (pFVar4->Resource).Reference = pFVar3;
      if (pFVar3 != (FVectorFieldResource *)0x0) {
        LOCK();
        (pFVar3->NumRefs).Counter = (pFVar3->NumRefs).Counter + 1;
        UNLOCK();
      }
    }
    if (this == local_18) {
      if (pFVar4 == (FVectorFieldTextureAccessorImpl *)0x0) {
        return this;
      }
      pFVar3 = (pFVar4->Resource).Reference;
      pFVar5 = pFVar4;
      if (pFVar3 != (FVectorFieldResource *)0x0) {
        LOCK();
        pFVar1 = &pFVar3->NumRefs;
        iVar2 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    else {
      pFVar5 = (this->Impl).Ptr;
      (this->Impl).Ptr = pFVar4;
      if (pFVar5 == (FVectorFieldTextureAccessorImpl *)0x0) {
        return this;
      }
      pFVar3 = (pFVar5->Resource).Reference;
      if (pFVar3 != (FVectorFieldResource *)0x0) {
        LOCK();
        pFVar1 = &pFVar3->NumRefs;
        iVar2 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    ::operator_delete(pFVar5,8);
  }
  return this;
}

// FVectorFieldTextureAccessor @ 14890a000

FVectorFieldTextureAccessor * __thiscall
FVectorFieldTextureAccessor::FVectorFieldTextureAccessor
          (FVectorFieldTextureAccessor *this,UVectorField *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldResource *pFVar3;
  UClass *pUVar4;
  FVectorFieldTextureAccessorImpl *pFVar5;
  FVectorFieldTextureAccessorImpl *pFVar6;
  FVectorFieldTextureAccessor local_18 [2];
  
  (this->Impl).Ptr = (FVectorFieldTextureAccessorImpl *)0x0;
  if (param_1 != (UVectorField *)0x0) {
    pUVar4 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      pFVar5 = ::operator_new(8);
      if (pFVar5 == (FVectorFieldTextureAccessorImpl *)0x0) {
        pFVar5 = (FVectorFieldTextureAccessorImpl *)0x0;
      }
      else {
        pFVar3 = (FVectorFieldResource *)param_1[1]._padding_;
        (pFVar5->Resource).Reference = pFVar3;
        if (pFVar3 != (FVectorFieldResource *)0x0) {
          LOCK();
          (pFVar3->NumRefs).Counter = (pFVar3->NumRefs).Counter + 1;
          UNLOCK();
        }
      }
      if (this == local_18) {
        if (pFVar5 == (FVectorFieldTextureAccessorImpl *)0x0) {
          return this;
        }
        pFVar3 = (pFVar5->Resource).Reference;
        pFVar6 = pFVar5;
        if (pFVar3 != (FVectorFieldResource *)0x0) {
          LOCK();
          pFVar1 = &pFVar3->NumRefs;
          iVar2 = pFVar1->Counter;
          pFVar1->Counter = pFVar1->Counter + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      else {
        pFVar6 = (this->Impl).Ptr;
        (this->Impl).Ptr = pFVar5;
        if (pFVar6 == (FVectorFieldTextureAccessorImpl *)0x0) {
          return this;
        }
        pFVar3 = (pFVar6->Resource).Reference;
        if (pFVar3 != (FVectorFieldResource *)0x0) {
          LOCK();
          pFVar1 = &pFVar3->NumRefs;
          iVar2 = pFVar1->Counter;
          pFVar1->Counter = pFVar1->Counter + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      ::operator_delete(pFVar6,8);
    }
  }
  return this;
}

// ~FVectorFieldTextureAccessor @ 14890e490

void __thiscall
FVectorFieldTextureAccessor::~FVectorFieldTextureAccessor(FVectorFieldTextureAccessor *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldTextureAccessorImpl *pFVar3;
  FVectorFieldResource *pFVar4;
  
  pFVar3 = (this->Impl).Ptr;
  if (pFVar3 != (FVectorFieldTextureAccessorImpl *)0x0) {
    pFVar4 = (pFVar3->Resource).Reference;
    if (pFVar4 != (FVectorFieldResource *)0x0) {
      LOCK();
      pFVar1 = &pFVar4->NumRefs;
      iVar2 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    ::operator_delete(pFVar3,8);
    return;
  }
  return;
}

// GetTexture @ 14895ec40

FRHITexture * __thiscall FVectorFieldTextureAccessor::GetTexture(FVectorFieldTextureAccessor *this)

{
  FVectorFieldTextureAccessorImpl *pFVar1;
  FVectorFieldResource *pFVar2;
  FRHITexture *pFVar3;
  
  pFVar1 = (this->Impl).Ptr;
  if (((pFVar1 == (FVectorFieldTextureAccessorImpl *)0x0) ||
      (pFVar2 = (pFVar1->Resource).Reference, pFVar2 == (FVectorFieldResource *)0x0)) ||
     (pFVar3 = (pFVar2->VolumeTextureRHI).Reference, pFVar3 == (FRHITexture *)0x0)) {
    pFVar3 = (GBlackVolumeTexture->TextureRHI).Reference;
  }
  return pFVar3;
}


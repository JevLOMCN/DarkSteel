// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14918ea10

UClass * __cdecl UNiagaraDataInterfaceGrid3D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid3D,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3D>,aFStackX_8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton;
}

// UNiagaraDataInterfaceGrid3D @ 149212f30

UNiagaraDataInterfaceGrid3D * __thiscall
UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
          (UNiagaraDataInterfaceGrid3D *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3D__6B_;
  return this;
}

// UNiagaraDataInterfaceGrid3D @ 149212f60

UNiagaraDataInterfaceGrid3D * __thiscall
UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
          (UNiagaraDataInterfaceGrid3D *this,FObjectInitializer *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->ClearBeforeNonIterationStage = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3D__6B_;
  (this->WorldBBoxSize).field0_0x0._s_0.X = 100.0;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = 100.0;
  (this->WorldBBoxSize).field0_0x0._s_0.Z = 100.0;
  (this->NumCells).field0_0x0._s_0.X = 3;
  (this->NumCells).field0_0x0._s_0.Y = 3;
  (this->NumCells).field0_0x0._s_0.Z = 3;
  this->CellSize = 1.0;
  this->NumCellsMaxAxis = 10;
  this->SetResolutionMethod = Independent;
  return this;
}

// ~UNiagaraDataInterfaceGrid3D @ 149215e90

void __thiscall
UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D(UNiagaraDataInterfaceGrid3D *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRWBase__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// CopyToInternal @ 149222c20

bool __thiscall
UNiagaraDataInterfaceGrid3D::CopyToInternal
          (UNiagaraDataInterfaceGrid3D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      *(bool *)&param_1[1]._padding_ = this->ClearBeforeNonIterationStage;
      *(undefined8 *)((longlong)&param_1[1]._padding_ + 4) =
           *(undefined8 *)&(this->NumCells).field0_0x0;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = (this->NumCells).field0_0x0._s_0.Z;
      *(float *)&param_1[1]._padding_ = this->CellSize;
      *(ESetResolutionMethod *)&param_1[1]._padding_ = this->SetResolutionMethod;
      pFVar2 = (FNiagaraDataInterfaceProxy *)(this->WorldBBoxSize).field0_0x0._s_0.Y;
      param_1[1]._padding_ = (longlong)(this->WorldBBoxSize).field0_0x0._s_0.X;
      param_1[1].Proxy.Ptr = pFVar2;
      *(double *)&param_1[1].field_0x30 = (this->WorldBBoxSize).field0_0x0._s_0.Z;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->NumCellsMaxAxis;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3D>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3D>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// Equals @ 14922d320

bool __thiscall
UNiagaraDataInterfaceGrid3D::Equals
          (UNiagaraDataInterfaceGrid3D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  double dVar7;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid3D_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid3D_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if (((((bool)(char)param_1[1]._padding_ == this->ClearBeforeNonIterationStage) &&
         (*(int *)((longlong)&param_1[1]._padding_ + 4) == (this->NumCells).field0_0x0._s_0.X)) &&
        ((int)param_1[1]._padding_ == (this->NumCells).field0_0x0._s_0.Y)) &&
       ((*(int *)((longlong)&param_1[1]._padding_ + 4) == (this->NumCells).field0_0x0._s_0.Z &&
        ((float)((uint)(*(float *)&param_1[1]._padding_ - this->CellSize) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))) {
      dVar7 = (double)param_1[1]._padding_ - (this->WorldBBoxSize).field0_0x0._s_0.X;
      if (((((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000) &&
           ((dVar7 = (double)param_1[1].Proxy.Ptr - (this->WorldBBoxSize).field0_0x0._s_0.Y,
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000 &&
            (dVar7 = *(double *)&param_1[1].field_0x30 - (this->WorldBBoxSize).field0_0x0._s_0.Z,
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)))) &&
          ((ESetResolutionMethod)param_1[1]._padding_ == this->SetResolutionMethod)) &&
         (*(int *)((longlong)&param_1[1]._padding_ + 4) == this->NumCellsMaxAxis)) {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149236c40

UClass * __cdecl UNiagaraDataInterfaceGrid3D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid3D,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton;
}

// GetVMExternalFunction @ 149239050

void __thiscall
UNiagaraDataInterfaceGrid3D::GetVMExternalFunction
          (UNiagaraDataInterfaceGrid3D *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGrid3D @ 14924f4a0

void __cdecl UNiagaraDataInterfaceGrid3D::StaticRegisterNativesUNiagaraDataInterfaceGrid3D(void)

{
  return;
}


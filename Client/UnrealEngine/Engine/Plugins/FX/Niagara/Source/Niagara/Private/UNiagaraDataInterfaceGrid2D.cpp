// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 14918ea00

UClass * __cdecl UNiagaraDataInterfaceGrid2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid2D,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2D>,aFStackX_8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton;
}

// UNiagaraDataInterfaceGrid2D @ 149212ea0

UNiagaraDataInterfaceGrid2D * __thiscall
UNiagaraDataInterfaceGrid2D::UNiagaraDataInterfaceGrid2D
          (UNiagaraDataInterfaceGrid2D *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->NumAttributes = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2D__6B_;
  return this;
}

// UNiagaraDataInterfaceGrid2D @ 149212ed0

UNiagaraDataInterfaceGrid2D * __thiscall
UNiagaraDataInterfaceGrid2D::UNiagaraDataInterfaceGrid2D
          (UNiagaraDataInterfaceGrid2D *this,FObjectInitializer *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->ClearBeforeNonIterationStage = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2D__6B_;
  (this->WorldBBoxSize).field0_0x0._s_0.X = 100.0;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = 100.0;
  this->NumCellsX = 3;
  this->NumCellsY = 3;
  this->NumCellsMaxAxis = 3;
  this->NumAttributes = 0;
  this->SetGridFromMaxAxis = false;
  return this;
}

// ~UNiagaraDataInterfaceGrid2D @ 149215e70

void __thiscall
UNiagaraDataInterfaceGrid2D::~UNiagaraDataInterfaceGrid2D(UNiagaraDataInterfaceGrid2D *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRWBase__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// CopyToInternal @ 149222b10

bool __thiscall
UNiagaraDataInterfaceGrid2D::CopyToInternal
          (UNiagaraDataInterfaceGrid2D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  double dVar2;
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
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->NumCellsX;
      *(int *)&param_1[1]._padding_ = this->NumCellsY;
      *(int *)&param_1[1]._padding_ = this->NumAttributes;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->NumCellsMaxAxis;
      *(bool *)((longlong)&param_1[1]._padding_ + 4) = this->SetGridFromMaxAxis;
      dVar2 = (this->WorldBBoxSize).field0_0x0._s_0.Y;
      param_1[1]._padding_ = (longlong)(this->WorldBBoxSize).field0_0x0._s_0.X;
      param_1[1]._padding_ = (longlong)dVar2;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2D>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2D>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// Equals @ 14922d1d0

bool __thiscall
UNiagaraDataInterfaceGrid2D::Equals
          (UNiagaraDataInterfaceGrid2D *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid2D_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid2D_const_>(&local_28);
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
         (*(int *)((longlong)&param_1[1]._padding_ + 4) == this->NumCellsX)) &&
        ((int)param_1[1]._padding_ == this->NumCellsY)) &&
       (((int)param_1[1]._padding_ == this->NumAttributes &&
        (*(int *)((longlong)&param_1[1]._padding_ + 4) == this->NumCellsMaxAxis)))) {
      dVar7 = (double)param_1[1]._padding_ - (this->WorldBBoxSize).field0_0x0._s_0.X;
      if (((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000) &&
         (dVar7 = (double)param_1[1]._padding_ - (this->WorldBBoxSize).field0_0x0._s_0.Y,
         (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149236b80

UClass * __cdecl UNiagaraDataInterfaceGrid2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid2D,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton;
}

// GetVMExternalFunction @ 149239040

void __thiscall
UNiagaraDataInterfaceGrid2D::GetVMExternalFunction
          (UNiagaraDataInterfaceGrid2D *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  return;
}

// Serialize @ 14924cee0

void __thiscall
UNiagaraDataInterfaceGrid2D::Serialize(UNiagaraDataInterfaceGrid2D *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar1 < 0x67) {
    this->NumAttributes = 1;
  }
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 14924cf40

void __thiscall
UNiagaraDataInterfaceGrid2D::Serialize
          (UNiagaraDataInterfaceGrid2D *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if (iVar1 < 0x67) {
    this->NumAttributes = 1;
  }
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGrid2D @ 14924f490

void __cdecl UNiagaraDataInterfaceGrid2D::StaticRegisterNativesUNiagaraDataInterfaceGrid2D(void)

{
  return;
}


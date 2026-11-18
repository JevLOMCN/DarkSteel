// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b430eb0

UClass * __cdecl UDS_ButtonImageData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonImageData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonImageData",
               &Z_Registration_Info_UClass_UDS_ButtonImageData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonImageData,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ButtonImageData>,
               InternalVTableHelperCtorCaller<UDS_ButtonImageData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonImageData.InnerSingleton;
}

// UDS_ButtonImageData @ 14b434370

UDS_ButtonImageData * __thiscall
UDS_ButtonImageData::UDS_ButtonImageData(UDS_ButtonImageData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ButtonImageData__6B_;
  *(undefined8 *)&this->ButtonImageDatas = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x34 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x48 = 0;
  return this;
}

// ~UDS_ButtonImageData @ 14b434d90

void __thiscall UDS_ButtonImageData::~UDS_ButtonImageData(UDS_ButtonImageData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ButtonImageData__6B_;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ButtonImageDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ButtonImageDatas);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b436650

UClass * __cdecl UDS_ButtonImageData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonImageData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonImageData",
               &Z_Registration_Info_UClass_UDS_ButtonImageData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonImageData,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ButtonImageData>,
               InternalVTableHelperCtorCaller<UDS_ButtonImageData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonImageData.InnerSingleton;
}

// StaticRegisterNativesUDS_ButtonImageData @ 14b437050

void __cdecl UDS_ButtonImageData::StaticRegisterNativesUDS_ButtonImageData(void)

{
  return;
}

// UDS_ButtonImageData @ 14bce4c00

UDS_ButtonImageData * __thiscall UDS_ButtonImageData::UDS_ButtonImageData(UDS_ButtonImageData *this)

{
  undefined4 local_res8 [4];
  undefined4 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  FLinearColor_u_0 local_50;
  undefined1 local_40;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  
  UObject::UObject((UObject *)this);
  local_3d = 0x200;
  local_3f = 0;
  this->_padding_ = (longlong)&___7UDS_ButtonImageData__6B_;
  *(undefined8 *)&this->ButtonImageDatas = 0;
  local_68 = local_res8;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x34 = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x48 = 0;
  local_60 = &local_58;
  local_39 = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_27 = 0;
  local_25 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 1;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_60 = &local_58;
  local_39 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 4;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_60 = &local_58;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_39 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 2;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_60 = &local_58;
  local_39 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 8;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_60 = &local_58;
  local_39 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 0x20;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_60 = &local_58;
  local_39 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 0x10;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_3f = 0;
  local_3d = 0x200;
  local_39 = 0;
  local_27 = 0;
  local_68 = local_res8;
  local_25 = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_20 = 0;
  local_60 = &local_58;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_res8[0] = 0x40;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_60 = &local_58;
  local_39 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 0x100;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  local_68 = local_res8;
  local_3f = 0;
  local_50 = FLinearColor::White.field0_0x0;
  local_3d = 0x200;
  local_60 = &local_58;
  local_39 = 0;
  local_27 = 0;
  local_25 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_res8[0] = 0x80;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_res8 + 2),
             (bool *)&local_68);
  return this;
}

// GetImageColor @ 14bcf8430

FSlateColor * __thiscall
UDS_ButtonImageData::GetImageColor
          (UDS_ButtonImageData *this,FSlateColor *__return_storage_ptr__,
          EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  int iVar6;
  FDS_ButtonImageDatas *pFVar7;
  undefined1 *puVar8;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonImageDatas).field_0x8 != *(int *)&(this->ButtonImageDatas).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ButtonImageDatas).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ButtonImageDatas).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ButtonImageDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->ButtonImageDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar6 * 0x50) == EVar1) {
          pFVar7 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonImageDatas,EVar1);
          uVar3 = *(undefined8 *)((longlong)&(pFVar7->Color).SpecifiedColor.field0_0x0 + 8);
          *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
               *(undefined8 *)&(pFVar7->Color).SpecifiedColor.field0_0x0;
          *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) =
               uVar3;
          EVar4 = (pFVar7->Color).ColorTableId;
          uVar5 = *(undefined2 *)&(pFVar7->Color).field_0x12;
          __return_storage_ptr__->ColorUseRule = (pFVar7->Color).ColorUseRule;
          __return_storage_ptr__->ColorTableId = EVar4;
          *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
          return __return_storage_ptr__;
        }
        iVar6 = *(int *)(lVar2 + 0x48 + (longlong)iVar6 * 0x50);
      } while (iVar6 != -1);
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetImageObject @ 14bcf8680

UObject * __thiscall
UDS_ButtonImageData::GetImageObject(UDS_ButtonImageData *this,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  int iVar3;
  FDS_ButtonImageDatas *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonImageDatas).field_0x8 != *(int *)&(this->ButtonImageDatas).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ButtonImageDatas).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ButtonImageDatas).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ButtonImageDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ButtonImageDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar3 * 0x50) == EVar1) {
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonImageDatas,EVar1);
          return (pFVar4->ImageData).field0_0x0.DebugPtr;
        }
        iVar3 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return (UObject *)0x0;
}


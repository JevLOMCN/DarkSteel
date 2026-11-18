// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b5acb30

UClass * __cdecl UDS_SyncSendMountMove::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendMountMove.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendMountMove",
               &Z_Registration_Info_UClass_UDS_SyncSendMountMove.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendMountMove,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendMountMove>,
               InternalVTableHelperCtorCaller<UDS_SyncSendMountMove>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendMountMove.InnerSingleton;
}

// UDS_SyncSendMountMove @ 14b5b20d0

UDS_SyncSendMountMove * __thiscall
UDS_SyncSendMountMove::UDS_SyncSendMountMove(UDS_SyncSendMountMove *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->SendDeltaTick = 0.0;
  *(undefined8 *)&this->MountDetailStateList = 0;
  *(undefined8 *)&(this->MountDetailStateList).field_0x8 = 0;
  *(undefined8 *)&(this->MountDetailStateList).field_0x20 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x28 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MountDetailStateList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MountDetailStateList).field_0x34 = 0;
  *(undefined8 *)&(this->MountDetailStateList).field_0x40 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x48 = 0;
  return this;
}

// ~UDS_SyncSendMountMove @ 14b5b29f0

void __thiscall UDS_SyncSendMountMove::~UDS_SyncSendMountMove(UDS_SyncSendMountMove *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  *(undefined4 *)&(this->MountDetailStateList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MountDetailStateList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharDetailState,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharDetailState,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MountDetailStateList);
  this->_padding_ = (longlong)&UDS_SyncSendBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4de0

UClass * __cdecl UDS_SyncSendMountMove::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendMountMove.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendMountMove",
               &Z_Registration_Info_UClass_UDS_SyncSendMountMove.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendMountMove,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendMountMove>,
               InternalVTableHelperCtorCaller<UDS_SyncSendMountMove>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendMountMove.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendMountMove @ 14b5b59f0

void __cdecl UDS_SyncSendMountMove::StaticRegisterNativesUDS_SyncSendMountMove(void)

{
  return;
}

// UDS_SyncSendMountMove @ 14bba9b00

UDS_SyncSendMountMove * __thiscall
UDS_SyncSendMountMove::UDS_SyncSendMountMove
          (UDS_SyncSendMountMove *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  this->SendDeltaTick = 0.0;
  *(undefined8 *)&this->MountDetailStateList = 0;
  *(undefined8 *)&(this->MountDetailStateList).field_0x8 = 0;
  *(undefined8 *)&(this->MountDetailStateList).field_0x20 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x28 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MountDetailStateList).field_0x34 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MountDetailStateList).field_0x40 = 0;
  *(undefined4 *)&(this->MountDetailStateList).field_0x48 = 0;
  return this;
}

// FlyMountState @ 14bbba630

bool __thiscall
UDS_SyncSendMountMove::FlyMountState(UDS_SyncSendMountMove *this,FDS_NetSyncData *param_1)

{
  TMap<EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharDetailState,bool,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool *pbVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  bool bVar15;
  char cVar16;
  double dVar17;
  double dVar18;
  char local_res10;
  char local_res18;
  char local_res20;
  
  this_00 = &this->MountDetailStateList;
  puVar1 = &(this->MountDetailStateList).field_0x38;
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar9 = *(undefined1 **)&(this->MountDetailStateList).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    iVar12 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x22) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x22) {
          if (iVar12 != -1) {
            TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
            ::FindChecked(this_00,Falling);
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  puVar9 = &(this->MountDetailStateList).field_0x48;
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar10 = *(undefined1 **)&(this->MountDetailStateList).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    iVar12 = *(int *)(puVar10 + (ulonglong)(*(int *)puVar9 - 1U & 0x1c) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x1c) {
          if (iVar12 != -1) {
            TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
            ::FindChecked(this_00,Jump1);
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  puVar10 = &(this->MountDetailStateList).field_0x40;
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x66) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x66) {
          TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
          ::FindChecked(this_00,Mount_Flying);
          break;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x69) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x69) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Leap);
          local_res10 = *pbVar7;
          goto LAB_14bbba7b1;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  local_res10 = '\0';
LAB_14bbba7b1:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x6a) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x6a) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Ascent);
          local_res18 = *pbVar7;
          goto LAB_14bbba801;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  local_res18 = '\0';
LAB_14bbba801:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x6b) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x6b) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Descent);
          local_res20 = *pbVar7;
          goto LAB_14bbba851;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  local_res20 = '\0';
LAB_14bbba851:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x6c) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x6c) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Land);
          cVar6 = *pbVar7;
          goto LAB_14bbba89c;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  cVar6 = '\0';
LAB_14bbba89c:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x62) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x62) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Run);
          cVar16 = *pbVar7;
          goto LAB_14bbba8dc;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  cVar16 = '\0';
LAB_14bbba8dc:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x65) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x65) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Sprint);
          cVar13 = *pbVar7;
          goto LAB_14bbba91c;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  cVar13 = '\0';
LAB_14bbba91c:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x67) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x67) {
          pbVar7 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(this_00,Mount_Dash);
          cVar14 = *pbVar7;
          goto LAB_14bbba95c;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  cVar14 = '\0';
LAB_14bbba95c:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar11 = *(undefined1 **)puVar10;
    if (*(undefined1 **)puVar10 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & 0x68) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == 0x68) {
          TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
          ::FindChecked(this_00,Mount_DashSkill);
          break;
        }
        iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  bVar15 = false;
  uVar8 = (param_1->StateFlags).Packed & 0xfffffffffffffaff | 0x2f0;
  (param_1->StateFlags).Packed = uVar8;
  if (local_res10 == '\x01') {
    (param_1->StateFlags).Packed = uVar8 & 0xfffffffffffffa7f;
  }
  else if (cVar14 == '\x01') {
    (param_1->StateFlags).Packed = uVar8 & 0xfffffffffffffb6f | 0x360;
  }
  else if ((local_res18 != '\x01') && (local_res20 != '\x01')) {
    if (cVar6 == '\x01') {
      (param_1->StateFlags).Packed = uVar8 & 0xfffffffffffffadf;
    }
    else {
      cVar6 = (**(code **)(this->_padding_ + 0x2d0))(this,param_1);
      if (cVar6 == '\x01') {
        if (((param_1->StateFlags).Packed & 3) != 0) {
          if (cVar13 == '\x01') {
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffb1f;
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x310;
          }
          else if (cVar16 == '\x01') {
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffb0f;
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x300;
          }
        }
      }
      else {
        uVar2 = *(undefined8 *)&(param_1->InputValue).field0_0x0;
        if (((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
            (uVar2 = *(undefined8 *)((longlong)&(param_1->InputValue).field0_0x0 + 8),
            __real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
           ((dVar18 = (param_1->PrevPosition).field0_0x0._s_0.X -
                      (param_1->NowPosition).field0_0x0._s_0.X,
            (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000 &&
            ((dVar17 = (param_1->PrevPosition).field0_0x0._s_0.Y -
                       (param_1->NowPosition).field0_0x0._s_0.Y,
             (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000 &&
             (dVar17 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                       (param_1->NowPosition).field0_0x0._s_0.Z,
             (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)))))) {
          bVar15 = this->SendDeltaTick <= __real_40a00000;
          *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
          if (bVar15) {
            return false;
          }
          *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
        }
        else {
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffb0e;
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x302;
          dVar17 = (param_1->PrevPosition).field0_0x0._s_0.Y;
          dVar3 = (param_1->PrevPosition).field0_0x0._s_0.Z;
          dVar4 = (param_1->NowPosition).field0_0x0._s_0.Y;
          dVar5 = (param_1->NowPosition).field0_0x0._s_0.Z;
          *(double *)&(param_1->VelocityVector).field0_0x0 = dVar18;
          (param_1->VelocityVector).field0_0x0._s_0.Y = dVar17 - dVar4;
          (param_1->VelocityVector).field0_0x0._s_0.Z = dVar3 - dVar5;
        }
      }
      this->SendDeltaTick = 0.0;
      bVar15 = true;
    }
  }
  return bVar15;
}

// HasMountState @ 14bbbfbd0

bool __thiscall
UDS_SyncSendMountMove::HasMountState(UDS_SyncSendMountMove *this,EDS_CharDetailState param_1)

{
  longlong lVar1;
  int iVar2;
  bool *pbVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MountDetailStateList).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MountDetailStateList).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - Swim & param_1) *
                              4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->MountDetailStateList;
      do {
        if (*(EDS_CharDetailState *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pbVar3 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,param_1);
          return *pbVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// Initialize @ 14bbc0e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_SyncSendMountMove::Initialize
          (UDS_SyncSendMountMove *this,TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr *this_00;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  undefined1 local_168 [4];
  undefined4 local_164 [3];
  undefined4 *local_158;
  undefined1 *local_150;
  TPairInitializer<EDS_CharDetailState_&&,bool_&&> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = param_1.WeakPtr;
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)param_1.WeakPtr);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bbc0ff2;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SyncSendBase::Initialize",0x1c,Yes);
    pwVar6 = L"OwnerEntityBase is nullptr.";
    uVar5 = 0x2a;
  }
  else {
    this_00 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,local_164);
    local_148.Key = (EDS_CharDetailState *)FWeakObjectPtr::Get(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_148.Key != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_148.Key);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)&local_148);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                       ((longlong)&this->_padding_ + 4),(void *)0x0);
    if (!bVar1) {
      TVar4 = UDS_CharStateData::GetData((ulong64)&local_148);
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)TVar4.WeakPtr;
      goto LAB_14bbc0ff2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bbc0ff2;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SyncSendBase::Initialize",0x1c,Yes);
    pwVar6 = L"OwnerMovementCore is nullptr.";
    uVar5 = 0x31;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bbc0ff2:
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x22;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x1c;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x61;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x62;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 100;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x65;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x66;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_164[0] = 0x67;
  local_150 = local_168;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 99;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x69;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x6a;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x6b;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x6c;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  local_158 = local_164;
  local_168[0] = 0;
  local_150 = local_168;
  local_164[0] = 0x6d;
  TSet<TTuple<enum_EDS_CharDetailState,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharDetailState_&&,bool_&&>_>
            (&this->_padding_,&local_148,(bool *)&local_158);
  return;
}

// IsAvailableSync @ 14bbc37f0

bool __thiscall
UDS_SyncSendMountMove::IsAvailableSync
          (UDS_SyncSendMountMove *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined1 *this_00;
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  UDS_CharStateData *this_01;
  float fVar4;
  EDS_CharState local_res8;
  
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar2) {
    this_01 = (UDS_CharStateData *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    local_res8 = Mount;
    bVar2 = UDS_CharStateData::HasCharState(this_01,&local_res8);
    if (bVar2) {
      lVar1 = *(longlong *)&this[-1].MountDetailStateList.field_0x28;
      *(float *)&this->_padding_ = param_2 + *(float *)&this->_padding_;
      bVar3 = (**(code **)(lVar1 + 0x2c0))(&this[-1].MountDetailStateList.field_0x28,param_1);
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffffc;
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | (ulonglong)bVar3;
      fVar4 = (float)(**(code **)(*(longlong *)&this[-1].MountDetailStateList.field_0x28 + 0x2c8))
                               (&this[-1].MountDetailStateList.field_0x28,
                                (uint)(param_1->StateFlags).Packed & 3,0);
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff9df;
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x1d0;
      param_1->AccelerationValue = fVar4;
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,Falling);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,Jump1);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_Ready);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,Mount_Run)
      ;
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_Sprint);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_BackMove);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_InherenceAction);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_Flying);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,Mount_Dash
                      );
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_DashSkill);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,Mount_Leap
                      );
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_Ascent);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_Descent);
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,Mount_Land
                      );
      UpdateMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                       Mount_DisMount);
      bVar2 = HasMountState((UDS_SyncSendMountMove *)&this[-1].MountDetailStateList.field_0x28,
                            Mount_Flying);
      this_00 = &this[-1].MountDetailStateList.field_0x28;
      if (bVar2) {
        FlyMountState((UDS_SyncSendMountMove *)this_00,param_1);
        return true;
      }
      LandMountState((UDS_SyncSendMountMove *)this_00,param_1);
      return true;
    }
  }
  return false;
}

// IsChangeSyncData @ 14bbc4270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDS_SyncSendMountMove::IsChangeSyncData(UDS_SyncSendMountMove *this,FDS_NetSyncData *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  
  if (param_1->TransportEntityID == 0) {
    bVar12 = (byte)(param_1->StateFlags).Packed & 3;
    bVar9 = (byte)(param_1->StateFlags).Packed >> 2 & 3;
    if ((((bVar9 == bVar12) && (param_1->AccelerationValue == param_1->PrevAccelerationValue)) &&
        (dVar20 = (param_1->PrevInputValue).field0_0x0._s_0.X -
                  (param_1->InputValue).field0_0x0._s_0.X,
        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (dVar20 = (param_1->PrevInputValue).field0_0x0._s_0.Y -
                 (param_1->InputValue).field0_0x0._s_0.Y,
       (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      dVar35 = (param_1->PrevEntityDirection).Pitch - (param_1->EntityDirection).Pitch;
      dVar37 = (param_1->PrevEntityDirection).Yaw - (param_1->EntityDirection).Yaw;
      dVar4 = (param_1->PrevEntityDirection).Roll - (param_1->EntityDirection).Roll;
      auVar21._8_4_ = SUB84(dVar37,0);
      auVar21._0_8_ = dVar35;
      auVar21._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      auVar22 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar22 = roundpd(in_XMM1,auVar22,3);
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar29._0_8_ = auVar22._0_8_ * dVar6;
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar29._8_8_ = auVar22._8_8_ * dVar7;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar4;
      dVar35 = dVar35 - auVar29._0_8_;
      dVar37 = dVar37 - auVar29._8_8_;
      auVar22 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar22 = roundpd(auVar29,auVar22,3);
      dVar20 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar24._8_4_ = SUB84(dVar37,0);
      auVar24._0_8_ = dVar35;
      auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      dVar4 = dVar4 - auVar22._0_8_ * dVar20;
      dVar5 = 0.0 - auVar22._8_8_ * dVar3;
      uVar13 = -(ulonglong)(0.0 <= dVar35);
      uVar15 = -(ulonglong)(0.0 <= dVar37);
      auVar30._0_8_ = uVar13 & (ulonglong)dVar35;
      auVar30._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar37);
      auVar30._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar37) >> 0x20);
      dVar37 = auVar24._8_8_ + dVar7;
      uVar14 = -(ulonglong)(0.0 <= dVar4);
      uVar16 = -(ulonglong)(0.0 <= dVar5);
      auVar38._0_4_ = ~(uint)uVar13 & SUB84(dVar35 + dVar6,0);
      auVar38._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar6) >> 0x20);
      auVar38._8_4_ = ~(uint)uVar15 & SUB84(dVar37,0);
      auVar38._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
      auVar38 = auVar38 | auVar30;
      auVar25._8_4_ = SUB84(dVar5,0);
      auVar25._0_8_ = dVar4;
      auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      dVar37 = auVar25._8_8_ + dVar3;
      auVar36._0_4_ = ~(uint)uVar14 & SUB84(dVar4 + dVar20,0);
      auVar36._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar4 + dVar20) >> 0x20);
      auVar36._8_4_ = ~(uint)uVar16 & SUB84(dVar37,0);
      auVar36._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
      auVar22._8_4_ = (int)((ulonglong)dVar5 & uVar16);
      auVar22._0_8_ = (ulonglong)dVar4 & uVar14;
      auVar22._12_4_ = (int)(((ulonglong)dVar5 & uVar16) >> 0x20);
      auVar36 = auVar36 | auVar22;
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar36._0_8_);
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar36._8_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar38._0_8_);
      uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar38._8_8_);
      auVar31._0_8_ = uVar14 & (ulonglong)(auVar36._0_8_ - dVar20);
      uVar13 = uVar16 & (ulonglong)(auVar36._8_8_ - dVar3);
      auVar31._8_4_ = (undefined4)uVar13;
      auVar31._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar26._0_4_ = ~(uint)uVar14 & auVar36._0_4_;
      auVar26._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar36._4_4_;
      auVar26._8_4_ = ~(uint)uVar16 & auVar36._8_4_;
      auVar26._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._12_4_;
      auVar31 = auVar31 | auVar26;
      auVar27._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
      auVar27._0_8_ = __real_3f1a36e2e0000000;
      auVar27._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      auVar32._0_8_ =
           (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
      auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
      auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar32._8_8_);
      auVar28._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._0_8_);
      uVar11 = movmskpd((int)this,auVar28);
      auVar33._0_8_ = uVar15 & (ulonglong)(auVar38._0_8_ - dVar6);
      uVar13 = uVar17 & (ulonglong)(auVar38._8_8_ - dVar7);
      auVar33._8_4_ = (undefined4)uVar13;
      auVar33._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar2._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar38._4_4_;
      auVar2._0_4_ = ~(uint)uVar15 & auVar38._0_4_;
      auVar2._8_4_ = ~(uint)uVar17 & auVar38._8_4_;
      auVar2._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar38._12_4_;
      auVar33 = auVar33 | auVar2;
      auVar34._0_8_ =
           (double)CONCAT44(auVar33._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar33._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar34._8_4_ = auVar33._8_4_ & _UNK_15061cc88;
      auVar34._12_4_ = auVar33._12_4_ & _UNK_15061cc8c;
      lVar18 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._8_8_);
      auVar8._8_4_ = (int)lVar18;
      auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._0_8_);
      auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar10 = movmskpd((uint)bVar9,auVar8);
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        if (bVar12 == 2) {
          fVar1 = this->SendDeltaTick;
          fVar19 = UDS_GameInstance::GetDelayMoveSync();
          if (fVar1 <= fVar19) {
            return false;
          }
        }
        else if (bVar12 != 1) {
          return bVar12 == 3;
        }
      }
    }
  }
  return true;
}

// LandMountState @ 14bbc4ed0

bool __thiscall
UDS_SyncSendMountMove::LandMountState(UDS_SyncSendMountMove *this,FDS_NetSyncData *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  bool *pbVar6;
  char cVar7;
  undefined1 *puVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  double dVar13;
  double dVar14;
  char local_res8;
  char local_res18;
  char local_res20;
  char local_48;
  
  puVar1 = &(this->MountDetailStateList).field_0x40;
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x61) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x61) {
          if (iVar9 != -1) {
            pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                     ::FindChecked(&this->MountDetailStateList,Mount_Ready);
            local_res8 = *pbVar6;
            goto LAB_14bbc4f41;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  local_res8 = '\0';
LAB_14bbc4f41:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x62) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x62) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Mount_Run);
          local_48 = *pbVar6;
          goto LAB_14bbc4f9e;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  local_48 = '\0';
LAB_14bbc4f9e:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x65) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x65) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Mount_Sprint);
          local_res20 = *pbVar6;
          goto LAB_14bbc5001;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  local_res20 = '\0';
LAB_14bbc5001:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 100) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 100) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Mount_InherenceAction);
          local_res18 = *pbVar6;
          goto LAB_14bbc5061;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  local_res18 = '\0';
LAB_14bbc5061:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x6d) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x6d) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Mount_DisMount);
          cVar5 = *pbVar6;
          goto LAB_14bbc50bc;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  cVar5 = '\0';
LAB_14bbc50bc:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 99) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 99) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Mount_BackMove);
          cVar12 = *pbVar6;
          goto LAB_14bbc511c;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  cVar12 = '\0';
LAB_14bbc511c:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x6c) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x6c) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Mount_Land);
          cVar10 = *pbVar6;
          goto LAB_14bbc517c;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  cVar10 = '\0';
LAB_14bbc517c:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x22) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x22) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Falling);
          cVar11 = *pbVar6;
          goto LAB_14bbc51dc;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  cVar11 = '\0';
LAB_14bbc51dc:
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar8 = *(undefined1 **)puVar1;
    if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
      puVar8 = &(this->MountDetailStateList).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - 1U & 0x1c) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MountDetailStateList + (longlong)iVar9 * 0x10) == 0x1c) {
          pbVar6 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
                   ::FindChecked(&this->MountDetailStateList,Jump1);
          cVar7 = *pbVar6;
          goto LAB_14bbc523b;
        }
        iVar9 = *(int *)(*(longlong *)&this->MountDetailStateList + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  cVar7 = '\0';
LAB_14bbc523b:
  if (local_res8 == '\x01') {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff9cf;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x1c0;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else if (cVar12 == '\x01') {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffb7f;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x370;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else if (local_res18 == '\x01') {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffd5ffffff;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x14000000;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else if (cVar5 == '\x01') {
    uVar2 = *(undefined8 *)&(param_1->InputValue).field0_0x0;
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (uVar2 = *(undefined8 *)((longlong)&(param_1->InputValue).field0_0x0 + 8),
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       ((dVar13 = (param_1->PrevPosition).field0_0x0._s_0.X -
                  (param_1->NowPosition).field0_0x0._s_0.X,
        (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000 &&
        ((dVar13 = (param_1->PrevPosition).field0_0x0._s_0.Y -
                   (param_1->NowPosition).field0_0x0._s_0.Y,
         (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000 &&
         (dVar13 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                   (param_1->NowPosition).field0_0x0._s_0.Z,
         (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)))))) {
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffa6f | 0x260;
      (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
    }
    else {
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff9ff | 0x1f0;
      (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
    }
  }
  else if ((local_res20 == '\x01') && (cVar7 == '\x01')) {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffa1f;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x210;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else if ((local_48 == '\x01') && (cVar7 == '\x01')) {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffa2f;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x220;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else if (cVar10 == '\x01') {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffadf;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x2d0;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else if (cVar11 == '\x01') {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffa3f;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x230;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  else {
    cVar5 = (**(code **)(this->_padding_ + 0x2d0))(this,param_1);
    if (cVar5 == '\x01') {
      if (((param_1->StateFlags).Packed & 3) != 0) {
        if (local_res20 == '\x01') {
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff9ef;
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x1e0;
          this->SendDeltaTick = 0.0;
          (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
          return true;
        }
        if (local_48 == '\x01') {
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffa0f;
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x200;
          this->SendDeltaTick = 0.0;
          (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
          return true;
        }
      }
    }
    else {
      uVar2 = *(undefined8 *)&(param_1->InputValue).field0_0x0;
      if ((((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000) &&
          (uVar2 = *(undefined8 *)((longlong)&(param_1->InputValue).field0_0x0 + 8),
          (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) &&
         ((dVar13 = (param_1->PrevPosition).field0_0x0._s_0.X -
                    (param_1->NowPosition).field0_0x0._s_0.X,
          __real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
          ((dVar14 = (param_1->PrevPosition).field0_0x0._s_0.Y -
                     (param_1->NowPosition).field0_0x0._s_0.Y,
           __real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
           (dVar14 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                     (param_1->NowPosition).field0_0x0._s_0.Z,
           __real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))))) {
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffa0e;
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x202;
        dVar14 = (param_1->PrevPosition).field0_0x0._s_0.Y;
        dVar3 = (param_1->NowPosition).field0_0x0._s_0.Y;
        *(double *)&(param_1->VelocityVector).field0_0x0 = dVar13;
        (param_1->VelocityVector).field0_0x0._s_0.Y = dVar14 - dVar3;
        this->SendDeltaTick = 0.0;
        (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
        return true;
      }
      bVar4 = this->SendDeltaTick <= __real_40a00000;
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
      if (bVar4) {
        return false;
      }
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    }
    this->SendDeltaTick = 0.0;
    (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
  }
  return true;
}

// OnEnter @ 14bbc9070

void __thiscall UDS_SyncSendMountMove::OnEnter(UDS_SyncSendMountMove *this,FDS_NetSyncData *param_1)

{
  return;
}

// OnExit @ 14bbc96a0

void __thiscall UDS_SyncSendMountMove::OnExit(UDS_SyncSendMountMove *this,FDS_NetSyncData *param_1)

{
  return;
}

// UpdateMountState @ 14bbe5730

void __thiscall
UDS_SyncSendMountMove::UpdateMountState(UDS_SyncSendMountMove *this,EDS_CharDetailState param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStateData *this_00;
  bool *pbVar4;
  undefined1 *puVar5;
  EDS_CharDetailState local_res10 [6];
  
  if (*(int *)&(this->MountDetailStateList).field_0x8 !=
      *(int *)&(this->MountDetailStateList).field_0x34) {
    puVar5 = *(undefined1 **)&(this->MountDetailStateList).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->MountDetailStateList).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->MountDetailStateList).field_0x48 - Swim & param_1) *
                              4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->MountDetailStateList;
      while (*(EDS_CharDetailState *)(lVar1 + (longlong)iVar3 * 0x10) != param_1) {
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
        if (iVar3 == -1) {
          return;
        }
      }
      local_res10[0] = param_1;
      this_00 = (UDS_CharStateData *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      bVar2 = UDS_CharStateData::HasCharDetailState(this_00,local_res10);
      pbVar4 = TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
               ::FindChecked(&this->MountDetailStateList,local_res10[0]);
      *pbVar4 = bVar2;
    }
  }
  return;
}


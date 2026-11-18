// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 13

// StaticClass @ 14cfae240

UClass * __cdecl ULiveLinkAnimationRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkAnimationRole",
               &Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton,
               StaticRegisterNativesULiveLinkAnimationRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkAnimationRole>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton;
}

// ULiveLinkAnimationRole @ 14cfb56f0

ULiveLinkAnimationRole * __thiscall
ULiveLinkAnimationRole::ULiveLinkAnimationRole(ULiveLinkAnimationRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkAnimationRole__6B_;
  return this;
}

// ULiveLinkAnimationRole @ 14cfb5720

ULiveLinkAnimationRole * __thiscall
ULiveLinkAnimationRole::ULiveLinkAnimationRole
          (ULiveLinkAnimationRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkAnimationRole__6B_;
  return this;
}

// ~ULiveLinkAnimationRole @ 14cfb64b0

void __thiscall ULiveLinkAnimationRole::~ULiveLinkAnimationRole(ULiveLinkAnimationRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8d60

UScriptStruct * __thiscall
ULiveLinkAnimationRole::GetBlueprintDataStruct(ULiveLinkAnimationRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubjectFrameHandle,(UObject *)pUVar1,
                         L"SubjectFrameHandle");
  }
  return Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton;
}

// GetDisplayName @ 14cfb9640

FText * __thiscall
ULiveLinkAnimationRole::GetDisplayName(ULiveLinkAnimationRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkRole",L"AnimationRole",L"Animation");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb98a0

UScriptStruct * __thiscall ULiveLinkAnimationRole::GetFrameDataStruct(ULiveLinkAnimationRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData,(UObject *)pUVar1,
                         L"LiveLinkAnimationFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfba8c0

UClass * __cdecl ULiveLinkAnimationRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkAnimationRole",
               &Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton,
               StaticRegisterNativesULiveLinkAnimationRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkAnimationRole>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbda0

UScriptStruct * __thiscall ULiveLinkAnimationRole::GetStaticDataStruct(ULiveLinkAnimationRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData,(UObject *)pUVar1,
                         L"LiveLinkSkeletonStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbcdc0

bool __thiscall
ULiveLinkAnimationRole::InitializeBlueprintData
          (ULiveLinkAnimationRole *this,FLiveLinkSubjectFrameData *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseBlueprintData> *param_2)

{
  int iVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  FLiveLinkSkeletonStaticData *pFVar10;
  FLiveLinkAnimationFrameData *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *local_18;
  
  lVar6 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x18))(param_2);
  lVar7 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar7 != 0) {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FSubjectFrameHandle,(UObject *)pUVar9,
                             L"SubjectFrameHandle");
        if (Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbcf88;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton)->_padding_
      ;
      if ((*(int *)(lVar7 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pFVar10 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::
                  Cast<FLiveLinkSkeletonStaticData>(&param_1->StaticData);
        pFVar11 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                            (&param_1->FrameData);
        if (((lVar6 == 0) || (pFVar10 == (FLiveLinkSkeletonStaticData *)0x0)) ||
           (pFVar11 == (FLiveLinkAnimationFrameData *)0x0)) {
          bVar4 = false;
        }
        else {
          pTVar12 = ::operator_new(0x170);
          if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
            pTVar12 = (TReferenceControllerBase<1> *)0x0;
            local_18 = (TReferenceControllerBase<1> *)&DAT_00000010;
          }
          else {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFCachedSubjectFrame___00_SharedPointerInternals__6B_
            ;
            FCachedSubjectFrame::FCachedSubjectFrame
                      ((FCachedSubjectFrame *)(pTVar12 + 1),pFVar10,pFVar11);
            local_18 = pTVar12 + 1;
            if (local_18 == (TReferenceControllerBase<1> *)0x0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L"");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
            }
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar3 = *(TReferenceControllerBase<1> **)(lVar6 + 0x10);
          *(TReferenceControllerBase<1> **)(lVar6 + 8) = local_18;
          *(TReferenceControllerBase<1> **)(lVar6 + 0x10) = pTVar12;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          bVar4 = true;
        }
        return bVar4;
      }
    }
  }
LAB_14cfbcf88:
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
            (&param_1->StaticData);
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
            (&param_1->FrameData);
  return false;
}

// IsFrameDataValid @ 14cfbdd70

bool __thiscall
ULiveLinkAnimationRole::IsFrameDataValid
          (ULiveLinkAnimationRole *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,bool *param_3)

{
  bool bVar1;
  FLiveLinkSkeletonStaticData *pFVar2;
  FLiveLinkAnimationFrameData *pFVar3;
  
  bVar1 = ULiveLinkBasicRole::IsFrameDataValid((ULiveLinkBasicRole *)this,param_1,param_2,param_3);
  if (bVar1) {
    pFVar2 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                       (param_1);
    pFVar3 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                       (param_2);
    if (((pFVar2 != (FLiveLinkSkeletonStaticData *)0x0) &&
        (pFVar3 != (FLiveLinkAnimationFrameData *)0x0)) &&
       ((pFVar2->BoneNames).ArrayNum == (pFVar3->Transforms).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// IsStaticDataValid @ 14cfbdf30

bool __thiscall
ULiveLinkAnimationRole::IsStaticDataValid
          (ULiveLinkAnimationRole *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          bool *param_2)

{
  FLiveLinkSkeletonStaticData *pFVar1;
  
  pFVar1 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                     (param_1);
  if ((pFVar1 != (FLiveLinkSkeletonStaticData *)0x0) &&
     ((pFVar1->BoneParents).ArrayNum == (pFVar1->BoneNames).ArrayNum)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesULiveLinkAnimationRole @ 14cfbe250

void __cdecl ULiveLinkAnimationRole::StaticRegisterNativesULiveLinkAnimationRole(void)

{
  return;
}


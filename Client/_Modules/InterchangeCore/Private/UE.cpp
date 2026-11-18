// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 318

// Construct<FInterchangePipelinePropertyStates> @ 14e303b00

void __cdecl UE::CoreUObject::Private::Construct<FInterchangePipelinePropertyStates>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FInterchangePipelinePropertyStates> @ 14e303b20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangePipelinePropertyStates>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FInterchangePipelinePropertyStates> @ 14e303b40

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangePipelinePropertyStates>(void *param_1)

{
  return;
}

// Copy<FInterchangePipelinePropertyStates> @ 14e303b90

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangePipelinePropertyStates>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 5);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangePipelinePropertyStatePerContext> @ 14e303dc0

void __cdecl
UE::CoreUObject::Private::Construct<FInterchangePipelinePropertyStatePerContext>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FInterchangePipelinePropertyStatePerContext> @ 14e303dd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangePipelinePropertyStatePerContext>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FInterchangePipelinePropertyStatePerContext> @ 14e303de0

void __cdecl
UE::CoreUObject::Private::Destruct<FInterchangePipelinePropertyStatePerContext>(void *param_1)

{
  return;
}

// Copy<FInterchangePipelinePropertyStatePerContext> @ 14e303df0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangePipelinePropertyStatePerContext>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangePipelineContextParams> @ 14e304220

void __cdecl UE::CoreUObject::Private::Construct<FInterchangePipelineContextParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FInterchangePipelineContextParams> @ 14e304250

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangePipelineContextParams>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FInterchangePipelineContextParams> @ 14e304270

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangePipelineContextParams>(void *param_1)

{
  return;
}

// Copy<FInterchangePipelineContextParams> @ 14e304290

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangePipelineContextParams>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 0x18));
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeUserDefinedAttributeInfo> @ 14e322bf0

void __cdecl
UE::CoreUObject::Private::Construct<FInterchangeUserDefinedAttributeInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  return;
}

// ConstructForTests<FInterchangeUserDefinedAttributeInfo> @ 14e322c20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeUserDefinedAttributeInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FInterchangeUserDefinedAttributeInfo> @ 14e322c80

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeUserDefinedAttributeInfo>(void *param_1)

{
  if ((*(int *)((longlong)param_1 + 0x24) != -1) &&
     (*(void **)((longlong)param_1 + 0x18) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FInterchangeUserDefinedAttributeInfo> @ 14e322d40

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeUserDefinedAttributeInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  FString *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int *this;
  
  do {
    if (param_3 == 0) {
      return true;
    }
    ::FString::operator=(param_1,param_2);
    piVar1 = &(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    this = &(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum;
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    if (piVar1 != this) {
      if (*(int *)((longlong)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data
                  + 4) == -1) {
        if (*(int *)((longlong)
                     &(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data + 4) !=
            -1) {
          if (*(void **)this != (void *)0x0) {
            FMemory::Free(*(void **)this);
          }
          *(undefined4 *)
           ((longlong)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data + 4) =
               0xffffffff;
          (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum = 0;
          (((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax = 0;
          *(undefined4 *)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data = 0
          ;
        }
      }
      else {
        if (*(void **)this != (void *)0x0) {
          FMemory::Free(*(void **)this);
        }
        ::FString::FString((FString *)this,(FString *)piVar1);
        if ((*(int *)((longlong)
                      &(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data + 4)
             == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
    }
    pFVar3 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x30);
    *(char *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (char)(pFVar3->Data).ArrayNum;
    param_3 = param_3 + -1;
    param_1 = (FString *)((longlong)param_1 + 0x30);
  } while( true );
}

// AttributeValueToString<signed_char> @ 14e362130

FString * __cdecl
UE::Interchange::AttributeValueToString<signed_char>(FString *__return_storage_ptr__,schar *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,(int)cVar1);
  return __return_storage_ptr__;
}

// AttributeValueToString<unsigned_char> @ 14e362160

FString * __cdecl
UE::Interchange::AttributeValueToString<unsigned_char>
          (FString *__return_storage_ptr__,uchar *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// AttributeValueToString<short> @ 14e362190

FString * __cdecl
UE::Interchange::AttributeValueToString<short>(FString *__return_storage_ptr__,short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,(int)sVar1);
  return __return_storage_ptr__;
}

// AttributeValueToString<unsigned_short> @ 14e3621c0

FString * __cdecl
UE::Interchange::AttributeValueToString<unsigned_short>
          (FString *__return_storage_ptr__,ushort *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// AttributeValueToString<int> @ 14e3621f0

FString * __cdecl
UE::Interchange::AttributeValueToString<int>(FString *__return_storage_ptr__,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

// AttributeValueToString<unsigned_int> @ 14e362220

FString * __cdecl
UE::Interchange::AttributeValueToString<unsigned_int>(FString *__return_storage_ptr__,uint *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// AttributeValueToString<float> @ 14e362250

FString * __cdecl
UE::Interchange::AttributeValueToString<float>(FString *__return_storage_ptr__,float *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// AttributeValueToString<double> @ 14e362280

FString * __cdecl
UE::Interchange::AttributeValueToString<double>(FString *__return_storage_ptr__,double *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TBox2<float>_> @ 14e3622b0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TBox2<float>_>
          (FString *__return_storage_ptr__,TBox2<float> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TBox2<float>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TBox2<double>_> @ 14e3622d0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TBox2<double>_>
          (FString *__return_storage_ptr__,TBox2<double> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TBox2<double>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TBox<float>_> @ 14e3622f0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TBox<float>_>
          (FString *__return_storage_ptr__,TBox<float> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TBox<float>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TBox<double>_> @ 14e362310

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TBox<double>_>
          (FString *__return_storage_ptr__,TBox<double> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TBox<double>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TBoxSphereBounds<float,float>_> @ 14e362330

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TBoxSphereBounds<float,float>_>
          (FString *__return_storage_ptr__,TBoxSphereBounds<float,float> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TBoxSphereBounds<float,float>_>::ToString
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TBoxSphereBounds<double,double>_> @ 14e362350

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TBoxSphereBounds<double,double>_>
          (FString *__return_storage_ptr__,TBoxSphereBounds<double,double> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TBoxSphereBounds<double,double>_>::ToString
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TIntPoint<int>_> @ 14e362370

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TIntPoint<int>_>
          (FString *__return_storage_ptr__,TIntPoint<int> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%d Y=%d");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TIntRect<int>_> @ 14e3623a0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TIntRect<int>_>
          (FString *__return_storage_ptr__,TIntRect<int> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TIntRect<int>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TIntVector3<int>_> @ 14e3623c0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TIntVector3<int>_>
          (FString *__return_storage_ptr__,TIntVector3<int> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TIntVector3<int>_>::ToString
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TMatrix<float>_> @ 14e3623e0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TMatrix<float>_>
          (FString *__return_storage_ptr__,TMatrix<float> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TMatrix<float>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TMatrix<double>_> @ 14e362400

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TMatrix<double>_>
          (FString *__return_storage_ptr__,TMatrix<double> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TMatrix<double>_>::ToString(__return_storage_ptr__,param_1)
  ;
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TPlane<float>_> @ 14e362420

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TPlane<float>_>
          (FString *__return_storage_ptr__,TPlane<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TPlane<double>_> @ 14e362470

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TPlane<double>_>
          (FString *__return_storage_ptr__,TPlane<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TQuat<float>_> @ 14e3624c0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TQuat<float>_>
          (FString *__return_storage_ptr__,TQuat<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TQuat<double>_> @ 14e362520

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TQuat<double>_>
          (FString *__return_storage_ptr__,TQuat<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TRotator<float>_> @ 14e362560

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TRotator<float>_>
          (FString *__return_storage_ptr__,TRotator<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TRotator<double>_> @ 14e3625b0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TRotator<double>_>
          (FString *__return_storage_ptr__,TRotator<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TSphere<float>_> @ 14e362600

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TSphere<float>_>
          (FString *__return_storage_ptr__,TSphere<float> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TSphere<float>_>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TSphere<double>_> @ 14e362620

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TSphere<double>_>
          (FString *__return_storage_ptr__,TSphere<double> *param_1)

{
  TAttributeTypeTraitsInternal<UE::Math::TSphere<double>_>::ToString(__return_storage_ptr__,param_1)
  ;
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TTransform<float>_> @ 14e362640

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TTransform<float>_>
          (FString *__return_storage_ptr__,TTransform<float> *param_1)

{
  UE::Math::TTransform<float>::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TTransform<double>_> @ 14e362670

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TTransform<double>_>
          (FString *__return_storage_ptr__,TTransform<double> *param_1)

{
  UE::Math::TTransform<double>::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TVector2<float>_> @ 14e3626a0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TVector2<float>_>
          (FString *__return_storage_ptr__,TVector2<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TVector2<double>_> @ 14e3626e0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TVector2<double>_>
          (FString *__return_storage_ptr__,TVector2<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TVector4<float>_> @ 14e362720

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TVector4<float>_>
          (FString *__return_storage_ptr__,TVector4<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TVector4<double>_> @ 14e362780

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TVector4<double>_>
          (FString *__return_storage_ptr__,TVector4<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TVector<float>_> @ 14e3627c0

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TVector<float>_>
          (FString *__return_storage_ptr__,TVector<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<UE::Math::TVector<double>_> @ 14e362810

FString * __cdecl
UE::Interchange::AttributeValueToString<UE::Math::TVector<double>_>
          (FString *__return_storage_ptr__,TVector<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<FColor> @ 14e362860

FString * __cdecl
UE::Interchange::AttributeValueToString<FColor>(FString *__return_storage_ptr__,FColor *param_1)

{
  FColor::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<FDateTime> @ 14e362890

FString * __cdecl
UE::Interchange::AttributeValueToString<FDateTime>
          (FString *__return_storage_ptr__,FDateTime *param_1)

{
  FDateTime::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<FFrameNumber> @ 14e3628c0

FString * __cdecl
UE::Interchange::AttributeValueToString<FFrameNumber>
          (FString *__return_storage_ptr__,FFrameNumber *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Frame: %d Subframe: %f");
  return __return_storage_ptr__;
}

// AttributeValueToString<FFrameRate> @ 14e362910

FString * __cdecl
UE::Interchange::AttributeValueToString<FFrameRate>
          (FString *__return_storage_ptr__,FFrameRate *param_1)

{
  FText *this;
  FString *pFVar1;
  FText local_18;
  
  this = FFrameRate::ToPrettyText(param_1,&local_18);
  pFVar1 = FText::ToString(this);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// AttributeValueToString<FFrameTime> @ 14e362960

FString * __cdecl
UE::Interchange::AttributeValueToString<FFrameTime>
          (FString *__return_storage_ptr__,FFrameTime *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// AttributeValueToString<FGuid> @ 14e3629a0

FString * __cdecl
UE::Interchange::AttributeValueToString<FGuid>(FString *__return_storage_ptr__,FGuid *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(param_1,__return_storage_ptr__,DigitsLower);
  return __return_storage_ptr__;
}

// AttributeValueToString<FLinearColor> @ 14e3629e0

FString * __cdecl
UE::Interchange::AttributeValueToString<FLinearColor>
          (FString *__return_storage_ptr__,FLinearColor *param_1)

{
  FLinearColor::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<FOrientedBox> @ 14e362a10

FString * __cdecl
UE::Interchange::AttributeValueToString<FOrientedBox>
          (FString *__return_storage_ptr__,FOrientedBox *param_1)

{
  TAttributeTypeTraitsInternal<FOrientedBox>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<FRandomStream> @ 14e362a30

FString * __cdecl
UE::Interchange::AttributeValueToString<FRandomStream>
          (FString *__return_storage_ptr__,FRandomStream *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"FRandomStream(InitialSeed=%i, Seed=%u)");
  return __return_storage_ptr__;
}

// AttributeValueToString<FSoftObjectPath> @ 14e362a60

FString * __cdecl
UE::Interchange::AttributeValueToString<FSoftObjectPath>
          (FString *__return_storage_ptr__,FSoftObjectPath *param_1)

{
  FSoftObjectPath::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<FTimespan> @ 14e362a90

FString * __cdecl
UE::Interchange::AttributeValueToString<FTimespan>
          (FString *__return_storage_ptr__,FTimespan *param_1)

{
  FTimespan::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<FTwoVectors> @ 14e362ac0

FString * __cdecl
UE::Interchange::AttributeValueToString<FTwoVectors>
          (FString *__return_storage_ptr__,FTwoVectors *param_1)

{
  TAttributeTypeTraitsInternal<FTwoVectors>::ToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<FVector2DHalf> @ 14e362ae0

FString * __cdecl
UE::Interchange::AttributeValueToString<FVector2DHalf>
          (FString *__return_storage_ptr__,FVector2DHalf *param_1)

{
  FGenericPlatformMath::LoadHalf(&(param_1->Y).Encoded);
  FGenericPlatformMath::LoadHalf((ushort *)param_1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 14e362b50

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<signed_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<signed_char_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,(int)(char)*pFVar3);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e362c60

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_char_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e362d70

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  lVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + lVar2;
  while( true ) {
    if (param_1->ArrayNum != lVar2) {
      `TCheckedPointerIterator<unsigned_char_const_,__int64,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e362e80

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<short,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<short,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<short_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,(int)*(short *)pFVar3);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 2;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e362f90

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 2;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e3630a0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,*(int *)pFVar3);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e3631b0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e3632c0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e3633e0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<double,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e363500

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x14;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TBox2<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_38,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x14;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3636e0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TBox2<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_38,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x28;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e3638c0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x1c;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBox<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x1c;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e363ac0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x38;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e363cb0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x1c;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBoxSphereBounds<float,float>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(local_48,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_58,local_48,L", ");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x1c;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e363ea0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBoxSphereBounds<double,double>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(local_48,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_58,local_48,L", ");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x38;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e364080

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntPoint<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%d Y=%d");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e364190

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TIntRect<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_58,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_68,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_38,L"Min=(%s) Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e364330

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  StringifyArrayAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e364350

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  StringifyArrayAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e364370

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  StringifyArrayAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e364390

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TPlane<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e3644d0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TPlane<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e364610

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TQuat<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e364760

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TQuat<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e3648a0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TRotator<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0xc;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e3649e0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TRotator<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e364b20

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TSphere<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::SanitizeFloat(&local_58,(double)*(float *)(pFVar3 + 0xc),1);
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"Center=(%s), Radius=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e364ce0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TSphere<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::SanitizeFloat(&local_58,*(double *)(pFVar3 + 0x18),1);
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"Center=(%s), Radius=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e364e90

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<float> *this;
  TTransform<float> *pTVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (TTransform<float> *)(param_1->AllocatorInstance).Data;
  pTVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this == pTVar2) break;
    UE::Math::TTransform<float>::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e364fa0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *this;
  TTransform<double> *pTVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  pTVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this == pTVar2) break;
    UE::Math::TTransform<double>::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3650b0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3651e0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e365310

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector4<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e365460

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e3655a0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0xc;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3656e0

FString * __cdecl
UE::Interchange::
AttributeValueToString<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e365820

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    FColor::ToString((FColor *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e365930

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDateTime_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    FDateTime::ToString((FDateTime *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e365a40

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ulonglong local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameNumber_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res10 = *(uint *)pFVar3;
    uStackX_14 = 0;
    local_res8 = (ulonglong)local_res10;
    ::FString::PrintfImpl(&local_38,L"Frame: %d Subframe: %f");
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e365b70

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_1)

{
  FFrameRate *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar3;
  FFrameRate *this_00;
  longlong lVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FText local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this_00 = (FFrameRate *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameRate_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar1) break;
    this = FFrameRate::ToPrettyText(this_00,&local_38);
    pFVar3 = FText::ToString(this);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    lVar4 = (longlong)local_58.Data.ArrayNum;
    _Src = (pFVar3->Data).AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    ::FString::ConcatFC(&local_48,&local_58,L", ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e365d10

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameTime_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e365e40

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FGuid *this;
  FGuid *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (FGuid *)(param_1->AllocatorInstance).Data;
  pFVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar2) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_38,DigitsLower);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e365f60

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *this;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (param_1->AllocatorInstance).Data;
  pFVar2 = this + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLinearColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar2) break;
    FLinearColor::ToString((FLinearColor *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e366070

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOrientedBox_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl
              (&local_28,
               L"Center= %f, %f, %f | AxisX= %f, %f, %f | AxisY= %f, %f, %f | AxisZ= %f, %f, %f | Extents= %f, %f, %f"
              );
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x78;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e366200

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<FRandomStream,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRandomStream_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"FRandomStream(InitialSeed=%i, Seed=%u)");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e366310

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FSoftObjectPath *this;
  FSoftObjectPath *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  pFVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pFVar2) break;
    FSoftObjectPath::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e366420

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTimespan_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    FTimespan::ToString((FTimespan *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e366530

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTwoVectors_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"V1=(%s) V2=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x30;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e3666f0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38 [2];
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVector2DHalf_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FGenericPlatformMath::LoadHalf((ushort *)(pFVar3 + 2));
    FGenericPlatformMath::LoadHalf((ushort *)pFVar3);
    ::FString::PrintfImpl(local_38,L"X=%3.3f Y=%3.3f");
    ::FString::ConcatFC(&local_48,local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e366840

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFloat16_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FGenericPlatformMath::LoadHalf((ushort *)pFVar3);
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 2;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e366960

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e366a70

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_48.Data.ArrayNum = *(int *)(pFVar2 + 8);
    lVar4 = (longlong)local_48.Data.ArrayNum;
    _Src = *(void **)pFVar2;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    ::FString::ConcatFC(&local_38,&local_48,L", ");
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e366bf0

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%lld");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e366d00

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%llu");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e366e10

FString * __cdecl
UE::Interchange::AttributeValueToString<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pwVar3 = L"false";
    if (*pFVar4 != (FScriptContainerElement)0x0) {
      pwVar3 = L"true";
    }
    ::FString::FString(&local_38,pwVar3);
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// AttributeValueToString<FFloat16> @ 14e366f30

FString * __cdecl
UE::Interchange::AttributeValueToString<FFloat16>(FString *__return_storage_ptr__,FFloat16 *param_1)

{
  FGenericPlatformMath::LoadHalf(&param_1->Encoded);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// AttributeValueToString<FName> @ 14e366f70

FString * __cdecl
UE::Interchange::AttributeValueToString<FName>(FString *__return_storage_ptr__,FName *param_1)

{
  ::FName::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AttributeValueToString<FString> @ 14e366fa0

FString * __cdecl
UE::Interchange::AttributeValueToString<FString>(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AttributeValueToString<__int64> @ 14e366fc0

FString * __cdecl
UE::Interchange::AttributeValueToString<__int64>(FString *__return_storage_ptr__,long64 *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// AttributeValueToString<unsigned___int64> @ 14e366ff0

FString * __cdecl
UE::Interchange::AttributeValueToString<unsigned___int64>
          (FString *__return_storage_ptr__,ulong64 *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// AttributeValueToString<bool> @ 14e367020

FString * __cdecl
UE::Interchange::AttributeValueToString<bool>(FString *__return_storage_ptr__,bool *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (*param_1 != false) {
    pwVar1 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// CopyStorageAttributesInternal<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>_> @ 14e367960

void __cdecl
UE::Interchange::
CopyStorageAttributesInternal<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>_>
          (FAttributeStorage *param_1,FAttributeStorage *param_2,
          TArray<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  longlong *plVar2;
  size_t sVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar10;
  long64 lVar11;
  ulonglong uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ForAnyElementType *pFVar16;
  FScriptContainerElement *pFVar17;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6 [6];
  FScriptContainerElement *local_a0;
  long64 local_98;
  FScriptContainerElement *local_90;
  TKeyInitializer<UE::Interchange::FAttributeKey_const_&> local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  longlong *local_70;
  LPCRITICAL_SECTION local_68;
  LPCRITICAL_SECTION local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&param_1->StorageMutex;
  local_68 = lpCriticalSection;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lpCriticalSection_00 = (LPCRITICAL_SECTION)&param_2->StorageMutex;
    local_60 = lpCriticalSection_00;
    if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection_00);
      local_88.Key._4_4_ = param_3->ArrayNum;
      uVar12 = (ulonglong)(int)local_88.Key._4_4_;
      pFVar18 = (param_3->AllocatorInstance).Data;
      pFVar17 = pFVar18 + uVar12 * 0x20;
      local_90 = pFVar18 + 0x10;
      local_a0 = pFVar17;
LAB_14e367a01:
      local_80 = pFVar18;
      if (param_3->ArrayNum != (int)uVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar18 == pFVar17) {
        FAttributeStorage::UpdateAllocationCount(param_2);
        LeaveCriticalSection(lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x00014e367f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection(lpCriticalSection);
        return;
      }
      pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        *)param_1,(FAttributeKey *)pFVar18);
      plVar19 = (longlong *)&pTVar10->field_0x10;
      if (pTVar10 ==
          (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
           *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      local_70 = plVar19;
      if (plVar19 != (longlong *)0x0) {
        plVar15 = (longlong *)*plVar19;
        lVar5 = plVar19[1];
        plVar2 = plVar15 + (int)lVar5;
        while( true ) {
          if ((int)plVar19[1] != (int)lVar5) {
            local_a8 = 0;
            `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_a8);
          }
          if (plVar15 == plVar2) break;
          pFVar17 = local_a0;
          if ((*plVar15 < 0) || ((param_1->AttributeStorage).ArrayNum <= *plVar15))
          goto LAB_14e367f18;
          plVar15 = plVar15 + 1;
        }
        pFVar18 = (FScriptContainerElement *)(plVar19 + 2);
        lVar5 = plVar19[4];
        local_78 = pFVar18;
        pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)param_2,(FAttributeKey *)local_80);
        pFVar17 = local_90;
        pFVar16 = (ForAnyElementType *)&pTVar10->field_0x10;
        if (pTVar10 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar16 = (ForAnyElementType *)0x0;
        }
        if (pFVar16 == (ForAnyElementType *)0x0) {
          pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)param_2,(FAttributeKey *)local_90);
          pFVar16 = (ForAnyElementType *)&pTVar10->field_0x10;
          if (pTVar10 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar16 = (ForAnyElementType *)0x0;
          }
          if (pFVar16 != (ForAnyElementType *)0x0) goto LAB_14e367af0;
          local_58 = pFVar17;
          TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<UE::Interchange::FAttributeKey_const_&>_>
                    ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      *)param_2,&local_88,(bool *)&local_58);
          pFVar16 = (ForAnyElementType *)
                    (*(longlong *)&param_2->AttributeAllocationTable +
                    (longlong)(int)local_88.Key * 0x50 + 0x10);
          pFVar17 = (FScriptContainerElement *)(pFVar16 + 2);
          *(int *)&pFVar16[4].Data = (int)lVar5;
          if (pFVar17 != pFVar18) {
            iVar7 = (int)plVar19[3];
            piVar1 = (int *)((longlong)&pFVar16[3].Data + 4);
            pFVar18 = *(FScriptContainerElement **)&pFVar18->field_0x0;
            iVar8 = *piVar1;
            *(int *)&pFVar16[3].Data = iVar7;
            if ((iVar7 == 0) && (iVar8 == 0)) {
              *piVar1 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar7,iVar8,(ForAnyElementType *)pFVar17,iVar7,piVar1);
              if (iVar7 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,pFVar18,(longlong)iVar7 << 3
                      );
              }
            }
          }
          uVar9 = *(uint *)&pFVar16[3].Data;
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          iVar7 = *(int *)((longlong)&pFVar16[1].Data + 4);
          piVar1 = (int *)((longlong)&pFVar16[1].Data + 4);
          *(undefined4 *)&pFVar16[1].Data = 0;
          if (iVar7 < (int)uVar9) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar9,pFVar16,0,piVar1);
          }
          pFVar18 = pFVar16[2].Data;
          iVar7 = *(int *)&pFVar16[3].Data;
          local_50 = pFVar18 + (longlong)iVar7 * 8;
          while( true ) {
            pFVar17 = local_50;
            if (*(int *)&pFVar16[3].Data != iVar7) {
              local_a6[0] = 0;
              `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_a6);
            }
            lpCriticalSection = local_68;
            lpCriticalSection_00 = local_60;
            plVar19 = local_70;
            if (pFVar18 == pFVar17) break;
            sVar3 = *(size_t *)pFVar18;
            lVar11 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                               (1,1,sVar3,&(param_2->AttributeStorage).AllocatorInstance,
                                &(param_2->AttributeStorage).ArrayNum,
                                &(param_2->AttributeStorage).ArrayMax);
            memset((param_2->AttributeStorage).AllocatorInstance.Data + lVar11,0,sVar3);
            local_98 = lVar11;
            if (((pFVar16->Data <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 < pFVar16->Data + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = *(int *)&pFVar16[1].Data;
            if (iVar8 == *piVar1) {
              iVar8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar16,piVar1);
            }
            *(int *)&pFVar16[1].Data = iVar8 + 1;
            pFVar18 = pFVar18 + 8;
            *(long64 *)(pFVar16->Data + (longlong)iVar8 * 8) = local_98;
          }
          goto LAB_14e367d84;
        }
LAB_14e367af0:
        pFVar17 = local_a0;
        if (*(int *)&pFVar16[4].Data == (int)lVar5) {
          iVar7 = *(int *)&pFVar16[3].Data;
          if ((iVar7 == (int)plVar19[3]) &&
             ((iVar7 == 0 ||
              (iVar7 = memcmp(pFVar16[2].Data,*(FScriptContainerElement **)&pFVar18->field_0x0,
                              (longlong)iVar7 << 3), pFVar17 = local_a0, iVar7 == 0)))) {
            pFVar21 = pFVar16->Data;
            iVar7 = *(int *)&pFVar16[1].Data;
            pFVar18 = pFVar21 + (longlong)iVar7 * 8;
            goto LAB_14e367b31;
          }
        }
      }
      goto LAB_14e367f18;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
LAB_14e367b31:
  if (*(int *)&pFVar16[1].Data != iVar7) {
    local_a7 = 0;
    `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_a7);
  }
  if (pFVar21 == pFVar18) goto LAB_14e367d84;
  pFVar17 = local_a0;
  if ((*(longlong *)pFVar21 < 0) || ((param_2->AttributeStorage).ArrayNum <= *(longlong *)pFVar21))
  goto LAB_14e367f18;
  pFVar21 = pFVar21 + 8;
  goto LAB_14e367b31;
LAB_14e367d84:
  plVar2 = local_70;
  pFVar21 = local_78;
  uVar14 = 0;
  *(undefined4 *)((longlong)&pFVar16[4].Data + 4) = *(undefined4 *)((longlong)plVar19 + 0x24);
  pFVar18 = (FScriptContainerElement *)plVar19[6];
  pFVar16[5].Data = (FScriptContainerElement *)plVar19[5];
  pFVar16[6].Data = pFVar18;
  iVar7 = (int)plVar19[3];
  pFVar17 = local_a0;
  uVar12 = uVar14;
  if (0 < iVar7) {
    do {
      uVar13 = (uint)uVar14;
      uVar20 = ~uVar13 >> 0x1f;
      pFVar18 = (param_1->AttributeStorage).AllocatorInstance.Data;
      local_78 = (param_2->AttributeStorage).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar13 < iVar7) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      sVar3 = *(size_t *)(*(FScriptContainerElement **)&pFVar21->field_0x0 + uVar12);
      uVar9 = 0;
      if ((int)uVar13 < (int)plVar2[1]) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar5 = *(longlong *)(uVar12 + *plVar2);
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&pFVar16[1].Data) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy((void *)((longlong)&local_78->field_0x0 + *(longlong *)(pFVar16->Data + uVar12)),
             pFVar18 + lVar5,sVar3);
      iVar7 = *(int *)&pFVar21[8].field_0x0;
      uVar14 = (ulonglong)(uVar13 + 1);
      lpCriticalSection = local_68;
      pFVar17 = local_a0;
      lpCriticalSection_00 = local_60;
      uVar12 = uVar12 + 8;
    } while ((int)(uVar13 + 1) < iVar7);
  }
LAB_14e367f18:
  pFVar18 = local_80 + 0x20;
  local_90 = local_90 + 0x20;
  uVar12 = (ulonglong)local_88.Key._4_4_;
  goto LAB_14e367a01;
}

// CopyStorageAttributesInternal<UE::Interchange::FAttributeKey> @ 14e367fa0

void __cdecl
UE::Interchange::CopyStorageAttributesInternal<UE::Interchange::FAttributeKey>
          (FAttributeStorage *param_1,FAttributeStorage *param_2,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  size_t sVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar11;
  long64 lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ForAnyElementType *pFVar16;
  FScriptContainerElement *pFVar17;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6 [6];
  FScriptContainerElement *local_a0;
  long64 local_98;
  TKeyInitializer<UE::Interchange::FAttributeKey_const_&> local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  longlong *local_78;
  LPCRITICAL_SECTION local_70;
  LPCRITICAL_SECTION local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&param_1->StorageMutex;
  local_70 = lpCriticalSection;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lpCriticalSection_00 = (LPCRITICAL_SECTION)&param_2->StorageMutex;
    local_68 = lpCriticalSection_00;
    if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection_00);
      local_90.Key._4_4_ = param_3->ArrayNum;
      uVar10 = (ulonglong)(int)local_90.Key._4_4_;
      pFVar18 = (param_3->AllocatorInstance).Data;
      pFVar17 = pFVar18 + uVar10 * 0x10;
      local_a0 = pFVar17;
LAB_14e368037:
      local_88 = pFVar18;
      if (param_3->ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Interchange::FAttributeKey_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar18 == pFVar17) {
        FAttributeStorage::UpdateAllocationCount(param_2);
        LeaveCriticalSection(lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x00014e368581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection(lpCriticalSection);
        return;
      }
      pTVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        *)param_1,(FAttributeKey *)pFVar18);
      plVar19 = (longlong *)&pTVar11->field_0x10;
      if (pTVar11 ==
          (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
           *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      local_78 = plVar19;
      if (plVar19 != (longlong *)0x0) {
        plVar15 = (longlong *)*plVar19;
        lVar5 = plVar19[1];
        plVar2 = plVar15 + (int)lVar5;
        while( true ) {
          if ((int)plVar19[1] != (int)lVar5) {
            local_a8 = 0;
            `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_a8);
          }
          pFVar18 = local_88;
          if (plVar15 == plVar2) break;
          pFVar17 = local_a0;
          if ((*plVar15 < 0) || ((param_1->AttributeStorage).ArrayNum <= *plVar15))
          goto LAB_14e368522;
          plVar15 = plVar15 + 1;
        }
        pFVar21 = (FScriptContainerElement *)(plVar19 + 2);
        lVar5 = plVar19[4];
        local_80 = pFVar21;
        pTVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)param_2,(FAttributeKey *)local_88);
        pFVar16 = (ForAnyElementType *)&pTVar11->field_0x10;
        if (pTVar11 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar16 = (ForAnyElementType *)0x0;
        }
        if (pFVar16 == (ForAnyElementType *)0x0) {
          local_60 = pFVar18;
          TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<UE::Interchange::FAttributeKey_const_&>_>
                    ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      *)param_2,&local_90,(bool *)&local_60);
          pFVar16 = (ForAnyElementType *)
                    (*(longlong *)&param_2->AttributeAllocationTable +
                    (longlong)(int)local_90.Key * 0x50 + 0x10);
          pFVar18 = (FScriptContainerElement *)(pFVar16 + 2);
          *(int *)&pFVar16[4].Data = (int)lVar5;
          if (pFVar18 != pFVar21) {
            iVar7 = (int)plVar19[3];
            piVar1 = (int *)((longlong)&pFVar16[3].Data + 4);
            pFVar17 = *(FScriptContainerElement **)&pFVar21->field_0x0;
            iVar8 = *piVar1;
            *(int *)&pFVar16[3].Data = iVar7;
            if ((iVar7 == 0) && (iVar8 == 0)) {
              *piVar1 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar7,iVar8,(ForAnyElementType *)pFVar18,iVar7,piVar1);
              if (iVar7 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar18->field_0x0,pFVar17,(longlong)iVar7 << 3
                      );
              }
            }
          }
          uVar9 = *(uint *)&pFVar16[3].Data;
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          iVar7 = *(int *)((longlong)&pFVar16[1].Data + 4);
          piVar1 = (int *)((longlong)&pFVar16[1].Data + 4);
          *(undefined4 *)&pFVar16[1].Data = 0;
          if (iVar7 < (int)uVar9) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar9,pFVar16,0,piVar1);
          }
          pFVar18 = pFVar16[2].Data;
          iVar7 = *(int *)&pFVar16[3].Data;
          local_58 = pFVar18 + (longlong)iVar7 * 8;
          while( true ) {
            pFVar17 = local_58;
            if (*(int *)&pFVar16[3].Data != iVar7) {
              local_a6[0] = 0;
              `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_a6);
            }
            lpCriticalSection = local_70;
            lpCriticalSection_00 = local_68;
            plVar19 = local_78;
            if (pFVar18 == pFVar17) break;
            sVar3 = *(size_t *)pFVar18;
            lVar12 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                               (1,1,sVar3,&(param_2->AttributeStorage).AllocatorInstance,
                                &(param_2->AttributeStorage).ArrayNum,
                                &(param_2->AttributeStorage).ArrayMax);
            memset((param_2->AttributeStorage).AllocatorInstance.Data + lVar12,0,sVar3);
            local_98 = lVar12;
            if (((pFVar16->Data <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 < pFVar16->Data + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = *(int *)&pFVar16[1].Data;
            if (iVar8 == *piVar1) {
              iVar8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar16,piVar1);
            }
            *(int *)&pFVar16[1].Data = iVar8 + 1;
            pFVar18 = pFVar18 + 8;
            *(long64 *)(pFVar16->Data + (longlong)iVar8 * 8) = local_98;
          }
          goto LAB_14e368393;
        }
        pFVar17 = local_a0;
        if (*(int *)&pFVar16[4].Data == (int)lVar5) {
          iVar7 = *(int *)&pFVar16[3].Data;
          if ((iVar7 == (int)plVar19[3]) &&
             ((iVar7 == 0 ||
              (iVar7 = memcmp(pFVar16[2].Data,*(FScriptContainerElement **)&pFVar21->field_0x0,
                              (longlong)iVar7 << 3), pFVar17 = local_a0, iVar7 == 0)))) {
            pFVar21 = pFVar16->Data;
            iVar7 = *(int *)&pFVar16[1].Data;
            pFVar18 = pFVar21 + (longlong)iVar7 * 8;
            goto LAB_14e368140;
          }
        }
      }
      goto LAB_14e368522;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
LAB_14e368140:
  if (*(int *)&pFVar16[1].Data != iVar7) {
    local_a7 = 0;
    `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_a7);
  }
  if (pFVar21 == pFVar18) goto LAB_14e368393;
  pFVar17 = local_a0;
  if ((*(longlong *)pFVar21 < 0) || ((param_2->AttributeStorage).ArrayNum <= *(longlong *)pFVar21))
  goto LAB_14e368522;
  pFVar21 = pFVar21 + 8;
  goto LAB_14e368140;
LAB_14e368393:
  plVar2 = local_78;
  pFVar21 = local_80;
  uVar14 = 0;
  *(undefined4 *)((longlong)&pFVar16[4].Data + 4) = *(undefined4 *)((longlong)plVar19 + 0x24);
  pFVar18 = (FScriptContainerElement *)plVar19[6];
  pFVar16[5].Data = (FScriptContainerElement *)plVar19[5];
  pFVar16[6].Data = pFVar18;
  iVar7 = (int)plVar19[3];
  pFVar17 = local_a0;
  uVar10 = uVar14;
  if (0 < iVar7) {
    do {
      uVar13 = (uint)uVar14;
      uVar20 = ~uVar13 >> 0x1f;
      pFVar18 = (param_1->AttributeStorage).AllocatorInstance.Data;
      local_80 = (param_2->AttributeStorage).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar13 < iVar7) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      sVar3 = *(size_t *)(*(FScriptContainerElement **)&pFVar21->field_0x0 + uVar10);
      uVar9 = 0;
      if ((int)uVar13 < (int)plVar2[1]) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar5 = *(longlong *)(uVar10 + *plVar2);
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&pFVar16[1].Data) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy((void *)((longlong)&local_80->field_0x0 + *(longlong *)(pFVar16->Data + uVar10)),
             pFVar18 + lVar5,sVar3);
      iVar7 = *(int *)&pFVar21[8].field_0x0;
      uVar14 = (ulonglong)(uVar13 + 1);
      lpCriticalSection = local_70;
      pFVar17 = local_a0;
      lpCriticalSection_00 = local_68;
      uVar10 = uVar10 + 8;
    } while ((int)(uVar13 + 1) < iVar7);
  }
LAB_14e368522:
  pFVar18 = local_88 + 0x10;
  uVar10 = (ulonglong)local_90.Key._4_4_;
  goto LAB_14e368037;
}

// GetValueSizeInternal<signed_char> @ 14e3aa010

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<signed_char>(schar *param_1)

{
  return 1;
}

// GetValueSizeInternal<unsigned_char> @ 14e3aa020

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<unsigned_char>(uchar *param_1)

{
  return 1;
}

// GetValueSizeInternal<short> @ 14e3aa030

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<short>(short *param_1)

{
  return 2;
}

// GetValueSizeInternal<unsigned_short> @ 14e3aa040

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<unsigned_short>(ushort *param_1)

{
  return 2;
}

// GetValueSizeInternal<int> @ 14e3aa050

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<int>(int *param_1)

{
  return 4;
}

// GetValueSizeInternal<unsigned_int> @ 14e3aa060

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<unsigned_int>(uint *param_1)

{
  return 4;
}

// GetValueSizeInternal<float> @ 14e3aa070

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<float>(float *param_1)

{
  return 4;
}

// GetValueSizeInternal<double> @ 14e3aa080

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<double>(double *param_1)

{
  return 8;
}

// GetValueSizeInternal<UE::Math::TBox2<float>_> @ 14e3aa090

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TBox2<float>_>(TBox2<float> *param_1)

{
  return 0x14;
}

// GetValueSizeInternal<UE::Math::TBox2<double>_> @ 14e3aa0a0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TBox2<double>_>(TBox2<double> *param_1)

{
  return 0x28;
}

// GetValueSizeInternal<UE::Math::TBox<float>_> @ 14e3aa0b0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<UE::Math::TBox<float>_>(TBox<float> *param_1)

{
  return 0x1c;
}

// GetValueSizeInternal<UE::Math::TBox<double>_> @ 14e3aa0c0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TBox<double>_>(TBox<double> *param_1)

{
  return 0x38;
}

// GetValueSizeInternal<UE::Math::TBoxSphereBounds<float,float>_> @ 14e3aa0d0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TBoxSphereBounds<float,float>_>
          (TBoxSphereBounds<float,float> *param_1)

{
  return 0x1c;
}

// GetValueSizeInternal<UE::Math::TBoxSphereBounds<double,double>_> @ 14e3aa0e0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TBoxSphereBounds<double,double>_>
          (TBoxSphereBounds<double,double> *param_1)

{
  return 0x38;
}

// GetValueSizeInternal<UE::Math::TIntPoint<int>_> @ 14e3aa0f0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TIntPoint<int>_>(TIntPoint<int> *param_1)

{
  return 8;
}

// GetValueSizeInternal<UE::Math::TIntRect<int>_> @ 14e3aa100

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TIntRect<int>_>(TIntRect<int> *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<UE::Math::TIntVector3<int>_> @ 14e3aa110

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TIntVector3<int>_>(TIntVector3<int> *param_1)

{
  return 0xc;
}

// GetValueSizeInternal<UE::Math::TMatrix<float>_> @ 14e3aa120

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TMatrix<float>_>(TMatrix<float> *param_1)

{
  return 0x40;
}

// GetValueSizeInternal<UE::Math::TMatrix<double>_> @ 14e3aa130

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TMatrix<double>_>(TMatrix<double> *param_1)

{
  return 0x80;
}

// GetValueSizeInternal<UE::Math::TPlane<float>_> @ 14e3aa140

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TPlane<float>_>(TPlane<float> *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<UE::Math::TPlane<double>_> @ 14e3aa150

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TPlane<double>_>(TPlane<double> *param_1)

{
  return 0x20;
}

// GetValueSizeInternal<UE::Math::TQuat<float>_> @ 14e3aa160

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TQuat<float>_>(TQuat<float> *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<UE::Math::TQuat<double>_> @ 14e3aa170

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TQuat<double>_>(TQuat<double> *param_1)

{
  return 0x20;
}

// GetValueSizeInternal<UE::Math::TRotator<float>_> @ 14e3aa180

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TRotator<float>_>(TRotator<float> *param_1)

{
  return 0xc;
}

// GetValueSizeInternal<UE::Math::TRotator<double>_> @ 14e3aa190

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TRotator<double>_>(TRotator<double> *param_1)

{
  return 0x18;
}

// GetValueSizeInternal<UE::Math::TSphere<float>_> @ 14e3aa1a0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TSphere<float>_>(TSphere<float> *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<UE::Math::TSphere<double>_> @ 14e3aa1b0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TSphere<double>_>(TSphere<double> *param_1)

{
  return 0x20;
}

// GetValueSizeInternal<UE::Math::TTransform<float>_> @ 14e3aa1c0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TTransform<float>_>(TTransform<float> *param_1)

{
  return 0x30;
}

// GetValueSizeInternal<UE::Math::TTransform<double>_> @ 14e3aa1d0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TTransform<double>_>(TTransform<double> *param_1)

{
  return 0x60;
}

// GetValueSizeInternal<UE::Math::TVector2<float>_> @ 14e3aa1e0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TVector2<float>_>(TVector2<float> *param_1)

{
  return 8;
}

// GetValueSizeInternal<UE::Math::TVector2<double>_> @ 14e3aa1f0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TVector2<double>_>(TVector2<double> *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<UE::Math::TVector4<float>_> @ 14e3aa200

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TVector4<float>_>(TVector4<float> *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<UE::Math::TVector4<double>_> @ 14e3aa210

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TVector4<double>_>(TVector4<double> *param_1)

{
  return 0x20;
}

// GetValueSizeInternal<UE::Math::TVector<float>_> @ 14e3aa220

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TVector<float>_>(TVector<float> *param_1)

{
  return 0xc;
}

// GetValueSizeInternal<UE::Math::TVector<double>_> @ 14e3aa230

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<UE::Math::TVector<double>_>(TVector<double> *param_1)

{
  return 0x18;
}

// GetValueSizeInternal<FColor> @ 14e3aa240

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FColor>(FColor *param_1)

{
  return 4;
}

// GetValueSizeInternal<FDateTime> @ 14e3aa250

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FDateTime>(FDateTime *param_1)

{
  return 8;
}

// GetValueSizeInternal<FFrameNumber> @ 14e3aa260

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FFrameNumber>(FFrameNumber *param_1)

{
  return 4;
}

// GetValueSizeInternal<FFrameRate> @ 14e3aa270

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FFrameRate>(FFrameRate *param_1)

{
  return 8;
}

// GetValueSizeInternal<FFrameTime> @ 14e3aa280

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FFrameTime>(FFrameTime *param_1)

{
  return 8;
}

// GetValueSizeInternal<FGuid> @ 14e3aa290

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FGuid>(FGuid *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<FLinearColor> @ 14e3aa2a0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FLinearColor>(FLinearColor *param_1)

{
  return 0x10;
}

// GetValueSizeInternal<FOrientedBox> @ 14e3aa2b0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FOrientedBox>(FOrientedBox *param_1)

{
  return 0x78;
}

// GetValueSizeInternal<FRandomStream> @ 14e3aa2c0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FRandomStream>(FRandomStream *param_1)

{
  return 8;
}

// GetValueSizeInternal<FSoftObjectPath> @ 14e3aa2d0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FSoftObjectPath>(FSoftObjectPath *param_1)

{
  FString local_18;
  
  FSoftObjectPath::ToString(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayNum = 1;
  }
  return (longlong)local_18.Data.ArrayNum * 2;
}

// GetValueSizeInternal<FTimespan> @ 14e3aa310

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FTimespan>(FTimespan *param_1)

{
  return 8;
}

// GetValueSizeInternal<FTwoVectors> @ 14e3aa320

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FTwoVectors>(FTwoVectors *param_1)

{
  return 0x30;
}

// GetValueSizeInternal<FVector2DHalf> @ 14e3aa330

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FVector2DHalf>(FVector2DHalf *param_1)

{
  return 4;
}

// GetValueSizeInternal<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 14e3aa340

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum;
}

// GetValueSizeInternal<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e3aa350

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum;
}

// GetValueSizeInternal<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e3aa360

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  return param_1->ArrayNum;
}

// GetValueSizeInternal<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e3aa370

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<short,TSizedDefaultAllocator<32>_>_>
          (TArray<short,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 2;
}

// GetValueSizeInternal<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e3aa380

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 2;
}

// GetValueSizeInternal<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e3aa390

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 2;
}

// GetValueSizeInternal<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e3aa3a0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 2;
}

// GetValueSizeInternal<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e3aa3b0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 2;
}

// GetValueSizeInternal<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e3aa3c0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa3d0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x14;
}

// GetValueSizeInternal<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa3f0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x28;
}

// GetValueSizeInternal<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa410

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x1c;
}

// GetValueSizeInternal<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa420

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x38;
}

// GetValueSizeInternal<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa430

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x1c;
}

// GetValueSizeInternal<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa440

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x38;
}

// GetValueSizeInternal<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e3aa450

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e3aa460

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e3aa470

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0xc;
}

// GetValueSizeInternal<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa490

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 6;
}

// GetValueSizeInternal<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa4a0

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 7;
}

// GetValueSizeInternal<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa4b0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa4c0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 5;
}

// GetValueSizeInternal<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa4d0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa4e0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 5;
}

// GetValueSizeInternal<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa4f0

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0xc;
}

// GetValueSizeInternal<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa510

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x18;
}

// GetValueSizeInternal<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa530

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa540

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 5;
}

// GetValueSizeInternal<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa550

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x30;
}

// GetValueSizeInternal<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa570

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x60;
}

// GetValueSizeInternal<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa590

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa5a0

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa5b0

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa5c0

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 5;
}

// GetValueSizeInternal<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e3aa5d0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0xc;
}

// GetValueSizeInternal<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3aa5f0

ulong64 __cdecl
UE::Interchange::
GetValueSizeInternal<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x18;
}

// GetValueSizeInternal<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e3aa610

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 2;
}

// GetValueSizeInternal<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e3aa620

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e3aa630

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 2;
}

// GetValueSizeInternal<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e3aa640

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e3aa650

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e3aa660

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e3aa670

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 4;
}

// GetValueSizeInternal<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e3aa680

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x78;
}

// GetValueSizeInternal<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e3aa690

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e3aa6a0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e3aa6b0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 0x30;
}

// GetValueSizeInternal<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e3aa6d0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 2;
}

// GetValueSizeInternal<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e3aa6e0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum * 2;
}

// GetValueSizeInternal<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e3aa6f0

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e3aa700

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum << 3;
}

// GetValueSizeInternal<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e3aa710

ulong64 __cdecl
UE::Interchange::GetValueSizeInternal<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  return (longlong)param_1->ArrayNum;
}

// GetValueSizeInternal<FFloat16> @ 14e3aa720

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FFloat16>(FFloat16 *param_1)

{
  return 2;
}

// GetValueSizeInternal<FName> @ 14e3aa730

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FName>(FName *param_1)

{
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayNum = 1;
  }
  return (longlong)local_18.Data.ArrayNum * 2;
}

// GetValueSizeInternal<FString> @ 14e3aa770

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<FString>(FString *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return (longlong)iVar1 * 2;
}

// GetValueSizeInternal<__int64> @ 14e3aa790

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<__int64>(long64 *param_1)

{
  return 8;
}

// GetValueSizeInternal<unsigned___int64> @ 14e3aa7a0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<unsigned___int64>(ulong64 *param_1)

{
  return 8;
}

// GetValueSizeInternal<bool> @ 14e3aa7b0

ulong64 __cdecl UE::Interchange::GetValueSizeInternal<bool>(bool *param_1)

{
  return 1;
}

// ParseNumberFromName<wchar_t> @ 14e3b8020

uint __cdecl UE::Core::Private::ParseNumberFromName<wchar_t>(wchar_t *param_1,int *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_2;
  uVar3 = 0;
  uVar5 = 0;
  uVar6 = uVar3;
  for (pwVar4 = param_1 + (longlong)iVar2 + -1;
      (param_1 <= pwVar4 && (uVar5 = (uint)uVar6, (ushort)(*pwVar4 + L'￐') < 10));
      pwVar4 = pwVar4 + -1) {
    uVar5 = uVar5 + 1;
    uVar6 = (ulonglong)uVar5;
  }
  pwVar4 = param_1 + ((longlong)iVar2 - (longlong)(int)uVar5);
  if ((((uVar5 == 0) || (iVar2 <= (int)uVar5)) || (pwVar4[-1] != L'_')) ||
     ((10 < (int)uVar5 || ((uVar5 != 1 && (*pwVar4 == L'0')))))) {
    return 0;
  }
  uVar6 = uVar3;
  if (0 < (int)uVar5) {
    do {
      pwVar1 = pwVar4 + uVar3;
      uVar3 = uVar3 + 1;
      uVar6 = (ulonglong)(ushort)*pwVar1 + (uVar6 * 5 + -0x18) * 2;
    } while ((longlong)uVar3 < (longlong)(int)uVar5);
    if (0x7ffffffe < (longlong)uVar6) {
      return 0;
    }
  }
  *param_2 = (iVar2 - uVar5) + -1;
  return (int)uVar6 + 1;
}

// RunTestInternal<int> @ 14e3ce420

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::ArrayAttributeHelperTests::Private::RunTestInternal<int>(FArrayAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  FAttributeStorage *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  EAttributeTypes EVar8;
  int iVar9;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar10;
  EAttributeStorageResult EVar11;
  FString *pFVar12;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar13;
  ulonglong uVar14;
  FAttributeStorage *pFVar15;
  ForAnyElementType FVar16;
  FWeakReferencer<1> FVar17;
  FWeakReferencer<1> FVar18;
  FAttributeStorage *pFVar19;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  int local_res20 [2];
  TArrayAttributeHelper<int> local_1d8;
  int local_1b8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_1b0;
  int local_1a0 [4];
  FAttributeKey local_190;
  FAttributeKey local_180;
  FAttributeKey local_170;
  FAttributeKey local_160;
  FAttributeKey local_150;
  FAttributeKey local_140;
  TAttributeHandle<int,void> local_130;
  TAttributeHandle<int,void> local_118;
  FAttributeKey local_100;
  FAttributeKey local_f0;
  FString local_e0;
  FString local_d0;
  FMemScope local_c0;
  FString local_b8;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  ::FString::FString(&local_b8,L"TestKey");
  pTVar10 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_a8);
  pFVar4 = (FAttributeStorage *)(pTVar10->SharedReferenceCount).ReferenceController;
  pFVar15 = pTVar10->Object;
  if (pFVar4 != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar4->AttributeAllocationTable).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  pFVar19 = (FAttributeStorage *)0x0;
  local_1d8.Attributes.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1d8.KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.KeyCount.Key.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name34,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res18,
             `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope
            (&local_c0,
             &`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<int>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name34,true);
  if ((pFVar15 == (FAttributeStorage *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAttributes.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x24,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1d8.Attributes.Object = pFVar15;
  FVar18.ReferenceController = local_1d8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar4 != (FAttributeStorage *)local_1d8.Attributes.WeakReferenceCount.ReferenceController) {
    if (pFVar4 != (FAttributeStorage *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar4->AttributeAllocationTable).field_0xc;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    if ((FAttributeStorage *)local_1d8.Attributes.WeakReferenceCount.ReferenceController !=
        (FAttributeStorage *)0x0) {
      LOCK();
      paVar1 = &(local_1d8.Attributes.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)
                      &(local_1d8.Attributes.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )();
      }
    }
  }
  local_1d8.Attributes.WeakReferenceCount.ReferenceController = FVar18.ReferenceController;
  FVar16.Data = local_b8.Data.AllocatorInstance.Data;
  local_1d8.KeyCount.Key.Data.ArrayNum = local_b8.Data.ArrayNum;
  if (((local_b8.Data.ArrayNum != 0) || (local_1d8.KeyCount.Key.Data.ArrayMax != 0)) &&
     (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8.Data.ArrayNum,local_1d8.KeyCount.Key.Data.ArrayMax,
                 (ForAnyElementType *)&local_1d8.KeyCount,local_b8.Data.ArrayNum,
                 &local_1d8.KeyCount.Key.Data.ArrayMax), local_b8.Data.ArrayNum != 0)) {
    memcpy(local_1d8.KeyCount.Key.Data.AllocatorInstance.Data,FVar16.Data,
           (longlong)local_b8.Data.ArrayNum * 2);
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_res18);
  FVar18.ReferenceController = local_1d8.Attributes.WeakReferenceCount.ReferenceController;
  local_1b8[1] = 0;
  pFVar15 = pFVar19;
  if ((FAttributeStorage *)local_1d8.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar3 = (local_1d8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar17.ReferenceController = (TReferenceControllerBase<1> *)pFVar19;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3ce601;
      LOCK();
      aVar7 = (local_1d8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar6 = aVar3 == aVar7;
      if (bVar6) {
        (local_1d8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      pFVar15 = local_1d8.Attributes.Object;
      aVar3 = aVar7;
    } while (!bVar6);
  }
  FVar17.ReferenceController = local_1d8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar15 == (FAttributeStorage *)0x0) {
LAB_14e3ce601:
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    FVar18.ReferenceController = FVar17.ReferenceController;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_1d8.KeyCount.Key.Data.ArrayNum;
    FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_190.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
    if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
      local_190.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_190,
                 local_1d8.KeyCount.Key.Data.ArrayNum,&local_190.Key.Data.ArrayMax);
      memcpy(local_190.Key.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar9 * 2);
    }
    bVar6 = Interchange::FAttributeStorage::ContainAttribute(pFVar15,&local_190);
    if (local_190.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      local_1a0[0] = 0;
      if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = local_1d8.KeyCount.Key.Data.ArrayNum;
      FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
      local_180.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
      if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
        local_180.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_180,
                   local_1d8.KeyCount.Key.Data.ArrayNum,&local_180.Key.Data.ArrayMax);
        memcpy(local_180.Key.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar9 * 2);
      }
      EVar11 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar15,&local_180,local_1a0,None);
      if (local_180.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar11 & Operation_Success) == None) {
        if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_1d8.KeyCount.Key.Data.ArrayNum;
        FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
        local_100.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
        if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
          local_100.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                     local_1d8.KeyCount.Key.Data.ArrayNum,&local_100.Key.Data.ArrayMax);
          memcpy(local_100.Key.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar9 * 2);
        }
        pFVar12 = ::FString::FString(&local_78,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar11,pFVar12,&local_100);
        goto LAB_14e3cea3e;
      }
    }
    if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_1d8.KeyCount.Key.Data.ArrayNum;
    FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_170.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
    if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
      local_170.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_170,
                 local_1d8.KeyCount.Key.Data.ArrayNum,&local_170.Key.Data.ArrayMax);
      memcpy(local_170.Key.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar9 * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_130,&local_170,pFVar15);
    if (local_170.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Key.Data.AllocatorInstance.Data);
    }
    if (((local_130.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar6 = Interchange::FAttributeStorage::ContainAttribute
                           (local_130.AttributeStorage,&local_130.Key), !bVar6)) ||
       (EVar8 = Interchange::FAttributeStorage::GetAttributeType
                          (local_130.AttributeStorage,&local_130.Key), EVar8 != Int32)) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4942768438637494430>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x9e,"Handle.IsValid()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_res20[0] = 0;
      if (local_130.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_130.AttributeStorage,&local_130.Key,local_res20);
      }
      iVar9 = local_res20[0];
      Interchange::TArrayAttributeHelper<int>::GetIndexKey
                (&local_1d8,(FAttributeKey *)&local_e0,local_res20[0]);
      EVar11 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar15,(FAttributeKey *)&local_e0,local_1b8 + 1,None);
      if ((EVar11 & Operation_Success) == None) {
        ::FString::FString(&local_98,&local_e0);
        pFVar12 = ::FString::FString(&local_68,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar11,pFVar12,(FAttributeKey *)&local_98);
      }
      else {
        local_res20[0] = iVar9 + 1;
        if (local_130.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_130.AttributeStorage,&local_130.Key);
          pFVar15 = (FAttributeStorage *)&pTVar13->field_0x10;
          if (pTVar13 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar15 = pFVar19;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_130.AttributeStorage,(FAttributeAllocationInfo *)pFVar15,local_res20);
        }
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    if (local_130.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3cea3e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  FVar18.ReferenceController = local_1d8.Attributes.WeakReferenceCount.ReferenceController;
  pFVar15 = pFVar19;
  if ((FAttributeStorage *)local_1d8.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar3 = (local_1d8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar17.ReferenceController = (TReferenceControllerBase<1> *)pFVar19;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3cea7d;
      LOCK();
      aVar7 = (local_1d8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar6 = aVar3 == aVar7;
      if (bVar6) {
        (local_1d8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      pFVar15 = local_1d8.Attributes.Object;
      aVar3 = aVar7;
    } while (!bVar6);
  }
  FVar17.ReferenceController = local_1d8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar15 == (FAttributeStorage *)0x0) {
LAB_14e3cea7d:
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    FVar18.ReferenceController = FVar17.ReferenceController;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_1d8.KeyCount.Key.Data.ArrayNum;
    FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_160.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
    if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
      local_160.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_160,
                 local_1d8.KeyCount.Key.Data.ArrayNum,&local_160.Key.Data.ArrayMax);
      memcpy(local_160.Key.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar9 * 2);
    }
    bVar6 = Interchange::FAttributeStorage::ContainAttribute(pFVar15,&local_160);
    if (local_160.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      local_1a0[1] = 0;
      if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = local_1d8.KeyCount.Key.Data.ArrayNum;
      FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
      local_150.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
      if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
        local_150.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_150,
                   local_1d8.KeyCount.Key.Data.ArrayNum,&local_150.Key.Data.ArrayMax);
        memcpy(local_150.Key.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar9 * 2);
      }
      EVar11 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar15,&local_150,local_1a0 + 1,None);
      if (local_150.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar11 & Operation_Success) == None) {
        if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
        local_f0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
        if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
          local_f0.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                     local_1d8.KeyCount.Key.Data.ArrayNum,&local_f0.Key.Data.ArrayMax);
          memcpy(local_f0.Key.Data.AllocatorInstance.Data,FVar16.Data,
                 (longlong)local_1d8.KeyCount.Key.Data.ArrayNum * 2);
        }
        pFVar12 = ::FString::FString(&local_58,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar11,pFVar12,&local_f0);
        goto LAB_14e3ceea2;
      }
    }
    if ((local_1d8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar16.Data = local_1d8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_140.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Key.Data.ArrayNum = local_1d8.KeyCount.Key.Data.ArrayNum;
    if (local_1d8.KeyCount.Key.Data.ArrayNum == 0) {
      local_140.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_140,
                 local_1d8.KeyCount.Key.Data.ArrayNum,&local_140.Key.Data.ArrayMax);
      memcpy(local_140.Key.Data.AllocatorInstance.Data,FVar16.Data,
             (longlong)local_1d8.KeyCount.Key.Data.ArrayNum * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_118,&local_140,pFVar15);
    if (local_140.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Key.Data.AllocatorInstance.Data);
    }
    if (((local_118.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar6 = Interchange::FAttributeStorage::ContainAttribute
                           (local_118.AttributeStorage,&local_118.Key), !bVar6)) ||
       (EVar8 = Interchange::FAttributeStorage::GetAttributeType
                          (local_118.AttributeStorage,&local_118.Key), EVar8 != Int32)) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4942768438637494430>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x9e,"Handle.IsValid()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_1b8[0] = 0;
      if (local_118.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_118.AttributeStorage,&local_118.Key,local_1b8);
      }
      iVar9 = local_1b8[0];
      Interchange::TArrayAttributeHelper<int>::GetIndexKey
                (&local_1d8,(FAttributeKey *)&local_d0,local_1b8[0]);
      EVar11 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar15,(FAttributeKey *)&local_d0,local_1b8 + 1,None);
      if ((EVar11 & Operation_Success) == None) {
        ::FString::FString(&local_88,&local_d0);
        pFVar12 = ::FString::FString(&local_48,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar11,pFVar12,(FAttributeKey *)&local_88);
      }
      else {
        local_1b8[0] = iVar9 + 1;
        if (local_118.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_118.AttributeStorage,&local_118.Key);
          pFVar15 = (FAttributeStorage *)&pTVar13->field_0x10;
          if (pTVar13 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar15 = pFVar19;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_118.AttributeStorage,(FAttributeAllocationInfo *)pFVar15,local_1b8);
        }
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_118.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3ceea2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  Interchange::TArrayAttributeHelper<int>::AddItem(&local_1d8,local_1b8 + 1);
  iVar9 = Interchange::TArrayAttributeHelper<int>::GetCount(&local_1d8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after adding 3",iVar9,3);
  Interchange::TArrayAttributeHelper<int>::GetItem(&local_1d8,2,local_1a0 + 2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Retrieved item after adding 3",local_1a0[2],0);
  Interchange::TArrayAttributeHelper<int>::RemoveItem(&local_1d8,local_1b8 + 1);
  iVar9 = Interchange::TArrayAttributeHelper<int>::GetCount(&local_1d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Count after removal with duplicates",iVar9,2);
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  Interchange::TArrayAttributeHelper<int>::GetItems(&local_1d8,&local_1b0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1b0.ArrayNum,2);
  iVar9 = local_1b0.ArrayNum;
  uVar14 = (ulonglong)local_1b0.ArrayNum;
  pFVar2 = local_1b0.AllocatorInstance.Data + uVar14 * 4;
  FVar16.Data = local_1b0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar14 != iVar9) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar16.Data == pFVar2) break;
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)param_1,L"Item equals the expected value",*(int *)FVar16.Data,
               0);
    uVar14 = local_1b0._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 4;
  }
  Interchange::TArrayAttributeHelper<int>::RemoveAllItems(&local_1d8);
  iVar9 = Interchange::TArrayAttributeHelper<int>::GetCount(&local_1d8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after remove all",iVar9,0);
  Interchange::TArrayAttributeHelper<int>::GetItems(&local_1d8,&local_1b0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1b0.ArrayNum,0);
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(&local_1d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<int,int> @ 14e3cf090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MapAttributeHelperTests::Private::RunTestInternal<int,int>(FMapAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar11;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar12;
  EAttributeStorageResult EVar13;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar14;
  EAttributeStorageResult EVar15;
  ForElementType<FSetElementId> FVar16;
  int *piVar17;
  FAttributeStorage *pFVar18;
  longlong lVar19;
  uint *puVar20;
  FAttributeStorage *pFVar21;
  FAttributeAllocationInfo *pFVar22;
  FAttributeStorage *pFVar23;
  FWeakReferencer<1> FVar24;
  FWeakReferencer<1> FVar25;
  FAttributeStorage *pFVar26;
  undefined1 auStackY_298 [32];
  uint local_268;
  uint local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248 [2];
  TAttributeHandle<int,void> local_240;
  TAttributeHandle<int,void> local_228;
  TAttributeHandle<int,void> local_210;
  TAttributeHandle<int,void> local_1f8;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_1e0;
  FAttributeKey local_1d0;
  FAttributeKey local_1c0;
  FAttributeKey local_1b0;
  FAttributeKey local_1a0;
  FAttributeStorage *local_190;
  FScriptContainerElement *local_188;
  int local_180;
  int local_17c;
  FAttributeStorage *local_178;
  FScriptContainerElement *local_170;
  int local_168;
  int local_164;
  FAttributeStorage *local_160;
  FScriptContainerElement *local_158;
  int local_150;
  int local_14c;
  FAttributeStorage *local_148;
  FScriptContainerElement *local_140;
  int local_138;
  int local_134;
  FString local_130;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_120;
  undefined1 local_108 [64];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  FAttributeStorage *local_b8;
  FAttributeKey local_b0;
  FAttributeStorage *local_a0;
  FWeakReferencer<1> local_98;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  ::FString::FString(&local_130,L"TestKey");
  pTVar11 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_120);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar26 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  local_108._44_4_ = 0x80;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_b8 = (FAttributeStorage *)0x0;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Key.Data.ArrayNum = 0;
  local_b0.Key.Data.ArrayMax = 0;
  if ((pFVar26 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e0.Object = pFVar26;
  local_1e0.SharedReferenceCount.ReferenceController = pTVar4;
  if ((pFVar26 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Interchange::TMapAttributeHelper<int,int>::Initialize
            ((TMapAttributeHelper<int,int> *)local_108,&local_1e0,&local_130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FVar25.ReferenceController = local_98.ReferenceController;
  pFVar23 = (FAttributeStorage *)0x0;
  local_264 = 0x14;
  local_25c = 0x14;
  local_268 = 1;
  local_260 = 1;
  pFVar26 = pFVar23;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar23;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cf272;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar26 = local_a0;
      aVar2 = aVar8;
    } while (!bVar7);
  }
  FVar24.ReferenceController = local_98.ReferenceController;
  if (pFVar26 == (FAttributeStorage *)0x0) {
LAB_14e3cf272:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar25.ReferenceController = FVar24.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (local_108._8_4_ - local_108._52_4_ != 0) {
      FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_c8;
      }
      iVar10 = *(int *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & 1) * 4);
      while (iVar10 != -1) {
        piVar17 = (int *)((longlong)iVar10 * 0x40 + local_108._0_8_);
        if (*piVar17 == 1) {
          pFVar18 = (FAttributeStorage *)(piVar17 + 2);
          if (piVar17 == (int *)0x0) {
            pFVar18 = pFVar23;
          }
          if (pFVar18 != (FAttributeStorage *)0x0) {
            pFVar26 = *(FAttributeStorage **)&(pFVar18->AttributeAllocationTable).field_0x18;
            if (pFVar26 != (FAttributeStorage *)0x0) {
              pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                *)pFVar26,
                               (FAttributeKey *)&(pFVar18->AttributeAllocationTable).field_0x20);
              pFVar18 = (FAttributeStorage *)&pTVar12->field_0x10;
              if (pTVar12 ==
                  (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                   *)0x0) {
                pFVar18 = pFVar23;
              }
              Interchange::FAttributeStorage::SetAttribute<int>
                        (pFVar26,(FAttributeAllocationInfo *)pFVar18,&local_25c);
            }
            goto LAB_14e3cf555;
          }
          break;
        }
        iVar10 = piVar17[0xe];
      }
    }
    Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute
              ((TMapAttributeHelper<int,int> *)local_108,&local_1c0,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<int,int>::GetValueAttribute
              ((TMapAttributeHelper<int,int> *)local_108,&local_1d0,(int *)&local_268);
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar26,&local_1c0,(int *)&local_268,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar26,&local_1d0,&local_25c,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_228,&local_1d0,pFVar26);
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_240,&local_1c0,pFVar26);
    local_190 = local_240.AttributeStorage;
    local_188 = local_240.Key.Key.Data.AllocatorInstance.Data;
    local_180 = local_240.Key.Key.Data.ArrayNum;
    local_17c = local_240.Key.Key.Data.ArrayMax;
    local_178 = local_228.AttributeStorage;
    local_170 = local_228.Key.Key.Data.AllocatorInstance.Data;
    local_168 = local_228.Key.Key.Data.ArrayNum;
    local_164 = local_228.Key.Key.Data.ArrayMax;
    local_228.Key.Key.Data.ArrayNum = 0;
    local_228.Key.Key.Data.ArrayMax = 0;
    local_240.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.Key.Key.Data.ArrayNum = 0;
    local_240.Key.Key.Data.ArrayMax = 0;
    local_228.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
    ::
    EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
              ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                *)local_108,1,(int *)&local_268,
               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                *)&local_190);
    if (local_170 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_188 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_240.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_228.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar26 = local_b8;
    local_250 = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar10 = local_b0.Key.Data.ArrayNum + -1;
      FVar6.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar6.Data);
      iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar26,uVar9,&local_b0);
      pFVar18 = pFVar23;
      if (iVar10 != -1) {
        pFVar18 = (FAttributeStorage *)
                  ((longlong)iVar10 * 0x50 + *(longlong *)&pFVar26->AttributeAllocationTable);
      }
      pFVar21 = (FAttributeStorage *)&(pFVar18->AttributeAllocationTable).field_0x10;
      if (pFVar18 == (FAttributeStorage *)0x0) {
        pFVar21 = pFVar23;
      }
      Interchange::FAttributeStorage::SetAttribute<int>
                (pFVar26,(FAttributeAllocationInfo *)pFVar21,&local_250);
    }
    if (local_1d0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3cf555:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  FVar25.ReferenceController = local_98.ReferenceController;
  uVar9 = local_268;
  pFVar23 = (FAttributeStorage *)0x0;
  pFVar26 = pFVar23;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar23;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cf5a4;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar26 = local_a0;
      aVar2 = aVar8;
    } while (!bVar7);
  }
  FVar24.ReferenceController = local_98.ReferenceController;
  if (pFVar26 == (FAttributeStorage *)0x0) {
LAB_14e3cf5a4:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar25.ReferenceController = FVar24.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (local_108._8_4_ - local_108._52_4_ != 0) {
      FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_c8;
      }
      uVar3 = *(uint *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & local_268) * 4);
      while (uVar3 != 0xffffffff) {
        puVar20 = (uint *)((longlong)(int)uVar3 * 0x40 + local_108._0_8_);
        if (*puVar20 == local_268) {
          pFVar18 = (FAttributeStorage *)(puVar20 + 2);
          if (puVar20 == (uint *)0x0) {
            pFVar18 = pFVar23;
          }
          if (pFVar18 != (FAttributeStorage *)0x0) {
            pFVar26 = *(FAttributeStorage **)&(pFVar18->AttributeAllocationTable).field_0x18;
            if (pFVar26 != (FAttributeStorage *)0x0) {
              pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                *)pFVar26,
                               (FAttributeKey *)&(pFVar18->AttributeAllocationTable).field_0x20);
              pFVar22 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
              if (pTVar12 ==
                  (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                   *)0x0) {
                pFVar22 = (FAttributeAllocationInfo *)0x0;
              }
              Interchange::FAttributeStorage::SetAttribute<int>(pFVar26,pFVar22,&local_260);
            }
            goto LAB_14e3cf898;
          }
          break;
        }
        uVar3 = puVar20[0xe];
      }
    }
    Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute
              ((TMapAttributeHelper<int,int> *)local_108,&local_1a0,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<int,int>::GetValueAttribute
              ((TMapAttributeHelper<int,int> *)local_108,&local_1b0,(int *)&local_268);
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar26,&local_1a0,(int *)&local_268,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar26,&local_1b0,&local_260,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_1f8,&local_1b0,pFVar26);
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_210,&local_1a0,pFVar26);
    local_160 = local_210.AttributeStorage;
    local_158 = local_210.Key.Key.Data.AllocatorInstance.Data;
    local_150 = local_210.Key.Key.Data.ArrayNum;
    local_14c = local_210.Key.Key.Data.ArrayMax;
    local_148 = local_1f8.AttributeStorage;
    local_140 = local_1f8.Key.Key.Data.AllocatorInstance.Data;
    local_138 = local_1f8.Key.Key.Data.ArrayNum;
    local_134 = local_1f8.Key.Key.Data.ArrayMax;
    local_1f8.Key.Key.Data.ArrayNum = 0;
    local_1f8.Key.Key.Data.ArrayMax = 0;
    local_210.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.Key.Key.Data.ArrayNum = 0;
    local_210.Key.Key.Data.ArrayMax = 0;
    local_1f8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
    ::
    EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
              ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                *)local_108,uVar9,(int *)&local_268,
               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                *)&local_160);
    if (local_140 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140);
    }
    if (local_158 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_210.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar26 = local_b8;
    local_24c = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar10 = local_b0.Key.Data.ArrayNum + -1;
      FVar6.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar6.Data);
      iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar26,uVar9,&local_b0);
      if (iVar10 == -1) {
        lVar19 = 0;
      }
      else {
        lVar19 = (longlong)iVar10 * 0x50 + *(longlong *)&pFVar26->AttributeAllocationTable;
      }
      pFVar22 = (FAttributeAllocationInfo *)(lVar19 + 0x10);
      if (lVar19 == 0) {
        pFVar22 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar26,pFVar22,&local_24c);
    }
    if (local_1b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1a0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3cf898:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  Interchange::TMapAttributeHelper<int,int>::SetKeyValueByHash
            ((TMapAttributeHelper<int,int> *)local_108,local_264,(int *)&local_264,&local_260);
  Interchange::TMapAttributeHelper<int,int>::SetKeyValueByHash
            ((TMapAttributeHelper<int,int> *)local_108,local_264,(int *)&local_264,&local_25c);
  Interchange::TMapAttributeHelper<int,int>::ToMap
            ((TMapAttributeHelper<int,int> *)local_108,
             (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_88)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare maps after ToMap",
             local_88._8_4_ - local_88._52_4_,2);
  FVar25.ReferenceController = local_98.ReferenceController;
  pFVar26 = (FAttributeStorage *)0x0;
  local_258 = 0;
  local_254 = 0;
  FVar24.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar26;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cf945;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar7);
    FVar24.ReferenceController = local_98.ReferenceController;
    if (local_a0 != (FAttributeStorage *)0x0) {
      if (local_108._8_4_ != local_108._52_4_) {
        FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_c8;
        }
        uVar9 = *(uint *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & local_268) * 4);
        while (uVar9 != 0xffffffff) {
          puVar20 = (uint *)((longlong)(int)uVar9 * 0x40 + local_108._0_8_);
          if (*puVar20 == local_268) {
            pFVar23 = (FAttributeStorage *)(puVar20 + 2);
            if (puVar20 == (uint *)0x0) {
              pFVar23 = pFVar26;
            }
            if (pFVar23 != (FAttributeStorage *)0x0) {
              pFVar18 = *(FAttributeStorage **)&(pFVar23->AttributeAllocationTable).field_0x18;
              EVar15 = Operation_Error_InvalidStorage;
              if (pFVar18 == (FAttributeStorage *)0x0) {
                EVar13 = Operation_Error_InvalidStorage;
              }
              else {
                EVar13 = Interchange::FAttributeStorage::GetAttribute<int,void>
                                   (pFVar18,(FAttributeKey *)
                                            &(pFVar23->AttributeAllocationTable).field_0x20,
                                    &local_258);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar25.ReferenceController);
              FVar24.ReferenceController = local_98.ReferenceController;
              if (EVar13 != Operation_Success) goto LAB_14e3cf97a;
              FVar25.ReferenceController = local_98.ReferenceController;
              if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0)
              goto LAB_14e3cfd21;
              aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
              goto joined_r0x00014e3cfd0b;
            }
            break;
          }
          uVar9 = puVar20[0xe];
        }
      }
      goto LAB_14e3cf96b;
    }
  }
LAB_14e3cf945:
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494661>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x185,"AttributesPtr.IsValid()");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14e3cf96b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
LAB_14e3cf97a:
  bVar7 = false;
  goto LAB_14e3cf97d;
  while( true ) {
    LOCK();
    aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
    bVar7 = aVar2 == aVar8;
    if (bVar7) {
      (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
      aVar8 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar8;
    if (bVar7) break;
joined_r0x00014e3cfd0b:
    FVar25.ReferenceController = (TReferenceControllerBase<1> *)pFVar26;
    if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cfd21;
  }
  FVar25.ReferenceController = local_98.ReferenceController;
  if (local_a0 == (FAttributeStorage *)0x0) {
LAB_14e3cfd21:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x185,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar25.ReferenceController);
    goto LAB_14e3cf97a;
  }
  pTVar14 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
            ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                               *)local_108,local_264,(int *)&local_264);
  if (pTVar14 ==
      (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
       *)0x0) goto LAB_14e3cf96b;
  if (*(FAttributeStorage **)&pTVar14->field_0x18 != (FAttributeStorage *)0x0) {
    EVar15 = Interchange::FAttributeStorage::GetAttribute<int,void>
                       (*(FAttributeStorage **)&pTVar14->field_0x18,
                        (FAttributeKey *)&pTVar14->field_0x20,&local_254);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
  if (EVar15 != Operation_Success) goto LAB_14e3cf97a;
  bVar7 = true;
LAB_14e3cf97d:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,L"GetValue succeeded",bVar7);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare result after add 1",local_258,local_260);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare result after add 2",local_254,local_25c);
  FVar25.ReferenceController = local_98.ReferenceController;
  FVar24.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3cf9f5:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    FVar25.ReferenceController = FVar24.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar26;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cf9f5;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar7);
    FVar24.ReferenceController = local_98.ReferenceController;
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3cf9f5;
    if (local_108._8_4_ != local_108._52_4_) {
      FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_c8;
      }
      uVar9 = *(uint *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & local_264) * 4);
      while (uVar9 != 0xffffffff) {
        puVar20 = (uint *)((longlong)(int)uVar9 * 0x40 + local_108._0_8_);
        if (*puVar20 == local_264) {
          pFVar23 = (FAttributeStorage *)(puVar20 + 2);
          if (puVar20 == (uint *)0x0) {
            pFVar23 = pFVar26;
          }
          if (pFVar23 != (FAttributeStorage *)0x0) {
            bVar7 = Interchange::TMapAttributeHelper<int,int>::RemoveBySwap
                              ((TMapAttributeHelper<int,int> *)local_108,local_264,(int *)&local_264
                               ,(TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                                 *)pFVar23);
            goto LAB_14e3cfa1e;
          }
          break;
        }
        uVar9 = puVar20[0xe];
      }
    }
  }
  bVar7 = false;
LAB_14e3cfa1e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,L"Test removing a key",bVar7);
  FVar25.ReferenceController = local_98.ReferenceController;
  uVar9 = local_268;
  FVar24.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3cfa65:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x1a6,"AttributesPtr.IsValid()");
    FVar25.ReferenceController = FVar24.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar26;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cfa65;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar7);
    FVar24.ReferenceController = local_98.ReferenceController;
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3cfa65;
    if (local_108._8_4_ != local_108._52_4_) {
      FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_c8;
      }
      uVar3 = *(uint *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & local_268) * 4);
      while (uVar3 != 0xffffffff) {
        puVar20 = (uint *)((longlong)(int)uVar3 * 0x40 + local_108._0_8_);
        if (*puVar20 == local_268) {
          pFVar23 = (FAttributeStorage *)(puVar20 + 2);
          if (puVar20 == (uint *)0x0) {
            pFVar23 = pFVar26;
          }
          if (((pFVar23 != (FAttributeStorage *)0x0) &&
              (pFVar18 = *(FAttributeStorage **)&(pFVar23->AttributeAllocationTable).field_0x18,
              pFVar18 != (FAttributeStorage *)0x0)) &&
             (EVar15 = Interchange::FAttributeStorage::GetAttribute<int,void>
                                 (pFVar18,(FAttributeKey *)
                                          &(pFVar23->AttributeAllocationTable).field_0x20,local_248)
             , EVar15 == Operation_Success)) {
            bVar7 = Interchange::TMapAttributeHelper<int,int>::RemoveBySwap
                              ((TMapAttributeHelper<int,int> *)local_108,uVar9,(int *)&local_268,
                               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                                *)pFVar23);
            goto LAB_14e3cfa95;
          }
          break;
        }
        uVar3 = puVar20[0xe];
      }
    }
  }
  bVar7 = false;
LAB_14e3cfa95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)param_1,L"RemoveKeyAndGetValue succeeded",bVar7);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare removed value",local_248[0],local_260);
  FVar25.ReferenceController = local_98.ReferenceController;
  FVar24.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar26;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3cfaf6;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar7);
    FVar24.ReferenceController = local_98.ReferenceController;
    if (local_a0 != (FAttributeStorage *)0x0) {
      if (local_108._8_4_ != local_108._52_4_) {
        FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_c8;
        }
        uVar9 = *(uint *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & local_264) * 4);
        while (uVar9 != 0xffffffff) {
          puVar20 = (uint *)((longlong)(int)uVar9 * 0x40 + local_108._0_8_);
          if (*puVar20 == local_264) {
            pFVar23 = (FAttributeStorage *)(puVar20 + 2);
            if (puVar20 == (uint *)0x0) {
              pFVar23 = pFVar26;
            }
            if (pFVar23 != (FAttributeStorage *)0x0) {
              bVar7 = Interchange::TMapAttributeHelper<int,int>::RemoveBySwap
                                ((TMapAttributeHelper<int,int> *)local_108,local_264,
                                 (int *)&local_264,
                                 (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                                  *)pFVar23);
              goto LAB_14e3cfb1f;
            }
            break;
          }
          uVar9 = puVar20[0xe];
        }
      }
      goto LAB_14e3cfb1c;
    }
  }
LAB_14e3cfaf6:
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494678>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x196,"AttributesPtr.IsValid()");
  FVar25.ReferenceController = FVar24.ReferenceController;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14e3cfb1c:
  bVar7 = false;
LAB_14e3cfb1f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)param_1,L"Test removing missing key",bVar7);
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  FVar25.ReferenceController = local_98.ReferenceController;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((FAttributeStorage *)FVar25.ReferenceController != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = &(FVar25.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)&(FVar25.ReferenceController)->_padding_ + 8))
                (FVar25.ReferenceController,1);
    }
  }
  if (local_98.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_98.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_98.ReferenceController)->_padding_ + 8))(local_98.ReferenceController,1);
    }
  }
  if (local_b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Key.Data.AllocatorInstance.Data);
  }
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<int,float> @ 14e3cffe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MapAttributeHelperTests::Private::RunTestInternal<int,float>(FMapAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  float fVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar12;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar13;
  EAttributeStorageResult EVar14;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar15;
  EAttributeStorageResult EVar16;
  ForElementType<FSetElementId> FVar17;
  int *piVar18;
  FAttributeStorage *pFVar19;
  longlong lVar20;
  uint *puVar21;
  FAttributeStorage *pFVar22;
  FAttributeAllocationInfo *pFVar23;
  uint *puVar24;
  FWeakReferencer<1> FVar25;
  FWeakReferencer<1> FVar26;
  FAttributeStorage *pFVar27;
  FAttributeStorage *pFVar28;
  undefined1 auStackY_2a8 [32];
  uint local_278;
  uint local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  int local_260;
  int local_25c;
  float local_258 [2];
  TAttributeHandle<int,void> local_250;
  TAttributeHandle<float,void> local_238;
  TAttributeHandle<int,void> local_220;
  TAttributeHandle<float,void> local_208;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_1f0;
  FAttributeKey local_1e0;
  FAttributeKey local_1d0;
  FAttributeKey local_1c0;
  FAttributeKey local_1b0;
  FAttributeStorage *local_1a0;
  FScriptContainerElement *local_198;
  int local_190;
  int local_18c;
  FAttributeStorage *local_188;
  FScriptContainerElement *local_180;
  int local_178;
  int local_174;
  FAttributeStorage *local_170;
  FScriptContainerElement *local_168;
  int local_160;
  int local_15c;
  FAttributeStorage *local_158;
  FScriptContainerElement *local_150;
  int local_148;
  int local_144;
  FString local_140;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_130;
  undefined1 local_118 [64];
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  FAttributeStorage *local_c8;
  FAttributeKey local_c0;
  FAttributeStorage *local_b0;
  FWeakReferencer<1> local_a8;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  ::FString::FString(&local_140,L"TestKey");
  pTVar12 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_130);
  pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar28 = pTVar12->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  local_118._44_4_ = 0x80;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_118._32_8_ = 0;
  local_118._40_4_ = 0;
  local_118._48_4_ = 0xffffffff;
  local_118._52_4_ = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  local_c8 = (FAttributeStorage *)0x0;
  local_b0 = (FAttributeStorage *)0x0;
  local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Key.Data.ArrayNum = 0;
  local_c0.Key.Data.ArrayMax = 0;
  if ((pFVar28 == (FAttributeStorage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f0.Object = pFVar28;
  local_1f0.SharedReferenceCount.ReferenceController = pTVar4;
  if ((pFVar28 == (FAttributeStorage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Interchange::TMapAttributeHelper<int,float>::Initialize
            ((TMapAttributeHelper<int,float> *)local_118,&local_1f0,&local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FVar26.ReferenceController = local_a8.ReferenceController;
  pFVar27 = (FAttributeStorage *)0x0;
  local_274 = 0x14;
  local_270 = 1.0;
  local_278 = 1;
  local_26c = 20.0;
  pFVar28 = pFVar27;
  if ((FAttributeStorage *)local_a8.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar25.ReferenceController = (TReferenceControllerBase<1> *)pFVar27;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d01c5;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      pFVar28 = local_b0;
      aVar2 = aVar9;
    } while (!bVar8);
  }
  FVar25.ReferenceController = local_a8.ReferenceController;
  if (pFVar28 == (FAttributeStorage *)0x0) {
LAB_14e3d01c5:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar26.ReferenceController = FVar25.ReferenceController;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (local_118._8_4_ - local_118._52_4_ != 0) {
      FVar17 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_d8;
      }
      iVar11 = *(int *)((longlong)FVar17 + (ulonglong)(local_d0 - 1U & 1) * 4);
      while (iVar11 != -1) {
        piVar18 = (int *)((longlong)iVar11 * 0x40 + local_118._0_8_);
        if (*piVar18 == 1) {
          pFVar19 = (FAttributeStorage *)(piVar18 + 2);
          if (piVar18 == (int *)0x0) {
            pFVar19 = pFVar27;
          }
          if (pFVar19 != (FAttributeStorage *)0x0) {
            pFVar28 = *(FAttributeStorage **)&(pFVar19->AttributeAllocationTable).field_0x18;
            if (pFVar28 != (FAttributeStorage *)0x0) {
              pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                *)pFVar28,
                               (FAttributeKey *)&(pFVar19->AttributeAllocationTable).field_0x20);
              pFVar19 = (FAttributeStorage *)&pTVar13->field_0x10;
              if (pTVar13 ==
                  (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                   *)0x0) {
                pFVar19 = pFVar27;
              }
              Interchange::FAttributeStorage::SetAttribute<float>
                        (pFVar28,(FAttributeAllocationInfo *)pFVar19,&local_26c);
            }
            goto LAB_14e3d04a8;
          }
          break;
        }
        iVar11 = piVar18[0xe];
      }
    }
    Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute
              ((TMapAttributeHelper<int,float> *)local_118,&local_1d0,
               local_118._8_4_ - local_118._52_4_);
    Interchange::TMapAttributeHelper<int,float>::GetValueAttribute
              ((TMapAttributeHelper<int,float> *)local_118,&local_1e0,(int *)&local_278);
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar28,&local_1d0,(int *)&local_278,None);
    if ((EVar16 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<float,void>
                       (pFVar28,&local_1e0,&local_26c,None);
    if ((EVar16 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_238,&local_1e0,pFVar28);
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_250,&local_1d0,pFVar28);
    local_1a0 = local_250.AttributeStorage;
    local_198 = local_250.Key.Key.Data.AllocatorInstance.Data;
    local_190 = local_250.Key.Key.Data.ArrayNum;
    local_18c = local_250.Key.Key.Data.ArrayMax;
    local_188 = local_238.AttributeStorage;
    local_180 = local_238.Key.Key.Data.AllocatorInstance.Data;
    local_178 = local_238.Key.Key.Data.ArrayNum;
    local_174 = local_238.Key.Key.Data.ArrayMax;
    local_238.Key.Key.Data.ArrayNum = 0;
    local_238.Key.Key.Data.ArrayMax = 0;
    local_250.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.Key.Key.Data.ArrayNum = 0;
    local_250.Key.Key.Data.ArrayMax = 0;
    local_238.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
    ::
    EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
              ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                *)local_118,1,(int *)&local_278,
               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                *)&local_1a0);
    if (local_180 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180);
    }
    if (local_198 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198);
    }
    if (local_250.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_238.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar28 = local_c8;
    local_260 = local_118._8_4_ - local_118._52_4_;
    if (local_c8 != (FAttributeStorage *)0x0) {
      iVar11 = local_c0.Key.Data.ArrayNum + -1;
      FVar6.Data = local_c0.Key.Data.AllocatorInstance.Data;
      if (local_c0.Key.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar6.Data);
      iVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar28,uVar10,&local_c0);
      pFVar19 = pFVar27;
      if (iVar11 != -1) {
        pFVar19 = (FAttributeStorage *)
                  ((longlong)iVar11 * 0x50 + *(longlong *)&pFVar28->AttributeAllocationTable);
      }
      pFVar22 = (FAttributeStorage *)&(pFVar19->AttributeAllocationTable).field_0x10;
      if (pFVar19 == (FAttributeStorage *)0x0) {
        pFVar22 = pFVar27;
      }
      Interchange::FAttributeStorage::SetAttribute<int>
                (pFVar28,(FAttributeAllocationInfo *)pFVar22,&local_260);
    }
    if (local_1e0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1d0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d04a8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  uVar10 = local_278;
  pFVar27 = (FAttributeStorage *)0x0;
  pFVar28 = pFVar27;
  if ((FAttributeStorage *)local_a8.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar26.ReferenceController = (TReferenceControllerBase<1> *)pFVar27;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d04f5;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      pFVar28 = local_b0;
      aVar2 = aVar9;
    } while (!bVar8);
  }
  FVar26.ReferenceController = local_a8.ReferenceController;
  if (pFVar28 == (FAttributeStorage *)0x0) {
LAB_14e3d04f5:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    FVar26.ReferenceController = local_a8.ReferenceController;
    if (local_118._8_4_ - local_118._52_4_ != 0) {
      FVar17 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_d8;
      }
      uVar3 = *(uint *)((longlong)FVar17 + (ulonglong)(local_d0 - 1U & local_278) * 4);
      while (uVar3 != 0xffffffff) {
        puVar21 = (uint *)((longlong)(int)uVar3 * 0x40 + local_118._0_8_);
        if (*puVar21 == local_278) {
          pFVar19 = (FAttributeStorage *)(puVar21 + 2);
          if (puVar21 == (uint *)0x0) {
            pFVar19 = pFVar27;
          }
          if (pFVar19 != (FAttributeStorage *)0x0) {
            pFVar28 = *(FAttributeStorage **)&(pFVar19->AttributeAllocationTable).field_0x18;
            if (pFVar28 != (FAttributeStorage *)0x0) {
              pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                *)pFVar28,
                               (FAttributeKey *)&(pFVar19->AttributeAllocationTable).field_0x20);
              pFVar23 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
              if (pTVar13 ==
                  (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                   *)0x0) {
                pFVar23 = (FAttributeAllocationInfo *)0x0;
              }
              Interchange::FAttributeStorage::SetAttribute<float>(pFVar28,pFVar23,&local_270);
            }
            goto LAB_14e3d07f0;
          }
          break;
        }
        uVar3 = puVar21[0xe];
      }
    }
    Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute
              ((TMapAttributeHelper<int,float> *)local_118,&local_1b0,
               local_118._8_4_ - local_118._52_4_);
    Interchange::TMapAttributeHelper<int,float>::GetValueAttribute
              ((TMapAttributeHelper<int,float> *)local_118,&local_1c0,(int *)&local_278);
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar28,&local_1b0,(int *)&local_278,None);
    if ((EVar16 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<float,void>
                       (pFVar28,&local_1c0,&local_270,None);
    if ((EVar16 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_208,&local_1c0,pFVar28);
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_220,&local_1b0,pFVar28);
    local_170 = local_220.AttributeStorage;
    local_168 = local_220.Key.Key.Data.AllocatorInstance.Data;
    local_160 = local_220.Key.Key.Data.ArrayNum;
    local_15c = local_220.Key.Key.Data.ArrayMax;
    local_158 = local_208.AttributeStorage;
    local_150 = local_208.Key.Key.Data.AllocatorInstance.Data;
    local_148 = local_208.Key.Key.Data.ArrayNum;
    local_144 = local_208.Key.Key.Data.ArrayMax;
    local_208.Key.Key.Data.ArrayNum = 0;
    local_208.Key.Key.Data.ArrayMax = 0;
    local_220.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.Key.Key.Data.ArrayNum = 0;
    local_220.Key.Key.Data.ArrayMax = 0;
    local_208.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
    ::
    EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
              ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                *)local_118,uVar10,(int *)&local_278,
               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                *)&local_170);
    if (local_150 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150);
    }
    if (local_168 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_220.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_208.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar28 = local_c8;
    local_25c = local_118._8_4_ - local_118._52_4_;
    if (local_c8 != (FAttributeStorage *)0x0) {
      iVar11 = local_c0.Key.Data.ArrayNum + -1;
      FVar6.Data = local_c0.Key.Data.AllocatorInstance.Data;
      if (local_c0.Key.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar6.Data);
      iVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar28,uVar10,&local_c0);
      if (iVar11 == -1) {
        lVar20 = 0;
      }
      else {
        lVar20 = (longlong)iVar11 * 0x50 + *(longlong *)&pFVar28->AttributeAllocationTable;
      }
      pFVar23 = (FAttributeAllocationInfo *)(lVar20 + 0x10);
      if (lVar20 == 0) {
        pFVar23 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar28,pFVar23,&local_25c);
    }
    if (local_1c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d07f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  Interchange::TMapAttributeHelper<int,float>::SetKeyValueByHash
            ((TMapAttributeHelper<int,float> *)local_118,local_274,(int *)&local_274,&local_270);
  Interchange::TMapAttributeHelper<int,float>::SetKeyValueByHash
            ((TMapAttributeHelper<int,float> *)local_118,local_274,(int *)&local_274,&local_26c);
  Interchange::TMapAttributeHelper<int,float>::ToMap
            ((TMapAttributeHelper<int,float> *)local_118,
             (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             local_98);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare maps after ToMap",
             local_98._8_4_ - local_98._52_4_,2);
  FVar26.ReferenceController = local_a8.ReferenceController;
  local_268 = 0.0;
  local_264 = 0.0;
  FVar25.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar25.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d08a5;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    FVar25.ReferenceController = local_a8.ReferenceController;
    if (local_b0 != (FAttributeStorage *)0x0) {
      if (local_118._8_4_ != local_118._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
        if (local_d8 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_d8;
        }
        uVar10 = *(uint *)((longlong)FVar17 + (ulonglong)(local_d0 - 1U & local_278) * 4);
        while (uVar10 != 0xffffffff) {
          puVar21 = (uint *)((longlong)(int)uVar10 * 0x40 + local_118._0_8_);
          if (*puVar21 == local_278) {
            puVar24 = puVar21 + 2;
            if (puVar21 == (uint *)0x0) {
              puVar24 = (uint *)0x0;
            }
            if (puVar24 != (uint *)0x0) {
              EVar16 = Operation_Error_InvalidStorage;
              if (*(FAttributeStorage **)(puVar24 + 6) == (FAttributeStorage *)0x0) {
                EVar14 = Operation_Error_InvalidStorage;
              }
              else {
                EVar14 = Interchange::FAttributeStorage::GetAttribute<float,void>
                                   (*(FAttributeStorage **)(puVar24 + 6),
                                    (FAttributeKey *)(puVar24 + 8),&local_268);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar26.ReferenceController);
              FVar25.ReferenceController = local_a8.ReferenceController;
              if (EVar14 != Operation_Success) goto LAB_14e3d08da;
              FVar26.ReferenceController = local_a8.ReferenceController;
              if ((FAttributeStorage *)local_a8.ReferenceController == (FAttributeStorage *)0x0)
              goto LAB_14e3d0ca4;
              aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
              goto joined_r0x00014e3d0c91;
            }
            break;
          }
          uVar10 = puVar21[0xe];
        }
      }
      goto LAB_14e3d08cb;
    }
  }
LAB_14e3d08a5:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494661>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x185,"AttributesPtr.IsValid()");
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14e3d08cb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
LAB_14e3d08da:
  bVar8 = false;
  goto LAB_14e3d08e0;
  while( true ) {
    LOCK();
    aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
    bVar8 = aVar2 == aVar9;
    if (bVar8) {
      (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
      aVar9 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar9;
    if (bVar8) break;
joined_r0x00014e3d0c91:
    if (aVar2 == (atomic<int>)0x0) {
      FVar26.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      goto LAB_14e3d0ca4;
    }
  }
  if (local_b0 == (FAttributeStorage *)0x0) {
LAB_14e3d0ca4:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x185,"AttributesPtr.IsValid()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar26.ReferenceController);
    goto LAB_14e3d08da;
  }
  pTVar15 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
            ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                               *)local_118,local_274,(int *)&local_274);
  if (pTVar15 ==
      (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
       *)0x0) goto LAB_14e3d08cb;
  if (*(FAttributeStorage **)&pTVar15->field_0x18 != (FAttributeStorage *)0x0) {
    EVar16 = Interchange::FAttributeStorage::GetAttribute<float,void>
                       (*(FAttributeStorage **)&pTVar15->field_0x18,
                        (FAttributeKey *)&pTVar15->field_0x20,&local_264);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  if (EVar16 != Operation_Success) goto LAB_14e3d08da;
  bVar8 = true;
LAB_14e3d08e0:
  pFVar28 = (FAttributeStorage *)0x0;
  FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,L"GetValue succeeded",bVar8);
  fVar7 = __real_38d1b717;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare result after add 1",local_268,local_270,
             __real_38d1b717);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare result after add 2",local_264,local_26c,fVar7)
  ;
  FVar26.ReferenceController = local_a8.ReferenceController;
  FVar25.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d0966:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    FVar26.ReferenceController = FVar25.ReferenceController;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar25.ReferenceController = (TReferenceControllerBase<1> *)pFVar28;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d0966;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    FVar25.ReferenceController = local_a8.ReferenceController;
    if (local_b0 == (FAttributeStorage *)0x0) goto LAB_14e3d0966;
    if (local_118._8_4_ != local_118._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_d8;
      }
      uVar10 = *(uint *)((longlong)FVar17 + (ulonglong)(local_d0 - 1U & local_274) * 4);
      while (uVar10 != 0xffffffff) {
        puVar21 = (uint *)((longlong)(int)uVar10 * 0x40 + local_118._0_8_);
        if (*puVar21 == local_274) {
          pFVar27 = (FAttributeStorage *)(puVar21 + 2);
          if (puVar21 == (uint *)0x0) {
            pFVar27 = pFVar28;
          }
          if (pFVar27 != (FAttributeStorage *)0x0) {
            bVar8 = Interchange::TMapAttributeHelper<int,float>::RemoveBySwap
                              ((TMapAttributeHelper<int,float> *)local_118,local_274,
                               (int *)&local_274,
                               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                                *)pFVar27);
            goto LAB_14e3d098f;
          }
          break;
        }
        uVar10 = puVar21[0xe];
      }
    }
  }
  bVar8 = false;
LAB_14e3d098f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,L"Test removing a key",bVar8);
  FVar26.ReferenceController = local_a8.ReferenceController;
  uVar10 = local_278;
  FVar25.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d09d6:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x1a6,"AttributesPtr.IsValid()");
    FVar26.ReferenceController = FVar25.ReferenceController;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar25.ReferenceController = (TReferenceControllerBase<1> *)pFVar28;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d09d6;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    FVar25.ReferenceController = local_a8.ReferenceController;
    if (local_b0 == (FAttributeStorage *)0x0) goto LAB_14e3d09d6;
    if (local_118._8_4_ != local_118._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_d8;
      }
      uVar3 = *(uint *)((longlong)FVar17 + (ulonglong)(local_d0 - 1U & local_278) * 4);
      while (uVar3 != 0xffffffff) {
        puVar21 = (uint *)((longlong)(int)uVar3 * 0x40 + local_118._0_8_);
        if (*puVar21 == local_278) {
          pFVar27 = (FAttributeStorage *)(puVar21 + 2);
          if (puVar21 == (uint *)0x0) {
            pFVar27 = pFVar28;
          }
          if (((pFVar27 != (FAttributeStorage *)0x0) &&
              (pFVar19 = *(FAttributeStorage **)&(pFVar27->AttributeAllocationTable).field_0x18,
              pFVar19 != (FAttributeStorage *)0x0)) &&
             (EVar16 = Interchange::FAttributeStorage::GetAttribute<float,void>
                                 (pFVar19,(FAttributeKey *)
                                          &(pFVar27->AttributeAllocationTable).field_0x20,local_258)
             , EVar16 == Operation_Success)) {
            bVar8 = Interchange::TMapAttributeHelper<int,float>::RemoveBySwap
                              ((TMapAttributeHelper<int,float> *)local_118,uVar10,(int *)&local_278,
                               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                                *)pFVar27);
            goto LAB_14e3d0a06;
          }
          break;
        }
        uVar3 = puVar21[0xe];
      }
    }
  }
  bVar8 = false;
LAB_14e3d0a06:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)param_1,L"RemoveKeyAndGetValue succeeded",bVar8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare removed value",local_258[0],local_270,fVar7);
  FVar26.ReferenceController = local_a8.ReferenceController;
  FVar25.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar25.ReferenceController = (TReferenceControllerBase<1> *)pFVar28;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d0a75;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    FVar25.ReferenceController = local_a8.ReferenceController;
    if (local_b0 != (FAttributeStorage *)0x0) {
      if (local_118._8_4_ != local_118._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
        if (local_d8 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_d8;
        }
        uVar10 = *(uint *)((longlong)FVar17 + (ulonglong)(local_d0 - 1U & local_274) * 4);
        while (uVar10 != 0xffffffff) {
          puVar21 = (uint *)((longlong)(int)uVar10 * 0x40 + local_118._0_8_);
          if (*puVar21 == local_274) {
            pFVar27 = (FAttributeStorage *)(puVar21 + 2);
            if (puVar21 == (uint *)0x0) {
              pFVar27 = pFVar28;
            }
            if (pFVar27 != (FAttributeStorage *)0x0) {
              bVar8 = Interchange::TMapAttributeHelper<int,float>::RemoveBySwap
                                ((TMapAttributeHelper<int,float> *)local_118,local_274,
                                 (int *)&local_274,
                                 (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                                  *)pFVar27);
              goto LAB_14e3d0a9e;
            }
            break;
          }
          uVar10 = puVar21[0xe];
        }
      }
      goto LAB_14e3d0a9b;
    }
  }
LAB_14e3d0a75:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494678>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x196,"AttributesPtr.IsValid()");
  FVar26.ReferenceController = FVar25.ReferenceController;
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14e3d0a9b:
  bVar8 = false;
LAB_14e3d0a9e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)param_1,L"Test removing missing key",bVar8);
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  FVar26.ReferenceController = local_a8.ReferenceController;
  local_b0 = (FAttributeStorage *)0x0;
  local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((FAttributeStorage *)FVar26.ReferenceController != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = &(FVar26.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)&(FVar26.ReferenceController)->_padding_ + 8))
                (FVar26.ReferenceController,1);
    }
  }
  if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a8.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_a8.ReferenceController)->_padding_ + 8))(local_a8.ReferenceController,1);
    }
  }
  if (local_c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Key.Data.AllocatorInstance.Data);
  }
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<int,FString> @ 14e3d0f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MapAttributeHelperTests::Private::RunTestInternal<int,FString>
          (FMapAttributeHelperTests *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FAutomationTestBase *this;
  bool bVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar11;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar12;
  ForAnyElementType FVar13;
  EAttributeStorageResult EVar14;
  EAttributeStorageResult EVar15;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar16;
  FAttributeStorage *pFVar17;
  uint *puVar18;
  FAttributeStorage *pFVar19;
  FAttributeStorage *pFVar20;
  ForElementType<FSetElementId> FVar21;
  FWeakReferencer<1> FVar22;
  FWeakReferencer<1> FVar23;
  ForAnyElementType FVar24;
  FAttributeStorage *pFVar25;
  FAttributeAllocationInfo *pFVar26;
  undefined1 auStackY_2d8 [32];
  uint local_2a8;
  uint local_2a4;
  bool local_2a0;
  bool local_29f [7];
  FString local_298;
  FString local_288;
  int local_278;
  int local_274;
  FString local_270;
  FString local_260;
  FString local_250;
  TAttributeHandle<int,void> local_240;
  TAttributeHandle<FString,void> local_228;
  TAttributeHandle<int,void> local_210;
  TAttributeHandle<FString,void> local_1f8;
  FAutomationTestBase *local_1e0;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_1d8;
  FAttributeKey local_1c8;
  FAttributeKey local_1b8;
  FAttributeKey local_1a8;
  FAttributeKey local_198;
  FAttributeStorage *local_188;
  FScriptContainerElement *local_180;
  int local_178;
  int local_174;
  FAttributeStorage *local_170;
  FScriptContainerElement *local_168;
  int local_160;
  int local_15c;
  FAttributeStorage *local_158;
  FScriptContainerElement *local_150;
  int local_148;
  int local_144;
  FAttributeStorage *local_140;
  FScriptContainerElement *local_138;
  int local_130;
  int local_12c;
  FString local_128;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_118;
  undefined1 local_108 [64];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  FAttributeStorage *local_b8;
  FAttributeKey local_b0;
  FAttributeStorage *local_a0;
  FWeakReferencer<1> local_98;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_1e0 = (FAutomationTestBase *)param_1;
  ::FString::FString(&local_128,L"TestKey");
  pTVar11 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_118);
  pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar20 = pTVar11->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  pFVar25 = (FAttributeStorage *)0x0;
  local_108._44_4_ = 0x80;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_b8 = (FAttributeStorage *)0x0;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Key.Data.ArrayNum = 0;
  local_b0.Key.Data.ArrayMax = 0;
  if ((pFVar20 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d8.Object = pFVar20;
  local_1d8.SharedReferenceCount.ReferenceController = pTVar5;
  if ((pFVar20 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  Interchange::TMapAttributeHelper<int,FString>::Initialize
            ((TMapAttributeHelper<int,FString> *)local_108,&local_1d8,&local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_2a8 = 1;
  local_2a4 = 0x14;
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Data.ArrayNum = 0;
  local_288.Data.ArrayMax = 0;
  ::FString::operator=(&local_298,L"SomeValue");
  ::FString::operator=(&local_288,L"AnotherValue");
  FVar23.ReferenceController = local_98.ReferenceController;
  uVar9 = local_2a8;
  pFVar20 = pFVar25;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)pFVar25;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d1192;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      pFVar20 = local_a0;
      aVar3 = aVar8;
    } while (!bVar7);
  }
  FVar22.ReferenceController = local_98.ReferenceController;
  if (pFVar20 == (FAttributeStorage *)0x0) {
LAB_14e3d1192:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar23.ReferenceController = FVar22.ReferenceController;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if (local_108._8_4_ - local_108._52_4_ != 0) {
      FVar21 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = local_c8;
      }
      uVar4 = *(uint *)((longlong)FVar21 + (ulonglong)(local_c0 - 1U & local_2a8) * 4);
      while (uVar4 != 0xffffffff) {
        puVar18 = (uint *)((longlong)(int)uVar4 * 0x40 + local_108._0_8_);
        if (*puVar18 == local_2a8) {
          pFVar17 = (FAttributeStorage *)(puVar18 + 2);
          if (puVar18 == (uint *)0x0) {
            pFVar17 = pFVar25;
          }
          if (pFVar17 != (FAttributeStorage *)0x0) {
            pFVar20 = *(FAttributeStorage **)&(pFVar17->AttributeAllocationTable).field_0x18;
            if (pFVar20 == (FAttributeStorage *)0x0) goto LAB_14e3d14a6;
            pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)pFVar20,
                             (FAttributeKey *)&(pFVar17->AttributeAllocationTable).field_0x20);
            pFVar26 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
            if (pTVar12 ==
                (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                 *)0x0) {
              pFVar26 = (FAttributeAllocationInfo *)0x0;
            }
            if (pFVar26 == (FAttributeAllocationInfo *)0x0) goto LAB_14e3d14a6;
            pFVar1 = &pFVar20->StorageMutex;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14e3d203d;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            local_2a0 = false;
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_288.Data.ArrayNum != 0) {
              FVar13.Data = local_288.Data.AllocatorInstance.Data;
            }
            Interchange::FAttributeStorage::MultiSizeSetAttribute<FString>
                      (pFVar20,pFVar26,0,&local_288,(uchar *)FVar13.Data,&local_2a0);
            Interchange::FAttributeStorage::UpdateAllocationInfoHash(pFVar20,pFVar26);
            if (local_2a0 != false) {
              Interchange::FAttributeStorage::DefragInternal(pFVar20);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            goto LAB_14e3d14a6;
          }
          break;
        }
        uVar4 = puVar18[0xe];
      }
    }
    Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute
              ((TMapAttributeHelper<int,FString> *)local_108,&local_1b8,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute
              ((TMapAttributeHelper<int,FString> *)local_108,&local_1c8,(int *)&local_2a8);
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar20,&local_1b8,(int *)&local_2a8,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar20,&local_1c8,&local_288,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_228,&local_1c8,pFVar20);
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_240,&local_1b8,pFVar20);
    local_188 = local_240.AttributeStorage;
    local_180 = local_240.Key.Key.Data.AllocatorInstance.Data;
    local_178 = local_240.Key.Key.Data.ArrayNum;
    local_174 = local_240.Key.Key.Data.ArrayMax;
    local_170 = local_228.AttributeStorage;
    local_168 = local_228.Key.Key.Data.AllocatorInstance.Data;
    local_160 = local_228.Key.Key.Data.ArrayNum;
    local_15c = local_228.Key.Key.Data.ArrayMax;
    local_228.Key.Key.Data.ArrayNum = 0;
    local_228.Key.Key.Data.ArrayMax = 0;
    local_240.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.Key.Key.Data.ArrayNum = 0;
    local_240.Key.Key.Data.ArrayMax = 0;
    local_228.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
    ::
    EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
              ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                *)local_108,uVar9,(int *)&local_2a8,
               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                *)&local_188);
    if (local_168 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_180 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180);
    }
    if (local_240.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_228.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar20 = local_b8;
    local_278 = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar10 = local_b0.Key.Data.ArrayNum + -1;
      FVar13.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar13.Data = (FScriptContainerElement *)L"";
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar13.Data);
      iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar20,uVar9,&local_b0);
      pFVar17 = pFVar25;
      if (iVar10 != -1) {
        pFVar17 = (FAttributeStorage *)
                  ((longlong)iVar10 * 0x50 + *(longlong *)&pFVar20->AttributeAllocationTable);
      }
      pFVar19 = (FAttributeStorage *)&(pFVar17->AttributeAllocationTable).field_0x10;
      if (pFVar17 == (FAttributeStorage *)0x0) {
        pFVar19 = pFVar25;
      }
      Interchange::FAttributeStorage::SetAttribute<int>
                (pFVar20,(FAttributeAllocationInfo *)pFVar19,&local_278);
    }
    if (local_1c8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Key.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d14a6:
  pFVar25 = (FAttributeStorage *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FVar23.ReferenceController = local_98.ReferenceController;
  uVar9 = local_2a8;
  pFVar20 = pFVar25;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)pFVar25;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d152d;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      pFVar20 = local_a0;
      aVar3 = aVar8;
    } while (!bVar7);
  }
  FVar22.ReferenceController = local_98.ReferenceController;
  if (pFVar20 == (FAttributeStorage *)0x0) {
LAB_14e3d152d:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar23.ReferenceController = FVar22.ReferenceController;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if (local_108._8_4_ - local_108._52_4_ != 0) {
      FVar21 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = local_c8;
      }
      uVar4 = *(uint *)((longlong)FVar21 + (ulonglong)(local_c0 - 1U & local_2a8) * 4);
      while (uVar4 != 0xffffffff) {
        puVar18 = (uint *)((longlong)(int)uVar4 * 0x40 + local_108._0_8_);
        if (*puVar18 == local_2a8) {
          pFVar17 = (FAttributeStorage *)(puVar18 + 2);
          if (puVar18 == (uint *)0x0) {
            pFVar17 = pFVar25;
          }
          if (pFVar17 != (FAttributeStorage *)0x0) {
            pFVar20 = *(FAttributeStorage **)&(pFVar17->AttributeAllocationTable).field_0x18;
            if (pFVar20 != (FAttributeStorage *)0x0) {
              pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                *)pFVar20,
                               (FAttributeKey *)&(pFVar17->AttributeAllocationTable).field_0x20);
              pFVar26 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
              if (pTVar12 ==
                  (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                   *)0x0) {
                pFVar26 = (FAttributeAllocationInfo *)0x0;
              }
              if (pFVar26 != (FAttributeAllocationInfo *)0x0) {
                pFVar1 = &pFVar20->StorageMutex;
                if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14e3d203d:
                    /* WARNING: Subroutine does not return */
                  Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                local_29f[0] = false;
                FVar13.Data = (FScriptContainerElement *)L"";
                if (local_298.Data.ArrayNum != 0) {
                  FVar13.Data = local_298.Data.AllocatorInstance.Data;
                }
                Interchange::FAttributeStorage::MultiSizeSetAttribute<FString>
                          (pFVar20,pFVar26,0,&local_298,(uchar *)FVar13.Data,local_29f);
                Interchange::FAttributeStorage::UpdateAllocationInfoHash(pFVar20,pFVar26);
                if (local_29f[0] != false) {
                  Interchange::FAttributeStorage::DefragInternal(pFVar20);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
              }
            }
            goto LAB_14e3d18b2;
          }
          break;
        }
        uVar4 = puVar18[0xe];
      }
    }
    Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute
              ((TMapAttributeHelper<int,FString> *)local_108,&local_198,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute
              ((TMapAttributeHelper<int,FString> *)local_108,&local_1a8,(int *)&local_2a8);
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar20,&local_198,(int *)&local_2a8,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar20,&local_1a8,&local_298,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_1f8,&local_1a8,pFVar20);
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_210,&local_198,pFVar20);
    local_158 = local_210.AttributeStorage;
    local_150 = local_210.Key.Key.Data.AllocatorInstance.Data;
    local_148 = local_210.Key.Key.Data.ArrayNum;
    local_144 = local_210.Key.Key.Data.ArrayMax;
    local_140 = local_1f8.AttributeStorage;
    local_138 = local_1f8.Key.Key.Data.AllocatorInstance.Data;
    local_130 = local_1f8.Key.Key.Data.ArrayNum;
    local_12c = local_1f8.Key.Key.Data.ArrayMax;
    local_1f8.Key.Key.Data.ArrayNum = 0;
    local_1f8.Key.Key.Data.ArrayMax = 0;
    local_210.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.Key.Key.Data.ArrayNum = 0;
    local_210.Key.Key.Data.ArrayMax = 0;
    local_1f8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
    ::
    EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
              ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                *)local_108,uVar9,(int *)&local_2a8,
               (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                *)&local_158);
    if (local_138 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_150 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150);
    }
    if (local_210.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar20 = local_b8;
    local_274 = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar10 = local_b0.Key.Data.ArrayNum + -1;
      FVar13.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar13.Data = (FScriptContainerElement *)L"";
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar13.Data);
      iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar20,uVar9,&local_b0);
      pFVar17 = pFVar25;
      if (iVar10 != -1) {
        pFVar17 = (FAttributeStorage *)
                  ((longlong)iVar10 * 0x50 + *(longlong *)&pFVar20->AttributeAllocationTable);
      }
      pFVar19 = (FAttributeStorage *)&(pFVar17->AttributeAllocationTable).field_0x10;
      if (pFVar17 == (FAttributeStorage *)0x0) {
        pFVar19 = pFVar25;
      }
      Interchange::FAttributeStorage::SetAttribute<int>
                (pFVar20,(FAttributeAllocationInfo *)pFVar19,&local_274);
    }
    if (local_1a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Key.Data.AllocatorInstance.Data);
    }
    if (local_198.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d18b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  Interchange::TMapAttributeHelper<int,FString>::SetKeyValueByHash
            ((TMapAttributeHelper<int,FString> *)local_108,local_2a4,(int *)&local_2a4,&local_298);
  Interchange::TMapAttributeHelper<int,FString>::SetKeyValueByHash
            ((TMapAttributeHelper<int,FString> *)local_108,local_2a4,(int *)&local_2a4,&local_288);
  Interchange::TMapAttributeHelper<int,FString>::ToMap
            ((TMapAttributeHelper<int,FString> *)local_108,
             (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
             local_88);
  this = local_1e0;
  FAutomationTestBase::TestEqual
            (local_1e0,L"Compare maps after ToMap",local_88._8_4_ - local_88._52_4_,2);
  FVar23.ReferenceController = local_98.ReferenceController;
  local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Data.ArrayNum = 0;
  local_250.Data.ArrayMax = 0;
  local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.Data.ArrayNum = 0;
  local_260.Data.ArrayMax = 0;
  FVar22.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d1975;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar7);
    FVar22.ReferenceController = local_98.ReferenceController;
    if (local_a0 != (FAttributeStorage *)0x0) {
      if (local_108._8_4_ != local_108._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_c8;
        }
        uVar9 = *(uint *)((longlong)FVar21 + (ulonglong)(local_c0 - 1U & local_2a8) * 4);
        while (uVar9 != 0xffffffff) {
          puVar18 = (uint *)((longlong)(int)uVar9 * 0x40 + local_108._0_8_);
          if (*puVar18 == local_2a8) {
            pFVar20 = (FAttributeStorage *)(puVar18 + 2);
            if (puVar18 == (uint *)0x0) {
              pFVar20 = (FAttributeStorage *)0x0;
            }
            if (pFVar20 != (FAttributeStorage *)0x0) {
              pFVar25 = *(FAttributeStorage **)&(pFVar20->AttributeAllocationTable).field_0x18;
              EVar15 = Operation_Error_InvalidStorage;
              if (pFVar25 == (FAttributeStorage *)0x0) {
                EVar14 = Operation_Error_InvalidStorage;
              }
              else {
                EVar14 = Interchange::FAttributeStorage::GetAttribute<FString,void>
                                   (pFVar25,(FAttributeKey *)
                                            &(pFVar20->AttributeAllocationTable).field_0x20,
                                    &local_250);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar23.ReferenceController);
              FVar22.ReferenceController = local_98.ReferenceController;
              if (EVar14 != Operation_Success) goto LAB_14e3d19aa;
              FVar23.ReferenceController = local_98.ReferenceController;
              if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0)
              goto LAB_14e3d1de0;
              aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
              goto joined_r0x00014e3d1dca;
            }
            break;
          }
          uVar9 = puVar18[0xe];
        }
      }
      goto LAB_14e3d199b;
    }
  }
LAB_14e3d1975:
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494661>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x185,"AttributesPtr.IsValid()");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14e3d199b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
LAB_14e3d19aa:
  bVar7 = false;
  goto LAB_14e3d19ad;
  while( true ) {
    LOCK();
    aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
    bVar7 = aVar3 == aVar8;
    if (bVar7) {
      (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
      aVar8 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar8;
    if (bVar7) break;
joined_r0x00014e3d1dca:
    if (aVar3 == (atomic<int>)0x0) {
      FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      goto LAB_14e3d1de0;
    }
  }
  if (local_a0 == (FAttributeStorage *)0x0) {
LAB_14e3d1de0:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x185,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
    goto LAB_14e3d19aa;
  }
  pTVar16 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
            ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                               *)local_108,local_2a4,(int *)&local_2a4);
  if (pTVar16 ==
      (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
       *)0x0) goto LAB_14e3d199b;
  if (*(FAttributeStorage **)&pTVar16->field_0x18 != (FAttributeStorage *)0x0) {
    EVar15 = Interchange::FAttributeStorage::GetAttribute<FString,void>
                       (*(FAttributeStorage **)&pTVar16->field_0x18,
                        (FAttributeKey *)&pTVar16->field_0x20,&local_260);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  if (EVar15 != Operation_Success) goto LAB_14e3d19aa;
  bVar7 = true;
LAB_14e3d19ad:
  FAutomationTestBase::TestTrue(this,L"GetValue succeeded",bVar7);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar13.Data = local_298.Data.AllocatorInstance.Data;
  }
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar24.Data = local_250.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this,L"Compare result after add 1",(wchar_t *)FVar24.Data,(wchar_t *)FVar13.Data);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar13.Data = local_288.Data.AllocatorInstance.Data;
  }
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_260.Data.ArrayNum != 0) {
    FVar24.Data = local_260.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this,L"Compare result after add 2",(wchar_t *)FVar24.Data,(wchar_t *)FVar13.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d1a46:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d1a46;
      }
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar7);
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d1a46;
    if (local_108._8_4_ != local_108._52_4_) {
      FVar21 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = local_c8;
      }
      uVar9 = *(uint *)((longlong)FVar21 + (ulonglong)(local_c0 - 1U & local_2a4) * 4);
      while (uVar9 != 0xffffffff) {
        puVar18 = (uint *)((longlong)(int)uVar9 * 0x40 + local_108._0_8_);
        if (*puVar18 == local_2a4) {
          pTVar16 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                     *)(puVar18 + 2);
          if (puVar18 == (uint *)0x0) {
            pTVar16 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                       *)0x0;
          }
          if (pTVar16 !=
              (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
               *)0x0) {
            bVar7 = Interchange::TMapAttributeHelper<int,FString>::RemoveBySwap
                              ((TMapAttributeHelper<int,FString> *)local_108,local_2a4,
                               (int *)&local_2a4,pTVar16);
            goto LAB_14e3d1a6f;
          }
          break;
        }
        uVar9 = puVar18[0xe];
      }
    }
  }
  bVar7 = false;
LAB_14e3d1a6f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue(this,L"Test removing a key",bVar7);
  FVar23.ReferenceController = local_98.ReferenceController;
  uVar9 = local_2a8;
  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Data.ArrayNum = 0;
  local_270.Data.ArrayMax = 0;
  FVar22.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d1ac5:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x1a6,"AttributesPtr.IsValid()");
    FVar23.ReferenceController = FVar22.ReferenceController;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d1ac5;
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar7);
    FVar22.ReferenceController = local_98.ReferenceController;
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d1ac5;
    if (local_108._8_4_ != local_108._52_4_) {
      FVar21 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = local_c8;
      }
      uVar4 = *(uint *)((longlong)FVar21 + (ulonglong)(local_c0 - 1U & local_2a8) * 4);
      while (uVar4 != 0xffffffff) {
        puVar18 = (uint *)((longlong)(int)uVar4 * 0x40 + local_108._0_8_);
        if (*puVar18 == local_2a8) {
          pFVar20 = (FAttributeStorage *)(puVar18 + 2);
          if (puVar18 == (uint *)0x0) {
            pFVar20 = (FAttributeStorage *)0x0;
          }
          if (((pFVar20 != (FAttributeStorage *)0x0) &&
              (pFVar25 = *(FAttributeStorage **)&(pFVar20->AttributeAllocationTable).field_0x18,
              pFVar25 != (FAttributeStorage *)0x0)) &&
             (EVar15 = Interchange::FAttributeStorage::GetAttribute<FString,void>
                                 (pFVar25,(FAttributeKey *)
                                          &(pFVar20->AttributeAllocationTable).field_0x20,&local_270
                                 ), EVar15 == Operation_Success)) {
            bVar7 = Interchange::TMapAttributeHelper<int,FString>::RemoveBySwap
                              ((TMapAttributeHelper<int,FString> *)local_108,uVar9,(int *)&local_2a8
                               ,(TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                                 *)pFVar20);
            goto LAB_14e3d1af5;
          }
          break;
        }
        uVar4 = puVar18[0xe];
      }
    }
  }
  bVar7 = false;
LAB_14e3d1af5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue(this,L"RemoveKeyAndGetValue succeeded",bVar7);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar13.Data = local_298.Data.AllocatorInstance.Data;
  }
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_270.Data.ArrayNum != 0) {
    FVar24.Data = local_270.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this,L"Compare removed value",(wchar_t *)FVar24.Data,(wchar_t *)FVar13.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  uVar9 = local_2a4;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d1b68:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d1b68;
      }
      LOCK();
      aVar8 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar7);
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d1b68;
    pTVar16 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
              ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                                 *)local_108,local_2a4,(int *)&local_2a4);
    if (pTVar16 !=
        (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
         *)0x0) {
      bVar7 = Interchange::TMapAttributeHelper<int,FString>::RemoveBySwap
                        ((TMapAttributeHelper<int,FString> *)local_108,uVar9,(int *)&local_2a4,
                         pTVar16);
      goto LAB_14e3d1b91;
    }
  }
  bVar7 = false;
LAB_14e3d1b91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestFalse(this,L"Test removing missing key",bVar7);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((FAttributeStorage *)FVar23.ReferenceController != (FAttributeStorage *)0x0) {
    LOCK();
    paVar2 = &(FVar23.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)&(FVar23.ReferenceController)->_padding_ + 8))
                (FVar23.ReferenceController,1);
    }
  }
  if (local_98.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_98.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_98.ReferenceController)->_padding_ + 8))(local_98.ReferenceController,1);
    }
  }
  if (local_b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Key.Data.AllocatorInstance.Data);
  }
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<float> @ 14e3d2050

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::ArrayAttributeHelperTests::Private::RunTestInternal<float>(FArrayAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  FAttributeStorage *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  atomic<int> aVar8;
  EAttributeTypes EVar9;
  int iVar10;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar11;
  EAttributeStorageResult EVar12;
  FString *pFVar13;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar14;
  ulonglong uVar15;
  FAttributeStorage *pFVar16;
  ForAnyElementType FVar17;
  FWeakReferencer<1> FVar18;
  FWeakReferencer<1> FVar19;
  FAttributeStorage *pFVar20;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  int local_res20 [2];
  TArrayAttributeHelper<float> local_1f8;
  int local_1d8;
  float local_1d4;
  TArray<float,TSizedDefaultAllocator<32>_> local_1d0;
  int local_1c0 [2];
  float local_1b8 [2];
  FAttributeKey local_1b0;
  FAttributeKey local_1a0;
  FAttributeKey local_190;
  FAttributeKey local_180;
  FAttributeKey local_170;
  FAttributeKey local_160;
  TAttributeHandle<int,void> local_150;
  TAttributeHandle<int,void> local_138;
  FAttributeKey local_120;
  FAttributeKey local_110;
  FString local_100;
  FString local_f0;
  FMemScope local_e0;
  FString local_d8;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  ::FString::FString(&local_d8,L"TestKey");
  pTVar11 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_c8);
  pFVar4 = (FAttributeStorage *)(pTVar11->SharedReferenceCount).ReferenceController;
  pFVar16 = pTVar11->Object;
  if (pFVar4 != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar4->AttributeAllocationTable).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  pFVar20 = (FAttributeStorage *)0x0;
  local_1f8.Attributes.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1f8.KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.KeyCount.Key.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name34,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res18,
             `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope
            (&local_e0,
             &`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name34,true);
  if ((pFVar16 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAttributes.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x24,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1f8.Attributes.Object = pFVar16;
  FVar19.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar4 != (FAttributeStorage *)local_1f8.Attributes.WeakReferenceCount.ReferenceController) {
    if (pFVar4 != (FAttributeStorage *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar4->AttributeAllocationTable).field_0xc;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    FVar19.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    if ((FAttributeStorage *)local_1f8.Attributes.WeakReferenceCount.ReferenceController !=
        (FAttributeStorage *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.Attributes.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)
                      &(local_1f8.Attributes.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )();
      }
    }
  }
  local_1f8.Attributes.WeakReferenceCount.ReferenceController = FVar19.ReferenceController;
  FVar17.Data = local_d8.Data.AllocatorInstance.Data;
  local_1f8.KeyCount.Key.Data.ArrayNum = local_d8.Data.ArrayNum;
  if (((local_d8.Data.ArrayNum != 0) || (local_1f8.KeyCount.Key.Data.ArrayMax != 0)) &&
     (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d8.Data.ArrayNum,local_1f8.KeyCount.Key.Data.ArrayMax,
                 (ForAnyElementType *)&local_1f8.KeyCount,local_d8.Data.ArrayNum,
                 &local_1f8.KeyCount.Key.Data.ArrayMax), local_d8.Data.ArrayNum != 0)) {
    memcpy(local_1f8.KeyCount.Key.Data.AllocatorInstance.Data,FVar17.Data,
           (longlong)local_d8.Data.ArrayNum * 2);
  }
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_res18);
  FVar19.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  local_1d4 = 0.0;
  pFVar16 = pFVar20;
  if ((FAttributeStorage *)local_1f8.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar3 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)pFVar20;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d223d;
      LOCK();
      aVar8 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      pFVar16 = local_1f8.Attributes.Object;
      aVar3 = aVar8;
    } while (!bVar7);
  }
  FVar18.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar16 == (FAttributeStorage *)0x0) {
LAB_14e3d223d:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    FVar19.ReferenceController = FVar18.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_1f8.KeyCount.Key.Data.ArrayNum;
    FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_1b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
      local_1b0.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_1b0,
                 local_1f8.KeyCount.Key.Data.ArrayNum,&local_1b0.Key.Data.ArrayMax);
      memcpy(local_1b0.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
    }
    bVar7 = Interchange::FAttributeStorage::ContainAttribute(pFVar16,&local_1b0);
    if (local_1b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_1c0[0] = 0;
      if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_1f8.KeyCount.Key.Data.ArrayNum;
      FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
      local_1a0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
      if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
        local_1a0.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_1a0,
                   local_1f8.KeyCount.Key.Data.ArrayNum,&local_1a0.Key.Data.ArrayMax);
        memcpy(local_1a0.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
      }
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar16,&local_1a0,local_1c0,None);
      if (local_1a0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar12 & Operation_Success) == None) {
        if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
           (bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = local_1f8.KeyCount.Key.Data.ArrayNum;
        FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
        local_120.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
        if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
          local_120.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_120,
                     local_1f8.KeyCount.Key.Data.ArrayNum,&local_120.Key.Data.ArrayMax);
          memcpy(local_120.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
        }
        pFVar13 = ::FString::FString(&local_98,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,&local_120);
        goto LAB_14e3d267a;
      }
    }
    if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_1f8.KeyCount.Key.Data.ArrayNum;
    FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_190.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
      local_190.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_190,
                 local_1f8.KeyCount.Key.Data.ArrayNum,&local_190.Key.Data.ArrayMax);
      memcpy(local_190.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_150,&local_190,pFVar16);
    if (local_190.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Key.Data.AllocatorInstance.Data);
    }
    if (((local_150.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar7 = Interchange::FAttributeStorage::ContainAttribute
                           (local_150.AttributeStorage,&local_150.Key), !bVar7)) ||
       (EVar9 = Interchange::FAttributeStorage::GetAttributeType
                          (local_150.AttributeStorage,&local_150.Key), EVar9 != Int32)) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4942768438637494430>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x9e,"Handle.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_res20[0] = 0;
      if (local_150.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_150.AttributeStorage,&local_150.Key,local_res20);
      }
      iVar10 = local_res20[0];
      Interchange::TArrayAttributeHelper<float>::GetIndexKey
                (&local_1f8,(FAttributeKey *)&local_100,local_res20[0]);
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<float,void>
                         (pFVar16,(FAttributeKey *)&local_100,&local_1d4,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_b8,&local_100);
        pFVar13 = ::FString::FString(&local_88,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,(FAttributeKey *)&local_b8);
      }
      else {
        local_res20[0] = iVar10 + 1;
        if (local_150.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_150.AttributeStorage,&local_150.Key);
          pFVar16 = (FAttributeStorage *)&pTVar14->field_0x10;
          if (pTVar14 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar16 = pFVar20;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_150.AttributeStorage,(FAttributeAllocationInfo *)pFVar16,local_res20);
        }
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    if (local_150.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d267a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  FVar19.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  pFVar16 = pFVar20;
  if ((FAttributeStorage *)local_1f8.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar3 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)pFVar20;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d26b3;
      LOCK();
      aVar8 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      pFVar16 = local_1f8.Attributes.Object;
      aVar3 = aVar8;
    } while (!bVar7);
  }
  FVar18.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar16 == (FAttributeStorage *)0x0) {
LAB_14e3d26b3:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    FVar19.ReferenceController = FVar18.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_1f8.KeyCount.Key.Data.ArrayNum;
    FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_180.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
      local_180.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_180,
                 local_1f8.KeyCount.Key.Data.ArrayNum,&local_180.Key.Data.ArrayMax);
      memcpy(local_180.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
    }
    bVar7 = Interchange::FAttributeStorage::ContainAttribute(pFVar16,&local_180);
    if (local_180.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_1c0[1] = 0;
      if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_1f8.KeyCount.Key.Data.ArrayNum;
      FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
      local_170.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
      if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
        local_170.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_170,
                   local_1f8.KeyCount.Key.Data.ArrayNum,&local_170.Key.Data.ArrayMax);
        memcpy(local_170.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
      }
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar16,&local_170,local_1c0 + 1,None);
      if (local_170.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar12 & Operation_Success) == None) {
        if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
           (bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
        local_110.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
        if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
          local_110.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_110,
                     local_1f8.KeyCount.Key.Data.ArrayNum,&local_110.Key.Data.ArrayMax);
          memcpy(local_110.Key.Data.AllocatorInstance.Data,FVar17.Data,
                 (longlong)local_1f8.KeyCount.Key.Data.ArrayNum * 2);
        }
        pFVar13 = ::FString::FString(&local_78,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,&local_110);
        goto LAB_14e3d2ad8;
      }
    }
    if ((local_1f8.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar17.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_160.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Key.Data.ArrayNum = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum == 0) {
      local_160.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_160,
                 local_1f8.KeyCount.Key.Data.ArrayNum,&local_160.Key.Data.ArrayMax);
      memcpy(local_160.Key.Data.AllocatorInstance.Data,FVar17.Data,
             (longlong)local_1f8.KeyCount.Key.Data.ArrayNum * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_138,&local_160,pFVar16);
    if (local_160.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Key.Data.AllocatorInstance.Data);
    }
    if (((local_138.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar7 = Interchange::FAttributeStorage::ContainAttribute
                           (local_138.AttributeStorage,&local_138.Key), !bVar7)) ||
       (EVar9 = Interchange::FAttributeStorage::GetAttributeType
                          (local_138.AttributeStorage,&local_138.Key), EVar9 != Int32)) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4942768438637494430>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x9e,"Handle.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_1d8 = 0;
      if (local_138.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_138.AttributeStorage,&local_138.Key,&local_1d8);
      }
      iVar10 = local_1d8;
      Interchange::TArrayAttributeHelper<float>::GetIndexKey
                (&local_1f8,(FAttributeKey *)&local_f0,local_1d8);
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<float,void>
                         (pFVar16,(FAttributeKey *)&local_f0,&local_1d4,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_a8,&local_f0);
        pFVar13 = ::FString::FString(local_68,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,(FAttributeKey *)&local_a8);
      }
      else {
        local_1d8 = iVar10 + 1;
        if (local_138.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_138.AttributeStorage,&local_138.Key);
          pFVar16 = (FAttributeStorage *)&pTVar14->field_0x10;
          if (pTVar14 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar16 = pFVar20;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_138.AttributeStorage,(FAttributeAllocationInfo *)pFVar16,&local_1d8);
        }
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    if (local_138.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d2ad8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  Interchange::TArrayAttributeHelper<float>::AddItem(&local_1f8,&local_1d4);
  iVar10 = Interchange::TArrayAttributeHelper<float>::GetCount(&local_1f8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after adding 3",iVar10,3);
  Interchange::TArrayAttributeHelper<float>::GetItem(&local_1f8,2,local_1b8);
  fVar6 = __real_38d1b717;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Retrieved item after adding 3",local_1b8[0],0.0,
             __real_38d1b717);
  Interchange::TArrayAttributeHelper<float>::RemoveItem(&local_1f8,&local_1d4);
  iVar10 = Interchange::TArrayAttributeHelper<float>::GetCount(&local_1f8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Count after removal with duplicates",iVar10,2);
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  Interchange::TArrayAttributeHelper<float>::GetItems(&local_1f8,&local_1d0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1d0.ArrayNum,2);
  iVar10 = local_1d0.ArrayNum;
  uVar15 = (ulonglong)local_1d0.ArrayNum;
  pFVar2 = local_1d0.AllocatorInstance.Data + uVar15 * 4;
  FVar17.Data = local_1d0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar15 != iVar10) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar17.Data == pFVar2) break;
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)param_1,L"Item equals the expected value",
               *(float *)FVar17.Data,0.0,fVar6);
    uVar15 = local_1d0._8_8_ & 0xffffffff;
    FVar17.Data = FVar17.Data + 4;
  }
  Interchange::TArrayAttributeHelper<float>::RemoveAllItems(&local_1f8);
  iVar10 = Interchange::TArrayAttributeHelper<float>::GetCount(&local_1f8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after remove all",iVar10,0);
  Interchange::TArrayAttributeHelper<float>::GetItems(&local_1f8,&local_1d0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1d0.ArrayNum,0);
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(&local_1f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<double> @ 14e3d2cf0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::ArrayAttributeHelperTests::Private::RunTestInternal<double>(FArrayAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  FAttributeStorage *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  atomic<int> aVar8;
  EAttributeTypes EVar9;
  int iVar10;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar11;
  EAttributeStorageResult EVar12;
  FString *pFVar13;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar14;
  ulonglong uVar15;
  FAttributeStorage *pFVar16;
  ForAnyElementType FVar17;
  FWeakReferencer<1> FVar18;
  FWeakReferencer<1> FVar19;
  FAttributeStorage *pFVar20;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  int local_res20 [2];
  TArrayAttributeHelper<double> local_208;
  int local_1e8 [2];
  TArray<double,TSizedDefaultAllocator<32>_> local_1e0;
  double local_1d0;
  int local_1c8 [2];
  FAttributeKey local_1c0;
  FAttributeKey local_1b0;
  FAttributeKey local_1a0;
  FAttributeKey local_190;
  FAttributeKey local_180;
  FAttributeKey local_170;
  TAttributeHandle<int,void> local_160;
  TAttributeHandle<int,void> local_148;
  FAttributeKey local_130;
  FAttributeKey local_120;
  FString local_110;
  FString local_100;
  FMemScope local_f0;
  double local_e8;
  FString local_e0;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  ::FString::FString(&local_e0,L"TestKey");
  pTVar11 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_d0);
  pFVar4 = (FAttributeStorage *)(pTVar11->SharedReferenceCount).ReferenceController;
  pFVar16 = pTVar11->Object;
  if (pFVar4 != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar4->AttributeAllocationTable).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  pFVar20 = (FAttributeStorage *)0x0;
  local_208.Attributes.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_208.KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.KeyCount.Key.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name34,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res18,
             `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope
            (&local_f0,
             &`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<double>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name34,true);
  if ((pFVar16 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAttributes.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x24,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_208.Attributes.Object = pFVar16;
  FVar19.ReferenceController = local_208.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar4 != (FAttributeStorage *)local_208.Attributes.WeakReferenceCount.ReferenceController) {
    if (pFVar4 != (FAttributeStorage *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar4->AttributeAllocationTable).field_0xc;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    FVar19.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    if ((FAttributeStorage *)local_208.Attributes.WeakReferenceCount.ReferenceController !=
        (FAttributeStorage *)0x0) {
      LOCK();
      paVar1 = &(local_208.Attributes.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)
                      &(local_208.Attributes.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )();
      }
    }
  }
  local_208.Attributes.WeakReferenceCount.ReferenceController = FVar19.ReferenceController;
  FVar17.Data = local_e0.Data.AllocatorInstance.Data;
  local_208.KeyCount.Key.Data.ArrayNum = local_e0.Data.ArrayNum;
  if (((local_e0.Data.ArrayNum != 0) || (local_208.KeyCount.Key.Data.ArrayMax != 0)) &&
     (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e0.Data.ArrayNum,local_208.KeyCount.Key.Data.ArrayMax,
                 (ForAnyElementType *)&local_208.KeyCount,local_e0.Data.ArrayNum,
                 &local_208.KeyCount.Key.Data.ArrayMax), local_e0.Data.ArrayNum != 0)) {
    memcpy(local_208.KeyCount.Key.Data.AllocatorInstance.Data,FVar17.Data,
           (longlong)local_e0.Data.ArrayNum * 2);
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(local_res18);
  FVar19.ReferenceController = local_208.Attributes.WeakReferenceCount.ReferenceController;
  local_1d0 = 0.0;
  pFVar16 = pFVar20;
  if ((FAttributeStorage *)local_208.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar3 = (local_208.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)pFVar20;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d2ee1;
      LOCK();
      aVar8 = (local_208.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_208.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      pFVar16 = local_208.Attributes.Object;
      aVar3 = aVar8;
    } while (!bVar7);
  }
  FVar18.ReferenceController = local_208.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar16 == (FAttributeStorage *)0x0) {
LAB_14e3d2ee1:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    FVar19.ReferenceController = FVar18.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_208.KeyCount.Key.Data.ArrayNum;
    FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
    local_1c0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
    if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
      local_1c0.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_1c0,
                 local_208.KeyCount.Key.Data.ArrayNum,&local_1c0.Key.Data.ArrayMax);
      memcpy(local_1c0.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
    }
    bVar7 = Interchange::FAttributeStorage::ContainAttribute(pFVar16,&local_1c0);
    if (local_1c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_1c8[0] = 0;
      if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_208.KeyCount.Key.Data.ArrayNum;
      FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
      local_1b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
      if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
        local_1b0.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_1b0,
                   local_208.KeyCount.Key.Data.ArrayNum,&local_1b0.Key.Data.ArrayMax);
        memcpy(local_1b0.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
      }
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar16,&local_1b0,local_1c8,None);
      if (local_1b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar12 & Operation_Success) == None) {
        if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
           (bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = local_208.KeyCount.Key.Data.ArrayNum;
        FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
        local_130.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
        if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
          local_130.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_130,
                     local_208.KeyCount.Key.Data.ArrayNum,&local_130.Key.Data.ArrayMax);
          memcpy(local_130.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
        }
        pFVar13 = ::FString::FString(&local_a0,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,&local_130);
        goto LAB_14e3d331c;
      }
    }
    if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_208.KeyCount.Key.Data.ArrayNum;
    FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
    local_1a0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
    if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
      local_1a0.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_1a0,
                 local_208.KeyCount.Key.Data.ArrayNum,&local_1a0.Key.Data.ArrayMax);
      memcpy(local_1a0.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_160,&local_1a0,pFVar16);
    if (local_1a0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Key.Data.AllocatorInstance.Data);
    }
    if (((local_160.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar7 = Interchange::FAttributeStorage::ContainAttribute
                           (local_160.AttributeStorage,&local_160.Key), !bVar7)) ||
       (EVar9 = Interchange::FAttributeStorage::GetAttributeType
                          (local_160.AttributeStorage,&local_160.Key), EVar9 != Int32)) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4942768438637494430>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x9e,"Handle.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_res20[0] = 0;
      if (local_160.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_160.AttributeStorage,&local_160.Key,local_res20);
      }
      iVar10 = local_res20[0];
      Interchange::TArrayAttributeHelper<double>::GetIndexKey
                (&local_208,(FAttributeKey *)&local_110,local_res20[0]);
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<double,void>
                         (pFVar16,(FAttributeKey *)&local_110,&local_1d0,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_c0,&local_110);
        pFVar13 = ::FString::FString(&local_90,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,(FAttributeKey *)&local_c0);
      }
      else {
        local_res20[0] = iVar10 + 1;
        if (local_160.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_160.AttributeStorage,&local_160.Key);
          pFVar16 = (FAttributeStorage *)&pTVar14->field_0x10;
          if (pTVar14 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar16 = pFVar20;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_160.AttributeStorage,(FAttributeAllocationInfo *)pFVar16,local_res20);
        }
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    if (local_160.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d331c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  FVar19.ReferenceController = local_208.Attributes.WeakReferenceCount.ReferenceController;
  pFVar16 = pFVar20;
  if ((FAttributeStorage *)local_208.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar3 = (local_208.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)pFVar20;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d335d;
      LOCK();
      aVar8 = (local_208.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        (local_208.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      pFVar16 = local_208.Attributes.Object;
      aVar3 = aVar8;
    } while (!bVar7);
  }
  FVar18.ReferenceController = local_208.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar16 == (FAttributeStorage *)0x0) {
LAB_14e3d335d:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    FVar19.ReferenceController = FVar18.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_208.KeyCount.Key.Data.ArrayNum;
    FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
    local_190.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
    if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
      local_190.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_190,
                 local_208.KeyCount.Key.Data.ArrayNum,&local_190.Key.Data.ArrayMax);
      memcpy(local_190.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
    }
    bVar7 = Interchange::FAttributeStorage::ContainAttribute(pFVar16,&local_190);
    if (local_190.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_1c8[1] = 0;
      if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_208.KeyCount.Key.Data.ArrayNum;
      FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
      local_180.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
      if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
        local_180.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_180,
                   local_208.KeyCount.Key.Data.ArrayNum,&local_180.Key.Data.ArrayMax);
        memcpy(local_180.Key.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar10 * 2);
      }
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar16,&local_180,local_1c8 + 1,None);
      if (local_180.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar12 & Operation_Success) == None) {
        if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
           (bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
        local_120.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
        if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
          local_120.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_120,
                     local_208.KeyCount.Key.Data.ArrayNum,&local_120.Key.Data.ArrayMax);
          memcpy(local_120.Key.Data.AllocatorInstance.Data,FVar17.Data,
                 (longlong)local_208.KeyCount.Key.Data.ArrayNum * 2);
        }
        pFVar13 = ::FString::FString(&local_80,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,&local_120);
        goto LAB_14e3d3780;
      }
    }
    if ((local_208.KeyCount.Key.Data.ArrayNum < 2) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar17.Data = local_208.KeyCount.Key.Data.AllocatorInstance.Data;
    local_170.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Key.Data.ArrayNum = local_208.KeyCount.Key.Data.ArrayNum;
    if (local_208.KeyCount.Key.Data.ArrayNum == 0) {
      local_170.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_208.KeyCount.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_170,
                 local_208.KeyCount.Key.Data.ArrayNum,&local_170.Key.Data.ArrayMax);
      memcpy(local_170.Key.Data.AllocatorInstance.Data,FVar17.Data,
             (longlong)local_208.KeyCount.Key.Data.ArrayNum * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_148,&local_170,pFVar16);
    if (local_170.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Key.Data.AllocatorInstance.Data);
    }
    if (((local_148.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar7 = Interchange::FAttributeStorage::ContainAttribute
                           (local_148.AttributeStorage,&local_148.Key), !bVar7)) ||
       (EVar9 = Interchange::FAttributeStorage::GetAttributeType
                          (local_148.AttributeStorage,&local_148.Key), EVar9 != Int32)) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4942768438637494430>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x9e,"Handle.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_1e8[0] = 0;
      if (local_148.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_148.AttributeStorage,&local_148.Key,local_1e8);
      }
      iVar10 = local_1e8[0];
      Interchange::TArrayAttributeHelper<double>::GetIndexKey
                (&local_208,(FAttributeKey *)&local_100,local_1e8[0]);
      EVar12 = Interchange::FAttributeStorage::RegisterAttribute<double,void>
                         (pFVar16,(FAttributeKey *)&local_100,&local_1d0,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_b0,&local_100);
        pFVar13 = ::FString::FString(local_70,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar12,pFVar13,(FAttributeKey *)&local_b0);
      }
      else {
        local_1e8[0] = iVar10 + 1;
        if (local_148.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_148.AttributeStorage,&local_148.Key);
          pFVar16 = (FAttributeStorage *)&pTVar14->field_0x10;
          if (pTVar14 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar16 = pFVar20;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_148.AttributeStorage,(FAttributeAllocationInfo *)pFVar16,local_1e8);
        }
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    if (local_148.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d3780:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  Interchange::TArrayAttributeHelper<double>::AddItem(&local_208,&local_1d0);
  iVar10 = Interchange::TArrayAttributeHelper<double>::GetCount(&local_208);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after adding 3",iVar10,3);
  Interchange::TArrayAttributeHelper<double>::GetItem(&local_208,2,&local_e8);
  dVar6 = __real_3f1a36e2e0000000;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Retrieved item after adding 3",local_e8,0.0,
             __real_3f1a36e2e0000000);
  Interchange::TArrayAttributeHelper<double>::RemoveItem(&local_208,&local_1d0);
  iVar10 = Interchange::TArrayAttributeHelper<double>::GetCount(&local_208);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Count after removal with duplicates",iVar10,2);
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  Interchange::TArrayAttributeHelper<double>::GetItems(&local_208,&local_1e0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1e0.ArrayNum,2);
  iVar10 = local_1e0.ArrayNum;
  uVar15 = (ulonglong)local_1e0.ArrayNum;
  pFVar2 = local_1e0.AllocatorInstance.Data + uVar15 * 8;
  FVar17.Data = local_1e0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar15 != iVar10) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10)
      ;
    }
    if (FVar17.Data == pFVar2) break;
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)param_1,L"Item equals the expected value",
               *(double *)FVar17.Data,0.0,dVar6);
    uVar15 = local_1e0._8_8_ & 0xffffffff;
    FVar17.Data = FVar17.Data + 8;
  }
  Interchange::TArrayAttributeHelper<double>::RemoveAllItems(&local_208);
  iVar10 = Interchange::TArrayAttributeHelper<double>::GetCount(&local_208);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after remove all",iVar10,0);
  Interchange::TArrayAttributeHelper<double>::GetItems(&local_208,&local_1e0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1e0.ArrayNum,0);
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(&local_208);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<FString> @ 14e3d3990

void __cdecl
UE::ArrayAttributeHelperTests::Private::RunTestInternal<FString>
          (FArrayAttributeHelperTests *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  atomic<int> aVar5;
  EAttributeTypes EVar6;
  int iVar7;
  int iVar8;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar9;
  EAttributeStorageResult EVar10;
  FString *pFVar11;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar12;
  ulonglong uVar13;
  FAttributeStorage *pFVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  FWeakReferencer<1> FVar17;
  FWeakReferencer<1> FVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  FAttributeStorage *pFVar21;
  bool bVar22;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  TArrayAttributeHelper<FString> local_1f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  FString local_1c8;
  int local_1b8 [2];
  FAttributeKey local_1b0;
  FAttributeKey local_1a0;
  FAttributeKey local_190;
  FAttributeKey local_180;
  FAttributeKey local_170;
  FAttributeKey local_160;
  TAttributeHandle<int,void> local_150;
  TAttributeHandle<int,void> local_138;
  FAttributeKey local_120;
  FAttributeKey local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TSharedPtr<UE::Interchange::FAttributeStorage,1> local_d0;
  FString local_c0;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  ::FString::FString(&local_c0,L"TestKey");
  pTVar9 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_b0);
  local_d0.Object = pTVar9->Object;
  local_d0.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  pFVar21 = (FAttributeStorage *)0x0;
  local_1f8.KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Attributes.Object = (FAttributeStorage *)0x0;
  local_1f8.Attributes.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1f8.KeyCount.Key.Data.ArrayNum = 0;
  local_1f8.KeyCount.Key.Data.ArrayMax = 0;
  Interchange::TArrayAttributeHelper<FString>::Initialize(&local_1f8,&local_d0,&local_c0);
  FVar18.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  pFVar14 = pFVar21;
  if ((FAttributeStorage *)local_1f8.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar2 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar17.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d3a63;
      LOCK();
      aVar5 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar22 = aVar2 == aVar5;
      if (bVar22) {
        (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      pFVar14 = local_1f8.Attributes.Object;
      aVar2 = aVar5;
    } while (!bVar22);
  }
  FVar17.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar14 == (FAttributeStorage *)0x0) {
LAB_14e3d3a63:
    bVar22 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x8e,"AttributePtr.IsValid()");
    FVar18.ReferenceController = FVar17.ReferenceController;
    if (bVar22) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
      bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4942768438637494551>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x117,"!KeyCount.Key.IsEmpty()");
      if (bVar22) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    }
    FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_1b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Key.Data.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_1b0.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_1b0,iVar7,&local_1b0.Key.Data.ArrayMax);
      memcpy(local_1b0.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
    }
    bVar22 = Interchange::FAttributeStorage::ContainAttribute(pFVar14,&local_1b0);
    if (local_1b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar22) {
      local_1b8[0] = 0;
      iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
      if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
        bVar22 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()");
        if (bVar22) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
      }
      FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
      local_1a0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Key.Data.ArrayNum = iVar7;
      if (iVar7 == 0) {
        local_1a0.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,(ForAnyElementType *)&local_1a0,iVar7,&local_1a0.Key.Data.ArrayMax);
        memcpy(local_1a0.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
      }
      EVar10 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar14,&local_1a0,local_1b8,None);
      if (local_1a0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar10 & Operation_Success) == None) {
        iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
        if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
          bVar22 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()");
          if (bVar22) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
        }
        FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
        local_120.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Key.Data.ArrayNum = iVar7;
        if (iVar7 == 0) {
          local_120.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,(ForAnyElementType *)&local_120,iVar7,&local_120.Key.Data.ArrayMax)
          ;
          memcpy(local_120.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
        }
        pFVar11 = ::FString::FString(&local_80,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar10,pFVar11,&local_120);
        goto LAB_14e3d3e82;
      }
    }
    iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
      bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4942768438637494551>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x117,"!KeyCount.Key.IsEmpty()");
      if (bVar22) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    }
    FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_190.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Key.Data.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_190.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_190,iVar7,&local_190.Key.Data.ArrayMax);
      memcpy(local_190.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_150,&local_190,pFVar14);
    if (local_190.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Key.Data.AllocatorInstance.Data);
    }
    if (((local_150.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar22 = Interchange::FAttributeStorage::ContainAttribute
                            (local_150.AttributeStorage,&local_150.Key), !bVar22)) ||
       (EVar6 = Interchange::FAttributeStorage::GetAttributeType
                          (local_150.AttributeStorage,&local_150.Key), EVar6 != Int32)) {
      bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4942768438637494430>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x9e,"Handle.IsValid()");
      if (bVar22) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_res18[0] = 0;
      if (local_150.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_150.AttributeStorage,&local_150.Key,local_res18);
      }
      iVar7 = local_res18[0];
      Interchange::TArrayAttributeHelper<FString>::GetIndexKey
                (&local_1f8,(FAttributeKey *)&local_100,local_res18[0]);
      EVar10 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                         (pFVar14,(FAttributeKey *)&local_100,&local_1c8,None);
      if ((EVar10 & Operation_Success) == None) {
        ::FString::FString(&local_a0,&local_100);
        pFVar11 = ::FString::FString(&local_70,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar10,pFVar11,(FAttributeKey *)&local_a0);
      }
      else {
        local_res18[0] = iVar7 + 1;
        if (local_150.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_150.AttributeStorage,&local_150.Key);
          pFVar14 = (FAttributeStorage *)&pTVar12->field_0x10;
          if (pTVar12 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar14 = pFVar21;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_150.AttributeStorage,(FAttributeAllocationInfo *)pFVar14,local_res18);
        }
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    if (local_150.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d3e82:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  FVar18.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  pFVar14 = pFVar21;
  if ((FAttributeStorage *)local_1f8.Attributes.WeakReferenceCount.ReferenceController !=
      (FAttributeStorage *)0x0) {
    aVar2 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar17.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d3ebd;
      LOCK();
      aVar5 = (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar22 = aVar2 == aVar5;
      if (bVar22) {
        (local_1f8.Attributes.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      pFVar14 = local_1f8.Attributes.Object;
      aVar2 = aVar5;
    } while (!bVar22);
  }
  FVar17.ReferenceController = local_1f8.Attributes.WeakReferenceCount.ReferenceController;
  if (pFVar14 == (FAttributeStorage *)0x0) {
LAB_14e3d3ebd:
    bVar22 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x8e,"AttributePtr.IsValid()");
    FVar18.ReferenceController = FVar17.ReferenceController;
    if (bVar22) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
      bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4942768438637494551>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x117,"!KeyCount.Key.IsEmpty()");
      if (bVar22) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    }
    FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_180.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Key.Data.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_180.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_180,iVar7,&local_180.Key.Data.ArrayMax);
      memcpy(local_180.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
    }
    bVar22 = Interchange::FAttributeStorage::ContainAttribute(pFVar14,&local_180);
    if (local_180.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Key.Data.AllocatorInstance.Data);
    }
    if (!bVar22) {
      local_1b8[1] = 0;
      iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
      if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
        bVar22 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()");
        if (bVar22) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
      }
      FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
      local_170.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Key.Data.ArrayNum = iVar7;
      if (iVar7 == 0) {
        local_170.Key.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,(ForAnyElementType *)&local_170,iVar7,&local_170.Key.Data.ArrayMax);
        memcpy(local_170.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
      }
      EVar10 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                         (pFVar14,&local_170,local_1b8 + 1,None);
      if (local_170.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Key.Data.AllocatorInstance.Data);
      }
      if ((EVar10 & Operation_Success) == None) {
        iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
        if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
          bVar22 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()");
          if (bVar22) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
        }
        FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
        local_110.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Key.Data.ArrayNum = iVar7;
        if (iVar7 == 0) {
          local_110.Key.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,(ForAnyElementType *)&local_110,iVar7,&local_110.Key.Data.ArrayMax)
          ;
          memcpy(local_110.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
        }
        pFVar11 = ::FString::FString(&local_60,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar10,pFVar11,&local_110);
        goto LAB_14e3d42d5;
      }
    }
    iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    if (local_1f8.KeyCount.Key.Data.ArrayNum < 2) {
      bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4942768438637494551>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x117,"!KeyCount.Key.IsEmpty()");
      if (bVar22) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar7 = local_1f8.KeyCount.Key.Data.ArrayNum;
    }
    FVar3.Data = local_1f8.KeyCount.Key.Data.AllocatorInstance.Data;
    local_160.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Key.Data.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_160.Key.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_160,iVar7,&local_160.Key.Data.ArrayMax);
      memcpy(local_160.Key.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 * 2);
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_138,&local_160,pFVar14);
    if (local_160.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Key.Data.AllocatorInstance.Data);
    }
    if (((local_138.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar22 = Interchange::FAttributeStorage::ContainAttribute
                            (local_138.AttributeStorage,&local_138.Key), !bVar22)) ||
       (EVar6 = Interchange::FAttributeStorage::GetAttributeType
                          (local_138.AttributeStorage,&local_138.Key), EVar6 != Int32)) {
      bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4942768438637494430>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x9e,"Handle.IsValid()");
      if (bVar22) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_res20[0] = 0;
      if (local_138.AttributeStorage != (FAttributeStorage *)0x0) {
        Interchange::FAttributeStorage::GetAttribute<int,void>
                  (local_138.AttributeStorage,&local_138.Key,local_res20);
      }
      iVar7 = local_res20[0];
      Interchange::TArrayAttributeHelper<FString>::GetIndexKey
                (&local_1f8,(FAttributeKey *)&local_f0,local_res20[0]);
      EVar10 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                         (pFVar14,(FAttributeKey *)&local_f0,&local_1c8,None);
      if ((EVar10 & Operation_Success) == None) {
        ::FString::FString(&local_90,&local_f0);
        pFVar11 = ::FString::FString(&local_50,L"TArrayAttributeHelper.AddName");
        Interchange::LogAttributeStorageErrors(EVar10,pFVar11,(FAttributeKey *)&local_90);
      }
      else {
        local_res20[0] = iVar7 + 1;
        if (local_138.AttributeStorage != (FAttributeStorage *)0x0) {
          pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            *)local_138.AttributeStorage,&local_138.Key);
          pFVar14 = (FAttributeStorage *)&pTVar12->field_0x10;
          if (pTVar12 ==
              (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
               *)0x0) {
            pFVar14 = pFVar21;
          }
          Interchange::FAttributeStorage::SetAttribute<int>
                    (local_138.AttributeStorage,(FAttributeAllocationInfo *)pFVar14,local_res20);
        }
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    if (local_138.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d42d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  Interchange::TArrayAttributeHelper<FString>::AddItem(&local_1f8,&local_1c8);
  iVar7 = Interchange::TArrayAttributeHelper<FString>::GetCount(&local_1f8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after adding 3",iVar7,3);
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  Interchange::TArrayAttributeHelper<FString>::GetItem(&local_1f8,2,&local_e0);
  FVar4.Data = local_e0.Data.AllocatorInstance.Data;
  FVar3.Data = local_1c8.Data.AllocatorInstance.Data;
  iVar7 = local_1c8.Data.ArrayNum;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar15.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar19.Data = local_e0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Retrieved item after adding 3",(wchar_t *)FVar19.Data,
             (wchar_t *)FVar15.Data);
  Interchange::TArrayAttributeHelper<FString>::RemoveItem(&local_1f8,&local_1c8);
  iVar8 = Interchange::TArrayAttributeHelper<FString>::GetCount(&local_1f8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Count after removal with duplicates",iVar8,2);
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  Interchange::TArrayAttributeHelper<FString>::GetItems(&local_1f8,&local_1d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1d8.ArrayNum,2);
  iVar8 = local_1d8.ArrayNum;
  uVar13 = (ulonglong)local_1d8.ArrayNum;
  pFVar16 = local_1d8.AllocatorInstance.Data + uVar13 * 0x10;
  FVar15.Data = local_1d8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar8) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar15.Data == pFVar16) break;
    FVar19.Data = (FScriptContainerElement *)L"";
    if (iVar7 != 0) {
      FVar19.Data = FVar3.Data;
    }
    if (*(int *)(FVar15.Data + 8) == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = *(wchar_t **)FVar15.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)param_1,L"Item equals the expected value",pwVar20,
               (wchar_t *)FVar19.Data);
    uVar13 = local_1d8._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 0x10;
  }
  Interchange::TArrayAttributeHelper<FString>::RemoveAllItems(&local_1f8);
  iVar7 = Interchange::TArrayAttributeHelper<FString>::GetCount(&local_1f8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,L"Count after remove all",iVar7,0);
  Interchange::TArrayAttributeHelper<FString>::GetItems(&local_1f8,&local_1d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Actual number of items in the result",
             local_1d8.ArrayNum,0);
  DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(&local_1f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<FString,int> @ 14e3d4500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MapAttributeHelperTests::Private::RunTestInternal<FString,int>
          (FMapAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  longlong lVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FAttributeStorage *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar12;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar13;
  FAttributeStorage *pFVar14;
  EAttributeStorageResult EVar15;
  ForElementType<FSetElementId> FVar16;
  longlong lVar17;
  longlong lVar18;
  FAttributeAllocationInfo *pFVar19;
  FAttributeAllocationInfo *pFVar20;
  ForAnyElementType FVar21;
  FWeakReferencer<1> FVar22;
  FWeakReferencer<1> FVar23;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar24;
  undefined1 auStackY_2d8 [32];
  FString local_2a8;
  int local_298;
  int local_294;
  FString local_290;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270 [2];
  TAttributeHandle<FString,void> local_268;
  TAttributeHandle<int,void> local_250;
  TAttributeHandle<FString,void> local_238;
  TAttributeHandle<int,void> local_220;
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  TReferenceControllerBase<1> *local_200;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_1f8;
  FAttributeKey local_1e8;
  FAttributeKey local_1d8;
  FAttributeKey local_1c8;
  FAttributeKey local_1b8;
  FAttributeStorage *local_1a8;
  FScriptContainerElement *local_1a0;
  int local_198;
  int local_194;
  FAttributeStorage *local_190;
  FScriptContainerElement *local_188;
  int local_180;
  int local_17c;
  FAttributeStorage *local_178;
  FScriptContainerElement *local_170;
  int local_168;
  int local_164;
  FAttributeStorage *local_160;
  FScriptContainerElement *local_158;
  int local_150;
  int local_14c;
  FString *local_148;
  FAttributeStorage **local_140;
  FString *local_138;
  FAttributeStorage **local_130;
  FString local_128;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_118;
  undefined1 local_108 [64];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  FAttributeStorage *local_b8;
  FAttributeKey local_b0;
  FAttributeStorage *local_a0;
  FWeakReferencer<1> local_98;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  ::FString::FString(&local_128,L"TestKey");
  pTVar12 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_118);
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar14 = pTVar12->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_200 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  local_108._44_4_ = 0x80;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_b8 = (FAttributeStorage *)0x0;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Key.Data.ArrayNum = 0;
  local_b0.Key.Data.ArrayMax = 0;
  if ((pFVar14 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f8.Object = pFVar14;
  local_1f8.SharedReferenceCount.ReferenceController = pTVar5;
  if ((pFVar14 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  Interchange::TMapAttributeHelper<FString,int>::Initialize
            ((TMapAttributeHelper<FString,int> *)local_108,&local_1f8,&local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.Data.ArrayNum = 0;
  local_290.Data.ArrayMax = 0;
  ::FString::operator=(&local_2a8,L"SomeKey");
  ::FString::operator=(&local_290,L"AnotherKey");
  local_298 = 1;
  local_294 = 0x14;
  iVar11 = local_2a8.Data.ArrayNum + -1;
  FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar22.ReferenceController = local_98.ReferenceController;
  pFVar14 = (FAttributeStorage *)FVar23.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d4725;
      LOCK();
      aVar9 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar9;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      pFVar14 = local_a0;
      aVar3 = aVar9;
    } while (!bVar7);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  if (pFVar14 == (FAttributeStorage *)0x0) {
LAB_14e3d4725:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar22.ReferenceController = FVar23.ReferenceController;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if (local_108._8_4_ != local_108._52_4_) {
      FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_c8;
      }
      iVar11 = *(int *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & uVar8) * 4);
      if (iVar11 != -1) {
        lVar17 = local_108._0_8_;
        iVar10 = local_2a8.Data.ArrayNum;
        do {
          lVar2 = (longlong)iVar11 * 0x48;
          iVar4 = *(int *)(lVar17 + 8 + lVar2);
          if (iVar4 == iVar10) {
            if (1 < iVar4) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar17 + lVar2),
                                  (wchar_t *)local_2a8.Data.AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
              lVar17 = local_108._0_8_;
              iVar10 = local_2a8.Data.ArrayNum;
              goto LAB_14e3d47e8;
            }
LAB_14e3d4a08:
            if (iVar11 != -1) {
              lVar18 = lVar2 + lVar17 + 0x10;
              if (lVar2 + lVar17 == 0) {
                lVar18 = 0;
              }
              if (lVar18 != 0) {
                pFVar14 = *(FAttributeStorage **)(lVar18 + 0x18);
                if (pFVar14 != (FAttributeStorage *)0x0) {
                  pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                    *)pFVar14,(FAttributeKey *)(lVar18 + 0x20));
                  pFVar19 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
                  if (pTVar13 ==
                      (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                       *)0x0) {
                    pFVar19 = (FAttributeAllocationInfo *)0x0;
                  }
                  Interchange::FAttributeStorage::SetAttribute<int>(pFVar14,pFVar19,&local_294);
                }
                goto LAB_14e3d4a94;
              }
            }
            break;
          }
          bVar7 = iVar4 + iVar10 == 1;
LAB_14e3d47e8:
          if (bVar7) goto LAB_14e3d4a08;
          iVar11 = *(int *)(lVar2 + 0x40 + lVar17);
        } while (iVar11 != -1);
      }
    }
    Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute
              ((TMapAttributeHelper<FString,int> *)local_108,&local_1d8,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute
              ((TMapAttributeHelper<FString,int> *)local_108,&local_1e8,&local_2a8);
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar14,&local_1d8,&local_2a8,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar14,&local_1e8,&local_294,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_250,&local_1e8,pFVar14);
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_268,&local_1d8,pFVar14);
    local_1a8 = local_268.AttributeStorage;
    local_1a0 = local_268.Key.Key.Data.AllocatorInstance.Data;
    local_198 = local_268.Key.Key.Data.ArrayNum;
    local_194 = local_268.Key.Key.Data.ArrayMax;
    local_190 = local_250.AttributeStorage;
    local_188 = local_250.Key.Key.Data.AllocatorInstance.Data;
    local_180 = local_250.Key.Key.Data.ArrayNum;
    local_17c = local_250.Key.Key.Data.ArrayMax;
    local_148 = &local_2a8;
    local_140 = &local_1a8;
    local_268.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Key.Key.Data.ArrayNum = 0;
    local_268.Key.Key.Data.ArrayMax = 0;
    local_250.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.Key.Key.Data.ArrayNum = 0;
    local_250.Key.Key.Data.ArrayMax = 0;
    TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
              ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                *)local_108,(uint)local_208,
               (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                *)(ulonglong)uVar8,(bool *)&local_148);
    if (local_188 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_1a0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0);
    }
    if (local_268.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_250.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar14 = local_b8;
    local_278 = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar11 = local_b0.Key.Data.ArrayNum + -1;
      FVar21.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar21.Data = (FScriptContainerElement *)L"";
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
      iVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar14,uVar8,&local_b0);
      pFVar19 = (FAttributeAllocationInfo *)0x0;
      if (iVar11 != -1) {
        pFVar19 = (FAttributeAllocationInfo *)
                  ((longlong)iVar11 * 0x50 + *(longlong *)&pFVar14->AttributeAllocationTable);
      }
      pFVar20 = (FAttributeAllocationInfo *)&pFVar19->Sizes;
      if (pFVar19 == (FAttributeAllocationInfo *)0x0) {
        pFVar20 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar14,pFVar20,&local_278);
    }
    if (local_1e8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Key.Data.AllocatorInstance.Data);
    }
    if (local_1d8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d4a94:
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  iVar11 = local_2a8.Data.ArrayNum + -1;
  FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar22.ReferenceController = local_98.ReferenceController;
  pFVar14 = (FAttributeStorage *)FVar23.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d4aef;
      LOCK();
      aVar9 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar9;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      pFVar14 = local_a0;
      aVar3 = aVar9;
    } while (!bVar7);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  if (pFVar14 == (FAttributeStorage *)0x0) {
LAB_14e3d4aef:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar22.ReferenceController = FVar23.ReferenceController;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if (local_108._8_4_ != local_108._52_4_) {
      FVar16 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_c8;
      }
      iVar11 = *(int *)((longlong)FVar16 + (ulonglong)(local_c0 - 1U & uVar8) * 4);
      if (iVar11 != -1) {
        lVar17 = local_108._0_8_;
        iVar10 = local_2a8.Data.ArrayNum;
        do {
          lVar2 = (longlong)iVar11 * 0x48;
          iVar4 = *(int *)(lVar2 + 8 + lVar17);
          if (iVar4 == iVar10) {
            if (1 < iVar4) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar2 + lVar17),
                                  (wchar_t *)local_2a8.Data.AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
              lVar17 = local_108._0_8_;
              iVar10 = local_2a8.Data.ArrayNum;
              goto LAB_14e3d4bb8;
            }
LAB_14e3d4ddf:
            if (iVar11 != -1) {
              lVar18 = lVar2 + lVar17 + 0x10;
              if (lVar2 + lVar17 == 0) {
                lVar18 = 0;
              }
              if (lVar18 != 0) {
                pFVar14 = *(FAttributeStorage **)(lVar18 + 0x18);
                if (pFVar14 != (FAttributeStorage *)0x0) {
                  pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                    *)pFVar14,(FAttributeKey *)(lVar18 + 0x20));
                  pFVar19 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
                  if (pTVar13 ==
                      (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                       *)0x0) {
                    pFVar19 = (FAttributeAllocationInfo *)0x0;
                  }
                  Interchange::FAttributeStorage::SetAttribute<int>(pFVar14,pFVar19,&local_298);
                }
                goto LAB_14e3d4e72;
              }
            }
            break;
          }
          bVar7 = iVar4 + iVar10 == 1;
LAB_14e3d4bb8:
          if (bVar7) goto LAB_14e3d4ddf;
          iVar11 = *(int *)(lVar2 + 0x40 + lVar17);
        } while (iVar11 != -1);
      }
    }
    Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute
              ((TMapAttributeHelper<FString,int> *)local_108,&local_1b8,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute
              ((TMapAttributeHelper<FString,int> *)local_108,&local_1c8,&local_2a8);
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar14,&local_1b8,&local_2a8,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar15 = Interchange::FAttributeStorage::RegisterAttribute<int,void>
                       (pFVar14,&local_1c8,&local_298,None);
    if ((EVar15 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_220,&local_1c8,pFVar14);
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_238,&local_1b8,pFVar14);
    local_178 = local_238.AttributeStorage;
    local_170 = local_238.Key.Key.Data.AllocatorInstance.Data;
    local_168 = local_238.Key.Key.Data.ArrayNum;
    local_164 = local_238.Key.Key.Data.ArrayMax;
    local_160 = local_220.AttributeStorage;
    local_158 = local_220.Key.Key.Data.AllocatorInstance.Data;
    local_150 = local_220.Key.Key.Data.ArrayNum;
    local_14c = local_220.Key.Key.Data.ArrayMax;
    local_138 = &local_2a8;
    local_130 = &local_178;
    local_238.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Key.Key.Data.ArrayNum = 0;
    local_238.Key.Key.Data.ArrayMax = 0;
    local_220.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.Key.Key.Data.ArrayNum = 0;
    local_220.Key.Key.Data.ArrayMax = 0;
    TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
              ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                *)local_108,(uint)local_204,
               (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                *)(ulonglong)uVar8,(bool *)&local_138);
    if (local_158 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_170 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_238.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_220.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar14 = local_b8;
    local_274 = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar11 = local_b0.Key.Data.ArrayNum + -1;
      FVar21.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar21.Data = (FScriptContainerElement *)L"";
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
      iVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar14,uVar8,&local_b0);
      pFVar19 = (FAttributeAllocationInfo *)0x0;
      if (iVar11 != -1) {
        pFVar19 = (FAttributeAllocationInfo *)
                  ((longlong)iVar11 * 0x50 + *(longlong *)&pFVar14->AttributeAllocationTable);
      }
      pFVar20 = (FAttributeAllocationInfo *)&pFVar19->Sizes;
      if (pFVar19 == (FAttributeAllocationInfo *)0x0) {
        pFVar20 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar14,pFVar20,&local_274);
    }
    if (local_1c8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Key.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d4e72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_290.Data.ArrayNum != 0) {
    FVar21.Data = local_290.Data.AllocatorInstance.Data;
  }
  iVar11 = local_290.Data.ArrayNum + -1;
  if (local_290.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  Interchange::TMapAttributeHelper<FString,int>::SetKeyValueByHash
            ((TMapAttributeHelper<FString,int> *)local_108,uVar8,&local_290,&local_298);
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_290.Data.ArrayNum != 0) {
    FVar21.Data = local_290.Data.AllocatorInstance.Data;
  }
  iVar11 = local_290.Data.ArrayNum + -1;
  if (local_290.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  Interchange::TMapAttributeHelper<FString,int>::SetKeyValueByHash
            ((TMapAttributeHelper<FString,int> *)local_108,uVar8,&local_290,&local_294);
  Interchange::TMapAttributeHelper<FString,int>::ToMap
            ((TMapAttributeHelper<FString,int> *)local_108,
             (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             local_88);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare maps after ToMap",
             local_88._8_4_ - local_88._52_4_,2);
  local_280 = 0;
  local_27c = 0;
  iVar11 = local_2a8.Data.ArrayNum + -1;
  FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  FVar22.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d4f65:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x185,"AttributesPtr.IsValid()");
    FVar23.ReferenceController = FVar22.ReferenceController;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_14e3d4f8b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
LAB_14e3d4f93:
    bVar7 = false;
  }
  else {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e3d4f65;
      LOCK();
      aVar9 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar9;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar7);
    FVar22.ReferenceController = local_98.ReferenceController;
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d4f65;
    iVar11 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                         *)local_108,uVar8,&local_2a8);
    if (iVar11 == -1) goto LAB_14e3d4f8b;
    lVar17 = local_108._0_8_ + (longlong)iVar11 * 0x48;
    pFVar14 = (FAttributeStorage *)(lVar17 + 0x10);
    if (lVar17 == 0) {
      pFVar14 = (FAttributeStorage *)0x0;
    }
    if (pFVar14 == (FAttributeStorage *)0x0) goto LAB_14e3d4f8b;
    this = *(FAttributeStorage **)&(pFVar14->AttributeAllocationTable).field_0x18;
    if (this == (FAttributeStorage *)0x0) {
      EVar15 = Operation_Error_InvalidStorage;
    }
    else {
      EVar15 = Interchange::FAttributeStorage::GetAttribute<int,void>
                         (this,(FAttributeKey *)&(pFVar14->AttributeAllocationTable).field_0x20,
                          &local_280);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
    if ((EVar15 != Operation_Success) ||
       (bVar7 = Interchange::TMapAttributeHelper<FString,int>::GetValue
                          ((TMapAttributeHelper<FString,int> *)local_108,&local_290,&local_27c),
       !bVar7)) goto LAB_14e3d4f93;
    bVar7 = true;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,L"GetValue succeeded",bVar7);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare result after add 1",local_280,local_298);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare result after add 2",local_27c,local_294);
  iVar11 = local_290.Data.ArrayNum + -1;
  FVar21.Data = local_290.Data.AllocatorInstance.Data;
  if (local_290.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d5025:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_14e3d504b:
    bVar7 = false;
  }
  else {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d5025;
      }
      LOCK();
      aVar9 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar9;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar7);
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d5025;
    iVar11 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                         *)local_108,uVar8,&local_290);
    if (iVar11 == -1) goto LAB_14e3d504b;
    lVar17 = local_108._0_8_ + (longlong)iVar11 * 0x48;
    pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
               *)(lVar17 + 0x10);
    if (lVar17 == 0) {
      pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                 *)0x0;
    }
    if (pTVar24 ==
        (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
         *)0x0) goto LAB_14e3d504b;
    bVar7 = Interchange::TMapAttributeHelper<FString,int>::RemoveBySwap
                      ((TMapAttributeHelper<FString,int> *)local_108,uVar8,&local_290,pTVar24);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,L"Test removing a key",bVar7);
  iVar11 = local_2a8.Data.ArrayNum + -1;
  FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d50b5:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x1a6,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar3 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d50b5;
      }
      LOCK();
      aVar9 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar9;
      if (bVar7) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar7);
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d50b5;
    iVar11 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                         *)local_108,uVar8,&local_2a8);
    if (iVar11 != -1) {
      lVar17 = local_108._0_8_ + (longlong)iVar11 * 0x48;
      pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                 *)(lVar17 + 0x10);
      if (lVar17 == 0) {
        pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                   *)0x0;
      }
      if (((pTVar24 !=
            (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
             *)0x0) && (*(FAttributeStorage **)&pTVar24->field_0x18 != (FAttributeStorage *)0x0)) &&
         (EVar15 = Interchange::FAttributeStorage::GetAttribute<int,void>
                             (*(FAttributeStorage **)&pTVar24->field_0x18,
                              (FAttributeKey *)&pTVar24->field_0x20,local_270),
         EVar15 == Operation_Success)) {
        bVar7 = Interchange::TMapAttributeHelper<FString,int>::RemoveBySwap
                          ((TMapAttributeHelper<FString,int> *)local_108,uVar8,&local_2a8,pTVar24);
        goto LAB_14e3d50de;
      }
    }
  }
  bVar7 = false;
LAB_14e3d50de:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)param_1,L"RemoveKeyAndGetValue succeeded",bVar7);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)param_1,L"Compare removed value",local_270[0],local_298);
  bVar7 = Interchange::TMapAttributeHelper<FString,int>::RemoveKey
                    ((TMapAttributeHelper<FString,int> *)local_108,&local_290);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)param_1,L"Test removing missing key",bVar7);
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((FAttributeStorage *)FVar23.ReferenceController != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = &(FVar23.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)&(FVar23.ReferenceController)->_padding_ + 8))
                (FVar23.ReferenceController,1);
    }
  }
  if (local_98.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_98.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_98.ReferenceController)->_padding_ + 8))();
    }
  }
  if (local_b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Key.Data.AllocatorInstance.Data);
  }
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_200);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<FString,float> @ 14e3d5400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MapAttributeHelperTests::Private::RunTestInternal<FString,float>
          (FMapAttributeHelperTests *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FAttributeStorage *this;
  code *pcVar5;
  float fVar6;
  FAutomationTestBase *this_00;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar12;
  longlong lVar13;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar14;
  FAttributeStorage *pFVar15;
  EAttributeStorageResult EVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  FAttributeAllocationInfo *pFVar19;
  FAttributeAllocationInfo *pFVar20;
  ForAnyElementType FVar21;
  FWeakReferencer<1> FVar22;
  FWeakReferencer<1> FVar23;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar24;
  undefined1 auStackY_2f8 [32];
  FString local_2c8;
  float local_2b8;
  float local_2b4;
  FString local_2b0;
  float local_2a0;
  float local_29c;
  int local_298;
  int local_294;
  float local_290 [2];
  TAttributeHandle<FString,void> local_288;
  TAttributeHandle<float,void> local_270;
  TAttributeHandle<FString,void> local_258;
  TAttributeHandle<float,void> local_240;
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  FAutomationTestBase *local_220;
  TReferenceControllerBase<1> *local_218;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_210;
  FAttributeKey local_200;
  FAttributeKey local_1f0;
  FAttributeKey local_1e0;
  FAttributeKey local_1d0;
  FAttributeStorage *local_1c0;
  FScriptContainerElement *local_1b8;
  int local_1b0;
  int local_1ac;
  FAttributeStorage *local_1a8;
  FScriptContainerElement *local_1a0;
  int local_198;
  int local_194;
  FAttributeStorage *local_190;
  FScriptContainerElement *local_188;
  int local_180;
  int local_17c;
  FAttributeStorage *local_178;
  FScriptContainerElement *local_170;
  int local_168;
  int local_164;
  FString *local_160;
  FAttributeStorage **local_158;
  FString *local_150;
  FAttributeStorage **local_148;
  FString local_140;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_130;
  undefined1 local_118 [64];
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  FAttributeStorage *local_c8;
  FAttributeKey local_c0;
  FAttributeStorage *local_b0;
  FWeakReferencer<1> local_a8;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_220 = (FAutomationTestBase *)param_1;
  ::FString::FString(&local_140,L"TestKey");
  pTVar12 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_130);
  pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar15 = pTVar12->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_218 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  local_118._44_4_ = 0x80;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_118._32_8_ = 0;
  local_118._40_4_ = 0;
  local_118._48_4_ = 0xffffffff;
  local_118._52_4_ = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  local_c8 = (FAttributeStorage *)0x0;
  local_b0 = (FAttributeStorage *)0x0;
  local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Key.Data.ArrayNum = 0;
  local_c0.Key.Data.ArrayMax = 0;
  if ((pFVar15 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_210.Object = pFVar15;
  local_210.SharedReferenceCount.ReferenceController = pTVar4;
  if ((pFVar15 == (FAttributeStorage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Interchange::TMapAttributeHelper<FString,float>::Initialize
            ((TMapAttributeHelper<FString,float> *)local_118,&local_210,&local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  ::FString::operator=(&local_2c8,L"SomeKey");
  ::FString::operator=(&local_2b0,L"AnotherKey");
  local_2b8 = 1.0;
  local_2b4 = 20.0;
  iVar11 = local_2c8.Data.ArrayNum + -1;
  FVar21.Data = local_2c8.Data.AllocatorInstance.Data;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar22.ReferenceController = local_a8.ReferenceController;
  pFVar15 = (FAttributeStorage *)FVar23.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d563d;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar9;
      if (bVar7) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      pFVar15 = local_b0;
      aVar2 = aVar9;
    } while (!bVar7);
  }
  FVar23.ReferenceController = local_a8.ReferenceController;
  if (pFVar15 == (FAttributeStorage *)0x0) {
LAB_14e3d563d:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar22.ReferenceController = FVar23.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (local_118._8_4_ != local_118._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_d8;
      }
      iVar11 = *(int *)((longlong)FVar18 + (ulonglong)(local_d0 - 1U & uVar8) * 4);
      if (iVar11 != -1) {
        lVar17 = local_118._0_8_;
        iVar10 = local_2c8.Data.ArrayNum;
        do {
          lVar13 = (longlong)iVar11;
          iVar3 = *(int *)(lVar17 + 8 + lVar13 * 0x48);
          if (iVar3 == iVar10) {
            if (1 < iVar3) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar17 + lVar13 * 0x48),
                                  (wchar_t *)local_2c8.Data.AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
              lVar17 = local_118._0_8_;
              iVar10 = local_2c8.Data.ArrayNum;
              goto LAB_14e3d56f6;
            }
LAB_14e3d571f:
            if (iVar11 != -1) {
              lVar17 = lVar17 + lVar13 * 0x48;
              lVar13 = lVar17 + 0x10;
              if (lVar17 == 0) {
                lVar13 = 0;
              }
              if (lVar13 != 0) {
                pFVar15 = *(FAttributeStorage **)(lVar13 + 0x18);
                if (pFVar15 != (FAttributeStorage *)0x0) {
                  pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                    *)pFVar15,(FAttributeKey *)(lVar13 + 0x20));
                  pFVar19 = (FAttributeAllocationInfo *)&pTVar14->field_0x10;
                  if (pTVar14 ==
                      (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                       *)0x0) {
                    pFVar19 = (FAttributeAllocationInfo *)0x0;
                  }
                  Interchange::FAttributeStorage::SetAttribute<float>(pFVar15,pFVar19,&local_2b4);
                }
                goto LAB_14e3d599d;
              }
            }
            break;
          }
          bVar7 = iVar3 + iVar10 == 1;
LAB_14e3d56f6:
          if (bVar7) goto LAB_14e3d571f;
          iVar11 = *(int *)(lVar17 + 0x40 + lVar13 * 0x48);
        } while (iVar11 != -1);
      }
    }
    Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute
              ((TMapAttributeHelper<FString,float> *)local_118,&local_1f0,
               local_118._8_4_ - local_118._52_4_);
    Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute
              ((TMapAttributeHelper<FString,float> *)local_118,&local_200,&local_2c8);
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar15,&local_1f0,&local_2c8,None);
    if ((EVar16 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<float,void>
                       (pFVar15,&local_200,&local_2b4,None);
    if ((EVar16 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_270,&local_200,pFVar15);
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_288,&local_1f0,pFVar15);
    local_1c0 = local_288.AttributeStorage;
    local_1b8 = local_288.Key.Key.Data.AllocatorInstance.Data;
    local_1b0 = local_288.Key.Key.Data.ArrayNum;
    local_1ac = local_288.Key.Key.Data.ArrayMax;
    local_1a8 = local_270.AttributeStorage;
    local_1a0 = local_270.Key.Key.Data.AllocatorInstance.Data;
    local_198 = local_270.Key.Key.Data.ArrayNum;
    local_194 = local_270.Key.Key.Data.ArrayMax;
    local_160 = &local_2c8;
    local_158 = &local_1c0;
    local_288.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Key.Key.Data.ArrayNum = 0;
    local_288.Key.Key.Data.ArrayMax = 0;
    local_270.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.Key.Key.Data.ArrayNum = 0;
    local_270.Key.Key.Data.ArrayMax = 0;
    TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
              ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                *)local_118,(uint)local_228,
               (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                *)(ulonglong)uVar8,(bool *)&local_160);
    if (local_1a0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0);
    }
    if (local_1b8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_288.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_270.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar15 = local_c8;
    local_298 = local_118._8_4_ - local_118._52_4_;
    if (local_c8 != (FAttributeStorage *)0x0) {
      iVar11 = local_c0.Key.Data.ArrayNum + -1;
      FVar21.Data = local_c0.Key.Data.AllocatorInstance.Data;
      if (local_c0.Key.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar21.Data = (FScriptContainerElement *)L"";
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
      iVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar15,uVar8,&local_c0);
      pFVar19 = (FAttributeAllocationInfo *)0x0;
      if (iVar11 != -1) {
        pFVar19 = (FAttributeAllocationInfo *)
                  ((longlong)iVar11 * 0x50 + *(longlong *)&pFVar15->AttributeAllocationTable);
      }
      pFVar20 = (FAttributeAllocationInfo *)&pFVar19->Sizes;
      if (pFVar19 == (FAttributeAllocationInfo *)0x0) {
        pFVar20 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar15,pFVar20,&local_298);
    }
    if (local_200.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Key.Data.AllocatorInstance.Data);
    }
    if (local_1f0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d599d:
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  iVar11 = local_2c8.Data.ArrayNum + -1;
  FVar21.Data = local_2c8.Data.AllocatorInstance.Data;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar22.ReferenceController = local_a8.ReferenceController;
  pFVar15 = (FAttributeStorage *)FVar23.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController != (FAttributeStorage *)0x0) {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d59ff;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar9;
      if (bVar7) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      pFVar15 = local_b0;
      aVar2 = aVar9;
    } while (!bVar7);
  }
  FVar23.ReferenceController = local_a8.ReferenceController;
  if (pFVar15 == (FAttributeStorage *)0x0) {
LAB_14e3d59ff:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar22.ReferenceController = FVar23.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (local_118._8_4_ != local_118._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)((longlong)local_118 + 0x38);
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_d8;
      }
      iVar11 = *(int *)((longlong)FVar18 + (ulonglong)(local_d0 - 1U & uVar8) * 4);
      if (iVar11 != -1) {
        lVar17 = local_118._0_8_;
        iVar10 = local_2c8.Data.ArrayNum;
        do {
          lVar13 = (longlong)iVar11;
          iVar3 = *(int *)(lVar17 + 8 + lVar13 * 0x48);
          if (iVar3 == iVar10) {
            if (1 < iVar3) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar17 + lVar13 * 0x48),
                                  (wchar_t *)local_2c8.Data.AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
              lVar17 = local_118._0_8_;
              iVar10 = local_2c8.Data.ArrayNum;
              goto LAB_14e3d5ac6;
            }
LAB_14e3d5ae8:
            if (iVar11 != -1) {
              lVar17 = lVar17 + lVar13 * 0x48;
              lVar13 = lVar17 + 0x10;
              if (lVar17 == 0) {
                lVar13 = 0;
              }
              if (lVar13 != 0) {
                pFVar15 = *(FAttributeStorage **)(lVar13 + 0x18);
                if (pFVar15 != (FAttributeStorage *)0x0) {
                  pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                    *)pFVar15,(FAttributeKey *)(lVar13 + 0x20));
                  pFVar19 = (FAttributeAllocationInfo *)&pTVar14->field_0x10;
                  if (pTVar14 ==
                      (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                       *)0x0) {
                    pFVar19 = (FAttributeAllocationInfo *)0x0;
                  }
                  Interchange::FAttributeStorage::SetAttribute<float>(pFVar15,pFVar19,&local_2b8);
                }
                goto LAB_14e3d5d7e;
              }
            }
            break;
          }
          bVar7 = iVar3 + iVar10 == 1;
LAB_14e3d5ac6:
          if (bVar7) goto LAB_14e3d5ae8;
          iVar11 = *(int *)(lVar17 + 0x40 + lVar13 * 0x48);
        } while (iVar11 != -1);
      }
    }
    Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute
              ((TMapAttributeHelper<FString,float> *)local_118,&local_1d0,
               local_118._8_4_ - local_118._52_4_);
    Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute
              ((TMapAttributeHelper<FString,float> *)local_118,&local_1e0,&local_2c8);
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar15,&local_1d0,&local_2c8,None);
    if ((EVar16 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar16 = Interchange::FAttributeStorage::RegisterAttribute<float,void>
                       (pFVar15,&local_1e0,&local_2b8,None);
    if ((EVar16 != Operation_Success) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_240,&local_1e0,pFVar15);
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_258,&local_1d0,pFVar15);
    local_190 = local_258.AttributeStorage;
    local_188 = local_258.Key.Key.Data.AllocatorInstance.Data;
    local_180 = local_258.Key.Key.Data.ArrayNum;
    local_17c = local_258.Key.Key.Data.ArrayMax;
    local_178 = local_240.AttributeStorage;
    local_170 = local_240.Key.Key.Data.AllocatorInstance.Data;
    local_168 = local_240.Key.Key.Data.ArrayNum;
    local_164 = local_240.Key.Key.Data.ArrayMax;
    local_150 = &local_2c8;
    local_148 = &local_190;
    local_258.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Key.Key.Data.ArrayNum = 0;
    local_258.Key.Key.Data.ArrayMax = 0;
    local_240.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.Key.Key.Data.ArrayNum = 0;
    local_240.Key.Key.Data.ArrayMax = 0;
    TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
              ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                *)local_118,(uint)local_224,
               (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                *)(ulonglong)uVar8,(bool *)&local_150);
    if (local_170 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_188 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_258.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_240.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar15 = local_c8;
    local_294 = local_118._8_4_ - local_118._52_4_;
    if (local_c8 != (FAttributeStorage *)0x0) {
      iVar11 = local_c0.Key.Data.ArrayNum + -1;
      FVar21.Data = local_c0.Key.Data.AllocatorInstance.Data;
      if (local_c0.Key.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar21.Data = (FScriptContainerElement *)L"";
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
      iVar11 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar15,uVar8,&local_c0);
      pFVar19 = (FAttributeAllocationInfo *)0x0;
      if (iVar11 != -1) {
        pFVar19 = (FAttributeAllocationInfo *)
                  ((longlong)iVar11 * 0x50 + *(longlong *)&pFVar15->AttributeAllocationTable);
      }
      pFVar20 = (FAttributeAllocationInfo *)&pFVar19->Sizes;
      if (pFVar19 == (FAttributeAllocationInfo *)0x0) {
        pFVar20 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar15,pFVar20,&local_294);
    }
    if (local_1e0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1d0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d5d7e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_2b0.Data.ArrayNum != 0) {
    FVar21.Data = local_2b0.Data.AllocatorInstance.Data;
  }
  iVar10 = 0;
  iVar11 = local_2b0.Data.ArrayNum + -1;
  if (local_2b0.Data.ArrayNum == 0) {
    iVar11 = iVar10;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  Interchange::TMapAttributeHelper<FString,float>::SetKeyValueByHash
            ((TMapAttributeHelper<FString,float> *)local_118,uVar8,&local_2b0,&local_2b8);
  iVar11 = local_2b0.Data.ArrayNum + -1;
  FVar21.Data = local_2b0.Data.AllocatorInstance.Data;
  if (local_2b0.Data.ArrayNum == 0) {
    iVar11 = iVar10;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  Interchange::TMapAttributeHelper<FString,float>::SetKeyValueByHash
            ((TMapAttributeHelper<FString,float> *)local_118,uVar8,&local_2b0,&local_2b4);
  Interchange::TMapAttributeHelper<FString,float>::ToMap
            ((TMapAttributeHelper<FString,float> *)local_118,
             (TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
              *)local_98);
  this_00 = local_220;
  FAutomationTestBase::TestEqual
            (local_220,L"Compare maps after ToMap",local_98._8_4_ - local_98._52_4_,2);
  local_2a0 = 0.0;
  local_29c = 0.0;
  iVar11 = local_2c8.Data.ArrayNum + -1;
  FVar21.Data = local_2c8.Data.AllocatorInstance.Data;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = iVar10;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar23.ReferenceController = local_a8.ReferenceController;
  FVar22.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d5e85:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x185,"AttributesPtr.IsValid()");
    FVar23.ReferenceController = FVar22.ReferenceController;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14e3d5eab:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
LAB_14e3d5eb3:
    bVar7 = false;
  }
  else {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e3d5e85;
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar9;
      if (bVar7) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar7);
    FVar22.ReferenceController = local_a8.ReferenceController;
    if (local_b0 == (FAttributeStorage *)0x0) goto LAB_14e3d5e85;
    iVar11 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                         *)local_118,uVar8,&local_2c8);
    if (iVar11 == -1) goto LAB_14e3d5eab;
    lVar17 = local_118._0_8_ + (longlong)iVar11 * 0x48;
    pFVar15 = (FAttributeStorage *)(lVar17 + 0x10);
    if (lVar17 == 0) {
      pFVar15 = (FAttributeStorage *)0x0;
    }
    if (pFVar15 == (FAttributeStorage *)0x0) goto LAB_14e3d5eab;
    this = *(FAttributeStorage **)&(pFVar15->AttributeAllocationTable).field_0x18;
    if (this == (FAttributeStorage *)0x0) {
      EVar16 = Operation_Error_InvalidStorage;
    }
    else {
      EVar16 = Interchange::FAttributeStorage::GetAttribute<float,void>
                         (this,(FAttributeKey *)&(pFVar15->AttributeAllocationTable).field_0x20,
                          &local_2a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
    if ((EVar16 != Operation_Success) ||
       (bVar7 = Interchange::TMapAttributeHelper<FString,float>::GetValue
                          ((TMapAttributeHelper<FString,float> *)local_118,&local_2b0,&local_29c),
       !bVar7)) goto LAB_14e3d5eb3;
    bVar7 = true;
  }
  FAutomationTestBase::TestTrue(this_00,L"GetValue succeeded",bVar7);
  fVar6 = __real_38d1b717;
  FAutomationTestBase::TestEqual
            (this_00,L"Compare result after add 1",local_2a0,local_2b8,__real_38d1b717);
  FAutomationTestBase::TestEqual(this_00,L"Compare result after add 2",local_29c,local_2b4,fVar6);
  iVar11 = local_2b0.Data.ArrayNum + -1;
  FVar21.Data = local_2b0.Data.AllocatorInstance.Data;
  if (local_2b0.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar23.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d5f65:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14e3d5f92:
    bVar7 = false;
  }
  else {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d5f65;
      }
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar9;
      if (bVar7) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar7);
    if (local_b0 == (FAttributeStorage *)0x0) goto LAB_14e3d5f65;
    iVar11 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                         *)local_118,uVar8,&local_2b0);
    if (iVar11 == -1) goto LAB_14e3d5f92;
    lVar17 = local_118._0_8_ + (longlong)iVar11 * 0x48;
    pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
               *)(lVar17 + 0x10);
    if (lVar17 == 0) {
      pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                 *)0x0;
    }
    if (pTVar24 ==
        (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
         *)0x0) goto LAB_14e3d5f92;
    bVar7 = Interchange::TMapAttributeHelper<FString,float>::RemoveBySwap
                      ((TMapAttributeHelper<FString,float> *)local_118,uVar8,&local_2b0,pTVar24);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue(this_00,L"Test removing a key",bVar7);
  iVar11 = local_2c8.Data.ArrayNum + -1;
  FVar21.Data = local_2c8.Data.AllocatorInstance.Data;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar21.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar21.Data);
  FVar23.ReferenceController = local_a8.ReferenceController;
  if ((FAttributeStorage *)local_a8.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d5ff5:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x1a6,"AttributesPtr.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar2 = (local_a8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d5ff5;
      }
      LOCK();
      aVar9 = (local_a8.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar9;
      if (bVar7) {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar7);
    if (local_b0 == (FAttributeStorage *)0x0) goto LAB_14e3d5ff5;
    iVar11 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                         *)local_118,uVar8,&local_2c8);
    if (iVar11 != -1) {
      lVar17 = local_118._0_8_ + (longlong)iVar11 * 0x48;
      pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                 *)(lVar17 + 0x10);
      if (lVar17 == 0) {
        pTVar24 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                   *)0x0;
      }
      if (((pTVar24 !=
            (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
             *)0x0) && (*(FAttributeStorage **)&pTVar24->field_0x18 != (FAttributeStorage *)0x0)) &&
         (EVar16 = Interchange::FAttributeStorage::GetAttribute<float,void>
                             (*(FAttributeStorage **)&pTVar24->field_0x18,
                              (FAttributeKey *)&pTVar24->field_0x20,local_290),
         EVar16 == Operation_Success)) {
        bVar7 = Interchange::TMapAttributeHelper<FString,float>::RemoveBySwap
                          ((TMapAttributeHelper<FString,float> *)local_118,uVar8,&local_2c8,pTVar24)
        ;
        goto LAB_14e3d6025;
      }
    }
  }
  bVar7 = false;
LAB_14e3d6025:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue(this_00,L"RemoveKeyAndGetValue succeeded",bVar7);
  FAutomationTestBase::TestEqual(this_00,L"Compare removed value",local_290[0],local_2b8,fVar6);
  bVar7 = Interchange::TMapAttributeHelper<FString,float>::RemoveKey
                    ((TMapAttributeHelper<FString,float> *)local_118,&local_2b0);
  FAutomationTestBase::TestFalse(this_00,L"Test removing missing key",bVar7);
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  FVar23.ReferenceController = local_a8.ReferenceController;
  local_b0 = (FAttributeStorage *)0x0;
  local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((FAttributeStorage *)FVar23.ReferenceController != (FAttributeStorage *)0x0) {
    LOCK();
    paVar1 = &(FVar23.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)&(FVar23.ReferenceController)->_padding_ + 8))
                (FVar23.ReferenceController,1);
    }
  }
  if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a8.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_a8.ReferenceController)->_padding_ + 8))(local_a8.ReferenceController,1);
    }
  }
  if (local_c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Key.Data.AllocatorInstance.Data);
  }
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_218);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTestInternal<FString,FString> @ 14e3d6350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MapAttributeHelperTests::Private::RunTestInternal<FString,FString>
          (FMapAttributeHelperTests *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  atomic<int> *paVar2;
  longlong lVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAttributeStorage *this;
  code *pcVar7;
  FAutomationTestBase *this_00;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  int iVar11;
  int iVar12;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar13;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar14;
  ForAnyElementType FVar15;
  FAttributeStorage *pFVar16;
  EAttributeStorageResult EVar17;
  FAttributeAllocationInfo *pFVar18;
  ForElementType<FSetElementId> FVar19;
  longlong lVar20;
  longlong lVar21;
  FWeakReferencer<1> FVar22;
  FWeakReferencer<1> FVar23;
  ForAnyElementType FVar24;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar25;
  FAttributeAllocationInfo *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_328 [32];
  bool local_2f8;
  bool local_2f7 [7];
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  int local_2b0;
  int local_2ac;
  FString local_2a8;
  FString local_298;
  FString local_288;
  TAttributeHandle<FString,void> local_278;
  TAttributeHandle<FString,void> local_260;
  TAttributeHandle<FString,void> local_248;
  TAttributeHandle<FString,void> local_230;
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  FAutomationTestBase *local_210;
  TReferenceControllerBase<1> *local_208;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_200;
  FAttributeKey local_1f0;
  FAttributeKey local_1e0;
  FAttributeKey local_1d0;
  FAttributeKey local_1c0;
  FAttributeStorage *local_1b0;
  FScriptContainerElement *local_1a8;
  int local_1a0;
  int local_19c;
  FAttributeStorage *local_198;
  FScriptContainerElement *local_190;
  int local_188;
  int local_184;
  FAttributeStorage *local_180;
  FScriptContainerElement *local_178;
  int local_170;
  int local_16c;
  FAttributeStorage *local_168;
  FScriptContainerElement *local_160;
  int local_158;
  int local_154;
  FString *local_150;
  FAttributeStorage **local_148;
  FString *local_140;
  FAttributeStorage **local_138;
  FString local_130;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_120;
  undefined1 local_108 [64];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  FAttributeStorage *local_b8;
  FAttributeKey local_b0;
  FAttributeStorage *local_a0;
  FWeakReferencer<1> local_98;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_210 = (FAutomationTestBase *)param_1;
  ::FString::FString(&local_130,L"TestKey");
  pTVar13 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_120);
  pTVar6 = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar16 = pTVar13->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_208 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  local_108._44_4_ = 0x80;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_b8 = (FAttributeStorage *)0x0;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Key.Data.ArrayNum = 0;
  local_b0.Key.Data.ArrayMax = 0;
  if ((pFVar16 == (FAttributeStorage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_200.Object = pFVar16;
  local_200.SharedReferenceCount.ReferenceController = pTVar6;
  if ((pFVar16 == (FAttributeStorage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  Interchange::TMapAttributeHelper<FString,FString>::Initialize
            ((TMapAttributeHelper<FString,FString> *)local_108,&local_200,&local_130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Data.ArrayNum = 0;
  local_2f0.Data.ArrayMax = 0;
  local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.Data.ArrayNum = 0;
  local_2e0.Data.ArrayMax = 0;
  ::FString::operator=(&local_2f0,L"SomeKey");
  ::FString::operator=(&local_2e0,L"AnotherKey");
  local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data.ArrayNum = 0;
  local_2d0.Data.ArrayMax = 0;
  local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.Data.ArrayNum = 0;
  local_2c0.Data.ArrayMax = 0;
  ::FString::operator=(&local_2d0,L"SomeValue");
  ::FString::operator=(&local_2c0,L"AnotherValue");
  iVar12 = local_2f0.Data.ArrayNum + -1;
  FVar15.Data = local_2f0.Data.AllocatorInstance.Data;
  if (local_2f0.Data.ArrayNum == 0) {
    iVar12 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  FVar22.ReferenceController = local_98.ReferenceController;
  pFVar16 = (FAttributeStorage *)FVar23.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar4 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) goto LAB_14e3d65ad;
      LOCK();
      aVar10 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      pFVar16 = local_a0;
      aVar4 = aVar10;
    } while (!bVar8);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  if (pFVar16 == (FAttributeStorage *)0x0) {
LAB_14e3d65ad:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar22.ReferenceController = FVar23.ReferenceController;
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if (local_108._8_4_ != local_108._52_4_) {
      FVar19 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = local_c8;
      }
      iVar12 = *(int *)((longlong)FVar19 + (ulonglong)(local_c0 - 1U & uVar9) * 4);
      if (iVar12 != -1) {
        lVar20 = local_108._0_8_;
        iVar11 = local_2f0.Data.ArrayNum;
        do {
          lVar3 = (longlong)iVar12 * 0x48;
          iVar5 = *(int *)(lVar3 + 8 + lVar20);
          if (iVar5 == iVar11) {
            if (1 < iVar5) {
              iVar11 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar3 + lVar20),
                                  (wchar_t *)local_2f0.Data.AllocatorInstance.Data);
              bVar8 = iVar11 == 0;
              lVar20 = local_108._0_8_;
              iVar11 = local_2f0.Data.ArrayNum;
              goto LAB_14e3d6678;
            }
LAB_14e3d68b5:
            if (iVar12 != -1) {
              lVar21 = lVar3 + lVar20 + 0x10;
              if (lVar3 + lVar20 == 0) {
                lVar21 = 0;
              }
              if (lVar21 != 0) {
                pFVar16 = *(FAttributeStorage **)(lVar21 + 0x18);
                if (pFVar16 == (FAttributeStorage *)0x0) goto LAB_14e3d6979;
                pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                  *)pFVar16,(FAttributeKey *)(lVar21 + 0x20));
                pFVar26 = (FAttributeAllocationInfo *)&pTVar14->field_0x10;
                if (pTVar14 ==
                    (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                     *)0x0) {
                  pFVar26 = (FAttributeAllocationInfo *)0x0;
                }
                if (pFVar26 == (FAttributeAllocationInfo *)0x0) goto LAB_14e3d6979;
                pFVar1 = &pFVar16->StorageMutex;
                if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14e3d7400;
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                local_2f8 = false;
                FVar15.Data = (FScriptContainerElement *)L"";
                if (local_2c0.Data.ArrayNum != 0) {
                  FVar15.Data = local_2c0.Data.AllocatorInstance.Data;
                }
                Interchange::FAttributeStorage::MultiSizeSetAttribute<FString>
                          (pFVar16,pFVar26,0,&local_2c0,(uchar *)FVar15.Data,&local_2f8);
                Interchange::FAttributeStorage::UpdateAllocationInfoHash(pFVar16,pFVar26);
                if (local_2f8 != false) {
                  Interchange::FAttributeStorage::DefragInternal(pFVar16);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                goto LAB_14e3d6979;
              }
            }
            break;
          }
          bVar8 = iVar5 + iVar11 == 1;
LAB_14e3d6678:
          if (bVar8) goto LAB_14e3d68b5;
          iVar12 = *(int *)(lVar3 + 0x40 + lVar20);
        } while (iVar12 != -1);
      }
    }
    Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute
              ((TMapAttributeHelper<FString,FString> *)local_108,&local_1e0,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute
              ((TMapAttributeHelper<FString,FString> *)local_108,&local_1f0,&local_2f0);
    EVar17 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar16,&local_1e0,&local_2f0,None);
    if ((EVar17 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar17 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar16,&local_1f0,&local_2c0,None);
    if ((EVar17 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_260,&local_1f0,pFVar16);
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_278,&local_1e0,pFVar16);
    local_1b0 = local_278.AttributeStorage;
    local_1a8 = local_278.Key.Key.Data.AllocatorInstance.Data;
    local_1a0 = local_278.Key.Key.Data.ArrayNum;
    local_19c = local_278.Key.Key.Data.ArrayMax;
    local_198 = local_260.AttributeStorage;
    local_190 = local_260.Key.Key.Data.AllocatorInstance.Data;
    local_188 = local_260.Key.Key.Data.ArrayNum;
    local_184 = local_260.Key.Key.Data.ArrayMax;
    local_150 = &local_2f0;
    local_148 = &local_1b0;
    local_278.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Key.Key.Data.ArrayNum = 0;
    local_278.Key.Key.Data.ArrayMax = 0;
    local_260.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.Key.Key.Data.ArrayNum = 0;
    local_260.Key.Key.Data.ArrayMax = 0;
    TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
              ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                *)local_108,(uint)local_218,
               (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                *)(ulonglong)uVar9,(bool *)&local_150);
    if (local_190 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190);
    }
    if (local_1a8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_278.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_260.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar16 = local_b8;
    local_2b0 = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      iVar12 = local_b0.Key.Data.ArrayNum + -1;
      FVar15.Data = local_b0.Key.Data.AllocatorInstance.Data;
      if (local_b0.Key.Data.ArrayNum == 0) {
        iVar12 = 0;
        FVar15.Data = (FScriptContainerElement *)L"";
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
      iVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UE::Interchange::FAttributeKey>
                         ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar16,uVar9,&local_b0);
      pFVar26 = (FAttributeAllocationInfo *)0x0;
      if (iVar12 != -1) {
        pFVar26 = (FAttributeAllocationInfo *)
                  ((longlong)iVar12 * 0x50 + *(longlong *)&pFVar16->AttributeAllocationTable);
      }
      pFVar18 = (FAttributeAllocationInfo *)&pFVar26->Sizes;
      if (pFVar26 == (FAttributeAllocationInfo *)0x0) {
        pFVar18 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar16,pFVar18,&local_2b0);
    }
    if (local_1f0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d6979:
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  iVar12 = local_2f0.Data.ArrayNum + -1;
  FVar15.Data = local_2f0.Data.AllocatorInstance.Data;
  if (local_2f0.Data.ArrayNum == 0) {
    iVar12 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  FVar22.ReferenceController = local_98.ReferenceController;
  pFVar16 = (FAttributeStorage *)FVar23.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController != (FAttributeStorage *)0x0) {
    aVar4 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) goto LAB_14e3d6a0f;
      LOCK();
      aVar10 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      pFVar16 = local_a0;
      aVar4 = aVar10;
    } while (!bVar8);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  if (pFVar16 == (FAttributeStorage *)0x0) {
LAB_14e3d6a0f:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x165,"AttributesPtr.IsValid()");
    FVar22.ReferenceController = FVar23.ReferenceController;
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if (local_108._8_4_ != local_108._52_4_) {
      FVar19 = (ForElementType<FSetElementId>)((longlong)local_108 + 0x38);
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = local_c8;
      }
      iVar12 = *(int *)((longlong)FVar19 + (ulonglong)(local_c0 - 1U & uVar9) * 4);
      if (iVar12 != -1) {
        lVar20 = local_108._0_8_;
        iVar11 = local_2f0.Data.ArrayNum;
        do {
          lVar3 = (longlong)iVar12 * 0x48;
          iVar5 = *(int *)(lVar3 + 8 + lVar20);
          if (iVar5 == iVar11) {
            if (1 < iVar5) {
              iVar11 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar3 + lVar20),
                                  (wchar_t *)local_2f0.Data.AllocatorInstance.Data);
              bVar8 = iVar11 == 0;
              lVar20 = local_108._0_8_;
              iVar11 = local_2f0.Data.ArrayNum;
              goto LAB_14e3d6ad8;
            }
LAB_14e3d6d19:
            if (iVar12 != -1) {
              lVar21 = lVar3 + lVar20 + 0x10;
              if (lVar3 + lVar20 == 0) {
                lVar21 = 0;
              }
              if (lVar21 != 0) {
                pFVar16 = *(FAttributeStorage **)(lVar21 + 0x18);
                if (pFVar16 != (FAttributeStorage *)0x0) {
                  pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                    *)pFVar16,(FAttributeKey *)(lVar21 + 0x20));
                  pFVar26 = (FAttributeAllocationInfo *)&pTVar14->field_0x10;
                  if (pTVar14 ==
                      (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                       *)0x0) {
                    pFVar26 = (FAttributeAllocationInfo *)0x0;
                  }
                  if (pFVar26 != (FAttributeAllocationInfo *)0x0) {
                    pFVar1 = &pFVar16->StorageMutex;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14e3d7400:
                    /* WARNING: Subroutine does not return */
                      Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_2f7[0] = false;
                    FVar15.Data = (FScriptContainerElement *)L"";
                    if (local_2d0.Data.ArrayNum != 0) {
                      FVar15.Data = local_2d0.Data.AllocatorInstance.Data;
                    }
                    Interchange::FAttributeStorage::MultiSizeSetAttribute<FString>
                              (pFVar16,pFVar26,0,&local_2d0,(uchar *)FVar15.Data,local_2f7);
                    Interchange::FAttributeStorage::UpdateAllocationInfoHash(pFVar16,pFVar26);
                    if (local_2f7[0] != false) {
                      Interchange::FAttributeStorage::DefragInternal(pFVar16);
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                goto LAB_14e3d6de4;
              }
            }
            break;
          }
          bVar8 = iVar5 + iVar11 == 1;
LAB_14e3d6ad8:
          if (bVar8) goto LAB_14e3d6d19;
          iVar12 = *(int *)(lVar3 + 0x40 + lVar20);
        } while (iVar12 != -1);
      }
    }
    Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute
              ((TMapAttributeHelper<FString,FString> *)local_108,&local_1c0,
               local_108._8_4_ - local_108._52_4_);
    Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute
              ((TMapAttributeHelper<FString,FString> *)local_108,&local_1d0,&local_2f0);
    EVar17 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar16,&local_1c0,&local_2f0,None);
    if ((EVar17 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x172,
                           "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar17 = Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                       (pFVar16,&local_1d0,&local_2d0,None);
    if ((EVar17 != Operation_Success) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494643>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x173,
                           "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_230,&local_1d0,pFVar16);
    Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
              (&local_248,&local_1c0,pFVar16);
    local_180 = local_248.AttributeStorage;
    local_178 = local_248.Key.Key.Data.AllocatorInstance.Data;
    local_170 = local_248.Key.Key.Data.ArrayNum;
    local_16c = local_248.Key.Key.Data.ArrayMax;
    local_168 = local_230.AttributeStorage;
    local_160 = local_230.Key.Key.Data.AllocatorInstance.Data;
    local_158 = local_230.Key.Key.Data.ArrayNum;
    local_154 = local_230.Key.Key.Data.ArrayMax;
    local_140 = &local_2f0;
    local_138 = &local_180;
    local_248.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.Key.Key.Data.ArrayNum = 0;
    local_248.Key.Key.Data.ArrayMax = 0;
    local_230.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.Key.Key.Data.ArrayNum = 0;
    local_230.Key.Key.Data.ArrayMax = 0;
    TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
              ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                *)local_108,(uint)local_214,
               (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                *)(ulonglong)uVar9,(bool *)&local_140);
    if (local_160 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160);
    }
    if (local_178 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178);
    }
    if (local_248.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_230.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Key.Key.Data.AllocatorInstance.Data);
    }
    pFVar16 = local_b8;
    local_2ac = local_108._8_4_ - local_108._52_4_;
    if (local_b8 != (FAttributeStorage *)0x0) {
      pTVar14 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                        *)local_b8,&local_b0);
      pFVar26 = (FAttributeAllocationInfo *)&pTVar14->field_0x10;
      if (pTVar14 ==
          (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
           *)0x0) {
        pFVar26 = (FAttributeAllocationInfo *)0x0;
      }
      Interchange::FAttributeStorage::SetAttribute<int>(pFVar16,pFVar26,&local_2ac);
    }
    if (local_1d0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Key.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e3d6de4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2e0.Data.ArrayNum != 0) {
    FVar15.Data = local_2e0.Data.AllocatorInstance.Data;
  }
  iVar11 = 0;
  iVar12 = local_2e0.Data.ArrayNum + -1;
  if (local_2e0.Data.ArrayNum == 0) {
    iVar12 = iVar11;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
            ((TMapAttributeHelper<FString,FString> *)local_108,uVar9,&local_2e0,&local_2d0);
  iVar12 = local_2e0.Data.ArrayNum + -1;
  FVar15.Data = local_2e0.Data.AllocatorInstance.Data;
  if (local_2e0.Data.ArrayNum == 0) {
    iVar12 = iVar11;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
            ((TMapAttributeHelper<FString,FString> *)local_108,uVar9,&local_2e0,&local_2c0);
  Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)local_108,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_88);
  this_00 = local_210;
  FAutomationTestBase::TestEqual
            (local_210,L"Compare maps after ToMap",local_88._8_4_ - local_88._52_4_,2);
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Data.ArrayNum = 0;
  local_288.Data.ArrayMax = 0;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2f0.Data.ArrayNum != 0) {
    FVar15.Data = local_2f0.Data.AllocatorInstance.Data;
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = local_2f0.Data.ArrayNum + -1;
  if (local_2f0.Data.ArrayNum == 0) {
    iVar12 = iVar11;
  }
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  FVar22.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d6ee6:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x185,"AttributesPtr.IsValid()");
    FVar23.ReferenceController = FVar22.ReferenceController;
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_14e3d6f0c:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
LAB_14e3d6f14:
    bVar8 = false;
  }
  else {
    aVar4 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14e3d6ee6;
      LOCK();
      aVar10 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar8);
    FVar22.ReferenceController = local_98.ReferenceController;
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d6ee6;
    iVar12 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                         *)local_108,uVar9,&local_2f0);
    if (iVar12 == -1) goto LAB_14e3d6f0c;
    lVar20 = local_108._0_8_ + (longlong)iVar12 * 0x48;
    pFVar16 = (FAttributeStorage *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      pFVar16 = (FAttributeStorage *)0x0;
    }
    if (pFVar16 == (FAttributeStorage *)0x0) goto LAB_14e3d6f0c;
    this = *(FAttributeStorage **)&(pFVar16->AttributeAllocationTable).field_0x18;
    if (this == (FAttributeStorage *)0x0) {
      EVar17 = Operation_Error_InvalidStorage;
    }
    else {
      EVar17 = Interchange::FAttributeStorage::GetAttribute<FString,void>
                         (this,(FAttributeKey *)&(pFVar16->AttributeAllocationTable).field_0x20,
                          &local_288);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
    if ((EVar17 != Operation_Success) ||
       (bVar8 = Interchange::TMapAttributeHelper<FString,FString>::GetValue
                          ((TMapAttributeHelper<FString,FString> *)local_108,&local_2e0,&local_298),
       !bVar8)) goto LAB_14e3d6f14;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue(this_00,L"GetValue succeeded",bVar8);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2d0.Data.ArrayNum != 0) {
    FVar15.Data = local_2d0.Data.AllocatorInstance.Data;
  }
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar24.Data = local_288.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this_00,L"Compare result after add 1",(wchar_t *)FVar24.Data,(wchar_t *)FVar15.Data);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2c0.Data.ArrayNum != 0) {
    FVar15.Data = local_2c0.Data.AllocatorInstance.Data;
  }
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar24.Data = local_298.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this_00,L"Compare result after add 2",(wchar_t *)FVar24.Data,(wchar_t *)FVar15.Data);
  iVar12 = local_2e0.Data.ArrayNum + -1;
  FVar15.Data = local_2e0.Data.AllocatorInstance.Data;
  if (local_2e0.Data.ArrayNum == 0) {
    iVar12 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d6fc5:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x196,"AttributesPtr.IsValid()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_14e3d6ff2:
    bVar8 = false;
  }
  else {
    aVar4 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d6fc5;
      }
      LOCK();
      aVar10 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar8);
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d6fc5;
    iVar12 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                         *)local_108,uVar9,&local_2e0);
    if (iVar12 == -1) goto LAB_14e3d6ff2;
    lVar20 = local_108._0_8_ + (longlong)iVar12 * 0x48;
    pTVar25 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
               *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      pTVar25 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                 *)0x0;
    }
    if (pTVar25 ==
        (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
         *)0x0) goto LAB_14e3d6ff2;
    bVar8 = Interchange::TMapAttributeHelper<FString,FString>::RemoveBySwap
                      ((TMapAttributeHelper<FString,FString> *)local_108,uVar9,&local_2e0,pTVar25);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue(this_00,L"Test removing a key",bVar8);
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar24.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  iVar12 = local_2f0.Data.ArrayNum + -1;
  FVar15.Data = local_2f0.Data.AllocatorInstance.Data;
  if (local_2f0.Data.ArrayNum == 0) {
    iVar12 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar15.Data);
  FVar23.ReferenceController = local_98.ReferenceController;
  if ((FAttributeStorage *)local_98.ReferenceController == (FAttributeStorage *)0x0) {
LAB_14e3d7066:
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x1a6,"AttributesPtr.IsValid()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    aVar4 = (local_98.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)(FAttributeStorage *)0x0;
        goto LAB_14e3d7066;
      }
      LOCK();
      aVar10 = (local_98.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        (local_98.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar8);
    if (local_a0 == (FAttributeStorage *)0x0) goto LAB_14e3d7066;
    iVar12 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                         *)local_108,uVar9,&local_2f0);
    if (iVar12 != -1) {
      lVar20 = local_108._0_8_ + (longlong)iVar12 * 0x48;
      pTVar25 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                 *)(lVar20 + 0x10);
      if (lVar20 == 0) {
        pTVar25 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                   *)0x0;
      }
      if (((pTVar25 !=
            (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
             *)0x0) && (*(FAttributeStorage **)&pTVar25->field_0x18 != (FAttributeStorage *)0x0)) &&
         (EVar17 = Interchange::FAttributeStorage::GetAttribute<FString,void>
                             (*(FAttributeStorage **)&pTVar25->field_0x18,
                              (FAttributeKey *)&pTVar25->field_0x20,&local_2a8),
         FVar24.Data = local_2a8.Data.AllocatorInstance.Data, EVar17 == Operation_Success)) {
        bVar8 = Interchange::TMapAttributeHelper<FString,FString>::RemoveBySwap
                          ((TMapAttributeHelper<FString,FString> *)local_108,uVar9,&local_2f0,
                           pTVar25);
        FVar24.Data = local_2a8.Data.AllocatorInstance.Data;
        goto LAB_14e3d709a;
      }
    }
  }
  bVar8 = false;
LAB_14e3d709a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  FAutomationTestBase::TestTrue(this_00,L"RemoveKeyAndGetValue succeeded",bVar8);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2d0.Data.ArrayNum != 0) {
    FVar15.Data = local_2d0.Data.AllocatorInstance.Data;
  }
  pFVar27 = (FScriptContainerElement *)L"";
  if (local_2a8.Data.ArrayNum != 0) {
    pFVar27 = FVar24.Data;
  }
  FAutomationTestBase::TestEqual
            (this_00,L"Compare removed value",(wchar_t *)pFVar27,(wchar_t *)FVar15.Data);
  bVar8 = Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)local_108,&local_2e0);
  FAutomationTestBase::TestFalse(this_00,L"Test removing missing key",bVar8);
  if (FVar24.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar24.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  FVar23.ReferenceController = local_98.ReferenceController;
  local_a0 = (FAttributeStorage *)0x0;
  local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((FAttributeStorage *)FVar23.ReferenceController != (FAttributeStorage *)0x0) {
    LOCK();
    paVar2 = &(FVar23.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)&(FVar23.ReferenceController)->_padding_ + 8))
                (FVar23.ReferenceController,1);
    }
  }
  if (local_98.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_98.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_98.ReferenceController)->_padding_ + 8))(local_98.ReferenceController,1);
    }
  }
  if (local_b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Key.Data.AllocatorInstance.Data);
  }
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return;
}

// StringifyArrayAttribute<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 14e3e1280

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<signed_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<signed_char_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,(int)(char)*pFVar3);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e3e1390

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_char_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e3e14a0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  lVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + lVar2;
  while( true ) {
    if (param_1->ArrayNum != lVar2) {
      `TCheckedPointerIterator<unsigned_char_const_,__int64,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e3e15b0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<short,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<short_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,(int)*(short *)pFVar3);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 2;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e3e16c0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 2;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e3e17d0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,*(int *)pFVar3);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e3e18e0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%u");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e3e19f0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e3e1b10

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e1c30

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x14;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TBox2<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_38,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x14;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e1e10

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TBox2<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_38,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x28;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e1ff0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x1c;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBox<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x1c;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e21f0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x38;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e3e23e0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x1c;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBoxSphereBounds<float,float>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(local_48,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_58,local_48,L", ");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x1c;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e3e25d0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TBoxSphereBounds<double,double>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(local_48,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_58,local_48,L", ");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x38;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e3e27b0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntPoint<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%d Y=%d");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e3e28c0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TIntRect<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_58,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_68,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_38,L"Min=(%s) Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e3e2a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  FString local_180;
  FString local_170;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_188);
    }
    if (pFVar5 == pFVar1) break;
    local_158.Base = local_138;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.CurPos = local_138;
    local_180.Data.ArrayNum = 0;
    local_180.Data.ArrayMax = 0;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.End = (wchar_t *)local_38;
    local_158.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_138,2,"X=",2);
    pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"%d");
    if (pTVar3->End < pTVar3->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(pTVar3,3);
    }
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(pTVar3->CurPos,3," Y=",3);
    pTVar3->CurPos = pwVar4;
    pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%d");
    if (pTVar3->End < pTVar3->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(pTVar3,3);
    }
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(pTVar3->CurPos,3," Z=",3);
    pTVar3->CurPos = pwVar4;
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%d");
    ::FString::AppendChars
              (&local_180,local_158.Base,
               (int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    ::FString::ConcatFC(&local_170,&local_180,L", ");
    iVar6 = local_170.Data.ArrayNum + -1;
    if (local_170.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar6);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    pFVar5 = pFVar5 + 0xc;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e2cc0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TMatrix<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_78,L"[%g %g %g %g] ");
    iVar4 = 0;
    iVar5 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_68,L"[%g %g %g %g] ");
    iVar5 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_58,L"[%g %g %g %g] ");
    iVar5 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_48,L"[%g %g %g %g] ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_38,&local_88,L", ");
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x40;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e2f90

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x80;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TMatrix<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_78,L"[%g %g %g %g] ");
    iVar4 = 0;
    iVar5 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_68,L"[%g %g %g %g] ");
    iVar5 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_58,L"[%g %g %g %g] ");
    iVar5 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_48,L"[%g %g %g %g] ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_38,&local_88,L", ");
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = iVar4;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x80;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e3200

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TPlane<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e3340

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TPlane<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e3480

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TQuat<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e35d0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TQuat<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e3710

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TRotator<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0xc;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e3850

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TRotator<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e3990

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TSphere<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::SanitizeFloat(&local_58,(double)*(float *)(pFVar3 + 0xc),1);
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"Center=(%s), Radius=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e3b50

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TSphere<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::SanitizeFloat(&local_58,*(double *)(pFVar3 + 0x18),1);
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"Center=(%s), Radius=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e3d00

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<float> *this;
  TTransform<float> *pTVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (TTransform<float> *)(param_1->AllocatorInstance).Data;
  pTVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this == pTVar2) break;
    UE::Math::TTransform<float>::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e3e10

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *this;
  TTransform<double> *pTVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  pTVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this == pTVar2) break;
    UE::Math::TTransform<double>::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e3f20

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e4050

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e4180

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector4<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e42d0

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e4410

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0xc;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e4550

FString * __cdecl
UE::Interchange::
StringifyArrayAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e3e4690

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    FColor::ToString((FColor *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e3e47a0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDateTime_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    FDateTime::ToString((FDateTime *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e3e48b0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ulonglong local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameNumber_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res10 = *(uint *)pFVar3;
    uStackX_14 = 0;
    local_res8 = (ulonglong)local_res10;
    ::FString::PrintfImpl(&local_38,L"Frame: %d Subframe: %f");
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e3e49e0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_1)

{
  FFrameRate *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar3;
  FFrameRate *this_00;
  longlong lVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FText local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this_00 = (FFrameRate *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameRate_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar1) break;
    this = FFrameRate::ToPrettyText(this_00,&local_38);
    pFVar3 = FText::ToString(this);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    lVar4 = (longlong)local_58.Data.ArrayNum;
    _Src = (pFVar3->Data).AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    ::FString::ConcatFC(&local_48,&local_58,L", ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e3e4b80

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameTime_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e3e4cb0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FGuid *this;
  FGuid *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (FGuid *)(param_1->AllocatorInstance).Data;
  pFVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar2) break;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_38,DigitsLower);
    ::FString::ConcatFC(&local_28,&local_38,L", ");
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e3e4dd0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *this;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (param_1->AllocatorInstance).Data;
  pFVar2 = this + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLinearColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar2) break;
    FLinearColor::ToString((FLinearColor *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e3e4ee0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOrientedBox_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::PrintfImpl
              (&local_28,
               L"Center= %f, %f, %f | AxisX= %f, %f, %f | AxisY= %f, %f, %f | AxisZ= %f, %f, %f | Extents= %f, %f, %f"
              );
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x78;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e3e5070

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<FRandomStream,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRandomStream_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"FRandomStream(InitialSeed=%i, Seed=%u)");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e3e5180

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FSoftObjectPath *this;
  FSoftObjectPath *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  this = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  pFVar2 = this + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pFVar2) break;
    FSoftObjectPath::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e3e5290

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTimespan_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    FTimespan::ToString((FTimespan *)this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e3e53a0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTwoVectors_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"V1=(%s) V2=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x30;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e3e5560

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38 [2];
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVector2DHalf_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FGenericPlatformMath::LoadHalf((ushort *)(pFVar3 + 2));
    FGenericPlatformMath::LoadHalf((ushort *)pFVar3);
    ::FString::PrintfImpl(local_38,L"X=%3.3f Y=%3.3f");
    ::FString::ConcatFC(&local_48,local_38,L", ");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 4;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e3e56b0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFloat16_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FGenericPlatformMath::LoadHalf((ushort *)pFVar3);
    ::FString::PrintfImpl(&local_28,L"%f");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 2;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e3e57d0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *this;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_28);
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e3e58e0

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_48.Data.ArrayNum = *(int *)(pFVar2 + 8);
    lVar4 = (longlong)local_48.Data.ArrayNum;
    _Src = *(void **)pFVar2;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    ::FString::ConcatFC(&local_38,&local_48,L", ");
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e3e5a60

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%lld");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e3e5b70

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::PrintfImpl(&local_28,L"%llu");
    ::FString::ConcatFC(&local_38,&local_28,L", ");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 8;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// StringifyArrayAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e3e5c80

FString * __cdecl
UE::Interchange::StringifyArrayAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"[");
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pwVar3 = L"false";
    if (*pFVar4 != (FScriptContainerElement)0x0) {
      pwVar3 = L"true";
    }
    ::FString::FString(&local_38,pwVar3);
    ::FString::ConcatFC(&local_48,&local_38,L", ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 1;
  }
  ::FString::RemoveFromEnd(__return_storage_ptr__,L", ",2,IgnoreCase);
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// operator<< @ 14e4057b0

FArchive * __cdecl UE::Interchange::operator<<(FArchive *param_1,FAttributeAllocationInfo *param_2)

{
  EAttributeTypes *pEVar1;
  EAttributeProperty *pEVar2;
  longlong *plVar3;
  EAttributeTypes *pEVar4;
  EAttributeProperty *pEVar5;
  int iVar6;
  ulong64 local_res8;
  ulong64 local_res10;
  ulong64 local_res18 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FInterchangeCustomVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FInterchangeCustomVersion::GUID);
    if (iVar6 < 3) {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res8);
        }
      }
      else {
        local_res8 = *(ulong64 *)*plVar3;
        *plVar3 = *plVar3 + 8;
      }
      local_res18[0] = local_res8;
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned___int64,int>
                (&param_2->Offsets,local_res18,1,(param_2->Offsets).ArrayMax);
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res10);
        }
      }
      else {
        local_res10 = *(ulong64 *)*plVar3;
        *plVar3 = *plVar3 + 8;
      }
      local_res18[0] = local_res10;
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned___int64,int>
                (&param_2->Sizes,local_res18,1,(param_2->Sizes).ArrayMax);
      goto LAB_14e4058e1;
    }
  }
  TArrayPrivateFriend::Serialize<unsigned___int64,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Offsets);
  TArrayPrivateFriend::Serialize<unsigned___int64,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Sizes);
LAB_14e4058e1:
  pEVar1 = &param_2->Type;
  pEVar4 = (EAttributeTypes *)**(undefined8 **)&param_1->field_0x8;
  if ((EAttributeTypes *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
    }
  }
  else {
    *pEVar1 = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = &param_2->Property;
  pEVar5 = (EAttributeProperty *)**(undefined8 **)&param_1->field_0x8;
  if ((EAttributeProperty *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
    }
  }
  else {
    *pEVar2 = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&param_2->Hash);
  return param_1;
}

// operator<< @ 14e405990

FArchive * __cdecl UE::Interchange::operator<<(FArchive *param_1,FAttributeStorage *param_2)

{
  float *pfVar1;
  ulong64 *puVar2;
  float *pfVar3;
  ulong64 *puVar4;
  
  puVar4 = &param_2->FragmentedMemoryCost;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pfVar1 = &param_2->DefragRatio;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TSetPrivateFriend::
  Serialize<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      *)param_2);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
            (param_1,&param_2->AttributeStorage);
  if ((param_1->field_0x28 & 1) != 0) {
    FAttributeStorage::UpdateAllocationCount(param_2);
  }
  return param_1;
}

// AttributeTypeToString @ 14e415cf0

FString * __cdecl
UE::Interchange::AttributeTypeToString(FString *__return_storage_ptr__,EAttributeTypes param_1)

{
  undefined1 local_res10 [24];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  switch(param_1) {
  case None:
    ::FString::operator=(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  case Bool:
    ::FString::operator=(__return_storage_ptr__,L"Bool");
    return __return_storage_ptr__;
  case ByteArray:
    ::FString::operator=(__return_storage_ptr__,L"ByteArray");
    return __return_storage_ptr__;
  case ByteArray64:
    ::FString::operator=(__return_storage_ptr__,L"ByteArray64");
    return __return_storage_ptr__;
  case Color:
    ::FString::operator=(__return_storage_ptr__,L"Color");
    return __return_storage_ptr__;
  case DateTime:
    ::FString::operator=(__return_storage_ptr__,L"DateTime");
    return __return_storage_ptr__;
  case Double:
    ::FString::operator=(__return_storage_ptr__,L"Double");
    return __return_storage_ptr__;
  case Enum:
    ::FString::operator=(__return_storage_ptr__,L"Enum");
    return __return_storage_ptr__;
  case Float:
    ::FString::operator=(__return_storage_ptr__,L"Float");
    return __return_storage_ptr__;
  case Guid:
    ::FString::operator=(__return_storage_ptr__,L"Guid");
    return __return_storage_ptr__;
  case Int8:
    ::FString::operator=(__return_storage_ptr__,L"Int8");
    return __return_storage_ptr__;
  case Int16:
    ::FString::operator=(__return_storage_ptr__,L"Int16");
    return __return_storage_ptr__;
  case Int32:
    ::FString::operator=(__return_storage_ptr__,L"Int32");
    return __return_storage_ptr__;
  case Int64:
    ::FString::operator=(__return_storage_ptr__,L"Int64");
    return __return_storage_ptr__;
  case IntRect:
    ::FString::operator=(__return_storage_ptr__,L"IntRect");
    return __return_storage_ptr__;
  case LinearColor:
    ::FString::operator=(__return_storage_ptr__,L"LinearColor");
    return __return_storage_ptr__;
  case Name:
    ::FString::operator=(__return_storage_ptr__,L"Name");
    return __return_storage_ptr__;
  case RandomStream:
    ::FString::operator=(__return_storage_ptr__,L"RandomStream");
    return __return_storage_ptr__;
  case String:
    ::FString::operator=(__return_storage_ptr__,L"String");
    return __return_storage_ptr__;
  case Timespan:
    ::FString::operator=(__return_storage_ptr__,L"Timespan");
    return __return_storage_ptr__;
  case TwoVectors:
    ::FString::operator=(__return_storage_ptr__,L"TwoVectors");
    return __return_storage_ptr__;
  case UInt8:
    ::FString::operator=(__return_storage_ptr__,L"UInt8");
    return __return_storage_ptr__;
  case UInt16:
    ::FString::operator=(__return_storage_ptr__,L"UInt16");
    return __return_storage_ptr__;
  case UInt32:
    ::FString::operator=(__return_storage_ptr__,L"UInt32");
    return __return_storage_ptr__;
  case UInt64:
    ::FString::operator=(__return_storage_ptr__,L"UInt64");
    return __return_storage_ptr__;
  case Vector2d:
    ::FString::operator=(__return_storage_ptr__,L"Vector2d");
    return __return_storage_ptr__;
  case IntPoint:
    ::FString::operator=(__return_storage_ptr__,L"IntPoint");
    return __return_storage_ptr__;
  case IntVector:
    ::FString::operator=(__return_storage_ptr__,L"IntVector");
    return __return_storage_ptr__;
  case Vector2DHalf:
    ::FString::operator=(__return_storage_ptr__,L"Vector2DHalf");
    return __return_storage_ptr__;
  case Float16:
    ::FString::operator=(__return_storage_ptr__,L"Float16");
    return __return_storage_ptr__;
  case OrientedBox:
    ::FString::operator=(__return_storage_ptr__,L"OrientedBox");
    return __return_storage_ptr__;
  case FrameNumber:
    ::FString::operator=(__return_storage_ptr__,L"FrameNumber");
    return __return_storage_ptr__;
  case FrameRate:
    ::FString::operator=(__return_storage_ptr__,L"FrameRate");
    return __return_storage_ptr__;
  case FrameTime:
    ::FString::operator=(__return_storage_ptr__,L"FrameTime");
    return __return_storage_ptr__;
  case SoftObjectPath:
    ::FString::operator=(__return_storage_ptr__,L"SoftObjectPath");
    return __return_storage_ptr__;
  case Matrix44f:
    ::FString::operator=(__return_storage_ptr__,L"Matrix44f");
    return __return_storage_ptr__;
  case Matrix44d:
    ::FString::operator=(__return_storage_ptr__,L"Matrix44d");
    return __return_storage_ptr__;
  case Plane4f:
    ::FString::operator=(__return_storage_ptr__,L"Plane4f");
    return __return_storage_ptr__;
  case Plane4d:
    ::FString::operator=(__return_storage_ptr__,L"Plane4d");
    return __return_storage_ptr__;
  case Quat4f:
    ::FString::operator=(__return_storage_ptr__,L"Quat4f");
    return __return_storage_ptr__;
  case Quat4d:
    ::FString::operator=(__return_storage_ptr__,L"Quat4d");
    return __return_storage_ptr__;
  case Rotator3f:
    ::FString::operator=(__return_storage_ptr__,L"Rotator3f");
    return __return_storage_ptr__;
  case Rotator3d:
    ::FString::operator=(__return_storage_ptr__,L"Rotator3d");
    return __return_storage_ptr__;
  case Transform3f:
    ::FString::operator=(__return_storage_ptr__,L"Transform3f");
    return __return_storage_ptr__;
  case Transform3d:
    ::FString::operator=(__return_storage_ptr__,L"Transform3d");
    return __return_storage_ptr__;
  case Vector3f:
    ::FString::operator=(__return_storage_ptr__,L"Vector3f");
    return __return_storage_ptr__;
  case Vector3d:
    ::FString::operator=(__return_storage_ptr__,L"Vector3d");
    return __return_storage_ptr__;
  case Vector2f:
    ::FString::operator=(__return_storage_ptr__,L"Vector2f");
    return __return_storage_ptr__;
  case Vector4f:
    ::FString::operator=(__return_storage_ptr__,L"Vector4f");
    return __return_storage_ptr__;
  case Vector4d:
    ::FString::operator=(__return_storage_ptr__,L"Vector4d");
    return __return_storage_ptr__;
  case Box2f:
    ::FString::operator=(__return_storage_ptr__,L"Box2f");
    return __return_storage_ptr__;
  case Box2D:
    ::FString::operator=(__return_storage_ptr__,L"Box2D");
    return __return_storage_ptr__;
  case Box3f:
    ::FString::operator=(__return_storage_ptr__,L"Box3f");
    return __return_storage_ptr__;
  case Box3d:
    ::FString::operator=(__return_storage_ptr__,L"Box3d");
    return __return_storage_ptr__;
  case BoxSphereBounds3f:
    ::FString::operator=(__return_storage_ptr__,L"BoxSphereBounds3f");
    return __return_storage_ptr__;
  case BoxSphereBounds3d:
    ::FString::operator=(__return_storage_ptr__,L"BoxSphereBounds3d");
    return __return_storage_ptr__;
  case Sphere3f:
    ::FString::operator=(__return_storage_ptr__,L"Sphere3f");
    return __return_storage_ptr__;
  case Sphere3d:
    ::FString::operator=(__return_storage_ptr__,L"Sphere3d");
    return __return_storage_ptr__;
  case BoolArray:
    ::FString::operator=(__return_storage_ptr__,L"BoolArray");
    return __return_storage_ptr__;
  case ColorArray:
    ::FString::operator=(__return_storage_ptr__,L"ColorArray");
    return __return_storage_ptr__;
  case DateTimeArray:
    ::FString::operator=(__return_storage_ptr__,L"DateTimeArray");
    return __return_storage_ptr__;
  case DoubleArray:
    ::FString::operator=(__return_storage_ptr__,L"DoubleArray");
    return __return_storage_ptr__;
  case EnumArray:
    ::FString::operator=(__return_storage_ptr__,L"EnumArray");
    return __return_storage_ptr__;
  case FloatArray:
    ::FString::operator=(__return_storage_ptr__,L"FloatArray");
    return __return_storage_ptr__;
  case GuidArray:
    ::FString::operator=(__return_storage_ptr__,L"GuidArray");
    return __return_storage_ptr__;
  case Int8Array:
    ::FString::operator=(__return_storage_ptr__,L"Int8Array");
    return __return_storage_ptr__;
  case Int16Array:
    ::FString::operator=(__return_storage_ptr__,L"Int16Array");
    return __return_storage_ptr__;
  case Int32Array:
    ::FString::operator=(__return_storage_ptr__,L"Int32Array");
    return __return_storage_ptr__;
  case Int64Array:
    ::FString::operator=(__return_storage_ptr__,L"Int64Array");
    return __return_storage_ptr__;
  case IntRectArray:
    ::FString::operator=(__return_storage_ptr__,L"IntRectArray");
    return __return_storage_ptr__;
  case LinearColorArray:
    ::FString::operator=(__return_storage_ptr__,L"LinearColorArray");
    return __return_storage_ptr__;
  case NameArray:
    ::FString::operator=(__return_storage_ptr__,L"NameArray");
    return __return_storage_ptr__;
  case RandomStreamArray:
    ::FString::operator=(__return_storage_ptr__,L"RandomStreamArray");
    return __return_storage_ptr__;
  case StringArray:
    ::FString::operator=(__return_storage_ptr__,L"StringArray");
    return __return_storage_ptr__;
  case TimespanArray:
    ::FString::operator=(__return_storage_ptr__,L"TimespanArray");
    return __return_storage_ptr__;
  case TwoVectorsArray:
    ::FString::operator=(__return_storage_ptr__,L"TwoVectorsArray");
    return __return_storage_ptr__;
  case UInt16Array:
    ::FString::operator=(__return_storage_ptr__,L"UInt16Array");
    return __return_storage_ptr__;
  case UInt32Array:
    ::FString::operator=(__return_storage_ptr__,L"UInt32Array");
    return __return_storage_ptr__;
  case UInt64Array:
    ::FString::operator=(__return_storage_ptr__,L"UInt64Array");
    return __return_storage_ptr__;
  case Vector2dArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector2dArray");
    return __return_storage_ptr__;
  case IntPointArray:
    ::FString::operator=(__return_storage_ptr__,L"IntPointArray");
    return __return_storage_ptr__;
  case IntVectorArray:
    ::FString::operator=(__return_storage_ptr__,L"IntVectorArray");
    return __return_storage_ptr__;
  case Vector2DHalfArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector2DHalfArray");
    return __return_storage_ptr__;
  case Float16Array:
    ::FString::operator=(__return_storage_ptr__,L"Float16Array");
    return __return_storage_ptr__;
  case OrientedBoxArray:
    ::FString::operator=(__return_storage_ptr__,L"OrientedBoxArray");
    return __return_storage_ptr__;
  case FrameNumberArray:
    ::FString::operator=(__return_storage_ptr__,L"FrameNumberArray");
    return __return_storage_ptr__;
  case FrameRateArray:
    ::FString::operator=(__return_storage_ptr__,L"FrameRateArray");
    return __return_storage_ptr__;
  case FrameTimeArray:
    ::FString::operator=(__return_storage_ptr__,L"FrameTimeArray");
    return __return_storage_ptr__;
  case SoftObjectPathArray:
    ::FString::operator=(__return_storage_ptr__,L"SoftObjectPathArray");
    return __return_storage_ptr__;
  case Matrix44fArray:
    ::FString::operator=(__return_storage_ptr__,L"Matrix44fArray");
    return __return_storage_ptr__;
  case Matrix44dArray:
    ::FString::operator=(__return_storage_ptr__,L"Matrix44dArray");
    return __return_storage_ptr__;
  case Plane4fArray:
    ::FString::operator=(__return_storage_ptr__,L"Plane4fArray");
    return __return_storage_ptr__;
  case Plane4dArray:
    ::FString::operator=(__return_storage_ptr__,L"Plane4dArray");
    return __return_storage_ptr__;
  case Quat4fArray:
    ::FString::operator=(__return_storage_ptr__,L"Quat4fArray");
    return __return_storage_ptr__;
  case Quat4dArray:
    ::FString::operator=(__return_storage_ptr__,L"Quat4dArray");
    return __return_storage_ptr__;
  case Rotator3fArray:
    ::FString::operator=(__return_storage_ptr__,L"Rotator3fArray");
    return __return_storage_ptr__;
  case Rotator3dArray:
    ::FString::operator=(__return_storage_ptr__,L"Rotator3dArray");
    return __return_storage_ptr__;
  case Transform3fArray:
    ::FString::operator=(__return_storage_ptr__,L"Transform3fArray");
    return __return_storage_ptr__;
  case Transform3dArray:
    ::FString::operator=(__return_storage_ptr__,L"Transform3dArray");
    return __return_storage_ptr__;
  case Vector3fArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector3fArray");
    return __return_storage_ptr__;
  case Vector3dArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector3dArray");
    return __return_storage_ptr__;
  case Vector2fArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector2fArray");
    return __return_storage_ptr__;
  case Vector4fArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector4fArray");
    return __return_storage_ptr__;
  case Vector4dArray:
    ::FString::operator=(__return_storage_ptr__,L"Vector4dArray");
    return __return_storage_ptr__;
  case Box2fArray:
    ::FString::operator=(__return_storage_ptr__,L"Box2fArray");
    return __return_storage_ptr__;
  case Box2DArray:
    ::FString::operator=(__return_storage_ptr__,L"Box2DArray");
    return __return_storage_ptr__;
  case Box3fArray:
    ::FString::operator=(__return_storage_ptr__,L"Box3fArray");
    return __return_storage_ptr__;
  case Box3dArray:
    ::FString::operator=(__return_storage_ptr__,L"Box3dArray");
    return __return_storage_ptr__;
  case BoxSphereBounds3fArray:
    ::FString::operator=(__return_storage_ptr__,L"BoxSphereBounds3fArray");
    return __return_storage_ptr__;
  case BoxSphereBounds3dArray:
    ::FString::operator=(__return_storage_ptr__,L"BoxSphereBounds3dArray");
    return __return_storage_ptr__;
  case Sphere3fArray:
    ::FString::operator=(__return_storage_ptr__,L"Sphere3fArray");
    return __return_storage_ptr__;
  case Sphere3dArray:
    ::FString::operator=(__return_storage_ptr__,L"Sphere3dArray");
    return __return_storage_ptr__;
  default:
    `UE::Interchange::AttributeTypeToString'::__l4::<lambda_1>::operator()(local_res10);
    return __return_storage_ptr__;
  }
}

// CreateConfigSectionName @ 14e4188a0

FString * __cdecl
UE::Interchange::PipelinePrivate::CreateConfigSectionName
          (FString *__return_storage_ptr__,FName param_1,UClass *param_2)

{
  FString *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)param_2->_padding_;
  local_res10[0] = param_1;
  ::FName::ToString(&local_res8,&local_28);
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatCF(&local_38,L"Interchange_StackName__",pFVar1);
  ::FString::ConcatFC(&local_48,&local_38,L"__PipelineClassName_");
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,&local_28);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateConfigSectionName @ 14e418960

/* WARNING: Removing unreachable block (ram,0x00014e4189b8) */
/* WARNING: Removing unreachable block (ram,0x00014e4189d3) */
/* WARNING: Removing unreachable block (ram,0x00014e4189cc) */
/* WARNING: Removing unreachable block (ram,0x00014e4189d9) */
/* WARNING: Removing unreachable block (ram,0x00014e4189e9) */
/* WARNING: Removing unreachable block (ram,0x00014e4189ee) */
/* WARNING: Removing unreachable block (ram,0x00014e4189f7) */
/* WARNING: Removing unreachable block (ram,0x00014e418a04) */
/* WARNING: Removing unreachable block (ram,0x00014e418a2d) */
/* WARNING: Removing unreachable block (ram,0x00014e418a32) */
/* WARNING: Removing unreachable block (ram,0x00014e418a50) */
/* WARNING: Removing unreachable block (ram,0x00014e418a59) */
/* WARNING: Removing unreachable block (ram,0x00014e418a6f) */
/* WARNING: Removing unreachable block (ram,0x00014e418a7c) */
/* WARNING: Removing unreachable block (ram,0x00014e418a81) */
/* WARNING: Removing unreachable block (ram,0x00014e418a93) */
/* WARNING: Removing unreachable block (ram,0x00014e418abe) */
/* WARNING: Removing unreachable block (ram,0x00014e418ac3) */
/* WARNING: Removing unreachable block (ram,0x00014e418ad4) */
/* WARNING: Removing unreachable block (ram,0x00014e418ad9) */
/* WARNING: Removing unreachable block (ram,0x00014e418afe) */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UE::Interchange::PipelinePrivate::CreateConfigSectionName
          (FString *__return_storage_ptr__,FName param_1,UInterchangePipelineBase *param_2)

{
  FString *pFVar1;
  FName local_res8;
  FName local_res10;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 local_50;
  FString local_48;
  
  local_50 = 0;
  local_58 = 0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10 = param_1;
  if (2 < (byte)LogInterchangeCore._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  local_res8 = *(FName *)(param_2->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_48);
  ::FString::ConcatCF(&local_68,L"__PipelineClassName_",&local_48);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  local_78.Data.ArrayNum = local_68.Data.ArrayNum;
  local_78.Data.ArrayMax = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = ::FName::ToString(&local_res10,&local_68);
  ::FString::ConcatCF(&local_48,L"Interchange_StackName__",pFVar1);
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,&local_78);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateConfigSectionName @ 14e418c20

FString * __cdecl
UE::Interchange::TranslatorPrivate::CreateConfigSectionName
          (FString *__return_storage_ptr__,UClass *param_1)

{
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res8,&local_18);
  ::FString::ConcatCF(__return_storage_ptr__,L"Interchange_Translator_ClassName_",&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAssetNameMaxCharCount @ 14e438bd0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UE::Interchange::GetAssetNameMaxCharCount(FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FPaths::ProjectContentDir(&local_18);
    FPaths::ConvertRelativePathToFull(&local_28,&local_18);
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    iVar3 = FWindowsPlatformMisc::GetMaxPathLength();
    ProjectConstraint = iVar3 - iVar4;
    if ((ProjectConstraint < 0x3c) && (1 < (byte)LogInterchangeCore._0_1_)) {
      FWindowsPlatformMisc::GetMaxPathLength();
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Interchange_can_152e6fef8,
                 (FLogCategoryBase *)&LogInterchangeCore);
    }
    if ((ProjectConstraint < Private::GInterchangeMaxAssetPathLength) &&
       (2 < (byte)LogInterchangeCore._0_1_)) {
      FWindowsPlatformMisc::GetMaxPathLength();
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_The_Interchange_152e700c0,
                 (FLogCategoryBase *)&LogInterchangeCore);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    RunOnce = true;
    _Init_thread_footer(&::_TSS0);
  }
  iVar4 = ProjectConstraint;
  if (Private::GInterchangeMaxAssetPathLength < ProjectConstraint) {
    iVar4 = Private::GInterchangeMaxAssetPathLength;
  }
  iVar3 = 0x3c;
  if (0x3c < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = 0x15;
  if (1 < (param_1->Data).ArrayNum) {
    iVar4 = (param_1->Data).ArrayNum;
  }
  iVar2 = (0x39c - iVar4) / 2;
  iVar1 = iVar3 - iVar4;
  if (iVar2 < iVar3 - iVar4) {
    iVar1 = iVar2;
  }
  iVar4 = 0xf5;
  if (iVar1 < 0xf5) {
    iVar4 = iVar1;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  return iVar4;
}

// GetAssetNameWBudget @ 14e438d80

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UE::Interchange::GetAssetNameWBudget
          (FString *__return_storage_ptr__,FString *param_1,int param_2,wchar_t param_3)

{
  int iVar1;
  ForAnyElementType _Src;
  int iVar2;
  int iVar3;
  uint uVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (param_2 < iVar2) {
    if (5 < param_2) {
      iVar3 = (param_2 + -2) / 2;
      ::FString::Mid(param_1,&local_38,0,iVar3 + 1);
      iVar1 = (param_1->Data).ArrayNum;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      ::FString::RightChop(param_1,&local_28,(iVar2 - (param_2 + -2)) + -1 + iVar3);
      _Src.Data = local_38.Data.AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar4 = (2 - (uint)(local_38.Data.ArrayNum != 0)) + local_38.Data.ArrayNum;
      if (local_38.Data.ArrayNum <= (int)uVar4) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar4,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                   &local_48.Data.ArrayMax);
        if (local_38.Data.ArrayNum != 0) {
          memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2
                );
        }
        ::FString::AppendChar(&local_48,param_3);
        ::FString::ConcatFF(__return_storage_ptr__,&local_48,&local_28);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (2 < (byte)LogInterchangeCore._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
    }
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetConfigSectionPipelinePathHash @ 14e43a140

/* WARNING: Removing unreachable block (ram,0x00014e43a161) */
/* WARNING: Removing unreachable block (ram,0x00014e43a17c) */
/* WARNING: Removing unreachable block (ram,0x00014e43a177) */
/* WARNING: Removing unreachable block (ram,0x00014e43a183) */
/* WARNING: Removing unreachable block (ram,0x00014e43a18a) */
/* WARNING: Removing unreachable block (ram,0x00014e43a18d) */
/* WARNING: Removing unreachable block (ram,0x00014e43a19e) */
/* WARNING: Removing unreachable block (ram,0x00014e43a1a3) */
/* WARNING: Removing unreachable block (ram,0x00014e43a1ad) */

uint __cdecl
UE::Interchange::PipelinePrivate::GetConfigSectionPipelinePathHash
          (UInterchangePipelineBase *param_1)

{
  return 0;
}

// GetExtraInformationKey @ 14e43bea0

FString * __cdecl UE::Interchange::SourceNode::GetExtraInformationKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ExtraInformationKey,L"__ExtraInformation__Key");
      atexit(`UE::Interchange::SourceNode::GetExtraInformationKey'::__l2::
             _dynamic_atexit_destructor_for__ExtraInformationKey__);
      _Init_thread_footer(&::_TSS0);
      return &ExtraInformationKey;
    }
  }
  return &ExtraInformationKey;
}

// GetSourceNodeUniqueID @ 14e442a20

FString * __cdecl
UE::Interchange::SourceNode::GetSourceNodeUniqueID(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&StaticUid,L"__SourceNode__");
      atexit(`UE::Interchange::SourceNode::GetSourceNodeUniqueID'::__l2::
             _dynamic_atexit_destructor_for__StaticUid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = StaticUid.Data.AllocatorInstance;
  iVar2 = StaticUid.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// GetUsableMaxAssetPathLength @ 14e444280

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UE::Interchange::Private::GetUsableMaxAssetPathLength(void)

{
  int iVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FPaths::ProjectContentDir(&local_18);
    FPaths::ConvertRelativePathToFull(&local_28,&local_18);
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    iVar1 = FWindowsPlatformMisc::GetMaxPathLength();
    ProjectConstraint = iVar1 - iVar2;
    if ((ProjectConstraint < 0x3c) && (1 < (byte)LogInterchangeCore._0_1_)) {
      FWindowsPlatformMisc::GetMaxPathLength();
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Interchange_can_152e6fef8,
                 (FLogCategoryBase *)&LogInterchangeCore);
    }
    if ((ProjectConstraint < GInterchangeMaxAssetPathLength) && (2 < (byte)LogInterchangeCore._0_1_)
       ) {
      FWindowsPlatformMisc::GetMaxPathLength();
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_The_Interchange_152e700c0,
                 (FLogCategoryBase *)&LogInterchangeCore);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    RunOnce = true;
    _Init_thread_footer(&::_TSS0);
  }
  iVar2 = ProjectConstraint;
  if (GInterchangeMaxAssetPathLength < ProjectConstraint) {
    iVar2 = GInterchangeMaxAssetPathLength;
  }
  iVar1 = 0x3c;
  if (0x3c < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// HasAttributeStorageResult @ 14e445e10

bool __cdecl
UE::Interchange::HasAttributeStorageResult
          (EAttributeStorageResult param_1,EAttributeStorageResult param_2)

{
  return (param_2 & param_1) != None;
}

// LogAttributeStorageErrors @ 14e44e160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Interchange::LogAttributeStorageErrors
          (EAttributeStorageResult param_1,FString *param_2,FAttributeKey *param_3)

{
  FScriptContainerElement *pFVar1;
  
  if (((param_1 >> 0x16 & 1) != 0) && (1 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x17 & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x19 & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x18 & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x15 & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x14 & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x1a & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Attribute_stora_152e852d8,
               (FLogCategoryBase *)&LogInterchangeCore);
  }
  if (((param_1 >> 0x1b & 1) != 0) && (2 < (byte)LogInterchangeCore._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->Key).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// MakeName @ 14e44e3b0

FString * __cdecl
UE::Interchange::MakeName(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  SanitizeName(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// MakeSanitizedName @ 14e44e3f0

FString * __cdecl
UE::Interchange::MakeSanitizedName(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  SanitizeName(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// SanitizeName @ 14e455db0

void __cdecl UE::Interchange::SanitizeName(FString *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  wchar_t wVar7;
  undefined *puVar8;
  FString *pFVar9;
  bool bVar10;
  int local_res10 [2];
  FString local_28;
  
  if (param_2) {
    ::FString::ReplaceInline(param_1,L" ",L"-",CaseSensitive);
    ::FString::ReplaceInline(param_1,L"+",L"_",CaseSensitive);
  }
  puVar8 = &u________________;
  wVar7 = L'\"';
  do {
    ::FString::ReplaceCharInlineCaseSensitive(param_1,wVar7,L'_');
    wVar7 = *(wchar_t *)(puVar8 + 2);
    puVar8 = puVar8 + 2;
  } while (wVar7 != L'\0');
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&SafeString,"Null");
    atexit(`UE::Interchange::SanitizeName'::__l2::_dynamic_atexit_destructor_for__SafeString__);
    _Init_thread_footer(&::_TSS0);
  }
  FVar4.Data = SafeString.Data.AllocatorInstance.Data;
  if ((param_1->Data).ArrayNum < 2) {
    if (param_1 != &SafeString) {
      piVar1 = &(param_1->Data).ArrayMax;
      iVar5 = SafeString.Data.ArrayNum;
      (param_1->Data).ArrayNum = iVar5;
      if ((iVar5 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,*piVar1,(ForAnyElementType *)param_1,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((param_1->Data).AllocatorInstance.Data,FVar4.Data,(longlong)iVar5 * 2);
        return;
      }
    }
  }
  else {
    pFVar9 = Private::InvalidFilenames;
    do {
      iVar5 = (param_1->Data).ArrayNum;
      if (iVar5 == *(int *)&((FAutoConsoleVariableRef *)pFVar9)->field_0x8) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->Data).AllocatorInstance.Data,*(wchar_t **)pFVar9);
          bVar10 = iVar5 == 0;
          goto LAB_14e455f25;
        }
LAB_14e455f37:
        FVar4.Data = SafeString.Data.AllocatorInstance.Data;
        if (param_1 != &SafeString) {
          piVar1 = &(param_1->Data).ArrayMax;
          iVar5 = SafeString.Data.ArrayNum;
          (param_1->Data).ArrayNum = iVar5;
          if ((iVar5 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar5,*piVar1,(ForAnyElementType *)param_1,iVar5,piVar1);
            if (iVar5 != 0) {
              memcpy((param_1->Data).AllocatorInstance.Data,FVar4.Data,(longlong)iVar5 * 2);
            }
          }
        }
        break;
      }
      bVar10 = iVar5 + *(int *)&((FAutoConsoleVariableRef *)pFVar9)->field_0x8 == 1;
LAB_14e455f25:
      if (bVar10) goto LAB_14e455f37;
      pFVar9 = pFVar9 + 1;
    } while ((FAutoConsoleVariableRef *)pFVar9 != &Private::CVarInterchangeMaxAssetPathLength);
    iVar5 = (param_1->Data).ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if ((iVar6 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                            ,0x107,
                            L"String index out of bounds: Index %i from a string with a length of %i"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (*(wchar_t *)pFVar2 == L'_') {
      iVar5 = (param_1->Data).ArrayNum;
      local_res10[0] = iVar5 + -1;
      if (iVar5 == 0) {
        local_res10[0] = 0;
        pFVar2 = (FScriptContainerElement *)L"";
      }
      Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)pFVar2,local_res10);
      if (local_res10[0] == 0) {
        ::FString::ConcatFF(&local_28,&SafeString,param_1);
        if (param_1 != &local_28) {
          pFVar2 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
          (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
          local_28.Data.ArrayNum = 0;
          local_28.Data.ArrayMax = 0;
          local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// StringToAttributeType @ 14e460190

EAttributeTypes __cdecl UE::Interchange::StringToAttributeType(FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  EAttributeTypes EVar4;
  bool bVar5;
  FString local_18;
  
  EVar4 = None;
  while( true ) {
    pFVar3 = AttributeTypeToString(&local_18,EVar4);
    iVar2 = (param_1->Data).ArrayNum;
    iVar1 = (pFVar3->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) break;
    EVar4 = EVar4 + Bool;
    if (0x6f < (int)EVar4) {
      return None;
    }
  }
  return EVar4;
}

// operator() @ 1505968a0

bool __thiscall `UE::Interchange::AttributeTypeToString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6020343293315906604>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6020343293315906604>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 18

// TPayloadBuilder<32><10> @ 14d3856f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<32> * __thiscall
UE::Trace::TPayloadBuilder<32>::TPayloadBuilder<32><10>
          (TPayloadBuilder<32> *this,char (*param_1) [10])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,9);
  return this;
}

// TPayloadBuilder<128><16> @ 14d3857a0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<128> * __thiscall
UE::Trace::TPayloadBuilder<128>::TPayloadBuilder<128><16>
          (TPayloadBuilder<128> *this,char (*param_1) [16])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,0xf);
  return this;
}

// TPayloadBuilder<128><17> @ 14d385850

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<128> * __thiscall
UE::Trace::TPayloadBuilder<128>::TPayloadBuilder<128><17>
          (TPayloadBuilder<128> *this,char (*param_1) [17])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,0x10);
  return this;
}

// TPayloadBuilder<128><18> @ 14d385900

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<128> * __thiscall
UE::Trace::TPayloadBuilder<128>::TPayloadBuilder<128><18>
          (TPayloadBuilder<128> *this,char (*param_1) [18])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,0x11);
  return this;
}

// TPayloadBuilder<32><11> @ 14d3859b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<32> * __thiscall
UE::Trace::TPayloadBuilder<32>::TPayloadBuilder<32><11>
          (TPayloadBuilder<32> *this,char (*param_1) [11])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,10);
  return this;
}

// TPayloadBuilder<128><14> @ 14d385a60

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<128> * __thiscall
UE::Trace::TPayloadBuilder<128>::TPayloadBuilder<128><14>
          (TPayloadBuilder<128> *this,char (*param_1) [14])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,0xd);
  return this;
}

// TPayloadBuilder<32><15> @ 14d385b10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

TPayloadBuilder<32> * __thiscall
UE::Trace::TPayloadBuilder<32>::TPayloadBuilder<32><15>
          (TPayloadBuilder<32> *this,char (*param_1) [15])

{
  FCborWriter *this_00;
  
  TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&this->MemoryWriter);
  this_00 = &this->CborWriter;
  FCborWriter::FCborWriter(this_00,(FArchive *)this,BigEndian);
  FCborWriter::WriteContainerStart(this_00,Map,-1);
  FCborWriter::WriteValue(this_00,"$request",8);
  FCborWriter::WriteValue(this_00,"GET",3);
  FCborWriter::WriteValue(this_00,"$path",5);
  FCborWriter::WriteValue(this_00,*param_1,0xe);
  return this;
}

// AddInteger<3> @ 14d386180

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddInteger<3>
          (TPayloadBuilder<128> *this,char (*param_1) [3],long64 param_2)

{
  FCborWriter::WriteValue(&this->CborWriter,*param_1,2);
  FCborWriter::WriteValue(&this->CborWriter,param_2);
  return;
}

// AddInteger<6> @ 14d3861c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddInteger<6>
          (TPayloadBuilder<128> *this,char (*param_1) [6],long64 param_2)

{
  FCborWriter::WriteValue(&this->CborWriter,*param_1,5);
  FCborWriter::WriteValue(&this->CborWriter,param_2);
  return;
}

// AddInteger<9> @ 14d386200

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddInteger<9>
          (TPayloadBuilder<128> *this,char (*param_1) [9],long64 param_2)

{
  FCborWriter::WriteValue(&this->CborWriter,*param_1,8);
  FCborWriter::WriteValue(&this->CborWriter,param_2);
  return;
}

// AddInteger<10> @ 14d386240

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddInteger<10>
          (TPayloadBuilder<128> *this,char (*param_1) [10],long64 param_2)

{
  FCborWriter::WriteValue(&this->CborWriter,*param_1,9);
  FCborWriter::WriteValue(&this->CborWriter,param_2);
  return;
}

// AddString<6> @ 14d386280

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<32>::AddString<6>
          (TPayloadBuilder<32> *this,char (*param_1) [6],char *param_2,int param_3)

{
  size_t sVar1;
  
  if (param_3 < 0) {
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
  }
  FCborWriter::WriteValue(&this->CborWriter,*param_1,5);
  FCborWriter::WriteValue(&this->CborWriter,param_2,(longlong)param_3);
  return;
}

// AddString<6> @ 14d386300

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddString<6>
          (TPayloadBuilder<128> *this,char (*param_1) [6],char *param_2,int param_3)

{
  size_t sVar1;
  
  if (param_3 < 0) {
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
  }
  FCborWriter::WriteValue(&this->CborWriter,*param_1,5);
  FCborWriter::WriteValue(&this->CborWriter,param_2,(longlong)param_3);
  return;
}

// AddString<9> @ 14d386380

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<32>::AddString<9>
          (TPayloadBuilder<32> *this,char (*param_1) [9],char *param_2,int param_3)

{
  size_t sVar1;
  
  if (param_3 < 0) {
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
  }
  FCborWriter::WriteValue(&this->CborWriter,*param_1,8);
  FCborWriter::WriteValue(&this->CborWriter,param_2,(longlong)param_3);
  return;
}

// AddString<9> @ 14d386400

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddString<9>
          (TPayloadBuilder<128> *this,char (*param_1) [9],TStringView<wchar_t> *param_2)

{
  FCborWriter::WriteValue(&this->CborWriter,*param_1,8);
  FCborWriter::WriteValue(&this->CborWriter,param_2);
  return;
}

// AddString<9> @ 14d386440

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddString<9>
          (TPayloadBuilder<128> *this,char (*param_1) [9],char *param_2,int param_3)

{
  size_t sVar1;
  
  if (param_3 < 0) {
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
  }
  FCborWriter::WriteValue(&this->CborWriter,*param_1,8);
  FCborWriter::WriteValue(&this->CborWriter,param_2,(longlong)param_3);
  return;
}

// AddString<11> @ 14d3864c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddString<11>
          (TPayloadBuilder<128> *this,char (*param_1) [11],char *param_2,int param_3)

{
  size_t sVar1;
  
  if (param_3 < 0) {
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
  }
  FCborWriter::WriteValue(&this->CborWriter,*param_1,10);
  FCborWriter::WriteValue(&this->CborWriter,param_2,(longlong)param_3);
  return;
}

// AddStringArray<20> @ 14d386540

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall
UE::Trace::TPayloadBuilder<128>::AddStringArray<20>
          (TPayloadBuilder<128> *this,char (*param_1) [20],
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FCborWriter *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this_00 = &this->CborWriter;
  FCborWriter::WriteValue(this_00,*param_1,0x13);
  FCborWriter::WriteContainerStart(this_00,Array,(longlong)param_2->ArrayNum);
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FCborWriter::WriteValue(this_00,(FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

